//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUICore)
@property(readonly, nonatomic) _Bool px_isPerformingScrollTest;
- (_Bool)_px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00000000001e8cfc
- (struct CGPoint)px_contentOffsetForEdge:(unsigned int)arg1;	// IMP=0x00000000001e8bc7
- (void)px_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e8b8a
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00000000001e8ad5
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1;	// IMP=0x00000000001e8a6f
- (void)px_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e8a32
- (struct CGPoint)px_constrainedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000001e88b6
@end

