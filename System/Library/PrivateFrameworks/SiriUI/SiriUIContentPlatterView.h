//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SiriUI/SiriUIDarkening-Protocol.h>
#import <SiriUI/UIScrollViewDelegate-Protocol.h>
#import <SiriUI/_SiriUIContentPlatterScrollViewDelegate-Protocol.h>

@class NSArray, NSString, SiriUIContentPlatterDarkenMaskView, SiriUIPanDismissalGestureRecognizer, _SiriUIContentPlatterScrollView;
@protocol SiriUIContentPlatterViewDelegate;

@interface SiriUIContentPlatterView : UIView <UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening>
{
    _Bool _platterNeedsLayout;	// 8 = 0x8
    _Bool _shouldAllowDismissalWhileScrollable;	// 9 = 0x9
    id <SiriUIContentPlatterViewDelegate> _delegate;	// 16 = 0x10
    NSArray *_contentViews;	// 24 = 0x18
    SiriUIPanDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 32 = 0x20
    _SiriUIContentPlatterScrollView *_scrollView;	// 40 = 0x28
    SiriUIContentPlatterDarkenMaskView *_darkenMaskView;	// 48 = 0x30
    double _currentContentOffset;	// 56 = 0x38
    UIView *_platterView;	// 64 = 0x40
    struct UIEdgeInsets _contentInsets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001a2a2
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) double currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) _Bool shouldAllowDismissalWhileScrollable; // @synthesize shouldAllowDismissalWhileScrollable=_shouldAllowDismissalWhileScrollable;
@property(nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) _Bool platterNeedsLayout; // @synthesize platterNeedsLayout=_platterNeedsLayout;
@property(retain, nonatomic, getter=_darkenMaskView) SiriUIContentPlatterDarkenMaskView *darkenMaskView; // @synthesize darkenMaskView=_darkenMaskView;
@property(retain, nonatomic, getter=_scrollView) _SiriUIContentPlatterScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SiriUIPanDismissalGestureRecognizer *dismissalGestureRecognizer; // @synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) __weak id <SiriUIContentPlatterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contentPlatterScrollView;	// IMP=0x000000000001a14e
- (void)_updateContentFullyScrolled;	// IMP=0x0000000000019ffe
- (_Bool)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)arg1;	// IMP=0x0000000000019fec
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000019f5d
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000019c4b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000019504
@property(nonatomic) double darkenIntensity;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000018dc6
- (void)layoutSubviews;	// IMP=0x0000000000018bd2
- (void)setNeedsLayout;	// IMP=0x0000000000018b8f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000188d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
