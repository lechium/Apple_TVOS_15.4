//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVCollectionViewDelegate-Protocol.h>
#import <ATVLegacyContentKit/TVLImageHeaderWithButtonsViewDelegate-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, TVCollectionView, TVLHeaderElement, UIView;

@interface TVLScrollerViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVLImageHeaderWithButtonsViewDelegate, ATVUpdatable>
{
    NSArray *_cachedItemSizes;	// 8 = 0x8
    _Bool _fixedHeader;	// 16 = 0x10
    NSMutableDictionary *_cachedState;	// 24 = 0x18
    double _scrollContentInset;	// 32 = 0x20
    TVCollectionView *_collectionView;	// 40 = 0x28
    UIView *_headerView;	// 48 = 0x30
    NSArray *_scrollerItemElements;	// 56 = 0x38
    TVLHeaderElement *_headerElement;	// 64 = 0x40
    NSIndexPath *_currentFocusedIndexPath;	// 72 = 0x48
    double _adjustedContentInset;	// 80 = 0x50
    struct UIEdgeInsets _contentInset;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000049b3c
@property(nonatomic) double adjustedContentInset; // @synthesize adjustedContentInset=_adjustedContentInset;
@property(copy, nonatomic) NSIndexPath *currentFocusedIndexPath; // @synthesize currentFocusedIndexPath=_currentFocusedIndexPath;
@property(nonatomic) _Bool fixedHeader; // @synthesize fixedHeader=_fixedHeader;
@property(nonatomic) __weak TVLHeaderElement *headerElement; // @synthesize headerElement=_headerElement;
@property(nonatomic) __weak NSArray *scrollerItemElements; // @synthesize scrollerItemElements=_scrollerItemElements;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double scrollContentInset; // @synthesize scrollContentInset=_scrollContentInset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000049966
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000049864
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000049713
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000049476
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000491d9
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000484fd
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000048260
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000004815e
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000047fb5
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000047f50
- (void)_updateCell:(id)arg1 forIndexPath:(id)arg2 restoreState:(_Bool)arg3 forceReload:(_Bool)arg4;	// IMP=0x0000000000047ba8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000047a7e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000479ca
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000047986
- (void)tvl_restoreStateWithCoder:(id)arg1;	// IMP=0x0000000000047541
- (void)tvl_saveStateWithCoder:(id)arg1;	// IMP=0x00000000000472f0
- (void)imageHeaderDidLoadImage:(id)arg1;	// IMP=0x00000000000472b3
- (void)headerView:(id)arg1 didSelectButtonAtIndex:(long long)arg2;	// IMP=0x0000000000047183
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000047105
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000004702a
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004683f
- (double)_shadowHeightForHeaderHeight:(double)arg1;	// IMP=0x000000000004671a
- (id)preferredFocusEnvironments;	// IMP=0x0000000000046485
- (void)loadView;	// IMP=0x0000000000045fcb
- (void)_prepareCollectionView;	// IMP=0x0000000000045652
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;	// IMP=0x00000000000450d8
- (void)setCurrentFeedElement:(id)arg1;	// IMP=0x0000000000044e39
@property(readonly, nonatomic) NSMutableDictionary *cachedState; // @synthesize cachedState=_cachedState;
- (id)initWithSubScrollerElement:(id)arg1;	// IMP=0x0000000000044ca2
- (id)initWithScrollerElement:(id)arg1;	// IMP=0x0000000000044b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

