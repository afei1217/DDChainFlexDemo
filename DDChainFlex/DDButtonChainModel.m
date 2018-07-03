//
//  DDButtonChainModel.m
//  DDChainFlex
//
//  Created by Void on 2018/6/29.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDButtonChainModel.h"

#define     DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(methodName, DDParamType)      DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, DDButtonChainModel *, UIButton)

#define     DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, DDParamType, Code, State)    \
- (DDButtonChainModel *(^)(DDParamType param))methodName   \
{   \
return ^DDButtonChainModel *(DDParamType param) {     \
[(UIButton *)self.view Code:param forState:State];      \
return self;        \
};      \
}       \

#define     DDFLEX_CHAIN_BUTTON_TITLE_IMPLEMENTATION(methodName, State)             DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, NSString *, setTitle, State)

#define     DDFLEX_CHAIN_BUTTON_TITLECOLOR_IMPLEMENTATION(methodName, State)        DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIColor *, setTitleColor, State)

#define     DDFLEX_CHAIN_BUTTON_SHADOW_IMPLEMENTATION(methodName, State)            DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIColor *, setTitleShadowColor, State)

#define     DDFLEX_CHAIN_BUTTON_IMAGE_IMPLEMENTATION(methodName, State)             DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIImage *, setImage, State)

#define     DDFLEX_CHAIN_BUTTON_BGIMAGE_IMPLEMENTATION(methodName, State)           DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIImage *, setBackgroundImage, State)

#define     DDFLEX_CHAIN_BUTTON_BGCOLOR_IMPLEMENTATION(methodName, State)           DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIColor *, setBackgroundColor, State)

#define     DDFLEX_CHAIN_BUTTON_ATTRTITLE_IMPLEMENTATION(methodName, State)         DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, NSAttributedString *, setAttributedTitle, State)

#define     ZZFLEX_CHAIN_BUTTON_BGCOLOR_IMPLEMENTATION(methodName, State)           DDFLEX_CHAIN_BUTTON_STATE_IMPLEMENTATION(methodName, UIColor *, setBackgroundColor, State)




@implementation DDButtonChainModel

DDFLEX_CHAIN_BUTTON_TITLE_IMPLEMENTATION(title, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_TITLE_IMPLEMENTATION(titleHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_TITLE_IMPLEMENTATION(titleSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_TITLE_IMPLEMENTATION(titleDisabled, UIControlStateDisabled);

DDFLEX_CHAIN_BUTTON_TITLECOLOR_IMPLEMENTATION(titleColor, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_TITLECOLOR_IMPLEMENTATION(titleColorHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_TITLECOLOR_IMPLEMENTATION(titleColorSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_TITLECOLOR_IMPLEMENTATION(titleColorDisabled, UIControlStateDisabled);

DDFLEX_CHAIN_BUTTON_SHADOW_IMPLEMENTATION(titleShadowColor, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_SHADOW_IMPLEMENTATION(titleShadowColorHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_SHADOW_IMPLEMENTATION(titleShadowColorSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_SHADOW_IMPLEMENTATION(titleShadowColorDisabled, UIControlStateDisabled);

DDFLEX_CHAIN_BUTTON_IMAGE_IMPLEMENTATION(image, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_IMAGE_IMPLEMENTATION(imageHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_IMAGE_IMPLEMENTATION(imageSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_IMAGE_IMPLEMENTATION(imageDisabled, UIControlStateDisabled);

DDFLEX_CHAIN_BUTTON_BGIMAGE_IMPLEMENTATION(backgroundImage, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_BGIMAGE_IMPLEMENTATION(backgroundImageHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_BGIMAGE_IMPLEMENTATION(backgroundImageSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_BGIMAGE_IMPLEMENTATION(backgroundImageDisabled, UIControlStateDisabled);

// 暂时不实现 需要给button添加类目后实现
//DDFLEX_CHAIN_BUTTON_BGCOLOR_IMPLEMENTATION(backgroundColorHL, UIControlStateHighlighted);
//DDFLEX_CHAIN_BUTTON_BGCOLOR_IMPLEMENTATION(backgroundColorSelected, UIControlStateSelected);
//DDFLEX_CHAIN_BUTTON_BGCOLOR_IMPLEMENTATION(backgroundColorDisabled, UIControlStateDisabled);

DDFLEX_CHAIN_BUTTON_ATTRTITLE_IMPLEMENTATION(attributedTitle, UIControlStateNormal);
DDFLEX_CHAIN_BUTTON_ATTRTITLE_IMPLEMENTATION(attributedTitleHL, UIControlStateHighlighted);
DDFLEX_CHAIN_BUTTON_ATTRTITLE_IMPLEMENTATION(attributedTitleSelected, UIControlStateSelected);
DDFLEX_CHAIN_BUTTON_ATTRTITLE_IMPLEMENTATION(attributedTitleDisabled, UIControlStateDisabled);

- (DDButtonChainModel *(^)(UIFont *titleFont))titleFont {
    return ^DDButtonChainModel *(UIFont *titleFont) {
        ((UIButton *)self.view).titleLabel.font = titleFont;
        return self;
    };
}

DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(contentEdgeInsets, UIEdgeInsets);
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(titleEdgeInsets, UIEdgeInsets);
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(imageEdgeInsets, UIEdgeInsets);

#pragma mark - # UIControl
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(enabled, BOOL);
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(selected, BOOL);
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(highlighted, BOOL);

DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(contentVerticalAlignment, UIControlContentVerticalAlignment);
DDFLEX_CHAIN_BUTTON_IMPLEMENTATION(contentHorizontalAlignment, UIControlContentHorizontalAlignment);


@end

DDFLEX_EX_IMPLEMENTATION(UIButton, DDButtonChainModel)
