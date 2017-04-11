//
//  MetalImageGammaFilter.h
//  MetalImage
//
//  Created by erickingxu on 21/9/2016.
//  Copyright © 2016 erickingxu. All rights reserved.
//
////This filter provided another way for processing image ,just using render pass's fragment pixels process without parall-computing

#import "MetalImageFilter.h"

@interface MetalImageGammaFilter : MetalImageFilter


-(void)slideGamma:(CGFloat)val;
@end
