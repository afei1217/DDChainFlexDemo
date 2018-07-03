//
//  DDSwitchChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//  没有添加控制事件 目前所有的链式API 都只添加了常用属性

#import "DDBaseViewChainModel.h"

@class DDSwitchChainModel;
@interface DDSwitchChainModel : DDBaseViewChainModel<DDSwitchChainModel *>

DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ on)(BOOL on);
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ onTintColor)(UIColor *onTintColor);
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ thumbTintColor)(UIColor *thumbTintColor);

DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ onImage)(UIImage *onImage);
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ offImage)(UIImage *offImage);

#pragma mark - UIControl
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ enabled)(BOOL enabled);
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ selected)(BOOL selected);
DDFLEX_CHAIN_PROPERTY DDSwitchChainModel *(^ highlighted)(BOOL highlighted);


@end

DDFLEX_EX_INTERFACE(UISwitch, DDSwitchChainModel)
