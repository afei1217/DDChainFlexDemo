//
//  DDButtonChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/6/29.
//  Copyright © 2018年 afei. All rights reserved.
/*
    该链式调用基本上添加了所有属性 但是没有添加事件
*/


#import "DDBaseViewChainModel.h"

@class DDButtonChainModel;
@interface DDButtonChainModel : DDBaseViewChainModel<DDButtonChainModel *>


// 标题
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ title)(NSString *title);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleHL)(NSString *titleHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleSelected)(NSString *titleSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleDisabled)(NSString *titleDisabled);

// 标题颜色
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleColor)(UIColor *titleColor);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleColorHL)(UIColor *titleColorHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleColorSelected)(UIColor *titleColorSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleColorDisabled)(UIColor *titleColorDisabled);

// 标题阴影颜色
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleShadowColor)(UIColor *titleShadowColor);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleShadowColorHL)(UIColor *titleShadowColorHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleShadowColorSelected)(UIColor *titleShadowColorSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleShadowColorDisabled)(UIColor *titleShadowColorDisabled);

// 图片
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ image)(UIImage *image);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ imageHL)(UIImage *imageHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ imageSelected)(UIImage *imageSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ imageDisabled)(UIImage *imageDisabled);

// 背景图片
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundImage)(UIImage *backgroundImage);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundImageHL)(UIImage *backgroundImageHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundImageSelected)(UIImage *backgroundImageSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundImageDisabled)(UIImage *backgroundImageDisabled);

// 背景颜色 (暂时不实现 需要给button添加类目后实现)
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundColorHL)(UIColor *backgroundColorHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundColorSelected)(UIColor *backgroundColorSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ backgroundColorDisabled)(UIColor *backgroundColorDisabled);

// 字体
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleFont)(UIFont *titleFont);

// 属性标题
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ attributedTitle)(NSAttributedString *attributedTitle);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ attributedTitleHL)(NSAttributedString *attributedTitleHL);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ attributedTitleSelected)(NSAttributedString *attributedTitleSelected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ attributedTitleDisabled)(NSAttributedString *attributedTitleDisabled);

// 边距
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ contentEdgeInsets)(UIEdgeInsets contentEdgeInsets);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ titleEdgeInsets)(UIEdgeInsets titleEdgeInsets);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ imageEdgeInsets)(UIEdgeInsets imageEdgeInsets);

#pragma mark - # UIControl
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ enabled)(BOOL enabled);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ selected)(BOOL selected);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ highlighted)(BOOL highlighted);

DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ contentVerticalAlignment)(UIControlContentVerticalAlignment contentVerticalAlignment);
DDFLEX_CHAIN_PROPERTY DDButtonChainModel *(^ contentHorizontalAlignment)(UIControlContentHorizontalAlignment contentHorizontalAlignment);

@end

DDFLEX_EX_INTERFACE(UIButton, DDButtonChainModel)
