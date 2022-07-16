//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class NSString, PKGlyphView, UILabel;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    long long _style;	// 8 = 0x8
    double _glyphViewPadding;	// 16 = 0x10
    double _labelTopPadding;	// 24 = 0x18
    _Bool _didLayout;	// 32 = 0x20
    _Bool _biometricsUnavailableHint;	// 33 = 0x21
    _Bool _recognizingHint;	// 34 = 0x22
    _Bool _persistentEmulationHint;	// 35 = 0x23
    _Bool _accessPass;	// 36 = 0x24
    _Bool _homeKeyPass;	// 37 = 0x25
    long long _state;	// 40 = 0x28
    long long _layoutState;	// 48 = 0x30
    PKGlyphView *_glyph;	// 56 = 0x38
    UILabel *_label;	// 64 = 0x40
    UILabel *_debugLabel;	// 72 = 0x48
    double _labelStateBottomInset;	// 80 = 0x50
    double _labelAlpha;	// 88 = 0x58
    long long _userIntentStyle;	// 96 = 0x60
    id <PKPassPaymentPayStateViewDelegate> _delegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000027ec0a
@property(nonatomic) __weak id <PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool homeKeyPass; // @synthesize homeKeyPass=_homeKeyPass;
@property(nonatomic) _Bool accessPass; // @synthesize accessPass=_accessPass;
@property(nonatomic) _Bool persistentEmulationHint; // @synthesize persistentEmulationHint=_persistentEmulationHint;
@property(nonatomic) long long userIntentStyle; // @synthesize userIntentStyle=_userIntentStyle;
@property(nonatomic) _Bool recognizingHint; // @synthesize recognizingHint=_recognizingHint;
@property(readonly, nonatomic) _Bool biometricsUnavailableHint; // @synthesize biometricsUnavailableHint=_biometricsUnavailableHint;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic) double labelStateBottomInset; // @synthesize labelStateBottomInset=_labelStateBottomInset;
@property(readonly, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;	// IMP=0x000000000027ea50
- (void)_configureLayoutMetrics;	// IMP=0x000000000027e995
- (id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000027e668
- (id)_attributedTextWithTitle:(id)arg1;	// IMP=0x000000000027e654
- (id)_titleForUserIntent;	// IMP=0x000000000027e64c
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;	// IMP=0x000000000027e3cc
- (void)setBiometricsUnavailableHint:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000027e358
- (_Bool)_canEmphasizeState:(long long)arg1;	// IMP=0x000000000027e2a9
- (void)updateDebugLabel:(id)arg1 isErrorState:(_Bool)arg2;	// IMP=0x000000000027e1fe
- (void)emphasizeStateIfPossible:(long long)arg1 withOverrideText:(id)arg2;	// IMP=0x000000000027e0cd
- (_Bool)labelWillChangeForState:(long long)arg1 withOverrideText:(id)arg2;	// IMP=0x000000000027e055
- (void)_applyStatePreservingGlyphState:(_Bool)arg1 overridingText:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000027dcb0
- (void)setState:(long long)arg1 animated:(_Bool)arg2 withOverrideText:(id)arg3 preserveGlyphState:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000027dba2
- (void)setState:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027db7d
- (_Bool)_canPreserveGlyphForState:(long long)arg1;	// IMP=0x000000000027db70
- (long long)_defaultGlyphStateForState:(long long)arg1;	// IMP=0x000000000027daa1
- (void)layoutSubviews;	// IMP=0x000000000027d6b8
- (void)_resolveLayout;	// IMP=0x000000000027d5ea
- (void)dealloc;	// IMP=0x000000000027d57b
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000027d3bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

