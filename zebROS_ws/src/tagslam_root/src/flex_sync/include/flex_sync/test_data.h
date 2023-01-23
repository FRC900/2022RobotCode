/* -*-c++-*--------------------------------------------------------------------
 * 2020 Bernd Pfrommer bernd.pfrommer@gmail.com
 */

#ifndef FLEX_SYNC_TEST_DATA_H
#define FLEX_SYNC_TEST_DATA_H

#include <ros/ros.h>
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <boost/tokenizer.hpp>

#include "flex_sync/approx_sync.h"
#include "flex_sync/TestMsg1.h"
#include "flex_sync/TestMsg2.h"
#include "flex_sync/TestMsg3.h"

/*
 * Class for reading and playing test data
 */

namespace flex_sync {
  class TestData {
    
  public:
    TestData(const std::vector<std::vector<std::string>> &topics,
             const std::string &dir) {
      readData(topics, dir);
    }

    std::vector<std::vector<std::string>> read_file(const std::string &fn) {
      std::vector<std::vector<std::string>> all_vecs;
      std::ifstream in(fn);
      if (!in.is_open()) {
        std::cout << "file not found: " << fn << std::endl;
      } else {
        typedef boost::tokenizer<boost::escaped_list_separator<char> > Tokenizer;
        std::string line;
        getline(in, line); // skip first line
        while (getline(in, line)) {
          std::vector<std::string> vec;
          Tokenizer tok(line);
          vec.assign(tok.begin(), tok.end());
          all_vecs.push_back(vec);
        }
      }
      std::cout << "file " << fn << " has lines: " << all_vecs.size() << std::endl;
      return (all_vecs);
    }

    void readData(const std::vector<std::vector<std::string>> &topics,
                  const std::string &dir) {
      size_t count = 0;
      for (size_t i = 0; i < topics.size(); i++) {
        for (const auto &topic: topics[i]) {
          const std::string fn = dir + "/" + topic + ".txt";
          const std::vector<std::vector<std::string>> lines = read_file(fn);
          for (const auto &l : lines) {
            // %time, field.seq, field.stamp, field.frame_id
            // 1589383807770185383, 11735, 1589383807779033184, t265_gyro_optical_frame

            std_msgs::Header h;
            const int64_t t_long = std::stol(l[0]);
            const int64_t stamp_long = std::stol(l[2]);
            ros::Time t(t_long / 1000000000LL, t_long % 1000000000LL);
            h.stamp = ros::Time(stamp_long / 1000000000LL, stamp_long % 1000000000LL);
            h.seq = std::stoi(l[1]);
            h.frame_id = l[3];
            Msg msg;
            msg.topic = topic;
            switch (i) {
            case 0: {
              TestMsg1 m;
              m.header = h;
              msg.msg1.reset(new TestMsg1(m));
              break; }
            case 1: {
              TestMsg2 m;
              m.header = h;
              msg.msg2.reset(new TestMsg2(m));
              break; }
            case 2: {
              TestMsg3 m;
              m.header = h;
              msg.msg3.reset(new TestMsg3(m));
              break; }
            }
            count ++;
            msgs_[t] = msg;
          }
        }
      }
      std::cout << "total read: " << count << " in map: " << msgs_.size() << std::endl;
    }
 
    void play(GeneralSync<TestMsg1> *sync) {
      for (const auto &msg: msgs_) {
        const auto &val = msg.second;
        if (val.msg1) {
          sync->process(val.topic, val.msg1);
        }
      }
    }

    void play(GeneralSync<TestMsg1, TestMsg2> *sync) {
      for (const auto &msg: msgs_) {
        const auto &val = msg.second;
        if (val.msg1) {
          sync->process(val.topic, val.msg1);
        } else if (val.msg2) {
          sync->process(val.topic, val.msg2);
        }
      }
    }

    void play(GeneralSync<TestMsg1, TestMsg2, TestMsg3> *sync) {
      for (const auto &msg: msgs_) {
        const auto &val = msg.second;
        if (val.msg1) {
          sync->process(val.topic, val.msg1);
        } else if (val.msg2) {
          sync->process(val.topic, val.msg2);
        } else if (val.msg3) {
          sync->process(val.topic, val.msg3);
        }
      }
    }

    struct Msg {
      std::string topic;
      boost::shared_ptr<const TestMsg1> msg1;
      boost::shared_ptr<const TestMsg2> msg2;
      boost::shared_ptr<const TestMsg3> msg3;
    };

  private:
    typedef std::map<ros::Time, Msg> MsgMap;

    MsgMap msgs_;
  };
}


#endif // FLEX_SYNC_TEST_DATA_H
