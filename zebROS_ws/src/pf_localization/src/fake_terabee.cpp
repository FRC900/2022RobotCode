//    Node to republish sim laser scans as terabee distances
// Adding noise to simulate real world data

#include <ros/ros.h>
#include <sensor_msgs/LaserScan>
#include <sensor_msgs/Distance>
#include <sensor_msgs/Range>

class FakeTerabeeDist

{
        public:
              FakeTerabeeDist(ros::NodeHandle &n)
                    : rd_{}
                    , gen_{rd_()}           //generating a random digit
                    //covariance??

                    void cmdVelCallback(const sensor_msgs::LaserScanConstPtr &msgIn)
                    		{
                    			sensor_msgs::Range msgOut;
                    			msgOut.header.stamp = msgIn->header.stamp;
                    			msgOut.header.frame_id = "terabee";
                    			msgOut.seq = msgIn->seq;
                          msgOut.stamp = msgIn->stamp;    //formatting same as above

                          msgOut.range = msgIn->ranges[0]+normalDistribution_(gen_));
                          msgOut.radiation_type = 1


                    			pub_.publish(msgOut);
                    		}

}
