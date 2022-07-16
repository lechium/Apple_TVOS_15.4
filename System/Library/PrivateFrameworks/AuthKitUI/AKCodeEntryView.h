//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AuthKitUI/UIKeyInput-Protocol.h>

@class NSArray, NSMutableString, NSString, UILabel, UITapGestureRecognizer, UITextInputPasswordRules;

@interface AKCodeEntryView : UIView <UIKeyInput>
{
    NSMutableString *_stringValue;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    _Bool _passcodeFieldDisabled;	// 24 = 0x18
    NSArray *_generatorFields;	// 32 = 0x20
    NSArray *_activeConstraints;	// 40 = 0x28
}

+ (id)generatorFieldFont;	// IMP=0x000000000000a3fd
- (void).cxx_destruct;	// IMP=0x000000000000a512
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *generatorFields; // @synthesize generatorFields=_generatorFields;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;	// IMP=0x000000000000a3e5
- (void)passcodeFieldTapped:(id)arg1;	// IMP=0x000000000000a3ae
- (void)deleteBackward;	// IMP=0x000000000000a314
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;	// IMP=0x000000000000a179
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
- (_Bool)becomeFirstResponder;	// IMP=0x000000000000a0e7
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000000a0d3
@property(copy, nonatomic) NSString *stringValue;
- (void)emitCodeEnteredNotification;	// IMP=0x0000000000009ef3
@property(readonly, nonatomic) UILabel *firstGeneratorField;
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000009ec4
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000009eb2
- (void)updateConstraints;	// IMP=0x0000000000009a43
- (void)_syncStringValueToLabels;	// IMP=0x000000000000991c
- (void)_updateFonts:(id)arg1;	// IMP=0x000000000000979d
- (void)dealloc;	// IMP=0x000000000000971b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000093cb

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

