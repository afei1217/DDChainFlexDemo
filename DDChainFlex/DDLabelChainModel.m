//
//  DDLabelChainModel.m
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDLabelChainModel.h"

#define     DDFLEX_CHAIN_LABEL_IMPLEMENTATION(methodName, DDParamType)      DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, DDLabelChainModel *, UILabel)
@implementation DDLabelChainModel

DDFLEX_CHAIN_LABEL_IMPLEMENTATION(text, NSString *);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(font, UIFont *);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(textColor, UIColor *);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(attributedText, NSAttributedString *);

DDFLEX_CHAIN_LABEL_IMPLEMENTATION(textAlignment, NSTextAlignment);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(numberOfLines, NSInteger);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(lineBreakMode, NSLineBreakMode);
DDFLEX_CHAIN_LABEL_IMPLEMENTATION(adjustsFontSizeToFitWidth, BOOL);

@end

DDFLEX_EX_IMPLEMENTATION(UILabel, DDLabelChainModel)
