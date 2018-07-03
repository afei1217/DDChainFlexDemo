//
//  DDBaseViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/6/29.
//  Copyright © 2018年 afei. All rights reserved.
//  没有添加控制事件 目前所有的链式API 都只添加了常用属性

#import <UIKit/UIKit.h>

/// 链式API声明
#define     DDFLEX_CHAIN_PROPERTY               @property (nonatomic, copy, readonly)

/// 一般链式API实现
#define     DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, DDViewChainModelType, DDViewClass) \
- (DDViewChainModelType (^)(DDParamType param))methodName {   \
return ^DDViewChainModelType (DDParamType param) {    \
((DDViewClass *)self.view).methodName = param;   \
return self;    \
};\
}

/// UIKit拓展声明
#define     DDFLEX_EX_INTERFACE(DDView, DDViewChainModelClass)   \
@interface DDView (DDFLEX_EX)   \
DDFLEX_CHAIN_PROPERTY DDViewChainModelClass *ddChain;    \
@end
/// UIKit拓展实现
#define     DDFLEX_EX_IMPLEMENTATION(DDView, DDViewChainModelClass) \
@implementation DDView (DDFLEX_EX)  \
- (DDViewChainModelClass *)ddChain {   \
return [[DDViewChainModelClass alloc] initWitView:self];    \
}   \
@end

@interface DDBaseViewChainModel <ObjcType> : NSObject

/// 视图的唯一标示
@property (nonatomic, strong, readonly) __kindof UIView *view;

@property (nonatomic, assign, readonly) Class viewClass;

- (instancetype)initWitView:(__kindof UIView *)view;

#pragma mark - Frame
DDFLEX_CHAIN_PROPERTY ObjcType (^ frame)(CGRect frame);

DDFLEX_CHAIN_PROPERTY ObjcType (^ origin)(CGPoint origin);
DDFLEX_CHAIN_PROPERTY ObjcType (^ x)(CGFloat x);
DDFLEX_CHAIN_PROPERTY ObjcType (^ y)(CGFloat y);

DDFLEX_CHAIN_PROPERTY ObjcType (^ size)(CGSize size);
DDFLEX_CHAIN_PROPERTY ObjcType (^ width)(CGFloat width);
DDFLEX_CHAIN_PROPERTY ObjcType (^ height)(CGFloat height);

DDFLEX_CHAIN_PROPERTY ObjcType (^ center)(CGPoint center);
DDFLEX_CHAIN_PROPERTY ObjcType (^ centerX)(CGFloat centerX);
DDFLEX_CHAIN_PROPERTY ObjcType (^ centerY)(CGFloat centerY);

DDFLEX_CHAIN_PROPERTY ObjcType (^ top)(CGFloat top);
DDFLEX_CHAIN_PROPERTY ObjcType (^ bottom)(CGFloat bottom);
DDFLEX_CHAIN_PROPERTY ObjcType (^ left)(CGFloat left);
DDFLEX_CHAIN_PROPERTY ObjcType (^ right)(CGFloat right);


#pragma mark - Color
DDFLEX_CHAIN_PROPERTY ObjcType (^ backgroundColor)(UIColor *backgroundColor);
DDFLEX_CHAIN_PROPERTY ObjcType (^ tintColor)(UIColor *tintColor);
DDFLEX_CHAIN_PROPERTY ObjcType (^ alpha)(CGFloat alpha);

#pragma mark - Control
DDFLEX_CHAIN_PROPERTY ObjcType (^ contentMode)(UIViewContentMode contentMode);

DDFLEX_CHAIN_PROPERTY ObjcType (^ opaque)(BOOL opaque);
DDFLEX_CHAIN_PROPERTY ObjcType (^ hidden)(BOOL hidden);
DDFLEX_CHAIN_PROPERTY ObjcType (^ clipsToBounds)(BOOL clipsToBounds);

DDFLEX_CHAIN_PROPERTY ObjcType (^ userInteractionEnabled)(BOOL userInteractionEnabled);
DDFLEX_CHAIN_PROPERTY ObjcType (^ multipleTouchEnabled)(BOOL multipleTouchEnabled);

#pragma mark - Layer
DDFLEX_CHAIN_PROPERTY ObjcType (^ masksToBounds)(BOOL masksToBounds);
DDFLEX_CHAIN_PROPERTY ObjcType (^ cornerRadius)(CGFloat cornerRadius);

DDFLEX_CHAIN_PROPERTY ObjcType (^ border)(CGFloat borderWidth, UIColor *borderColor);
DDFLEX_CHAIN_PROPERTY ObjcType (^ borderWidth)(CGFloat borderWidth);
DDFLEX_CHAIN_PROPERTY ObjcType (^ borderColor)(CGColorRef borderColor);

DDFLEX_CHAIN_PROPERTY ObjcType (^ zPosition)(CGFloat zPosition);
DDFLEX_CHAIN_PROPERTY ObjcType (^ anchorPoint)(CGPoint anchorPoint);

DDFLEX_CHAIN_PROPERTY ObjcType (^ shadow)(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity);
DDFLEX_CHAIN_PROPERTY ObjcType (^ shadowColor)(CGColorRef shadowColor);
DDFLEX_CHAIN_PROPERTY ObjcType (^ shadowOpacity)(CGFloat shadowOpacity);
DDFLEX_CHAIN_PROPERTY ObjcType (^ shadowOffset)(CGSize shadowOffset);
DDFLEX_CHAIN_PROPERTY ObjcType (^ shadowRadius)(CGFloat shadowRadius);

DDFLEX_CHAIN_PROPERTY ObjcType (^ transform)(CATransform3D transform);

DDFLEX_CHAIN_PROPERTY ObjcType (^ addSubview)(UIView *subview);
DDFLEX_CHAIN_PROPERTY ObjcType (^ addToSuperView)(UIView *superView);

@end
