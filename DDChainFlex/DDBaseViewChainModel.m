//
//  DDBaseViewChainModel.m
//  DDChainFlex
//
//  Created by Void on 2018/6/29.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"
#import "UIView+Frame.h"

#define     DDFLEX_CHAIN_VIEW_IMPLEMENTATION(methodName, DDParamType)      DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, id, UIView)

#define     DDFLEX_CHAIN_LAYER_IMPLEMENTATION(methodName, DDParamType) \
- (id (^)(DDParamType param))methodName    \
{   \
return ^id (DDParamType param) {    \
self.view.layer.methodName = param;   \
return self;    \
};\
}

@implementation DDBaseViewChainModel

- (id)initWitView:(__kindof UIView *)view {
    if (self = [super init]) {
        _view = view;
    }
    return self;
}

#pragma mark - Frame
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(frame, CGRect);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(origin, CGPoint);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(x, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(y, CGFloat);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(size, CGSize);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(width, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(height, CGFloat);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(center, CGPoint);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(centerX, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(centerY, CGFloat);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(top, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(bottom, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(left, CGFloat);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(right, CGFloat);

#pragma mark - Control
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(contentMode, UIViewContentMode);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(opaque, BOOL);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(hidden, BOOL);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(clipsToBounds, BOOL);

DDFLEX_CHAIN_VIEW_IMPLEMENTATION(userInteractionEnabled, BOOL);
DDFLEX_CHAIN_VIEW_IMPLEMENTATION(multipleTouchEnabled, BOOL);

#pragma mark - Layer
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(masksToBounds, BOOL);

- (id (^)(CGFloat cornerRadius))cornerRadius {
    return ^__kindof DDBaseViewChainModel *(CGFloat cornerRadius) {
        [self.view.layer setMasksToBounds:YES];
        [self.view.layer setCornerRadius:cornerRadius];
        return self;
    };
}
- (id (^)(CGFloat borderWidth, UIColor *borderColor))border {
    return ^__kindof DDBaseViewChainModel *(CGFloat borderWidth, UIColor *borderColor) {
        [self.view.layer setBorderWidth:borderWidth];
        [self.view.layer setBorderColor:borderColor.CGColor];
        return self;
    };
}
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(borderWidth, CGFloat);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(borderColor, CGColorRef);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(zPosition, CGFloat);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(anchorPoint, CGPoint);
- (id (^)(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity))shadow {
    return ^__kindof DDBaseViewChainModel *(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity) {
        [self.view.layer setShadowOffset:shadowOffset];
        [self.view.layer setShadowRadius:shadowRadius];
        [self.view.layer setShadowColor:shadowColor.CGColor];
        [self.view.layer setShadowOpacity:shadowOpacity];
        return self;
    };
}
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(shadowColor, CGColorRef);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(shadowOpacity, CGFloat);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(shadowOffset, CGSize);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(shadowRadius, CGFloat);
DDFLEX_CHAIN_LAYER_IMPLEMENTATION(transform, CATransform3D);

// 添加视图
- (id (^)(UIView *subview))addSubview {
    return ^__kindof DDBaseViewChainModel *(UIView *subview) {
        [self.view addSubview:subview];
        return self;
    };
}
- (id (^)(UIView *superView))addToSuperView {
    return ^__kindof DDBaseViewChainModel *(UIView *superView) {
        [superView addSubview:self.view];
        return self;
    };
}

@end
