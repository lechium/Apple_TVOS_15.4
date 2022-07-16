//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView
{
    UIPageViewController *_pageViewController;	// 112 = 0x70
    _UIQueuingScrollView *_scrollView;	// 120 = 0x78
    UIPageControl *_pageControl;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000004075f1
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)layoutSubviews;	// IMP=0x00000000004072b4
- (void)_setupPageControl:(id)arg1;	// IMP=0x000000000040720a
- (struct CGRect)_scrollViewFrame;	// IMP=0x00000000004071eb
- (double)_pageSpacing;	// IMP=0x00000000004071ac
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000004070b5
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000406fbe
- (void)invalidatePageViewController;	// IMP=0x0000000000406f68
- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;	// IMP=0x0000000000406cf1
- (id)preferredFocusedView;	// IMP=0x0000000000406cdc
- (_Bool)canBecomeFocused;	// IMP=0x0000000000406cd4

@end
