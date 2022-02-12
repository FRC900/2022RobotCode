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
                          msgOut.range = msgIn->ranges[0]+normalDistribution_(gen_)); //adding noise
                          msgOut.radiation_type = 1;
                          msgOut.range_min = msgIn->min_range; //check lines 27-29
                          msgOut.range_max = msgIn->max_range;
                          msgOut.field_of_view = msgIn->angle_max-angle_min


                    			pub_.publish(msgOut);
                    		}
              private:
                      		std::random_device rd_;
                      		std::mt19937 gen_;
                      		std::normal_distribution<double> normalDistribution_;
                      		double zCovariance_;
                      		ros::Subscriber sub_;
                      		ros::Publisher  pub_;
                      };

            int main(int argc, char** argv)
                      {
                          ros::init(argc, argv, "fake_terabee");

                	ros::NodeHandle n;
                      	FakeTerabeeDist fakeTerabeeDist(n);

                	ros::spin();
                      	return 0;
                      }
}
