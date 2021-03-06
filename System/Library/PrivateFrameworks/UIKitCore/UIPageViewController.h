//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDataSource-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>
{
    id <UIPageViewControllerDelegate> _delegate;	// 400 = 0x190
    id <UIPageViewControllerDataSource> _dataSource;	// 408 = 0x198
    long long _transitionStyle;	// 416 = 0x1a0
    long long _navigationOrientation;	// 424 = 0x1a8
    long long _spineLocation;	// 432 = 0x1b0
    _Bool _doubleSided;	// 440 = 0x1b8
    _Bool _pageControlRequiresValidation;	// 441 = 0x1b9
    NSArray *_viewControllers;	// 448 = 0x1c0
    _UIPageCurl *_pageCurl;	// 456 = 0x1c8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 464 = 0x1d0
    UITapGestureRecognizer *_tapGestureRecognizer;	// 472 = 0x1d8
    _Bool _stashingViewControllersForRotation;	// 480 = 0x1e0
    NSArray *_viewControllersStashedForRotation;	// 488 = 0x1e8
    _Bool _interfaceRotating;	// 496 = 0x1f0
    NSMutableArray *_rotationSnapshotViews;	// 504 = 0x1f8
    long long _spineLocationPriorToInterfaceRotation;	// 512 = 0x200
    struct UIEdgeInsets _tapRegionInsets;	// 520 = 0x208
    struct CGSize _tapRegionBreadths;	// 552 = 0x228
    struct UIEdgeInsets _effectiveTapRegionInsets;	// 568 = 0x238
    struct CGSize _effectiveTapRegionBreadths;	// 600 = 0x258
    struct CGRect *_tapRegions;	// 616 = 0x268
    double _pageSpacing;	// 624 = 0x270
    NSMutableDictionary *_cachedViewControllersForCurl;	// 632 = 0x278
    NSHashTable *_cachedViewControllersForScroll;	// 640 = 0x280
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;	// 648 = 0x288
    long long _lastKnownNavigationDirection;	// 656 = 0x290
    long long _disableAutorotationCount;	// 664 = 0x298
    struct {
        unsigned int delegateWantsTransitionWillBegin:1;
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateWantsTransitionsFinished:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _delegateFlags;	// 672 = 0x2a0
    id <UIPageViewControllerDataSource> _unsafeUnretainedDataSource;	// 680 = 0x2a8
    id <UIPageViewControllerDelegate> _unsafeUnretainedDelegate;	// 688 = 0x2b0
}

+ (id)_incomingViewControllerKeys;	// IMP=0x000000000040dabf
+ (id)_outgoingViewControllerKeys;	// IMP=0x000000000040da5f
+ (id)stringForSpineLocation:(long long)arg1;	// IMP=0x000000000040a68c
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;	// IMP=0x0000000000407671
+ (_Bool)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;	// IMP=0x000000000040764b
+ (_Bool)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;	// IMP=0x000000000040763e
+ (_Bool)_isSupportedTransitionStyle:(long long)arg1;	// IMP=0x0000000000407631
- (void).cxx_destruct;	// IMP=0x0000000000413bbf
@property(readonly, nonatomic, getter=_isInterfaceRotating) _Bool _interfaceRotating; // @synthesize _interfaceRotating;
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
- (void)_pageControlValueChanged:(id)arg1;	// IMP=0x00000000004139f5
- (_Bool)queuingScrollViewShouldLayoutSubviews:(id)arg1;	// IMP=0x00000000004139e1
- (void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;	// IMP=0x0000000000413962
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000004138af
- (void)_flushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004136eb
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;	// IMP=0x00000000004136d4
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;	// IMP=0x00000000004136ba
- (id)_queuingScrollView:(id)arg1 viewBefore:(_Bool)arg2 view:(id)arg3;	// IMP=0x0000000000413554
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;	// IMP=0x0000000000413506
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;	// IMP=0x000000000041339e
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(_Bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 didFinish:(_Bool)arg6 didComplete:(_Bool)arg7;	// IMP=0x0000000000412f4b
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(_Bool)arg6 canComplete:(_Bool)arg7;	// IMP=0x00000000004129d9
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(_Bool)arg5;	// IMP=0x00000000004124ca
- (void)_updatePageControlViaDataSourceIfNecessary;	// IMP=0x0000000000412352
- (void)_handlePagingInDirection:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000411fb0
- (void)_handleTapGesture:(id)arg1;	// IMP=0x0000000000411ee9
- (void)_handlePanGesture:(id)arg1;	// IMP=0x000000000041154c
- (_Bool)_shouldCompleteManualCurlWithSuggestedVelocity:(double *)arg1;	// IMP=0x00000000004114ba
- (long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double *)arg2;	// IMP=0x0000000000411257
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000411121
- (_Bool)_shouldBeginNavigationInDirection:(long long *)arg1 inResponseToPanGestureRecognizer:(id)arg2;	// IMP=0x0000000000410ed8
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToVelocity:(double *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;	// IMP=0x0000000000410d5a
- (_Bool)_shouldFlipInRightToLeft;	// IMP=0x0000000000410cea
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToTapGestureRecognizer:(id)arg2;	// IMP=0x0000000000410b6b
- (struct CGRect *)_tapRegions;	// IMP=0x000000000041052a
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1;	// IMP=0x000000000041013d
- (id)_deepestActionResponder;	// IMP=0x000000000040feea
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000040fd92
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000040fa79
- (void)_cacheViewControllerForScroll:(id)arg1;	// IMP=0x000000000040f9f7
- (void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(struct CGPoint)arg3 direction:(long long)arg4 animated:(_Bool)arg5 notifyDelegate:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000040dbf7
- (void)_endDisablingInterfaceAutorotation;	// IMP=0x000000000040db77
- (void)_beginDisablingInterfaceAutorotation;	// IMP=0x000000000040db1f
- (void)_invalidateViewControllersStashedForCurlFromDataSource;	// IMP=0x000000000040da42
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3;	// IMP=0x000000000040d8d7
- (void)_populateOutgoingViewControllersInMap:(id)arg1;	// IMP=0x000000000040d7d6
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2;	// IMP=0x000000000040d549
- (id)_viewControllerAfterViewController:(id)arg1;	// IMP=0x000000000040d532
- (id)_viewControllerBeforeViewController:(id)arg1;	// IMP=0x000000000040d518
- (id)_viewControllerBefore:(_Bool)arg1 viewController:(id)arg2;	// IMP=0x000000000040d47d
- (_Bool)_canHandleGestures;	// IMP=0x000000000040d437
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000040d1f1
- (_Bool)_isCurrentViewControllerStateValid;	// IMP=0x000000000040d190
- (void)_contentViewFrameOrBoundsDidChange;	// IMP=0x000000000040cf62
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000000040cb8e
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000040b6b7
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000040aaea
- (long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1;	// IMP=0x000000000040a999
- (void)_invalidatePageCurl;	// IMP=0x000000000040a95c
- (id)_viewControllersForPendingSpineLocation:(long long)arg1;	// IMP=0x000000000040a7a9
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange)arg2;	// IMP=0x000000000040a737
- (struct _NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1;	// IMP=0x000000000040a720
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000000040a614
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x000000000040a5b5
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000040a53d
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000040a448
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000040a3f9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000040a3a7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000040a355
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000040a0c5
- (void)_sendChildViewWill:(_Bool)arg1 appear:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000409ec8
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;	// IMP=0x0000000000409e72
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x0000000000409e12
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x0000000000409db2
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(_Bool)arg2;	// IMP=0x0000000000409d19
- (_Bool)_childCanEndAppearanceTransition:(id)arg1;	// IMP=0x0000000000409ca1
- (void)_childEndAppearanceTransition:(id)arg1;	// IMP=0x0000000000409c5a
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000409bf4
- (_Bool)_child:(id)arg1 canBeginAppearanceTransition:(_Bool)arg2;	// IMP=0x0000000000409b63
- (void)_child:(id)arg1 beginAppearanceTransition:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000409aef
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x0000000000409a57
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x0000000000409a34
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x0000000000409a2c
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x0000000000409a24
- (void)viewWillUnload;	// IMP=0x00000000004099ba
- (void)loadView;	// IMP=0x00000000004095ab
@property(nonatomic, setter=_setPageSpacing:) double _pageSpacing;
- (struct CGSize)_contentSizeForSize:(struct CGSize)arg1;	// IMP=0x00000000004094bd
- (id)_pageControl;	// IMP=0x000000000040946d
@property(readonly, nonatomic, getter=_isPageControlVisible) _Bool _pageControlVisible;
@property(readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property(readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
- (void)_setDisabledScrollingRegion:(struct CGRect)arg1;	// IMP=0x0000000000409320
- (struct CGRect)_disabledScrollingRegion;	// IMP=0x000000000040927d
- (void)_setTapRegionBreadths:(struct CGSize)arg1;	// IMP=0x000000000040923c
- (struct CGSize)_tapRegionBreadths;	// IMP=0x000000000040922a
- (struct CGSize)_effectiveTapRegionBreadths;	// IMP=0x000000000040904b
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000408fe1
- (struct UIEdgeInsets)_tapRegionInsets;	// IMP=0x0000000000408fc2
- (struct UIEdgeInsets)_effectiveTapRegionInsets;	// IMP=0x0000000000408dd6
- (void)_invalidateEffectiveTapRegions;	// IMP=0x0000000000408d82
@property(readonly, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic, getter=isDoubleSided) _Bool doubleSided;
@property(readonly, nonatomic) long long spineLocation;
- (void)_setSpineLocation:(long long)arg1;	// IMP=0x0000000000408b85
@property(readonly, nonatomic) long long navigationOrientation;
@property(readonly, nonatomic) long long _navigationOrientation;
@property(readonly, nonatomic) long long transitionStyle;
@property(readonly, nonatomic) long long _transitionStyle;
@property(nonatomic) __weak id <UIPageViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <UIPageViewControllerDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000407f6d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000407c7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000407a5d
- (id)preferredFocusedView;	// IMP=0x0000000000407a4b
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x0000000000407a43
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000407a2a
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;	// IMP=0x00000000004076a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

