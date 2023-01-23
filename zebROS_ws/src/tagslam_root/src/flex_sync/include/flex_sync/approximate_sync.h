/* -*-c++-*--------------------------------------------------------------------
 * 2020 Bernd Pfrommer bernd.pfrommer@gmail.com
 */
#ifndef FLEX_SYNC_APPROXIMATE_SYNC_H
#define FLEX_SYNC_APPROXIMATE_SYNC_H

#include <flex_sync/msg_pack.h>
#include <ros/ros.h>
#include <functional>
#include <string>
#include <vector>
#include <map>
#include <mutex>
#include <iostream>
#include <utility>
#include <tuple>
#include <deque>

/*
 * Class for approximate synchronizing across variable number of messages
 */

namespace flex_sync {
  template <typename ... MsgTypes>
  class ApproximateSync {
  public:
    // Expose the messsage types
    using message_types = MsgPack<MsgTypes...>;
    // the signature of the callback function depends on the MsgTypes template
    // parameter.
    typedef std::function<void(const std::vector<boost::shared_ptr<
                               const MsgTypes>>& ...)> Callback;

    // create an approximate sync like the one in ROS1, but with
    // flexible number of topics per type.
    // The callback signature looks different. For example
    // for two message types, MsgType1 and MsgType2 (e.g sensor_msgs::Image)
    // void callback_approx(
    //    const std::vector<MsgType1::ConstPtr> &im,
    //    const std::vector<MsgType2::ConstPtr> &ci);
    // The first element of the topics argument must have all the topics
    // for MsgType1, the second the topics for MsgType2

    ApproximateSync(const std::vector<std::vector<std::string>> &topics,
                    Callback cb, size_t queueSize) :
      topics_(topics), cb_(cb), queue_size_(queueSize) {
      const size_t ntypes = sizeof...(MsgTypes);
      if (ntypes != topics.size()) {
        ROS_ERROR_STREAM(
          "approximate sync: number of topic vectors: " << topics.size() <<
          " does not match number of message types: " << ntypes);
        throw (std::runtime_error("num topic vectors != num msg types"));
      }
      TopicInfoInitializer tii;
      (void) for_each(type_infos_, &tii);
    }

    // returns total number of dropped messages since last clear
    size_t getNumberDropped() const {
      return (num_dropped_);
    }
    void clearNumberDropped() {
      num_dropped_ = 0;
    }

    const std::vector<std::vector<std::string>> &getTopics() const {
      return (topics_);
    }

    size_t getQueueSize() const { return (queue_size_); }

    // Call this method to feed data into the sync.
    // The topic must match one of the topics that were
    // provided when the sync was created or bad things will happen.
    // Once enough data is available the callback function will
    // be called.
    template<typename MsgPtrT>
    void process(const std::string &topic, const MsgPtrT &msg) {
      typedef TypeInfo<typename MsgPtrT::element_type const> TypeInfoT;
      typedef TopicInfo<typename MsgPtrT::element_type const> TopicInfoT;
      // find correct topic info array via lookup by type 
      TypeInfoT &ti = std::get<TypeInfoT>(type_infos_);
      auto topic_it = ti.topic_to_index.find(topic);
      if (topic_it == ti.topic_to_index.end()) {
        ROS_ERROR_STREAM("flex_sync: invalid topic " <<
                         topic << " for message type");
        throw std::runtime_error("invalid topic: " + topic);
      }
      TopicInfoT &topic_info = ti.topic_info[topic_it->second];
      // add new message to the deque for this topic
      topic_info.deque.push_back(msg);
      if (topic_info.deque.size() == 1ul) {
        ++num_non_empty_deques_;
        if (num_non_empty_deques_ == tot_num_deques_) {
          update(); // all deques have messages, go for it
        }
      } else {
        checkInterMessageBound<TopicInfoT>(&topic_info, topic);
      }
      // check for queue overflow and handle if necesary
      if (topic_info.deque.size() + topic_info.past.size() > queue_size_) {
        // Cancel ongoing candidate search, if any:
        num_non_empty_deques_ = 0; // We will recompute it from scratch
        Recover rcv;
        (void) for_each(type_infos_, &rcv);
        // Drop the oldest message in the offending topic
        assert(!topic_info.deque.empty());
        topic_info.deque.pop_front();
        num_dropped_++;
        topic_info.has_dropped_messages = true;
        if (pivot_.isValid()) {
          // The candidate is no longer valid. Destroy it.
          pivot_ = FullIndex(); // reset to invalid
          // There might still be enough messages to create a new candidate:
          update();
        }
      }
    }
  private:
    typedef std::tuple<std::vector<boost::shared_ptr<const MsgTypes>> ...>
    CallbackArg;
    // define some simple collections
    template <typename MsgType>
    using TopicDeque = std::deque<boost::shared_ptr<MsgType>>;
    template <typename MsgType>
    using TopicVec = std::vector<boost::shared_ptr<MsgType>>;
    // TopicInfo maintains per-topic data: a deque, past messages
    // etc
    template <typename MsgType>
    struct TopicInfo {
      TopicDeque<MsgType> deque;
      TopicVec<MsgType> past;
      bool has_dropped_messages{false};
      ros::Duration inter_message_lower_bound{ros::Duration(0)};
      uint32_t  num_virtual_moves{0};
      bool warned_about_incorrect_bound{false};
    };
    // TypeInfo holds all data for a particular message type
    template <typename MsgType>
    struct TypeInfo {
      std::vector<TopicInfo<MsgType>>  topic_info;
      std::map<std::string, int> topic_to_index;
    };
    typedef std::tuple<TypeInfo<const MsgTypes>...> TupleOfTypeInfo;
 
    // FullIndex has two components: which type, and which topic within
    // that type
    struct FullIndex {
      FullIndex(int32_t tp = -1, int32_t tc = -1): type(tp), topic(tc) {};
      bool operator==(const FullIndex &a) const {
        return (type == a.type && topic == a.topic);
      };
      bool operator!=(const FullIndex &a) const {
        return (!(a == *this));
      };
      bool isValid() const { return(type != -1 && topic != -1); };
      int32_t type;
      int32_t topic;
    };
    

    struct TopicInfoInitializer {
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) const
        {
          const size_t num_topics = sync->topics_[I].size();
          std::get<I>(sync->candidate_).resize(num_topics);
          auto &type_info = std::get<I>(sync->type_infos_);
          type_info.topic_info.resize(num_topics);
          sync->tot_num_deques_ += num_topics;
          // make map between topic string and index for
          // lookup when data arrives
          for (int t_idx = 0; t_idx < (int) sync->topics_[I].size(); t_idx++) {
            type_info.topic_to_index[sync->topics_[I][t_idx]] = t_idx;
          }
          return (num_topics);
        }
    };

    struct CandidateMaker {
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) const {
          int num_cb_vals_found = 0;
          auto &type_info = std::get<I>(sync->type_infos_);
          for (size_t i = 0; i < type_info.topic_info.size(); i++) {
            auto &ti = type_info.topic_info[i];
            const auto &deque = ti.deque;
            std::get<I>(sync->candidate_)[i] = deque.front();
            // Delete all past messages, since we have found a better candidate
            ti.past.clear();
            num_cb_vals_found++;
          }
          return (num_cb_vals_found);
      }
    };

    void makeCandidate() {
      CandidateMaker cm;
      (void) for_each(type_infos_, &cm);
    }

    class DroppedMessageUpdater {
    public:
      DroppedMessageUpdater(const FullIndex &end):
        end_index_(end), has_dropped_messages_(false) {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        for (size_t j = 0; j < type_info.topic_info.size(); j++) {
          auto &topic_info = type_info.topic_info[j];
          if (!(((int)I == end_index_.type) && ((int)j == end_index_.topic))) {
            // No dropped message could have been better to use than
            // the ones we have, so it becomes ok to use this topic
            // as pivot in the future
            topic_info.has_dropped_messages = false;
          } else {
            // capture whether the end_index has dropped messages
            has_dropped_messages_ = topic_info.has_dropped_messages;
          }
        }
        return (0);
      }
      bool endIndexHasDroppedMessages() const {
        return (has_dropped_messages_);
      }
    private:
      FullIndex end_index_;
      bool      has_dropped_messages_{false};
    };

    class CandidateBoundaryFinder {
    public:
      CandidateBoundaryFinder():
        start_time_(ros::Time(std::numeric_limits< uint32_t >::max(),
                              999999999)),
        end_time_(ros::Time(0, 1)) {
      };
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        int num_deques_found = 0;
        const auto &type_info = std::get<I>(sync->type_infos_);
        for (size_t topicIdx = 0; topicIdx < type_info.topic_info.size();
             topicIdx++) {
          const auto &ti = type_info.topic_info[topicIdx];
          const auto &deque = ti.deque;
          if (deque.empty()) {
            ROS_ERROR_STREAM("ERROR: deque " << I << "," << topicIdx <<
                             " cannot be empty!");
            throw std::runtime_error("empty deque found!");
          }
          const auto &m = deque.front();
          const auto &t = m->header.stamp;
          if (t < start_time_) {
            start_time_ = t;
            start_index_ = FullIndex(I, topicIdx);
          }
          if (t > end_time_) {
            end_time_ = t;
            end_index_ = FullIndex(I, topicIdx);
          }
          num_deques_found++;
        }
        return (num_deques_found);
      }
      ros::Time getStartTime() const { return (start_time_); }
      ros::Time getEndTime() const { return (end_time_); }
      FullIndex getStartIndex() const { return (start_index_); }
      FullIndex getEndIndex() const { return (end_index_); }
    private:
      FullIndex start_index_;
      ros::Time start_time_;
      FullIndex end_index_;
      ros::Time end_time_;
    };

    // Assumes: all deques are non empty
    // Returns in arguments:
    // - the oldest message on the deques + time
    // - the newest message on the deques + time
    void getCandidateBoundary(FullIndex *start_index,
                              ros::Time *start_time,
                              FullIndex *end_index,
                              ros::Time *end_time) {
      CandidateBoundaryFinder cbf;
      (void) for_each(type_infos_, &cbf);
      *start_index = cbf.getStartIndex();
      *start_time  = cbf.getStartTime();
      *end_index = cbf.getEndIndex();
      *end_time  = cbf.getEndTime();
    }

    class VirtualCandidateBoundaryFinder {
    public:
      VirtualCandidateBoundaryFinder() :
        start_time_(ros::Time(std::numeric_limits< uint32_t >::max(),
                              999999999)),
        end_time_(ros::Time(0, 1)) {
      };

      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        int num_deques_found = 0;
        const auto &type_info = std::get<I>(sync->type_infos_);
        assert(sync->pivot_.isValid());
        for (size_t topicIdx = 0; topicIdx < type_info.topic_info.size();
             topicIdx++) {
          const auto &ti = type_info.topic_info[topicIdx];
          const auto &deque = ti.deque;
          const auto &past = ti.deque;
          // get virtual time
          ros::Time virtual_time;
          if (deque.empty()) {
            assert(!past.empty()); // Because we have a candidate
            const ros::Time last_msg_time = past.back()->header.stamp;
            const ros::Time msg_time_lower_bound = last_msg_time +
              ti.inter_message_lower_bound;
            virtual_time = std::max(msg_time_lower_bound, sync->pivot_time_);
          } else {
            virtual_time = deque.front()->header.stamp;
          }
          if (virtual_time < start_time_) {
            start_time_ = virtual_time;
            start_index_ = FullIndex(I, topicIdx);
          }
          if (virtual_time > end_time_) {
            end_time_ = virtual_time;
            end_index_ = FullIndex(I, topicIdx);
          }
          num_deques_found++;
        }
        return (num_deques_found);
      }
      ros::Time getStartTime() const { return (start_time_); }
      ros::Time getEndTime() const { return (end_time_); }
      FullIndex getStartIndex() const { return (start_index_); }
      FullIndex getEndIndex() const { return (end_index_); }
    private:
      FullIndex start_index_;
      ros::Time start_time_;
      FullIndex end_index_;
      ros::Time end_time_;
    };

    void getVirtualCandidateBoundary(FullIndex *start_index,
                                     ros::Time *start_time,
                                     FullIndex *end_index,
                                     ros::Time *end_time) {
      VirtualCandidateBoundaryFinder vcbf;
      (void) for_each(type_infos_, &vcbf);
      *start_index = vcbf.getStartIndex();
      *start_time  = vcbf.getStartTime();
      *end_index = vcbf.getEndIndex();
      *end_time  = vcbf.getEndTime();
    }

    class DequeFrontDeleter {
    public:
      DequeFrontDeleter(const FullIndex &index): index_(index) {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        if (I == index_.type) {
          auto &deque = type_info.topic_info[index_.topic].deque;
          assert(!deque.empty());
          deque.pop_front();
          if (deque.empty()) {
            --sync->num_non_empty_deques_;
          }
        }
        return (0);
      }
    private:
      FullIndex index_;
    };
  
    void dequeDeleteFront(const FullIndex &index) {
      DequeFrontDeleter dfd(index);
      (void) for_each(type_infos_, &dfd);
    }

    class DequeMoverFrontToPast {
    public:
      DequeMoverFrontToPast(const FullIndex &index,
                            bool updateVirtualMoves):
        index_(index), update_virtual_moves_(updateVirtualMoves) {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        if (I == index_.type) {
          auto &ti = type_info.topic_info[index_.topic];
          auto &deque = ti.deque;
          auto &past = ti.past;
          assert(!deque.empty());
          past.push_back(deque.front());
          deque.pop_front();
          if (deque.empty()) {
            --(sync->num_non_empty_deques_);
          }
          if (update_virtual_moves_) {
            ti.num_virtual_moves++;
          }
        }
        return (0);
      }
    private:
      FullIndex index_;
      bool      update_virtual_moves_{false};
    };
  
    // Assumes that deque number <index> is non empty
    void dequeMoveFrontToPast(const FullIndex &index) {
      DequeMoverFrontToPast dmfp(index, false);
      (void) for_each(type_infos_, &dmfp);
    }

    class RecoverAndDelete {
    public:
      RecoverAndDelete() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          auto &deque = ti.deque;
          auto &past  = ti.past;
          while (!past.empty()) {
            deque.push_front(past.back());
            past.pop_back();
          }
          assert (!deque.empty());
          deque.pop_front();
          if (!deque.empty()) {
            ++(sync->num_non_empty_deques_);
          }
        }
        return (0);
      }
    };

    void recoverAndDelete() {
      RecoverAndDelete rnd;
      (void) for_each(type_infos_, &rnd);
    }

    class ResetNumVirtualMoves {
    public:
      ResetNumVirtualMoves() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          ti.num_virtual_moves = 0;
        }
        return (0);
      }
    };

    class RecoverWithVirtualMoves {
    public:
      RecoverWithVirtualMoves() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          for (uint32_t n = ti.num_virtual_moves; n != 0; n--) {
            ti.deque.push_front(ti.past.back());
            ti.past.pop_back();
          }
          if (!ti.deque.empty()) {
            sync->num_non_empty_deques_++;
          }
        }
        return (0);
      }
    };

    class Recover {
    public:
      Recover() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          while (!ti.past.empty()) {
            ti.deque.push_front(ti.past.back());
            ti.past.pop_back();
          }
          if (!ti.deque.empty()) {
            sync->num_non_empty_deques_++;
          }
        }
        return (0);
      }
    };

    // Assumes: all deques are non empty now
    void publishCandidate() {
      // std::cout << "publishing candidate" << std::endl;
      // printCandidate();
      std::apply([this](auto &&... args) { cb_(args...); }, candidate_);
      // candidate_ = Tuple(); no needed
      pivot_ = FullIndex(); // reset to invalid
      // Recover hidden messages, and delete the ones
      // corresponding to the candidate
      num_non_empty_deques_ = 0; // We will recompute it from scratch
      recoverAndDelete();
    }


    void update()  {
      // While no deque is empty
      while (num_non_empty_deques_ == tot_num_deques_) {
        // Find the start and end of the current interval
        FullIndex end_index, start_index;
        ros::Time start_time, end_time;
        getCandidateBoundary(&start_index, &start_time, &end_index, &end_time);
        DroppedMessageUpdater dmu(end_index);
        (void) for_each(type_infos_, &dmu); // update dropped messages
        if (!pivot_.isValid()) {
          // We do not have a candidate
          // INVARIANT: the past_ vectors are empty
          // INVARIANT: (candidate_ has no filled members)
          if (end_time - start_time > max_interval_duration_) {
            // This interval is too big to be a valid candidate,
            // move to the next
            dequeDeleteFront(start_index);
            continue;
          }
          if (dmu.endIndexHasDroppedMessages()) {
            // The topic that would become pivot has dropped messages,
            // so it is not a good pivot
            dequeDeleteFront(start_index);
            continue;
          }
          // This is a valid candidate, and we don't have any, so take it
          makeCandidate();
          candidate_start_ = start_time;
          candidate_end_ = end_time;
          pivot_ = end_index;
          pivot_time_ = end_time;
          dequeMoveFrontToPast(start_index);
        }  else {
          // We already have a candidate
          // Is this one better than the current candidate?
          // INVARIANT: has_dropped_messages is all false
          if ((end_time - candidate_end_) * (1 + age_penalty_) >=
              (start_time - candidate_start_)) {
            // This is not a better candidate, move to the next
            dequeMoveFrontToPast(start_index);
          }  else {
            // This is a better candidate
            makeCandidate();
            candidate_start_ = start_time;
            candidate_end_ = end_time;
            dequeMoveFrontToPast(start_index);
          }
        }
        // INVARIANT: we have a candidate and pivot
        ROS_ASSERT(pivot_.isValid());
        if (start_index == pivot_) {
          // TODO: replace with start_time == pivot_time_
          // We have exhausted all possible candidates for this pivot,
          // we now can output the best one
          publishCandidate();
        } else if ((end_time - candidate_end_) * (1 + age_penalty_)
                   >= (pivot_time_ - candidate_start_)) {
          // We have not exhausted all candidates,
          // but this candidate is already provably optimal
          // Indeed, any future candidate must contain the interval
          // [pivot_time_ end_time], which is already too big.
          // Note: this case is subsumed by the next, but it may
          // save some unnecessary work and
          // it makes things (a little) easier to understand
          publishCandidate();

        } else if (num_non_empty_deques_ < tot_num_deques_)  {
          uint32_t num_non_empty_deques_before_virtual_search =
            num_non_empty_deques_;
          ResetNumVirtualMoves rnvm;
          (void) for_each(type_infos_, &rnvm);
          while (1) {
            //printNVM();
            ros::Time end_time, start_time;
            FullIndex end_index, start_index;
            getVirtualCandidateBoundary(&start_index, &start_time,
                                        &end_index, &end_time);
            if ((end_time - candidate_end_) * (1 + age_penalty_) >=
                (pivot_time_ - candidate_start_)) {
              // We have proved optimality
              // As above, any future candidate must contain the interval
              // [pivot_time_ end_time], which is already too big.
              publishCandidate();  // This cleans virtual moves as a byproduct
              break;  // From the while(1) loop only
            }
            if ((end_time - candidate_end_) * (1 + age_penalty_)
                < (start_time - candidate_start_))  {
              // We cannot prove optimality
              // Indeed, we have a virtual (i.e. optimistic) candidate
              // that is better than the current candidate
              // Cleanup the virtual search:
              num_non_empty_deques_ = 0; // We will recompute it from scratch
              RecoverWithVirtualMoves rvvm;
              (void) for_each(type_infos_, &rvvm);
              // unused variable warning stopper
              (void)num_non_empty_deques_before_virtual_search;
              assert((int)num_non_empty_deques_before_virtual_search ==
                     num_non_empty_deques_);
              break;
            }
            // Note: we cannot reach this point with
            // start_index == pivot_ since in that case we would have
            // start_time == pivot_time, in which case the two tests
            // above are the negation of each other, so that one must be true.
            // Therefore the while loop always terminates.
            assert(start_index != pivot_);
            assert(start_time < pivot_time_);
            // move front to past and update num_virtual_moves
            DequeMoverFrontToPast dmfp(start_index, true);
            (void) for_each(type_infos_, &dmfp);
          } // while(1)
        }
      } // while(num_non_empty_deques_ == (uint32_t)RealTypeCount::value)
    } // end of update()

    template <typename TopicInfoT>
    void checkInterMessageBound(TopicInfoT *tinfo,
                                const std::string &topic) {
      auto &topic_info = *tinfo;
      if (topic_info.warned_about_incorrect_bound) {
        return;
      }
      const auto &deque = topic_info.deque;
      const auto &v = topic_info.past;
      assert(!deque.empty());
      const ros::Time &msg_time = deque.back()->header.stamp;
      ros::Time previous_msg_time;
      if (deque.size() == (size_t) 1) {
        if (v.empty()) {
          // We have already published (or have never received)
          // the previous message, we cannot check the bound
          return;
        }
        previous_msg_time = v.back()->header.stamp;
      } else  {
        // There are at least 2 elements in the deque. Check that the gap
        // respects the bound if it was provided.
        previous_msg_time = deque[deque.size() - 2]->header.stamp;
      }
      // now we have msg_time and previous_msg_time, do the check
      if (msg_time < previous_msg_time) {
        ROS_WARN_STREAM("Messages for " << topic <<
                        " arrived out of order (print only once)");
        topic_info.warned_about_incorrect_bound = true;
      } else if ((msg_time - previous_msg_time) <
                 topic_info.inter_message_lower_bound) {
        ROS_WARN_STREAM(
          "Messages for " << topic << " arrived closer (" <<
          (msg_time - previous_msg_time)
          << ") than the lower bound you provided ("
          << topic_info.inter_message_lower_bound
          << ") (will print only once)");
        topic_info.warned_about_incorrect_bound = true;
      }
    }
#ifdef DEBUG_PRINTING
    class StatePrinter {
    public:
      StatePrinter() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        int num_topics = 0;
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          auto &deque = ti.deque;
          auto &past  = ti.past;
          ros::Time dt, pt;
          if (!deque.empty()) {
            dt = deque.back()->header.stamp;
          }
          if (!past.empty()) {
            pt = past.back()->header.stamp;
          }
          const int n = I * 3 + num_topics; // XXX only right for 3 topics/type
          std::cout << n << " deque: " << deque.size() << " " << dt << std::endl;
          std::cout << n << " past:  " << past.size() << " " << pt << std::endl;
          num_topics++;
        }
        return (num_topics);;
      }
    };

    void printState() {
      StatePrinter sp;
      (void) for_each(type_infos_, &sp);
    }

    class NVMPrinter {
    public:
      NVMPrinter() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        int num_topics = 0;
        auto &type_info = std::get<I>(sync->type_infos_);
        for (auto &ti: type_info.topic_info) {
          const int n = I * 3 + num_topics; // XXX only right for 3 topics/type
          std::cout << n << " nvm: " << ti.num_virtual_moves << " " <<
            " wb: " << ti.warned_about_incorrect_bound << std::endl;
          num_topics++;
        }
        return (num_topics);;
      }
    };


    void printNVM() {
      NVMPrinter nvmp;
      (void) for_each(type_infos_, &nvmp);
    }

    class CandidatePrinter {
    public:
      CandidatePrinter() {};
      template<std::size_t I>
      int operate(ApproximateSync<MsgTypes ...> *sync) {
        const auto &cand = std::get<I>(sync->candidate_);
        for (auto &msg: cand) {
          std::cout << "cand: " << I << " " << msg->header.stamp << std::endl; 
        }
        return (0);
      }
    };

    void printCandidate() {
      CandidatePrinter cp;
      (void) for_each(type_infos_, &cp);
    }
#endif

    // some neat template tricks picked up here:
    // https://stackoverflow.com/questions/18063451/get-index-of-a-tuple-elements -type
    // This template terminates the recursion
    template<std::size_t I = 0, typename FuncT, typename... Tp>
    inline typename std::enable_if<I == sizeof...(Tp), int>::type
    for_each(std::tuple<Tp...> &, FuncT *) // Unused arg needs no name
      { return 0; } // do nothing
    
    // This template recursively calls itself, thereby iterating
    template<std::size_t I = 0, typename FuncT, typename... Tp>
    inline typename std::enable_if<I < sizeof...(Tp), int>::type
    for_each(std::tuple<Tp...>& t, FuncT *f)  {
      const int rv = (*f).template operate<I>(this);
      return (rv + for_each<I + 1, FuncT, Tp...>(t, f));
    }


    // ----------- variables -----------------------  
    inline static const FullIndex NO_PIVOT;
    TupleOfTypeInfo type_infos_;  // tuple with data
    
    std::vector<std::vector<std::string>> topics_; // topics to be synced
    Callback cb_;  // pointer to the callee
    CallbackArg candidate_; // holds the potential callback
    int num_non_empty_deques_{0};
    int tot_num_deques_{0};
    size_t queue_size_;
    FullIndex pivot_;
    ros::Time pivot_time_;
    ros::Time candidate_start_;
    ros::Time candidate_end_;
    ros::Duration max_interval_duration_{ros::DURATION_MAX}; // TODO: actually
    double age_penalty_{0.1};
    size_t num_dropped_{0}; // total number of dropped messages
  };
}


#endif // FLEX_SYNC_APPROXIMATE_SYNC_H
