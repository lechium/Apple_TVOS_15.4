//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView
{
    double _offsetForNoResultsMessage;	// 120 = 0x78
    UIView *_topShadowView;	// 128 = 0x80
    UISearchDisplayController *_controller;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000435ec4
@property(nonatomic) __weak UISearchDisplayController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;
- (double)_offsetForNoResultsMessage;	// IMP=0x0000000000435813
- (void)_setOffsetForNoResultsMessage:(double)arg1;	// IMP=0x0000000000435801
- (void)_numberOfRowsDidChange;	// IMP=0x00000000004357a5
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000043560d
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x00000000004355b3

@end

