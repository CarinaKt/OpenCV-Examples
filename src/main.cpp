#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void drawLine(Mat &myImage)
{

   Point p1(0, 0), p2(100, 0);
   Point p3(200, 0), p4(500, 500);
   int thickness = 2;

   // Line drawn using 8 connected
   // Bresenham algorithm
   line(myImage, p1, p4, Scalar(255, 0, 0),
        thickness, LINE_8);
}

int main()
{
   Mat myImage;                 // Declaring a matrix to load the frames//
   namedWindow("Video Player"); // Declaring the video to show the video//
   VideoCapture cap(0);         // Declaring an object to capture stream of frames from default camera//
   if (!cap.isOpened())
   { // This section prompt an error message if no video stream is found//
      cout << "No video stream detected" << endl;
      system("pause");
      return -1;
   }
   while (true)
   { // Taking an everlasting loop to show the video//
      cap >> myImage;
      if (myImage.empty())
      { // Breaking the loop if no video frame is detected//
         break;
      }

      drawLine(myImage);

      imshow("Video Player", myImage); // Showing the video//
      char c = (char)waitKey(25);      // Allowing 25 milliseconds frame processing time and initiating break condition//
      if (c == 27)
      { // If 'Esc' is entered break the loop//
         break;
      }
   }
   cap.release(); // Releasing the buffer memory//
   return 0;
}
