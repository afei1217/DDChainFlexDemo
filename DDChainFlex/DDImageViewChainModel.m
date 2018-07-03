//
//  DDImageViewChainModel.m
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDImageViewChainModel.h"

#define     DDFLEX_CHAIN_IMAGEVIEW_IMPLEMENTATION(methodName, DDParamType)      DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, DDImageViewChainModel *, UIImageView)
@implementation DDImageViewChainModel

DDFLEX_CHAIN_IMAGEVIEW_IMPLEMENTATION(image, UIImage *);
DDFLEX_CHAIN_IMAGEVIEW_IMPLEMENTATION(highlightedImage, UIImage *);
DDFLEX_CHAIN_IMAGEVIEW_IMPLEMENTATION(highlighted, BOOL);

@end

DDFLEX_EX_IMPLEMENTATION(UIImageView, DDImageViewChainModel)
