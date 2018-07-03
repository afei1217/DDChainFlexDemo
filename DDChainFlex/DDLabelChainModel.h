//
//  DDLabelChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDLabelChainModel;
@interface DDLabelChainModel : DDBaseViewChainModel<DDLabelChainModel *>

DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ text)(NSString *text);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ font)(UIFont *font);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ textColor)(UIColor *textColor);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ attributedText)(NSAttributedString *attributedText);

DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ numberOfLines)(NSInteger numberOfLines);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ lineBreakMode)(NSLineBreakMode lineBreakMode);
DDFLEX_CHAIN_PROPERTY DDLabelChainModel *(^ adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);

@end

DDFLEX_EX_INTERFACE(UILabel, DDLabelChainModel);
