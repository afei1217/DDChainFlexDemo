//
//  DDTextFieldChainModel.h
//  DDChainFlex
//
//  Created by Void on 2018/7/3.
//  Copyright © 2018年 afei. All rights reserved.
//

#import "DDBaseViewChainModel.h"

@class DDTextFieldChainModel;
@interface DDTextFieldChainModel : DDBaseViewChainModel<DDTextFieldChainModel *>

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ text)(NSString *text);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ attributedText)(NSAttributedString *attributedText);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ font)(UIFont *font);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ textColor)(UIColor *textColor);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ borderStyle)(UITextBorderStyle borderStyle);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ defaultTextAttributes)(NSDictionary *defaultTextAttributes);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ placeholder)(NSString *placeholder);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ attributedPlaceholder)(NSAttributedString *attributedPlaceholder);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ keyboardType)(UIKeyboardType keyboardType);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ clearsOnBeginEditing)(BOOL clearsOnBeginEditing);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ minimumFontSize)(CGFloat minimumFontSize);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ delegate)(id<UITextFieldDelegate> delegate);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ background)(UIImage *background);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ disabledBackground)(UIImage *disabledBackground);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ allowsEditingTextAttributes)(BOOL allowsEditingTextAttributes);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ typingAttributes)(NSDictionary *typingAttributes);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ clearButtonMode)(UITextFieldViewMode clearButtonMode);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ leftView)(UIView *leftView);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ leftViewMode)(UITextFieldViewMode leftViewMode);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ rightView)(UIView *rightView);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ rightViewMode)(UITextFieldViewMode rightViewMode);

DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ inputView)(UIView *inputView);
DDFLEX_CHAIN_PROPERTY DDTextFieldChainModel *(^ inputAccessoryView)(UIView *inputAccessoryView);

@end

DDFLEX_EX_INTERFACE(UITextField, DDTextFieldChainModel)
