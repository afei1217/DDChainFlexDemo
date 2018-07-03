//
//  DDSwitchChainModel.m
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDSwitchChainModel.h"

#define     DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(methodName, DDParamType)      DDFLEX_CHAIN_IMPLEMENTATION(methodName, DDParamType, DDSwitchChainModel *, UISwitch)
@implementation DDSwitchChainModel

DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(on, BOOL);
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(onTintColor, UIColor *);
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(thumbTintColor, UIColor *);

DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(onImage, UIImage *);
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(offImage, UIImage *);

#pragma mark - UIControl
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(enabled, BOOL);
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(selected, BOOL);
DDFLEX_CHAIN_SWITCH_IMPLEMENTATION(highlighted, BOOL);

@end

DDFLEX_EX_IMPLEMENTATION(UISwitch, DDSwitchChainModel)
