/****************************************************** 
 *	Code by Utkarsh Sinha
 *	Based on JIFT by Jun Liu
 *	Visit http://aishack.in/ for more indepth articles and tutorials
 *	on artificial intelligence
 * Use, reuse, modify, hack, kick. Do whatever you want with
 * this code :)
 ******************************************************/

// MySIFT.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<opencv2/opencv.hpp>
#include "mySIFT.h"
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("car.jpg");
	meSIFT x(img,4,2);
	x.DoSift();
	x.ShowKeypoints();
	return 0;
}

