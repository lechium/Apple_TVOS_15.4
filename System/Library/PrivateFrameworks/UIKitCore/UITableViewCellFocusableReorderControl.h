//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableReorderControl <_UIFloatingContentViewDelegate>
{
    _UIFloatingContentView *_floatingContentView;	// 152 = 0x98
    UIPanGestureRecognizer *_panRecognizer;	// 160 = 0xa0
    UITapGestureRecognizer *_upArrowButtonRecognizer;	// 168 = 0xa8
    UITapGestureRecognizer *_downArrowButtonRecognizer;	// 176 = 0xb0
    _Bool _cellHasReorderingAppearance;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000d19e2a
- (void)_downArrowButton:(id)arg1;	// IMP=0x0000000000d19de9
- (void)_upArrowButton:(id)arg1;	// IMP=0x0000000000d19dab
- (void)_arrowButton:(long long)arg1;	// IMP=0x0000000000d19bfb
- (void)_panRecognizer:(id)arg1;	// IMP=0x0000000000d199e2
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d198f1
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d19819
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d19767
- (_Bool)_shouldHandlePressEvent:(id)arg1;	// IMP=0x0000000000d196f9
- (void)_endIndirectTracking;	// IMP=0x0000000000d1961a
- (void)_beginIndirectTracking;	// IMP=0x0000000000d19495
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1948f
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d19487
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1947f
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000d19416
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000d192e2
- (void)_updateFocusedFloatingContentView:(_Bool)arg1;	// IMP=0x0000000000d19283
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x0000000000d1920b
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000d19152
- (_Bool)wantsMaskingWhileAnimatingDisabled;	// IMP=0x0000000000d19135
- (void)layoutSubviews;	// IMP=0x0000000000d190c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000d1906a
- (void)_updateFloatingViewForCurrentTraits;	// IMP=0x0000000000d18e6f
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x0000000000d18afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
