//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/UIScrollViewDelegate-Protocol.h>

@class ISUIVisibilityOffsetHelper, NSString, UIScrollView;

@interface ISUIScrollViewVitalityController <UIScrollViewDelegate>
{
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;	// 8 = 0x8
    UIScrollView *__scrollView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023dd4
@property(nonatomic, setter=_setScrollView:) __weak UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x0000000000023da1
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000000023d99
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x0000000000023d93
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000023d8d
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000023d87
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000023d3b
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x0000000000023d35
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000023c36
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000023be6
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000023b9a
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x0000000000023b94
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000023b8e
- (void)_reduceMotionDidChange:(id)arg1;	// IMP=0x0000000000023b47
- (_Bool)canPerformVitality;	// IMP=0x0000000000023b09
- (id)visibilityOffsetHelper;	// IMP=0x0000000000023ac8
- (id)init;	// IMP=0x0000000000023a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

