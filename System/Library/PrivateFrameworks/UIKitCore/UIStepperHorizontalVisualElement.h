//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStepperVisualElement-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, UIButton, UIImageView, UIViewPropertyAnimator;
@protocol UIStepperControl;

__attribute__((visibility("hidden")))
@interface UIStepperHorizontalVisualElement <UIStepperVisualElement>
{
    _Bool _isRtoL;	// 112 = 0x70
    UIImageView *_leftBackground;	// 120 = 0x78
    UIImageView *_rightBackground;	// 128 = 0x80
    UIImageView *_leftHighlight;	// 136 = 0x88
    UIImageView *_rightHighlight;	// 144 = 0x90
    UIImageView *_middleView;	// 152 = 0x98
    UIButton *_plusButton;	// 160 = 0xa0
    UIButton *_minusButton;	// 168 = 0xa8
    NSTimer *_repeatTimer;	// 176 = 0xb0
    long long _repeatCount;	// 184 = 0xb8
    NSMutableDictionary *_dividerImages;	// 192 = 0xc0
    UIViewPropertyAnimator *_leftAlphaAnimator;	// 200 = 0xc8
    UIViewPropertyAnimator *_rightAlphaAnimator;	// 208 = 0xd0
    UIViewPropertyAnimator *_leftFrameAnimator;	// 216 = 0xd8
    UIViewPropertyAnimator *_rightFrameAnimator;	// 224 = 0xe0
    _Bool _autorepeat;	// 232 = 0xe8
    _Bool _continuous;	// 233 = 0xe9
    _Bool _enabled;	// 234 = 0xea
    _Bool _wraps;	// 235 = 0xeb
    double _value;	// 240 = 0xf0
    double _maximumValue;	// 248 = 0xf8
    double _minimumValue;	// 256 = 0x100
    id <UIStepperControl> _stepperControl;	// 264 = 0x108
    double _stepValue;	// 272 = 0x110
}

+ (id)_highlightOpacityAnimation;	// IMP=0x0000000000f04eab
+ (id)_highlightSizeAnimation;	// IMP=0x0000000000f04e3a
+ (struct UIEdgeInsets)initialAlignmentRectInsets;	// IMP=0x0000000000f0482e
+ (struct CGSize)initialIntrinsicSize;	// IMP=0x0000000000f0481c
+ (struct CGSize)initialSize;	// IMP=0x0000000000f04806
- (void).cxx_destruct;	// IMP=0x0000000000f07126
@property(nonatomic) _Bool wraps; // @synthesize wraps=_wraps;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) __weak id <UIStepperControl> stepperControl; // @synthesize stepperControl=_stepperControl;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) _Bool autorepeat; // @synthesize autorepeat=_autorepeat;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000f06ffb
- (id)decrementImageForState:(unsigned long long)arg1;	// IMP=0x0000000000f06fde
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000f06f2a
- (id)incrementImageForState:(unsigned long long)arg1;	// IMP=0x0000000000f06eb0
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000f06dfc
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;	// IMP=0x0000000000f06d2b
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;	// IMP=0x0000000000f06bf2
- (id)backgroundImageForState:(unsigned long long)arg1;	// IMP=0x0000000000f06bd5
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000f066b8
- (void)layoutSubviews;	// IMP=0x0000000000f06351
- (void)_updateCount:(id)arg1;	// IMP=0x0000000000f060a8
- (void)_stopTimer;	// IMP=0x0000000000f06070
- (void)_startTimer;	// IMP=0x0000000000f05ff8
- (struct UIEdgeInsets)alignmentRectInsetsForControl:(id)arg1;	// IMP=0x0000000000f05fc1
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000f05f4d
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f05ecc
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f05e68
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f05dcb
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f05d3c
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f05bfc
- (void)_updateDividerImageForButtonState;	// IMP=0x0000000000f05aa7
- (void)_updateBackgroundForButtonState;	// IMP=0x0000000000f05a93
- (void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(_Bool)arg6;	// IMP=0x0000000000f056a6
- (void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(_Bool)arg3;	// IMP=0x0000000000f0522e
- (id)_alphaAnimator:(_Bool)arg1;	// IMP=0x0000000000f0516e
- (struct CGRect)_rightHighlightInsetFrame;	// IMP=0x0000000000f0511c
- (struct CGRect)_rightHighlightFrame;	// IMP=0x0000000000f05041
- (struct CGRect)_leftHighlightInsetFrame;	// IMP=0x0000000000f04fef
- (struct CGRect)_leftHighlightFrame;	// IMP=0x0000000000f04f34
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000f04dfc
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f04cca
- (void)_updateButtonEnabled;	// IMP=0x0000000000f04baa
- (void)_commonStepperInit;	// IMP=0x0000000000f0495b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000f0492d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forControl:(id)arg2;	// IMP=0x0000000000f0491b
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1 forControl:(id)arg2;	// IMP=0x0000000000f04909
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000f04841
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f044df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

