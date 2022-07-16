//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXPinchTracker, PXRegionOfInterest, UIPinchGestureRecognizer, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerPinchTransition
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 8 = 0x8
    long long __state;	// 16 = 0x10
    id <UIViewControllerContextTransitioning> __transitionContext;	// 24 = 0x18
    UIView *__fromView;	// 32 = 0x20
    UIView *__toView;	// 40 = 0x28
    UIView *__fromSnapshotView;	// 48 = 0x30
    UIView *__toSnapshotView;	// 56 = 0x38
    UIView *__dimmingView;	// 64 = 0x40
    PXRegionOfInterest *__regionOfInterest;	// 72 = 0x48
    PXPinchTracker *__pinchTracker;	// 80 = 0x50
}

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;	// IMP=0x000000000007f827
- (void).cxx_destruct;	// IMP=0x0000000000080cc6
@property(retain, nonatomic, setter=_setPinchTracker:) PXPinchTracker *_pinchTracker; // @synthesize _pinchTracker=__pinchTracker;
@property(retain, nonatomic, setter=_setRegionOfInterest:) PXRegionOfInterest *_regionOfInterest; // @synthesize _regionOfInterest=__regionOfInterest;
@property(retain, nonatomic, setter=_setDimmingView:) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(retain, nonatomic, setter=_setToSnapshotView:) UIView *_toSnapshotView; // @synthesize _toSnapshotView=__toSnapshotView;
@property(retain, nonatomic, setter=_setFromSnapshotView:) UIView *_fromSnapshotView; // @synthesize _fromSnapshotView=__fromSnapshotView;
@property(retain, nonatomic, setter=_setToView:) UIView *_toView; // @synthesize _toView=__toView;
@property(retain, nonatomic, setter=_setFromView:) UIView *_fromView; // @synthesize _fromView=__fromView;
@property(retain, nonatomic, setter=_setTransitionContext:) id <UIViewControllerContextTransitioning> _transitionContext; // @synthesize _transitionContext=__transitionContext;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x0000000000080b56
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000080530
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000804d9
- (_Bool)isInteractive;	// IMP=0x00000000000804d1
- (void)_update;	// IMP=0x000000000007f98b
- (void)pinchGestureRecognizerDidChange;	// IMP=0x000000000007f89f

@end

