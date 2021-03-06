//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXUIScrollViewControllerFocusItemProvider-Protocol.h>

@class NSString, PXGScrollViewContainerConfiguration, PXGScrollViewModel, PXScrollViewController, PXScrollViewSpeedometer, PXUpdater;
@protocol PXGScrollViewContainerDelegate;

@interface PXGScrollViewContainer : UIView <PXUIScrollViewControllerFocusItemProvider, PXChangeObserver, PXScrollViewControllerObserver, PXGReusableView>
{
    struct {
        _Bool willBeginScrolling;
        _Bool didScroll;
        _Bool willEndScrollingWithVelocityTargetContentOffset;
        _Bool didEndScrolling;
        _Bool focusItemsInRect;
    } _delegateRespondsTo;	// 8 = 0x8
    _Bool _isUpdatingScrollViewController;	// 13 = 0xd
    PXGScrollViewContainerConfiguration *_userData;	// 16 = 0x10
    PXScrollViewController *_scrollViewController;	// 24 = 0x18
    PXUpdater *_updater;	// 32 = 0x20
    PXScrollViewSpeedometer *_speedometer;	// 40 = 0x28
    PXGScrollViewModel *_scrollViewModel;	// 48 = 0x30
    id <PXGScrollViewContainerDelegate> _delegate;	// 56 = 0x38
    struct CGRect _clippingRect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000011a011
@property(retain, nonatomic) id <PXGScrollViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGScrollViewModel *scrollViewModel; // @synthesize scrollViewModel=_scrollViewModel;
@property(readonly, nonatomic) PXScrollViewSpeedometer *speedometer; // @synthesize speedometer=_speedometer;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic) PXGScrollViewContainerConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (id)focusItemsForScrollViewController:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000119eda
- (void)scrollViewControllerDidEndScrolling:(id)arg1;	// IMP=0x0000000000119e75
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000119bfa
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x0000000000119b8d
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x0000000000119b29
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001199d7
- (struct CGPoint)convertHostedChildCenter:(struct CGPoint)arg1 fromGlobalLayer:(id)arg2;	// IMP=0x0000000000119915
- (void)addHostedLayer:(id)arg1;	// IMP=0x00000000001198f3
- (void)addHostedView:(id)arg1;	// IMP=0x00000000001198d6
- (void)prepareForReuse;	// IMP=0x00000000001198c2
- (void)becomeReusable;	// IMP=0x00000000001198bc
- (void)_updateScrollViewModel;	// IMP=0x0000000000119753
- (void)_invalidateScrollViewModel;	// IMP=0x0000000000119732
- (void)_updateScrollViewDecelerationRate;	// IMP=0x000000000011961c
- (void)_invalidateScrollViewDecelerationRate;	// IMP=0x00000000001195d8
- (void)_updateScrollViewController;	// IMP=0x0000000000119379
- (void)_invalidateScrollViewController;	// IMP=0x0000000000119335
- (void)_setNeedsUpdate;	// IMP=0x0000000000119323
@property(readonly, nonatomic) _Bool shouldFlipContentOffset;
@property(readonly, nonatomic) _Bool isRTL;
- (void)setAlpha:(double)arg1;	// IMP=0x00000000001192a9
- (void)layoutSubviews;	// IMP=0x000000000011926b
- (void)_willLayout;	// IMP=0x000000000011922e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000118ecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end

