//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface MPButton : UIButton
{
    unsigned int _holding:1;	// 8 = 0x8
    UIView *_hitTestDebugView;	// 16 = 0x10
    _Bool _hitTestDebugEnabled;	// 24 = 0x18
    double _holdDelayInterval;	// 32 = 0x20
    struct UIEdgeInsets _alignmentRectInsets;	// 40 = 0x28
    struct UIEdgeInsets _hitRectInsets;	// 72 = 0x48
}

+ (id)easyTouchButtonWithType:(long long)arg1;	// IMP=0x000000000009c5e2
+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;	// IMP=0x000000000009c5cb
- (void).cxx_destruct;	// IMP=0x000000000009c5b8
@property(nonatomic) _Bool hitTestDebugEnabled; // @synthesize hitTestDebugEnabled=_hitTestDebugEnabled;
@property(nonatomic) double holdDelayInterval; // @synthesize holdDelayInterval=_holdDelayInterval;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
- (void)_handleTouchUp;	// IMP=0x000000000009c4e8
- (void)_handleTouchDown;	// IMP=0x000000000009c4a5
- (void)_handleTouchCancel;	// IMP=0x000000000009c447
- (void)_delayedTriggerHold;	// IMP=0x000000000009c3f9
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009c3bd
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009c381
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(readonly, nonatomic, getter=isHolding) _Bool holding;
- (void)layoutSubviews;	// IMP=0x000000000009c071
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000009c022
- (struct CGRect)hitRect;	// IMP=0x000000000009bfa7
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009bf66
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000009bf25
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009be98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009be1e

@end

