//
//  DDTextViewChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDTextViewChainModel;
@interface DDTextViewChainModel : DDBaseViewChainModel<DDTextViewChainModel *>

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ delegate)(id<UITextViewDelegate> delegate);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ text)(NSString *text);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ font)(UIFont *font);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ textColor)(UIColor *textColor);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ selectedRange)(NSRange numberOfLines);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ editable)(BOOL editable);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ selectable)(BOOL selectable);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ dataDetectorTypes)(UIDataDetectorTypes dataDetectorTypes);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ keyboardType)(UIKeyboardType keyboardType);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ allowsEditingTextAttributes)(BOOL allowsEditingTextAttributes);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ attributedText)(NSAttributedString *attributedText);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ typingAttributes)(NSDictionary *typingAttributes);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ clearsOnInsertion)(BOOL clearsOnInsertion);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ textContainerInset)(UIEdgeInsets textContainerInset);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ linkTextAttributes)(NSDictionary *linkTextAttributes);

#pragma mark - UIScrollView
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ contentSize)(CGSize contentSize);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ contentOffset)(CGPoint contentOffset);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ contentInset)(UIEdgeInsets contentInset);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ bounces)(BOOL bounces);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ alwaysBounceVertical)(BOOL alwaysBounceVertical);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ alwaysBounceHorizontal)(BOOL alwaysBounceHorizontal);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ pagingEnabled)(BOOL pagingEnabled);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ scrollEnabled)(BOOL scrollEnabled);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ showsHorizontalScrollIndicator)(BOOL showsHorizontalScrollIndicator);
DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ showsVerticalScrollIndicator)(BOOL showsVerticalScrollIndicator);

DDFLEX_CHAIN_PROPERTY DDTextViewChainModel *(^ scrollsToTop)(BOOL scrollsToTop);

@end

DDFLEX_EX_INTERFACE(UITextView, DDTextViewChainModel)
