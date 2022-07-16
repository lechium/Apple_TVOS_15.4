//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/UIContentConfiguration-Protocol.h>

@class NSError, NSString, UIColor, UIListContentConfiguration, UIListContentTextProperties;

@interface PKListTextFieldContentConfiguration : NSObject <UIContentConfiguration>
{
    UIListContentConfiguration *_backingConfig;	// 8 = 0x8
    _Bool _clearsOnBeginEditing;	// 16 = 0x10
    _Bool _clearsOnInsertion;	// 17 = 0x11
    _Bool _focusTextField;	// 18 = 0x12
    NSString *_placeholderText;	// 24 = 0x18
    long long _returnKeyType;	// 32 = 0x20
    long long _keyboardType;	// 40 = 0x28
    long long _autocorrectionType;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    UIColor *_errorColor;	// 64 = 0x40
    CDUnknownBlockType _hasErrorHandler;	// 72 = 0x48
}

+ (id)cellConfiguration;	// IMP=0x000000000019884e
- (void).cxx_destruct;	// IMP=0x0000000000198f2d
@property(copy, nonatomic) CDUnknownBlockType hasErrorHandler; // @synthesize hasErrorHandler=_hasErrorHandler;
@property(copy, nonatomic) UIColor *errorColor; // @synthesize errorColor=_errorColor;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool focusTextField; // @synthesize focusTextField=_focusTextField;
@property(nonatomic) _Bool clearsOnInsertion; // @synthesize clearsOnInsertion=_clearsOnInsertion;
@property(nonatomic) _Bool clearsOnBeginEditing; // @synthesize clearsOnBeginEditing=_clearsOnBeginEditing;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly) unsigned long long hash;
- (_Bool)_isEqualToListTextFieldContentConfiguration:(id)arg1;	// IMP=0x0000000000198c79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198c11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000198b9a
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x0000000000198b91
- (id)makeContentView;	// IMP=0x0000000000198b5b
@property(nonatomic) double textToSecondaryTextVerticalPadding;
@property(nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property(readonly, nonatomic) UIListContentTextProperties *textProperties;
- (id)initWithBackingConfig:(id)arg1;	// IMP=0x00000000001989f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
