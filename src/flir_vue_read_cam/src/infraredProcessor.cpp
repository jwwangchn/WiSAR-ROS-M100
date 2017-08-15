//
// Created by kelfor on 5/3/17.
//
//#define SHOWIMG
#include<flir_vue_read_cam/infraredProcessor.h>

InfraredImageProcessor::InfraredImageProcessor() {
    mROI=Rect(0,0,0,0);
}
InfraredImageProcessor::~InfraredImageProcessor() {
    ;
}


Rect InfraredImageProcessor::getProposalROI(Mat src) {


  //  Mat  src = src_.clone();
    cvtColor(src, src, CV_BGR2GRAY);
#ifdef SHOWIMG
    imshow("Origin", src);
#endif

    Mat element = getStructuringElement(MORPH_RECT, Size(11, 11));
    morphologyEx(src, src, MORPH_TOPHAT, element);

    normalize(src, src, 0, 255, CV_MINMAX);
#ifdef SHOWIMG
    imshow("TopHat", src);
#endif
    Mat dst(src.size(), CV_8UC1);
    double minVal, maxVal;
    minMaxIdx(src, &minVal, &maxVal);
    int cols = src.cols, rows = src.rows;
    if (src.isContinuous())
    {
        cols *= rows;
        rows = 1;
    }

    for (int i = 0; i < rows; i++)
    {
        unsigned char* Mi = src.ptr<unsigned char>(i);
        unsigned char * Ki = dst.ptr<unsigned char>(i);
        for (int j = 0; j < cols; j++)
            if (Mi[j] < 100)
                Ki[j] = 255 * (pow(Mi[j] / 255.0, 2));// (Mi[j] - minVal) *255.0 / (maxVal - minVal);
            else
                Ki[j] = Mi[j];// / 255.0;
    }
    normalize(dst, dst, 0, 255, CV_MINMAX);
#ifdef SHOWIMG
    imshow("Adjust", dst);
#endif
    Mat rest;
    threshold(dst, rest,25, 255, CV_THRESH_BINARY);
    morphologyEx(rest, rest, MORPH_CLOSE, getStructuringElement(MORPH_RECT, Size(5, 5)));
    morphologyEx(rest, rest, MORPH_CLOSE, getStructuringElement(MORPH_CROSS, Size(3, 3)));
#ifdef SHOWIMG
    imshow("Binarilization", rest);
#endif


    cv::vector<cv::vector<cv::Point> > contours;
    cv::vector<cv::vector<cv::Point> >poly;
    cv::vector<cv::Rect> savedPR;
    cv::vector<cv::Point>Xs;
    cv::findContours(rest, contours, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE);
    bool foundROI = false;
    for (int i = 0; i < contours.size(); i++)
    {
        double area = contourArea(contours[i]);
        if (area > 28 && area<80)
        {
	    foundROI = true;
            cv::Rect r = boundingRect(contours[i]);
            //drawContours(origin, contours, i, Scalar(0, 255, 0), 2);
            rectangle(src,r,Scalar(0,255,0),1);
            savedPR.push_back(r);
            Xs.push_back(r.tl());
            Xs.push_back(r.br());
        }
    }

    if(foundROI)
       mROI = boundingRect(Xs);
    else
       mROI = cv::Rect(0,0,src.cols,src.rows);
    rectangle(src, mROI, Scalar(0, 255, 255), 1);
//#ifdef SHOWIMG
//    imshow("Contours", src_);
//#endif
    return mROI;
}