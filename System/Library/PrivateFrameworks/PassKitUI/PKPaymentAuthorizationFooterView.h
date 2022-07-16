//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;
@protocol PKPaymentAuthorizationFooterViewDelegate;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate>
{
    UILabel *_labelView;	// 8 = 0x8
    PKGlyphView *_glyphView;	// 16 = 0x10
    UIButton *_payWithPasscodeButton;	// 24 = 0x18
    UILabel *_passbookPaymentDetailsView;	// 32 = 0x20
    UIView *_separatorView;	// 40 = 0x28
    UIView *_lockupView;	// 48 = 0x30
    NSString *_overrideString;	// 56 = 0x38
    unsigned long long _stateTransitionIndex;	// 64 = 0x40
    _Bool _deferringState;	// 72 = 0x48
    _Bool _deferredStateRequiresRetry;	// 73 = 0x49
    NSString *_deferredStateString;	// 80 = 0x50
    _Bool _biometricSuccessOutstanding;	// 88 = 0x58
    NSMutableArray *_completionHandlers;	// 96 = 0x60
    NSMutableArray *_deferredCompletionHandlers;	// 104 = 0x68
    NSLayoutConstraint *_separatorLeftConstraint;	// 112 = 0x70
    NSArray *_hiddenConstraints;	// 120 = 0x78
    NSArray *_staticRegularConstraints;	// 128 = 0x80
    NSMutableArray *_dynamicRegularConstraints;	// 136 = 0x88
    _Bool _compact;	// 144 = 0x90
    _Bool _compactUserIntent;	// 145 = 0x91
    long long _constraintState;	// 152 = 0x98
    long long _queuedConstraintState;	// 160 = 0xa0
    _Bool _constraintsDirty;	// 168 = 0xa8
    _Bool _isPad;	// 169 = 0xa9
    _Bool _hasPearl;	// 170 = 0xaa
    double _minimumHeight;	// 176 = 0xb0
    unsigned int _emphasizedEdge;	// 184 = 0xb8
    _Bool _occludesBodyView;	// 188 = 0xbc
    _Bool _hidesSeparatorView;	// 189 = 0xbd
    _Bool _preventPasscodeFallbackForBiometricFailure;	// 190 = 0xbe
    _Bool _preventBiometricStateFallbacks;	// 191 = 0xbf
    long long _state;	// 192 = 0xc0
    PKPaymentAuthorizationLayout *_layout;	// 200 = 0xc8
    unsigned long long _requestType;	// 208 = 0xd0
    unsigned long long _confirmationStyle;	// 216 = 0xd8
    long long _userIntentStyle;	// 224 = 0xe0
    NSString *_biometricConfirmationTitle;	// 232 = 0xe8
    NSString *_confirmationTitle;	// 240 = 0xf0
    NSString *_authorizingTitle;	// 248 = 0xf8
    long long _completionStyle;	// 256 = 0x100
    id <PKPaymentAuthorizationFooterViewDelegate> _delegate;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000003c47cc
@property(nonatomic) __weak id <PKPaymentAuthorizationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool preventBiometricStateFallbacks; // @synthesize preventBiometricStateFallbacks=_preventBiometricStateFallbacks;
@property(nonatomic) _Bool preventPasscodeFallbackForBiometricFailure; // @synthesize preventPasscodeFallbackForBiometricFailure=_preventPasscodeFallbackForBiometricFailure;
@property(nonatomic) long long completionStyle; // @synthesize completionStyle=_completionStyle;
@property(nonatomic) _Bool hidesSeparatorView; // @synthesize hidesSeparatorView=_hidesSeparatorView;
@property(nonatomic) _Bool occludesBodyView; // @synthesize occludesBodyView=_occludesBodyView;
@property(retain, nonatomic) NSString *authorizingTitle; // @synthesize authorizingTitle=_authorizingTitle;
@property(retain, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain, nonatomic) NSString *biometricConfirmationTitle; // @synthesize biometricConfirmationTitle=_biometricConfirmationTitle;
@property(nonatomic) long long userIntentStyle; // @synthesize userIntentStyle=_userIntentStyle;
@property(nonatomic) unsigned long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)_payWithPasscodePressed;	// IMP=0x00000000003c45e8
- (void)glyphViewUserIntentEdgeDidChange:(id)arg1;	// IMP=0x00000000003c457a
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;	// IMP=0x00000000003c450c
- (id)_payWithPasscodeTitleForState:(long long)arg1;	// IMP=0x00000000003c4428
- (id)_titleAttributedStringForState:(long long)arg1;	// IMP=0x00000000003c4178
- (id)_titleLabelAttributedString:(id)arg1;	// IMP=0x00000000003c3fe0
- (void)_prepareConstraints;	// IMP=0x00000000003c372c
- (void)updateConstraints;	// IMP=0x00000000003c31a9
- (id)createDefaultHeightConstraintForConstraintState:(long long)arg1;	// IMP=0x00000000003c2f84
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000003c2e1e
- (void)updateRotation;	// IMP=0x00000000003c2e01
- (void)_createSubviews;	// IMP=0x00000000003c28d7
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003c06ae
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003c0699
- (_Bool)setConstraintState:(long long)arg1;	// IMP=0x00000000003c0627
- (_Bool)_shouldCompact;	// IMP=0x00000000003c0553
- (void)dealloc;	// IMP=0x00000000003c04e4
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;	// IMP=0x00000000003c0360
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003c034c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
