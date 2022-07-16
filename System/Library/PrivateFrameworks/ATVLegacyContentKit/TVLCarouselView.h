//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/UICollectionViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString, UIMotionEffectGroup, _TVLCarouselCollectionView;
@protocol OS_dispatch_source, TVLCarouselViewDataSource, TVLCarouselViewDelegate;

@interface TVLCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _allowFocusDirectionEvents;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_autoScrollTimer;	// 16 = 0x10
    _TVLCarouselCollectionView *_collectionView;	// 24 = 0x18
    unsigned long long _currentVirtualIndexForCellDequeue;	// 32 = 0x20
    NSIndexPath *_focusedIndexPath;	// 40 = 0x28
    _Bool _hasValidLayout;	// 48 = 0x30
    UIMotionEffectGroup *_motionEffectGroup;	// 56 = 0x38
    unsigned long long _numberOfRealItemsForDataSource;	// 64 = 0x40
    id <TVLCarouselViewDataSource> _dataSource;	// 72 = 0x48
    id <TVLCarouselViewDelegate> _delegate;	// 80 = 0x50
    double _interitemSpacing;	// 88 = 0x58
    double _autoScrollInterval;	// 96 = 0x60
    struct CGSize _itemSize;	// 104 = 0x68
    struct CGPoint _focusDirection;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000012a97
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) double autoScrollInterval; // @synthesize autoScrollInterval=_autoScrollInterval;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak id <TVLCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVLCarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_stopAutoScrollTimer;	// IMP=0x00000000000129af
- (void)_startAutoScrollTimer;	// IMP=0x00000000000127db
- (void)_updateAutoScrollTimer;	// IMP=0x0000000000012693
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000012413
- (void)_updateCollectionViewLayoutAnimated:(_Bool)arg1;	// IMP=0x0000000000012351
- (void)_updateCollectionViewLayout;	// IMP=0x000000000001233d
- (double)_contentOffsetXForIndex:(long long)arg1;	// IMP=0x000000000001222e
@property(readonly, copy, nonatomic) NSArray *visibleCells;
- (void)setInteritemSpacing:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000012132
- (void)reloadData;	// IMP=0x0000000000011f69
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x0000000000011f4c
- (unsigned long long)indexForCell:(id)arg1;	// IMP=0x0000000000011edd
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x0000000000011e0d
- (id)cellForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011d9d
- (void)_focusGestureDidBeginNotification:(id)arg1;	// IMP=0x0000000000011d8c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000011cd8
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000011b5a
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000011b34
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000011a97
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000011a41
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000011a2e
- (id)preferredFocusEnvironments;	// IMP=0x0000000000011907
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000118c6
- (void)didMoveToWindow;	// IMP=0x0000000000011833
- (void)didMoveToSuperview;	// IMP=0x00000000000117a0
- (id)_collectionView;	// IMP=0x000000000001178b
- (void)dealloc;	// IMP=0x0000000000011709
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000114fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

