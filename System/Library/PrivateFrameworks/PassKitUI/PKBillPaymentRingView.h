//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKRenderLoopDelegate-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString, PKBillPaymentCircularView, PKBillPaymentRingGradientState, PKBillPaymentSuggestedAmount, PKBillPaymentSuggestedAmountList, PKCurvedTextLabel, PKEnterCurrencyAmountView, PKRenderLoop, PKRingGradientView, UIColor, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol PKBillPaymentRingViewDataSource, PKBillPaymentRingViewDelegate;

@interface PKBillPaymentRingView : UIView <UIGestureRecognizerDelegate, PKRenderLoopDelegate>
{
    PKBillPaymentSuggestedAmountList *_suggestedAmountList;	// 8 = 0x8
    NSArray *_suggestedAmountViews;	// 16 = 0x10
    double _amountRoundingUnit;	// 24 = 0x18
    double _minimumPaymentAmount;	// 32 = 0x20
    double _maximumPaymentAmount;	// 40 = 0x28
    NSDictionary *_suggestedAmoutImages;	// 48 = 0x30
    NSArray *_suggestedAmountAngles;	// 56 = 0x38
    NSDictionary *_suggestedAmountsForAngle;	// 64 = 0x40
    NSDictionary *_standardRingStates;	// 72 = 0x48
    NSDictionary *_colorStops;	// 80 = 0x50
    NSDecimalNumber *_displayAmount;	// 88 = 0x58
    NSDecimalNumber *_overrideDisplayAmount;	// 96 = 0x60
    NSDecimalNumber *_effectiveDisplayAmount;	// 104 = 0x68
    _Bool _selectedSuggestedAmountIsTarget;	// 112 = 0x70
    PKBillPaymentSuggestedAmount *_selectedSuggestedAmount;	// 120 = 0x78
    PKBillPaymentSuggestedAmount *_highlightedSuggestedAmount;	// 128 = 0x80
    NSDecimalNumber *_pinnedAmount;	// 136 = 0x88
    double _pinnedAmountAngle;	// 144 = 0x90
    unsigned long long _pinnedAmountAngleIndex;	// 152 = 0x98
    PKRenderLoop *_renderLoop;	// 160 = 0xa0
    UITapGestureRecognizer *_tapRecognizer;	// 168 = 0xa8
    UILongPressGestureRecognizer *_pressRecognizer;	// 176 = 0xb0
    UIPanGestureRecognizer *_dragRecognizer;	// 184 = 0xb8
    double _lastDrawTime;	// 192 = 0xc0
    CDStruct_5c14e0b2 _spring;	// 200 = 0xc8
    CDStruct_f94998c4 _angleState;	// 256 = 0x100
    CDStruct_5c14e0b2 _responseSpring;	// 304 = 0x130
    CDStruct_f94998c4 _responseState;	// 360 = 0x168
    double _responseSpringElapsedDuration;	// 408 = 0x198
    CDStruct_5c14e0b2 _scaleSpring;	// 416 = 0x1a0
    CDStruct_f94998c4 _scaleState;	// 472 = 0x1d8
    _Bool _dragging;	// 520 = 0x208
    _Bool _pressed;	// 521 = 0x209
    long long _dragCapture;	// 528 = 0x210
    _Bool _ignoreTouches;	// 536 = 0x218
    _Bool _dotsVisible;	// 537 = 0x219
    double _interestLabelAlpha;	// 544 = 0x220
    _Bool _needsInitialDisplay;	// 552 = 0x228
    NSDecimalNumber *_initialDisplayAmount;	// 560 = 0x230
    double _overrideGradientStartAngle;	// 568 = 0x238
    PKBillPaymentRingGradientState *_overrideGradientState;	// 576 = 0x240
    PKRingGradientView *_ringView;	// 584 = 0x248
    PKBillPaymentCircularView *_handleView;	// 592 = 0x250
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;	// 600 = 0x258
    UILabel *_interestLabel;	// 608 = 0x260
    PKCurvedTextLabel *_topCurvedTextLabel;	// 616 = 0x268
    PKCurvedTextLabel *_bottomCurvedTextLabel;	// 624 = 0x270
    _Bool _userSelectedAngleChange;	// 632 = 0x278
    _Bool _enabled;	// 633 = 0x279
    _Bool _isSmall;	// 634 = 0x27a
    id <PKBillPaymentRingViewDelegate> _delegate;	// 640 = 0x280
    id <PKBillPaymentRingViewDataSource> _dataSource;	// 648 = 0x288
}

- (void).cxx_destruct;	// IMP=0x0000000000148b54
@property(nonatomic) _Bool isSmall; // @synthesize isSmall=_isSmall;
@property(nonatomic) __weak id <PKBillPaymentRingViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PKBillPaymentRingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_createSuggestedAmountRingColorStops;	// IMP=0x000000000014893c
- (void)_createStandardColors;	// IMP=0x0000000000148606
- (void)_createSuggestedAmountAngles;	// IMP=0x0000000000147c73
- (void)_createSuggestedAmountsImageDictionary;	// IMP=0x0000000000147a50
- (id)_gradientStateForSuggestedAmount:(id)arg1;	// IMP=0x0000000000147800
- (id)_targetGradientStateForAngle:(double)arg1;	// IMP=0x00000000001475b0
- (id)_suggestedAmountImageForSuggestedAmount:(id)arg1;	// IMP=0x0000000000147499
- (id)_suggestedAmountForAngleIndex:(unsigned long long)arg1;	// IMP=0x0000000000147404
- (double)_angleForAngleIndex:(unsigned long long)arg1;	// IMP=0x0000000000147384
- (unsigned long long)_segmentEndAngleIndexForAngle:(double)arg1;	// IMP=0x000000000014730c
- (unsigned long long)_unnormalizedAngleIndexForAngle:(double)arg1;	// IMP=0x0000000000147233
- (double)_amountLabelMaximumFontSize;	// IMP=0x0000000000147214
- (double)_ringWidth;	// IMP=0x00000000001471f7
- (struct CGPoint)_center;	// IMP=0x0000000000147183
- (double)_offsetCurrentAngle;	// IMP=0x0000000000147164
- (double)_offsetAngle:(double)arg1;	// IMP=0x0000000000147156
- (struct CGPoint)_centerPointAtAngle:(double)arg1;	// IMP=0x0000000000147078
- (_Bool)_isAmount:(id)arg1 withinRoundingUnitOfAmount:(id)arg2;	// IMP=0x0000000000146fe0
- (id)_roundedAmountForAngle:(double)arg1;	// IMP=0x0000000000146c45
- (double)_angleForAmount:(id)arg1;	// IMP=0x00000000001469c0
- (void)_pauseRenderLoop;	// IMP=0x0000000000146962
- (void)_updateInterestText;	// IMP=0x000000000014658d
- (void)_updateHandleImage;	// IMP=0x0000000000146467
- (void)_setHighlightedSuggestedAmount:(id)arg1;	// IMP=0x00000000001463f6
- (void)_setSelectedSuggestedAmount:(id)arg1;	// IMP=0x0000000000146238
- (_Bool)_updateEffectiveDisplayAmount;	// IMP=0x0000000000146183
- (_Bool)_setDisplayAmount:(id)arg1;	// IMP=0x0000000000146109
- (void)_setDotsVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000145e7c
- (void)_setResponse:(double)arg1;	// IMP=0x0000000000145e34
- (void)_updateCurvedText;	// IMP=0x0000000000145ce6
- (void)_updateForEnabledState;	// IMP=0x0000000000145b8e
- (id)_blendFromLinearColor:(id)arg1 toLinearColor:(id)arg2 withProgress:(double)arg3;	// IMP=0x0000000000145984
- (id)_blendFromGradientState:(id)arg1 toState:(id)arg2 withProgress:(double)arg3;	// IMP=0x0000000000145811
- (void)_updatePausedState;	// IMP=0x0000000000145763
- (_Bool)_preferredPausedState;	// IMP=0x000000000014573c
- (void)setHandleScale:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000145693
- (void)setAngle:(double)arg1 animated:(_Bool)arg2 forExplicitAmount:(id)arg3 userInitiated:(_Bool)arg4;	// IMP=0x0000000000144ed7
- (void)didUpdateScaleSpringPosition;	// IMP=0x0000000000144dfd
- (void)didUpdateAngleSpringPosition;	// IMP=0x00000000001449e2
- (void)didUpdateAngleSpringTarget;	// IMP=0x00000000001448bf
@property(readonly, nonatomic) double ringWidth;
@property(readonly, copy, nonatomic) UIColor *currentEndColor;
@property(readonly, copy, nonatomic) UIColor *currentStartColor;
@property(readonly, nonatomic) double targetAngle;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount;
- (void)setAmount:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000144616
- (void)completeInitialDisplayAnimated:(_Bool)arg1;	// IMP=0x00000000001445b6
- (void)prepareForInitialDisplayWithAmount:(id)arg1;	// IMP=0x00000000001444d0
- (void)_updateScaleTarget;	// IMP=0x00000000001443d8
- (void)_dragMovedToAngle:(double)arg1 normalizedRadius:(double)arg2;	// IMP=0x00000000001442ad
- (void)_dragEnded:(id)arg1;	// IMP=0x0000000000144281
- (void)_dragStarted:(id)arg1;	// IMP=0x0000000000144264
- (void)_dragMoved:(id)arg1;	// IMP=0x0000000000144191
- (void)_dragRecognizerChanged:(id)arg1;	// IMP=0x00000000001440e3
- (void)_pressRecognized:(id)arg1;	// IMP=0x0000000000144083
- (void)_tapRecognized:(id)arg1;	// IMP=0x0000000000144023
- (double)_angleForPosition:(struct CGPoint)arg1;	// IMP=0x0000000000143f8c
- (double)_angleForRecognizer:(id)arg1;	// IMP=0x0000000000143f58
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000143cdc
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000143cbd
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000143c98
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;	// IMP=0x0000000000143433
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000143409
- (void)layoutSubviews;	// IMP=0x0000000000142037
- (void)didMoveToWindow;	// IMP=0x0000000000141f95
- (void)dealloc;	// IMP=0x0000000000141f0b
- (id)initWithSuggestedAmountList:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000000014114d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000014113f
- (id)init;	// IMP=0x0000000000141131

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
