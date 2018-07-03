//
//  DDViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDViewChainModel;
@interface DDViewChainModel : DDBaseViewChainModel<DDViewChainModel *>

@end

DDFLEX_EX_INTERFACE(UIView, DDViewChainModel)
