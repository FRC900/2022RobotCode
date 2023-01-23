/* -*-c++-*--------------------------------------------------------------------
 * 2018 Bernd Pfrommer bernd.pfrommer@gmail.com
 */

#pragma once

#include "tagslam/tag_factory.h"
#include "tagslam/graph_updater.h"
#include "tagslam/pose_with_noise.h"
#include "tagslam/graph.h"
#include "tagslam/camera.h"
#include "tagslam/profiler.h"
#include "tagslam/odometry_processor.h"
#include "tagslam/measurements/measurements.h"

#include <apriltag_msgs/ApriltagArrayStamped.h>
#include <flex_sync/exact_sync.h>
#include <flex_sync/approximate_sync.h>
#include <flex_sync/live_sync.h>


#include <tf/transform_broadcaster.h>
#include <ros/ros.h>
#include <rosbag/bag.h>
#include <rosbag/view.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CompressedImage.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>
#include <std_srvs/Trigger.h>


#include <string>
#include <unordered_map>
#include <map>
#include <set>
#include <fstream>

namespace tagslam {
  class TagSlam: public TagFactory {
    using Apriltag = apriltag_msgs::Apriltag;
    using TagArray = apriltag_msgs::ApriltagArrayStamped;
    using TagArrayPtr = TagArray::Ptr;
    using TagArrayConstPtr = TagArray::ConstPtr;
    using Odometry = nav_msgs::Odometry;
    using OdometryConstPtr = nav_msgs::OdometryConstPtr;
    using Image = sensor_msgs::Image;
    using ImageConstPtr = sensor_msgs::ImageConstPtr;
    using CompressedImage = sensor_msgs::CompressedImage;
    using CompressedImageConstPtr = sensor_msgs::CompressedImageConstPtr;
    using string = std::string;

    typedef flex_sync::ExactSync<TagArray, Image, Odometry> ExactSync;
    typedef flex_sync::ApproximateSync<TagArray, Image, Odometry>
    ApproximateSync;
    typedef flex_sync::LiveSync<ExactSync> LiveExactSync;
    typedef flex_sync::LiveSync<ApproximateSync> LiveApproximateSync;
    
    typedef flex_sync::ExactSync<TagArray, CompressedImage, Odometry>
    ExactCompressedSync;
    typedef flex_sync::ApproximateSync<TagArray, CompressedImage, Odometry>
    ApproximateCompressedSync;
    typedef flex_sync::LiveSync<ExactCompressedSync> LiveExactCompressedSync;
    typedef flex_sync::LiveSync<ApproximateCompressedSync>
    LiveApproximateCompressedSync;
 

    typedef std::map<
      std::string, PoseWithNoise, std::less<std::string>,
      Eigen::aligned_allocator<std::pair<std::string,
                                         PoseWithNoise>>> PoseCacheMap;

  public:
    TagSlam(const ros::NodeHandle &nh);
    TagSlam(const TagSlam&) = delete;
    TagSlam& operator=(const TagSlam&) = delete;

    // inherited from TagFactory
    TagConstPtr findTag(int tagId) override;
    // ------ own methods
    bool initialize();
    void run();
    void finalize(bool optimize = true);
    void subscribe();
    bool runOnline() const { return (inBagFile_.empty()); }

    template<typename SyncType, typename T1, typename T2, typename T3>
    void processBag(rosbag::View *view,
                    const std::vector<std::vector<string>> &topics,
                    std::function<void(
                      const std::vector<typename T1::ConstPtr> &,
                      const std::vector<typename T2::ConstPtr> &,
                      const std::vector<typename T3::ConstPtr> &)> &cb) {
      SyncType sync(topics, cb, syncQueueSize_);
      for (const rosbag::MessageInstance &m: *view) {
         typename T1::ConstPtr t1 = m.instantiate<T1>();
        if (t1) {    sync.process(m.getTopic(), t1); } else {
          typename T2::ConstPtr t2 = m.instantiate<T2>();
          if (t2) {  sync.process(m.getTopic(), t2); } else {
            typename T3::ConstPtr t3 =m.instantiate<T3>();
            if (t3) { sync.process(m.getTopic(), t3); }
          }
        }
        if (frameNum_ > maxFrameNum_ || !ros::ok()) {
          break;
        }
      }
      if (sync.getNumberDropped() != 0) {
        ROS_WARN_STREAM("sync dropped messages: " << sync.getNumberDropped());
        sync.clearNumberDropped();
      }
    }

    void syncCallback(const std::vector<TagArrayConstPtr> &msgvec1,
                      const std::vector<ImageConstPtr> &msgvec2,
                      const std::vector<OdometryConstPtr> &msgvec3);
    void syncCallbackCompressed(
      const std::vector<TagArrayConstPtr> &msgvec1,
      const std::vector<CompressedImageConstPtr> &msgvec2,
      const std::vector<OdometryConstPtr> &msgvec3);
  private:
    struct ReMap {
      ReMap(int i, const string &cam, ros::Time ts, ros::Time te) :
        remappedId(i), camera(cam), startTime(ts), endTime(te) {
      };
      int       remappedId;
      string    camera;
      ros::Time startTime;
      ros::Time endTime;
    };
    typedef std::unordered_map<int, TagConstPtr> TagMap;

    void testForOldLaunchParameters();
    void readParams();
    void readBodies(XmlRpc::XmlRpcValue config);
    void readGlobalParameters(XmlRpc::XmlRpcValue config);
    void readCameras(XmlRpc::XmlRpcValue config);
    void readCameraPoses(XmlRpc::XmlRpcValue config);
    void readDistanceMeasurements();
    void readRemap(XmlRpc::XmlRpcValue config);
    void readSquash(XmlRpc::XmlRpcValue config);
    void parseTimeSquash(XmlRpc::XmlRpcValue sq, const ros::Time &t,
                         const std::set<int> &tags);

    void playFromBag(const std::string &fname);
    void fakeOdom(const ros::Time &tCurr, std::vector<VertexDesc> *factors);

    void processOdom(const ros::Time &t,
                     const std::vector<OdometryConstPtr> &odomMsg,
                     std::vector<VertexDesc> *factors);
    std::vector<std::vector<std::string>> makeTopics() const;
    void
    testIfInBag(rosbag::Bag *bag,
                const std::vector<std::vector<std::string>> &topics) const;

    void setupOdom(const std::vector<OdometryConstPtr> &odomMsgs);
    void processTagsAndOdom(const std::vector<TagArrayConstPtr> &tagmsgs,
                            const std::vector<OdometryConstPtr> &odommsgs);
    void publishTagAndBodyTransforms(const ros::Time &t, tf::tfMessage *tfMsg);
    void publishOriginalTagTransforms(const ros::Time &t,tf::tfMessage *tfMsg);
    void publishCameraTransforms(const ros::Time &t, tf::tfMessage *tfMsg);

    void publishTransforms(const ros::Time &t, bool orig = false);
    void publishBodyOdom(const ros::Time &t);
    void sleep(double dt) const;
    void processTags(const ros::Time &t,
                     const std::vector<TagArrayConstPtr> &tagMsgs,
                     std::vector<VertexDesc> *factors);
    std::vector<TagConstPtr> findTags(const std::vector<Apriltag> &ta);
    bool anyTagsVisible(const std::vector<TagArrayConstPtr> &tagmsgs);
    void publishAll(const ros::Time &t);
    bool plot(std_srvs::Trigger::Request& req,
              std_srvs::Trigger::Response &res);
    bool replay(std_srvs::Trigger::Request& req,
                std_srvs::Trigger::Response &res);
    bool dump(std_srvs::Trigger::Request& req,
              std_srvs::Trigger::Response &res);
    void doDump(bool optimize);
    void writeCameraPoses(const string &fname);
    void writeFullCalibration(const string &fname) const;
    void writePoses(const string &fname);
    void writeTagDiagnostics(const string &fname) const;
    void writeTimeDiagnostics(const string &fname) const;
    void writeDistanceDiagnostics(const string &fname) const;
    void writeErrorMap(const string &fname) const;
    void writeTagCorners(const ros::Time &t, int camIdx,
                         const TagConstPtr &tag,
                         const geometry_msgs::Point *img_corners);

    void remapAndSquash(const ros::Time &t,
                        std::vector<TagArrayConstPtr> *remapped,
                        const std::vector<TagArrayConstPtr> &orig);
    void applyDistanceMeasurements();
    void doReplay(double rate);
    void copyPosesAndReset();
    TagPtr addTag(int tagId, const BodyPtr &body) const;
    PoseWithNoise getOptimizedPoseWithNoise(const string &name);
    // ------ variables --------
    ros::NodeHandle      nh_;
    GraphPtr             graph_;
    GraphPtr             initialGraph_;
    GraphUpdater         graphUpdater_;
    CameraVec            cameras_;
    BodyVec              bodies_;
    BodyVec              nonstaticBodies_;
    BodyPtr              defaultBody_;
    ros::Publisher       clockPub_;
    ros::Publisher       ackPub_;
    std::vector<ros::Publisher> odomPub_;
    std::vector<ros::Publisher> trajectoryPub_;
    std::vector<nav_msgs::Path> trajectory_;
    string               fixedFrame_;
    bool                 writeDebugImages_;
    bool                 useApproximateSync_;
    bool                 hasCompressedImages_;
    bool                 useFakeOdom_{false};
    bool                 publishAck_{false};
    bool                 amnesia_{false};
    int                  frameNum_{0};
    int                  maxFrameNum_{1000000};
    int                  maxHammingDistance_{100};
    int                  syncQueueSize_{100};
    double               playbackRate_{1.0};
    double               pixelNoise_{1.0};
    std::vector<cv::Mat> images_;
    std::vector<OdometryProcessor,
                Eigen::aligned_allocator<OdometryProcessor>> odomProcessors_;
    tf::TransformBroadcaster tfBroadcaster_;
    ros::ServiceServer   plotService_;
    ros::ServiceServer   replayService_;
    ros::ServiceServer   dumpService_;
    TagMap               tagMap_;
    Profiler             profiler_;
    std::list<ros::Time> times_;
    rosbag::Bag          outBag_;
    std::ofstream        tagCornerFile_;
    std::string          outBagName_;
    bool                 writeToBag_{false};
    bool                 publishInitialTransforms_{false};
    std::string          optimizerMode_;
    std::string          outDir_;
    std::string          inBagFile_;
    bool                 warnIgnoreTags_{false};
    std::shared_ptr<LiveExactSync> liveExactSync_;
    std::shared_ptr<LiveApproximateSync>  liveApproximateSync_;
    std::shared_ptr<LiveExactCompressedSync> liveExactCompressedSync_;
    std::shared_ptr<LiveApproximateCompressedSync>
    liveApproximateCompressedSync_;

    std::unordered_map<int, std::vector<ReMap>>  tagRemap_;
    std::vector<std::map<ros::Time, std::set<int>>> squash_;
    std::map<std::string, std::set<int>> camSquash_;
    std::vector<MeasurementsPtr> measurements_;
    PoseCacheMap poseCache_;
    ros::Time poseCacheTime_{0};
  };
}
