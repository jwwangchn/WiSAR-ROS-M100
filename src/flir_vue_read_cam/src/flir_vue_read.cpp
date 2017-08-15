
#include<ros/ros.h>
#include<iostream>
#include<opencv2/opencv.hpp>
#include <flir_vue_read_cam/proposal_roi_msg.h>
//#include<flir_vue_

#include <flir_vue_read_cam/infraredProcessor.h>

using namespace cv;

using namespace std;

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

    msg.header.frame_id = "/infrared_roi";

    pub.publish(msg);
}

int main(int argc, char ** argv)
{


    ros::init(argc,argv,"flir_vue_proc");
    ros::NodeHandle n;

    ros::Publisher proposalROI_pub = n.advertise<flir_vue_read_cam::proposal_roi_msg>("flir_vue_proc/proposal_roi",100);
    VideoCapture vcap;
    InfraredImageProcessor infraredImageProc;
    vcap.open(0);
    Mat frame;
    Rect mROI;
    namedWindow("ROI",1);
    while(vcap.isOpened())
    {
        vcap.read(frame);
        if(frame.empty()) continue;
        mROI = infraredImageProc.getProposalROI(frame);
        publish_ROI(mROI,proposalROI_pub);

        imshow("ROI",frame);
        waitKey(20);

    }

    vcap.release();



//    Mat src = imread("/home/kelfor/Desktop/IR_4.jpg");
//    infraredImageProc.getProposalROI(src);
//
//    imshow("ROI",src);
//    waitKey();

}

