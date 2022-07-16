//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol PLExpandableViewDelegate;

@interface PLExpandableView : UIView
{
    id <PLExpandableViewDelegate> _delegate;	// 8 = 0x8
    CDUnknownBlockType _collapsingCompletionHandler;	// 16 = 0x10
    CDUnknownBlockType _expansionCompletionHandler;	// 24 = 0x18
    struct CGRect _contractedFrame;	// 32 = 0x20
    struct CGRect _expandedFrame;	// 64 = 0x40
    struct CGPoint _leftTouchLocation;	// 96 = 0x60
    struct CGPoint _rightTouchLocation;	// 112 = 0x70
    struct CGPoint _previousLeftLocation;	// 128 = 0x80
    struct CGPoint _previousRightLocation;	// 144 = 0x90
    unsigned long long _leftTouchIndex;	// 160 = 0xa0
    unsigned long long _rightTouchIndex;	// 168 = 0xa8
    double _pinchVelocity;	// 176 = 0xb0
    double _trackingTimeInterval;	// 184 = 0xb8
    double _expansionFraction;	// 192 = 0xc0
    struct {
        unsigned int state:3;
        unsigned int prevState:3;
        unsigned int tracking:1;
        unsigned int autorotationDisabled:1;
        unsigned int animationDisabled:1;
        unsigned int updateContractedFrame:1;
        unsigned int updateExpandedFrame:1;
        unsigned int allowsExpansion:1;
        unsigned int delegateWillBeginExpanding:1;
        unsigned int delegateWillCompleteExpanding:1;
        unsigned int delegateDidCompleteExpanding:1;
        unsigned int delegateWillCancelExpanding:1;
        unsigned int delegateDidCancelExpanding:1;
        unsigned int delegateDidBeginCollapsing:1;
        unsigned int delegateWillCompleteCollapsing:1;
        unsigned int delegateDidCompleteCollapsing:1;
        unsigned int delegateWillCancelCollapsing:1;
        unsigned int delegateDidCancelCollapsing:1;
        unsigned int delegateExpandedFractionChanged:1;
    } _expandFlags;	// 200 = 0xc8
}

- (_Bool)canCollapse;	// IMP=0x000000000001145e
- (_Bool)_canPinch;	// IMP=0x000000000001143b
- (_Bool)isTracking;	// IMP=0x0000000000011426
- (double)expansionFraction;	// IMP=0x0000000000011414
- (void)setExpansionFraction:(double)arg1;	// IMP=0x0000000000011402
- (int)previousState;	// IMP=0x00000000000113ec
- (int)state;	// IMP=0x00000000000113d9
@property(nonatomic) _Bool allowsExpansion;
@property(nonatomic) struct CGRect expandedFrame;
@property(nonatomic) struct CGRect contractedFrame;
- (id)delegate;	// IMP=0x000000000001102d
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000010e42
- (void)expandWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010d53
- (void)collapseWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010c6c
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;	// IMP=0x0000000000010c63
- (float)continueTrackingPinch:(id)arg1;	// IMP=0x0000000000010c5a
- (void)beginTrackingPinch:(id)arg1;	// IMP=0x0000000000010c54
- (struct CGRect)pinchRect:(struct CGRect)arg1 inView:(id)arg2 insetTouches:(_Bool)arg3;	// IMP=0x00000000000106ed
- (void)updatePinchState:(id)arg1;	// IMP=0x00000000000105f0
- (int)snapState:(_Bool)arg1;	// IMP=0x0000000000010558
- (void)finishTransitionToState:(int)arg1;	// IMP=0x00000000000104ba
- (void)finishTransition;	// IMP=0x0000000000010469
- (void)canceledPinch:(id)arg1;	// IMP=0x000000000001035e
- (void)finishedPinch:(id)arg1;	// IMP=0x000000000001021f
- (void)continuedPinch:(id)arg1;	// IMP=0x00000000000101a8
- (void)startedPinch:(id)arg1;	// IMP=0x000000000000ffcf
- (void)notifyExpansionFraction:(float)arg1 force:(_Bool)arg2;	// IMP=0x000000000000ff57
- (void)didMoveToWindow;	// IMP=0x000000000000fdd8
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000000fdb0
- (void)stateDidChangeFrom:(int)arg1;	// IMP=0x000000000000fdaa
- (void)stateWillChangeTo:(int)arg1;	// IMP=0x000000000000fda4
- (void)setState:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fbb9
- (void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fb66
- (void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fb12
- (void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fae8
- (void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000facf
- (void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fa7c
- (void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000fa28
- (void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000f9fe
- (void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2;	// IMP=0x000000000000f9e5
- (void)_notifyDidCancelCollapsing;	// IMP=0x000000000000f997
- (void)_notifyDidCancelExpanding;	// IMP=0x000000000000f949
- (void)_notifyWillBeginCollapsing;	// IMP=0x000000000000f8f8
- (void)_notifyDidCompleteExpanding;	// IMP=0x000000000000f8aa
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;	// IMP=0x000000000000f87a
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;	// IMP=0x000000000000f84a
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;	// IMP=0x000000000000f81a
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;	// IMP=0x000000000000f7ea
- (void)_notifyWillBeginExpanding;	// IMP=0x000000000000f799
- (void)_notifyDidCompleteCollapsing;	// IMP=0x000000000000f74b
- (void)_setAutorotationDisabled:(_Bool)arg1;	// IMP=0x000000000000f6aa
- (void)dealloc;	// IMP=0x000000000000f63f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000f5e7

@end

