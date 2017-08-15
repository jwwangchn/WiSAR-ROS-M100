
#include<ros/ros.h>
#include<iostream>
#include<opencv2/opencv.hpp>
#include <flir_vue_read_cam/proposal_roi_msg.h>
#include<std_msgs/Bool.h>
#include<time.h>
#include <flir_vue_read_cam/infraredProcessor.h>
#include <string>
using namespace cv;

using namespace std;
#define SHOWIMG
bool gRecording = false;
int recordFlag = 0;
void publish_ROI(Rect & roi,ros::Publisher& pub)
{
    //ClockWise from left top
    flir_vue_read_cam::proposal_roi_msg msg;
    msg.x0 = roi.tl().x;
    msg.y0 = roi.tl().y;
    msg.x1 = msg.x0+roi.width;
    msg.y1 = msg.y0;
    msg.x2 = msg.x0;
    msg.y2 = msg.y0 + roi.height;
    msg.x3 = roi.br().x;
    msg.y3 = roi.br().y;

    msg.id = -1;
    msg.header.frame_id = "/infrared_roi";

    pub.publish(msg);
}

void onStartEndRecordCallback(const std_msgs::Bool& startRecord)
{
    gRecording = startRecord.data;
    if(gRecording)
        recordFlag =   1;
    else
        recordFlag = -1;

}

int main(int argc, char ** argv)
{

    int device_id = 0;
    ros::init(argc,argv,"flir_vue_proc");
    ros::NodeHandle n;

    ros::Publisher proposalROI_pub = n.advertise<flir_vue_read_cam::proposal_roi_msg>("flir_vue_proc/proposal_roi",100);
    ros::Subscriber recordVideo_sub = n.subscribe("record_infrared",100,onStartEndRecordCallback);
    ros::Rate loop(30);
    n.param<int> ("device_id",device_id,0);
    VideoCapture vcap;
    VideoWriter* videoWriter = NULL;

    InfraredImageProcessor infraredImageProc;
    vcap.open(device_id);
    Mat frame;
    Rect mROI;
    namedWindow("ROI",1);
    while(ros::ok()&&vcap.isOpened())
    {
        vcap.read(frame);
        if(frame.empty()) continue;
        mROI = infraredImageProc.getProposalROI(frame);
        publish_ROI(mROI,proposalROI_pub);
#ifdef SHOWIMG
        
	imshow("ROI",frame);
        waitKey(1);
#endif

        switch(recordFlag)   //Record Infrared video
        {
            case 1:
            {
	        ROS_INFO("START RECORDING");
                char currentDateTime[50];
                time_t now;
		time(&now);
                strftime(currentDateTime, sizeof(currentDateTime), "/root/Desktop/%Y-%b-%d- %H-%M.avi", localtime(&now));
                videoWriter = new VideoWriter(currentDateTime, CV_FOURCC('X', 'V', 'I', 'D'), 7.5, frame.size());
                if (videoWriter->isOpened()) {
                    videoWriter->write(frame);
                    recordFlag = 2;
                }
                break;
            }
            case 2:
                videoWriter->write(frame);
                break;
            case -1:
                if(videoWriter->isOpened())
                    videoWriter->release();
                recordFlag = 0;
                break;
            default:
                break;

        }

      ros::spinOnce();
      loop.sleep();

    }

    if(vcap.isOpened())
        vcap.release();
    if(videoWriter->isOpened())
        videoWriter->release();
    if(videoWriter)
        delete videoWriter;



//    Mat src = imread("/home/kelfor/Desktop/IR_4.jpg");
//    infraredImageProc.getProposalROI(src);
//
//    imshow("ROI",src);
//    waitKey();

}

