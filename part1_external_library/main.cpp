#include <iostream>
#include "testClass.h"
#include <opencv2/opencv.hpp>

int main(int argc, char ** argv){
	cv::Mat img = cv::imread("AEs15.png", -1);
	std::cout<<img;
	if( img.empty() ) return -1;
	cv::namedWindow("Example", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example", img);
	cv::waitKey(0);
	cv::destroyWindow("Example");
	std::cout<<"hallokidow\n";
	testClass().foo();
	return 0;
}
