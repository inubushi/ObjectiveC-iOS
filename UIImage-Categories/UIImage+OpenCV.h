//
//  UIImage+OpenCV.h
//
//  Created by Chamin Morikawa on 1/12/16.
//  Copyright © 2016 Yubi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/opencv.hpp>

using namespace cv;

@interface UIImage (OpenCV)

-(cv::Mat)getCvMat;
-(UIImage*)imageWithCvMat:(cv::Mat)mat;

@end
