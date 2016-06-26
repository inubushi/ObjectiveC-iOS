//
//  UIImage+Pixels.h
//  LipRefiner
//
//  Created by Chamin Morikawa on 2/19/15.
//  Copyright (c) 2015 Yubi. All rights reserved.
//

#import <UIKit/UIKit.h>
#define CONV_SUCCESS    0
#define CONV_ERROR     1

@interface UIImage (Pixels)

- (UIImage *)getImagefromRGBA:(unsigned char *)buffer withWidth:(int)width andHeight:(int)height;
- (int)getRGBAPixelsTo:(unsigned char*)buffer;
+ (CGContextRef) newBitmapRGBA8ContextFromImage:(CGImageRef) image;

@end
