//
//  DDScrollViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDScrollViewChainModel;
@interface DDScrollViewChainModel : DDBaseViewChainModel<DDScrollViewChainModel *>

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ delegate)(id<UIScrollViewDelegate> delegate);

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ contentSize)(CGSize contentSize);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ contentOffset)(CGPoint contentOffset);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ contentInset)(UIEdgeInsets contentInset);

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ bounces)(BOOL bounces);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ alwaysBounceVertical)(BOOL alwaysBounceVertical);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ alwaysBounceHorizontal)(BOOL alwaysBounceHorizontal);

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ pagingEnabled)(BOOL pagingEnabled);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ scrollEnabled)(BOOL scrollEnabled);

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ showsHorizontalScrollIndicator)(BOOL showsHorizontalScrollIndicator);
DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ showsVerticalScrollIndicator)(BOOL showsVerticalScrollIndicator);

DDFLEX_CHAIN_PROPERTY DDScrollViewChainModel *(^ scrollsToTop)(BOOL scrollsToTop);
@end

DDFLEX_EX_INTERFACE(UIScrollView, DDScrollViewChainModel)
