//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXUIScrollViewDelegate-Protocol.h>
#import <PhotosUICore/UIScrollViewDelegate-Protocol.h>
#import <PhotosUICore/_PXUIScrollViewFocusItemProvider-Protocol.h>

@class NSString, UIScrollView, _PXUIScrollView;
@protocol PXUIScrollViewControllerFocusItemProvider;

@interface PXUIScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate>
{
    _PXUIScrollView *_scrollView;	// 8 = 0x8
    _Bool _isScrollViewDecelerating;	// 16 = 0x10
    _Bool _ignoresSafeAreaInsets;	// 17 = 0x11
    _Bool _isScrollingToTop;	// 18 = 0x12
    id <PXUIScrollViewControllerFocusItemProvider> _focusItemProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000049d00
@property(nonatomic, setter=setScrollingToTop:) _Bool isScrollingToTop; // @synthesize isScrollingToTop=_isScrollingToTop;
@property(nonatomic) _Bool ignoresSafeAreaInsets; // @synthesize ignoresSafeAreaInsets=_ignoresSafeAreaInsets;
@property(nonatomic) __weak id <PXUIScrollViewControllerFocusItemProvider> focusItemProvider; // @synthesize focusItemProvider=_focusItemProvider;
- (id)focusItemsForScrollView:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000049c48
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x0000000000049bb9
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000000049b80
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000049b6e
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000049b49
- (void)_checkScrollViewDeceleration;	// IMP=0x0000000000049ac8
- (void)_scheduleScrollViewDecelerationCheck;	// IMP=0x0000000000049a27
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000000499f8
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000499e3
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000499d1
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000499b4
- (void)scrollView:(id)arg1 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg2;	// IMP=0x0000000000049975
- (void)scrollViewDidLayoutSubviews:(id)arg1;	// IMP=0x0000000000049963
- (void)scrollViewWillLayoutSubviews:(id)arg1;	// IMP=0x0000000000049951
- (id)contentCoordinateSpace;	// IMP=0x000000000004993c
- (void)applyScrollInfo:(id)arg1;	// IMP=0x0000000000049844
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000049827
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;	// IMP=0x000000000004980a
- (_Bool)showsHorizontalScrollIndicator;	// IMP=0x00000000000497ed
- (_Bool)showsVerticalScrollIndicator;	// IMP=0x00000000000497d0
- (void)setClipsToBounds:(_Bool)arg1;	// IMP=0x00000000000497b3
- (_Bool)clipsToBounds;	// IMP=0x0000000000049796
- (_Bool)isDecelerating;	// IMP=0x0000000000049779
- (_Bool)isDragging;	// IMP=0x000000000004975c
- (_Bool)isTracking;	// IMP=0x000000000004973f
- (_Bool)deferContentOffsetUpdates;	// IMP=0x0000000000049722
- (_Bool)respectsContentZOrder;	// IMP=0x0000000000049705
- (void)setRespectsContentZOrder:(_Bool)arg1;	// IMP=0x00000000000496e8
- (void)setDeferContentOffsetUpdates:(_Bool)arg1;	// IMP=0x00000000000496cb
- (void)setScrollViewContentBounds:(struct CGRect)arg1;	// IMP=0x000000000004951c
- (struct CGSize)scrollViewContentSize;	// IMP=0x00000000000494ff
- (struct CGRect)scrollViewContentBounds;	// IMP=0x00000000000493b5
- (struct CGRect)scrollViewTargetRect;	// IMP=0x0000000000049397
- (struct CGRect)scrollViewVisibleRectOutsideBounds;	// IMP=0x000000000004921b
- (struct CGRect)scrollViewConstrainedVisibleRect;	// IMP=0x00000000000491a7
- (struct CGRect)scrollViewVisibleRect;	// IMP=0x0000000000049169
- (struct CGRect)scrollViewActiveRect;	// IMP=0x00000000000490a2
- (struct CGSize)scrollViewReferenceSize;	// IMP=0x0000000000049052
- (void)decelerationRateDidChange;	// IMP=0x0000000000048f4c
- (void)scrollViewLayoutIfNeeded;	// IMP=0x0000000000048f2f
- (void)setScrollViewNeedsLayout;	// IMP=0x0000000000048f12
- (void)stopScrollingAndZoomingAnimations;	// IMP=0x0000000000048ed5
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000048c3f
- (_Bool)isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x0000000000048be2
- (void)scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000048b88
- (void)scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000048b73
- (void)setVisibleOrigin:(struct CGPoint)arg1;	// IMP=0x0000000000048ae3
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x0000000000048ac6
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x0000000000048aa9
- (void)addFloatingSublayer:(id)arg1 forAxis:(long long)arg2;	// IMP=0x0000000000048a2f
- (void)addSubviewToScrollView:(id)arg1;	// IMP=0x0000000000048a12
- (void)addSubview:(id)arg1;	// IMP=0x00000000000489f5
- (_Bool)hasWindow;	// IMP=0x00000000000489b7
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000048857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

