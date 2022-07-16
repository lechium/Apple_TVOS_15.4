//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class PKContactFieldConfiguration, PKUniqueAddressField, UIColor;
@protocol PKAddressTextFieldDelegate;

@interface PKAddressTextField : UITextField
{
    _Bool _isInvalid;	// 8 = 0x8
    PKUniqueAddressField *_addressField;	// 16 = 0x10
    PKContactFieldConfiguration *_contactFieldConfiguration;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    id <PKAddressTextFieldDelegate> _addressDelegate;	// 40 = 0x28
    UIColor *_defaultColor;	// 48 = 0x30
    UIColor *_invalidColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000208fd6
@property(retain, nonatomic) UIColor *invalidColor; // @synthesize invalidColor=_invalidColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(readonly, nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) __weak id <PKAddressTextFieldDelegate> addressDelegate; // @synthesize addressDelegate=_addressDelegate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) PKContactFieldConfiguration *contactFieldConfiguration; // @synthesize contactFieldConfiguration=_contactFieldConfiguration;
@property(retain, nonatomic) PKUniqueAddressField *addressField; // @synthesize addressField=_addressField;
- (void)setIsInvalid:(_Bool)arg1 showErrorGlyph:(_Bool)arg2;	// IMP=0x0000000000208e80
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x0000000000208de9
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000208bcc

@end

