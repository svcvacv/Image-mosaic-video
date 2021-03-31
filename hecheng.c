#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>
#include <stdio.h>
#include "opencv2/video/tracking.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <ctype.h>
#include <unistd.h>
#define   QISHI   300
#define   SHUMU   441
std::string wholenamevideo="shiping.mp4";
using namespace cv;
using namespace std;

int main()
{ 
VideoWriter writer(wholenamevideo, CV_FOURCC('M','J','P','G'),15, Size(1600, 1200), true);

 for(int i=QISHI;i<SHUMU ;i++)

 {
 printf("now is %d \n",i);
 stringstream namechar;
 Mat gray, prevGray, img_display;
 namechar<<"tupian/"<<"A"<<i<<".jpg";
     while((access(namechar.str().c_str(),F_OK))==-1)   
    {   
        printf("%d not exist .\n",i);   
        cout<<namechar.str()<<endl;
        namechar.str("");;
        i++;
        namechar<<"tupian/"<<"A"<<i<<".jpg";
    }   
 img_display = imread(namechar.str());
 writer << img_display;
 
 }
}