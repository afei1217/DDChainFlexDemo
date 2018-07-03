//
//  DDImageViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDImageViewChainModel;
@interface DDImageViewChainModel : DDBaseViewChainModel<DDImageViewChainModel *>

DDFLEX_CHAIN_PROPERTY DDImageViewChainModel *(^ image)(UIImage *image);
DDFLEX_CHAIN_PROPERTY DDImageViewChainModel *(^ highlightedImage)(UIImage *highlightedImage);
DDFLEX_CHAIN_PROPERTY DDImageViewChainModel *(^ highlighted)(BOOL highlighted);

@end

DDFLEX_EX_INTERFACE(UIImageView, DDImageViewChainModel)
