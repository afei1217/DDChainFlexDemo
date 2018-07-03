//
//  DDTableViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDTableViewChainModel;
@interface DDTableViewChainModel : DDBaseViewChainModel<DDTableViewChainModel *>

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ delegate)(id<UITableViewDelegate> delegate);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ dataSource)(id<UITableViewDataSource> dataSource);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ rowHeight)(CGFloat rowHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ sectionHeaderHeight)(CGFloat sectionHeaderHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ sectionFooterHeight)(CGFloat sectionFooterHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ estimatedRowHeight)(CGFloat estimatedRowHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ estimatedSectionHeaderHeight)(CGFloat estimatedSectionHeaderHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ estimatedSectionFooterHeight)(CGFloat estimatedSectionFooterHeight);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ separatorInset)(UIEdgeInsets separatorInset);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ editing)(BOOL editing);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ allowsSelection)(BOOL allowsSelection);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ allowsMultipleSelection)(BOOL allowsMultipleSelection);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ allowsSelectionDuringEditing)(BOOL allowsSelectionDuringEditing);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ allowsMultipleSelectionDuringEditing)(BOOL allowsMultipleSelectionDuringEditing);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ separatorStyle)(UITableViewCellSeparatorStyle separatorStyle);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ separatorColor)(UIColor *separatorColor);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ tableHeaderView)(UIView * tableHeaderView);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ tableFooterView)(UIView * tableFooterView);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ sectionIndexBackgroundColor)(UIColor *sectionIndexBackgroundColor);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ sectionIndexColor)(UIColor *sectionIndexColor);

#pragma mark - UIScrollView
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ contentSize)(CGSize contentSize);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ contentOffset)(CGPoint contentOffset);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ contentInset)(UIEdgeInsets contentInset);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ bounces)(BOOL bounces);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ alwaysBounceVertical)(BOOL alwaysBounceVertical);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ alwaysBounceHorizontal)(BOOL alwaysBounceHorizontal);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ pagingEnabled)(BOOL pagingEnabled);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ scrollEnabled)(BOOL scrollEnabled);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ showsHorizontalScrollIndicator)(BOOL showsHorizontalScrollIndicator);
DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ showsVerticalScrollIndicator)(BOOL showsVerticalScrollIndicator);

DDFLEX_CHAIN_PROPERTY DDTableViewChainModel *(^ scrollsToTop)(BOOL scrollsToTop);


@end

DDFLEX_EX_INTERFACE(UITableView, DDTableViewChainModel)
