#include <iostream>
#include <opencv2/opencv.hpp>


using namespace cv;

void DrawLine(const Mat &myImage)
{

   Point p1(0, 0), p2(100, 0);
   Point p3(200, 0), p4(500, 500);
   int thickness = 2;

   // Line drawn using 8 connected
   // Bresenham algorithm
   line(myImage, p1, p4, Scalar(255, 0, 0),
        thickness, LINE_8);
}