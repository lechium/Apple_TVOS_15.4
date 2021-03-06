//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, PXRegionOfInterest, UIPercentDrivenInteractiveTransition, UIViewController;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController *_internalMasterViewController;	// 8 = 0x8
    UIViewController *_internalDetailViewController;	// 16 = 0x10
    CDUnknownBlockType _transitionAnimationStartHandler;	// 24 = 0x18
    CDUnknownBlockType _transitionAnimationCompletionHandler;	// 32 = 0x20
    _Bool _supportsEdgeSwipeBackGesture;	// 40 = 0x28
    _Bool _interactive;	// 41 = 0x29
    _Bool _transitioningToDetail;	// 42 = 0x2a
    UIPercentDrivenInteractiveTransition *_interactionController;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    id __pauseToken;	// 64 = 0x40
    PXRegionOfInterest *_masterRegionOfInterest;	// 72 = 0x48
}

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;	// IMP=0x000000000083d1cd
- (void).cxx_destruct;	// IMP=0x000000000083d108
@property(nonatomic, getter=isTransitioningToDetail) _Bool transitioningToDetail; // @synthesize transitioningToDetail=_transitioningToDetail;
@property(retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest; // @synthesize masterRegionOfInterest=_masterRegionOfInterest;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) _Bool supportsEdgeSwipeBackGesture; // @synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture;
@property(retain, nonatomic, setter=_setPauseToken:) id _pauseToken; // @synthesize _pauseToken=__pauseToken;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000083cff4
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000083cf44
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1;	// IMP=0x000000000083cf3c
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
- (void)didEndTransition;	// IMP=0x000000000083ce7e
- (void)willEndTransition;	// IMP=0x000000000083cdf6
- (void)willStartTransition;	// IMP=0x000000000083cc6f
- (void)installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000083ca66
- (void)installTransitionAnimationStartHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000083c91b
@property(readonly, nonatomic) long long transitionIdentifier;
@property(readonly, nonatomic) __weak UIViewController *detailViewController;
@property(readonly, nonatomic) __weak UIViewController *masterViewController;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;	// IMP=0x000000000083c732
- (id)init;	// IMP=0x000000000083c6b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

