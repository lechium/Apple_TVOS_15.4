//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryMutableViewControllerTransition-Protocol.h>
#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <PhotosUICore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSString, PXDisplayLink, PXStoryItemPlacement, PXStoryViewControllerItemPlacementInterpolator, UIPercentDrivenInteractiveTransition, UIView, UIViewController, _PXStoryTransitionEndPointInfo;
@protocol PXStoryViewControllerTransitionEndPoint, UIViewControllerContextTransitioning;

@interface PXStoryViewControllerTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, PXStoryMutableViewControllerTransition>
{
    _Bool _isVerticalOnly;	// 8 = 0x8
    _Bool _isEnding;	// 9 = 0x9
    _Bool _isInteractive;	// 10 = 0xa
    double fractionCompleted;	// 16 = 0x10
    PXStoryItemPlacement *_summaryItemPlacementOverride;	// 24 = 0x18
    PXStoryItemPlacement *_detailItemPlacementOverride;	// 32 = 0x20
    UIViewController *_summaryViewController;	// 40 = 0x28
    UIViewController *_detailViewController;	// 48 = 0x30
    PXStoryItemPlacement *_summaryItemOriginalPlacement;	// 56 = 0x38
    PXStoryItemPlacement *_detailItemOriginalPlacement;	// 64 = 0x40
    UIViewController *_presentedViewController;	// 72 = 0x48
    UIViewController *_presentingViewController;	// 80 = 0x50
    long long _transitionKind;	// 88 = 0x58
    UIPercentDrivenInteractiveTransition *_interactiveTransition;	// 96 = 0x60
    id <UIViewControllerContextTransitioning> _transitionContext;	// 104 = 0x68
    double _transitionDuration;	// 112 = 0x70
    UIView *_fromContentView;	// 120 = 0x78
    UIView *_toContentView;	// 128 = 0x80
    CDUnknownBlockType _animationUpdateBlock;	// 136 = 0x88
    PXDisplayLink *_displayLink;	// 144 = 0x90
    PXStoryViewControllerItemPlacementInterpolator *_itemPlacementInterpolator;	// 152 = 0x98
    NSArray *_endPointInfos;	// 160 = 0xa0
    CDUnknownBlockType _completionHandler;	// 168 = 0xa8
    id <PXStoryViewControllerTransitionEndPoint> _summaryEndPoint;	// 176 = 0xb0
    id <PXStoryViewControllerTransitionEndPoint> _detailEndPoint;	// 184 = 0xb8
}

+ (id)interactiveDismissalOfDetailViewController:(id)arg1;	// IMP=0x000000000029742b
+ (void)prepareDismissalOfDetailViewController:(id)arg1;	// IMP=0x0000000000297408
+ (id)_transitionWithDetailViewController:(id)arg1 createIfNeeded:(_Bool)arg2 verticalOnly:(_Bool)arg3;	// IMP=0x0000000000297059
+ (id)transitionWithDetailViewController:(id)arg1;	// IMP=0x0000000000297042
+ (id)_createTransitionWithSummaryViewController:(id)arg1 presentedViewController:(id)arg2 detailViewController:(id)arg3;	// IMP=0x0000000000296ece
+ (void)prepareTransitionFromSummaryViewController:(id)arg1 toPresentedViewController:(id)arg2 detailViewController:(id)arg3;	// IMP=0x0000000000296ae7
- (void).cxx_destruct;	// IMP=0x0000000000295c0f
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) id <PXStoryViewControllerTransitionEndPoint> detailEndPoint; // @synthesize detailEndPoint=_detailEndPoint;
@property(readonly, nonatomic) id <PXStoryViewControllerTransitionEndPoint> summaryEndPoint; // @synthesize summaryEndPoint=_summaryEndPoint;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *endPointInfos; // @synthesize endPointInfos=_endPointInfos;
@property(retain, nonatomic) PXStoryViewControllerItemPlacementInterpolator *itemPlacementInterpolator; // @synthesize itemPlacementInterpolator=_itemPlacementInterpolator;
@property(retain, nonatomic) PXDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType animationUpdateBlock; // @synthesize animationUpdateBlock=_animationUpdateBlock;
@property(retain, nonatomic) UIView *toContentView; // @synthesize toContentView=_toContentView;
@property(retain, nonatomic) UIView *fromContentView; // @synthesize fromContentView=_fromContentView;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) _Bool isEnding; // @synthesize isEnding=_isEnding;
@property(nonatomic) long long transitionKind; // @synthesize transitionKind=_transitionKind;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) _Bool isVerticalOnly; // @synthesize isVerticalOnly=_isVerticalOnly;
@property(readonly, nonatomic) PXStoryItemPlacement *detailItemOriginalPlacement; // @synthesize detailItemOriginalPlacement=_detailItemOriginalPlacement;
@property(readonly, nonatomic) PXStoryItemPlacement *summaryItemOriginalPlacement; // @synthesize summaryItemOriginalPlacement=_summaryItemOriginalPlacement;
@property(readonly, nonatomic) UIViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) UIViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(copy, nonatomic) PXStoryItemPlacement *detailItemPlacementOverride; // @synthesize detailItemPlacementOverride=_detailItemPlacementOverride;
@property(copy, nonatomic) PXStoryItemPlacement *summaryItemPlacementOverride; // @synthesize summaryItemPlacementOverride=_summaryItemPlacementOverride;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted;
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000002958de
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000295696
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x000000000029553d
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000295352
- (id)interactionControllerForPresentation:(id)arg1;	// IMP=0x00000000002951f9
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000294ff1
- (void)_transitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000294965
- (void)_transitionDidUpdateWithTransitionTime:(double)arg1;	// IMP=0x000000000029430b
- (id)_transitionViewControllerForContentViewController:(id)arg1;	// IMP=0x00000000002941f1
- (_Bool)_isContentViewControllerHidden:(id)arg1;	// IMP=0x0000000000294179
- (struct CGRect)_rectInContainerViewFromRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2 inContentViewController:(id)arg3;	// IMP=0x0000000000293ffe
- (void)_transitionWillBegin;	// IMP=0x0000000000293a5e
- (void)_endTransitionAnimation:(_Bool)arg1;	// IMP=0x00000000002937fd
- (void)_handleDisplayLink:(id)arg1;	// IMP=0x00000000002937ca
- (void)_prepareTransitionAnimationWithReadinessHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029331b
- (_Bool)_isTransitionAllowedWithKind:(long long)arg1;	// IMP=0x0000000000293165
- (id)_initWithSummaryViewController:(id)arg1 presentedViewController:(id)arg2 detailViewController:(id)arg3;	// IMP=0x0000000000293034
- (void)finish;	// IMP=0x0000000000292f63
- (void)cancel;	// IMP=0x0000000000292e95
- (void)installCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000292dc9
- (void)setIsVerticalOnly:(_Bool)arg1;	// IMP=0x0000000000292cb2
- (void)setDetailItemOriginalPlacement:(id)arg1;	// IMP=0x0000000000292c2f
- (void)setSummaryItemOriginalPlacement:(id)arg1;	// IMP=0x0000000000292bac
@property(readonly, nonatomic) _PXStoryTransitionEndPointInfo *detailEndPointInfo;
@property(readonly, nonatomic) _PXStoryTransitionEndPointInfo *summaryEndPointInfo;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000292add
- (id)init;	// IMP=0x0000000000292a63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

