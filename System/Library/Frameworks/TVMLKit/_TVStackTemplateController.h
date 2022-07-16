//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVShowcasing-Protocol.h>
#import <TVMLKit/TVTabBarAdjusting-Protocol.h>
#import <TVMLKit/_TVStackViewDelegateFlowLayout-Protocol.h>

@class IKChangeSet, NSArray, NSIndexPath, NSMutableArray, NSString, UIView, UIViewController, _TVNeedsMoreContentEvaluator;

@interface _TVStackTemplateController <_TVStackViewDelegateFlowLayout, TVTabBarAdjusting, TVShowcasing>
{
    NSArray *_unfilteredViewControllers;	// 8 = 0x8
    IKChangeSet *_filteredChangeSet;	// 16 = 0x10
    NSArray *_viewControllers;	// 24 = 0x18
    NSMutableArray *_preloadQueue;	// 32 = 0x20
    NSArray *_stackSections;	// 40 = 0x28
    NSArray *_stackRows;	// 48 = 0x30
    double _contentHeight;	// 56 = 0x38
    double _showcaseFactor;	// 64 = 0x40
    NSIndexPath *_lastFocusedIndexPath;	// 72 = 0x48
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;	// 80 = 0x50
    UIViewController *_backdropTintViewController;	// 88 = 0x58
    UIView *_backdropTintView;	// 96 = 0x60
    _Bool _requiresShowcasing;	// 104 = 0x68
    _Bool _shouldInvalidateMetrics;	// 105 = 0x69
    struct {
        _Bool _preloadingScheduled;
    } _flags;	// 106 = 0x6a
    double _showcaseInset;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000008d3d8
@property(nonatomic) double showcaseInset; // @synthesize showcaseInset=_showcaseInset;
- (struct CGSize)_maxContentSize;	// IMP=0x000000000008d267
- (void)_updateBackgroundTintViewEffects;	// IMP=0x000000000008cff8
- (void)_updateBackgroundTintView;	// IMP=0x000000000008cd0f
- (void)_configureBackgroundTintView;	// IMP=0x000000000008c8d8
- (double)_offsetToScrollStop:(id)arg1;	// IMP=0x000000000008c48b
- (void)_updateFirstItemRowIndexes;	// IMP=0x000000000008c31b
- (void)_buildStackSections;	// IMP=0x000000000008a845
- (void)_invalidateSectionMetricsIfNeeded;	// IMP=0x000000000008a76f
- (double)_maxViewWidth;	// IMP=0x000000000008a6f2
- (_Bool)_didExtendContentForPeekMetrics:(CDStruct_6408a1ed *)arg1 above:(_Bool)arg2 initial:(_Bool)arg3;	// IMP=0x000000000008a3e2
- (struct UIEdgeInsets)_scrollableBoundsInset;	// IMP=0x000000000008a358
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint *)arg2;	// IMP=0x000000000008929d
- (void)_preloadNext;	// IMP=0x000000000008918a
- (void)_scheduleNextPreloadConditional;	// IMP=0x000000000008903f
- (id)_updateWithCollectionListElement:(id)arg1 commits:(CDUnknownBlockType *)arg2 autoHighlightIndexPath:(id *)arg3;	// IMP=0x0000000000087d8e
- (void)_scrollToTopAnimated:(_Bool)arg1;	// IMP=0x0000000000087acb
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000087a68
- (void)_embeddedListTemplateViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000008777e
- (id)_embeddedListTemplateViewFromDescendantView:(id)arg1;	// IMP=0x000000000008766b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000871b9
- (id)tabBarObservedScrollView;	// IMP=0x0000000000087165
- (void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2;	// IMP=0x0000000000087068
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000086ec3
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000086bc7
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000086ae3
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000086940
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000865b4
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000086474
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000086124
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000860a1
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000086022
- (void)mediaInfoDidChange;	// IMP=0x000000000008601c
- (void)showcaseFactorDidChange;	// IMP=0x0000000000086016
- (id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2;	// IMP=0x000000000008600e
- (id)scrollStopForShowcaseTransition;	// IMP=0x0000000000085f1a
- (void)didUpdateSectionInfo;	// IMP=0x0000000000085f14
- (_Bool)shouldAdjustForTabBarSafeAreaInsets;	// IMP=0x0000000000085ed0
- (void)updateBackgroundAndBackdropMaskFactor;	// IMP=0x0000000000085e23
- (void)updateBackgroundAndBackdrop;	// IMP=0x0000000000085c52
- (void)didUpdateSupplementarySectionInfo;	// IMP=0x00000000000859a3
- (long long)numberOfCollections;	// IMP=0x0000000000085986
- (void)updateCollectionViewControllersAndForceReload:(_Bool)arg1;	// IMP=0x000000000008484f
@property(readonly, nonatomic) double showcaseFactor;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000846a0
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000084366
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000842e8
- (void)viewDidLoad;	// IMP=0x0000000000083eaf
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000083acd
- (id)viewControllers;	// IMP=0x0000000000083ab8
- (void)dealloc;	// IMP=0x00000000000839ee
- (id)init;	// IMP=0x00000000000839a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

