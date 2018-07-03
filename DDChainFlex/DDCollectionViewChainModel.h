//
//  DDCollectionViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDCollectionViewChainModel;
@interface DDCollectionViewChainModel : DDBaseViewChainModel<DDCollectionViewChainModel *>

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ delegate)(id<UICollectionViewDelegate> delegate);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ collectionViewLayout)(UICollectionViewLayout *collectionViewLayout);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ dataSource)(id<UICollectionViewDataSource> dataSource);

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ allowsSelection)(BOOL allowsSelection);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ allowsMultipleSelection)(BOOL allowsMultipleSelection);

#pragma mark - UIScrollView

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ contentSize)(CGSize contentSize);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ contentOffset)(CGPoint contentOffset);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ contentInset)(UIEdgeInsets contentInset);

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ bounces)(BOOL bounces);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ alwaysBounceVertical)(BOOL alwaysBounceVertical);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ alwaysBounceHorizontal)(BOOL alwaysBounceHorizontal);

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ pagingEnabled)(BOOL pagingEnabled);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ scrollEnabled)(BOOL scrollEnabled);

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ showsHorizontalScrollIndicator)(BOOL showsHorizontalScrollIndicator);
DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ showsVerticalScrollIndicator)(BOOL showsVerticalScrollIndicator);

DDFLEX_CHAIN_PROPERTY DDCollectionViewChainModel *(^ scrollsToTop)(BOOL scrollsToTop);

@end

DDFLEX_EX_INTERFACE(UICollectionView, DDCollectionViewChainModel)
