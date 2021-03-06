//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVUIKit/UICollectionViewDataSource-Protocol.h>
#import <TVUIKit/UICollectionViewDelegate-Protocol.h>
#import <TVUIKit/_TVCollectionViewDelegateFullScreenBrowserLayout-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, _TVCollectionViewFullScreenBrowserLayout, _TVFullScreenBrowserCenterCellContext, _TVFullScreenBrowserTransitionContext;
@protocol _TVFullScreenBrowserViewDataSource, _TVFullScreenBrowserViewDelegate;

@interface _TVFullScreenBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, _TVCollectionViewDelegateFullScreenBrowserLayout>
{
    struct {
        _Bool respondsToNumberOfSections;
    } _dataSourceFlags;	// 8 = 0x8
    struct {
        _Bool respondsToIndexPathForPreferredCenteredCell;
        _Bool respondsToWillDisplayCell;
        _Bool respondsToDidEndDisplayingCell;
        _Bool respondsToWillCenterCell;
        _Bool respondsToDidCenterCell;
        _Bool respondsToShouldShowItemAtIndexPath;
    } _delegateFlags;	// 9 = 0x9
    id <_TVFullScreenBrowserViewDelegate> _delegate;	// 16 = 0x10
    id <_TVFullScreenBrowserViewDataSource> _dataSource;	// 24 = 0x18
    double _maskCornerRadius;	// 32 = 0x20
    double _interitemSpacing;	// 40 = 0x28
    double _parallaxFactor;	// 48 = 0x30
    double _maskAmount;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    _TVCollectionViewFullScreenBrowserLayout *_paradeLayout;	// 72 = 0x48
    _TVFullScreenBrowserTransitionContext *_transitionContext;	// 80 = 0x50
    _TVFullScreenBrowserCenterCellContext *_centerCellContext;	// 88 = 0x58
    struct UIEdgeInsets _maskInset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000172d2
@property(retain, nonatomic) _TVFullScreenBrowserCenterCellContext *centerCellContext; // @synthesize centerCellContext=_centerCellContext;
@property(retain, nonatomic) _TVFullScreenBrowserTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) _TVCollectionViewFullScreenBrowserLayout *paradeLayout; // @synthesize paradeLayout=_paradeLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double maskAmount; // @synthesize maskAmount=_maskAmount;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double maskCornerRadius; // @synthesize maskCornerRadius=_maskCornerRadius;
@property(nonatomic) struct UIEdgeInsets maskInset; // @synthesize maskInset=_maskInset;
@property(nonatomic) __weak id <_TVFullScreenBrowserViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <_TVFullScreenBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_evaluateTransition;	// IMP=0x0000000000016fa4
- (id)_makeParadeLayout;	// IMP=0x0000000000016f07
- (id)_makeParadeTransitionLayoutWithLayoutAttributes:(id)arg1;	// IMP=0x0000000000016eba
- (_Bool)_shouldShowItemAtIndexPath:(id)arg1;	// IMP=0x0000000000016e39
- (void)_didCenterCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000016d29
- (void)_willCenterCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000016c3f
- (void)_didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000016b1f
- (void)_willDisplayCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000016a76
- (id)_cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000169f0
- (long long)_numberOfItemsForSection:(long long)arg1;	// IMP=0x0000000000016998
- (long long)_numberOfSections;	// IMP=0x0000000000016931
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000001669b
- (_Bool)collectionView:(id)arg1 shouldShowItemAtIndexPath:(id)arg2;	// IMP=0x0000000000016686
- (void)collectionView:(id)arg1 centerIndexPathTransitionStateDidChangeForLayout:(id)arg2;	// IMP=0x0000000000016626
- (void)collectionView:(id)arg1 centerIndexPathDidChangeForLayout:(id)arg2;	// IMP=0x0000000000016544
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000001652c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000016514
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000162be
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000000000160ac
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000001603b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000016026
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000016011
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000015fff
@property(readonly, nonatomic) NSIndexPath *centerIndexPath;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000015f24
- (void)layoutSubviews;	// IMP=0x0000000000015e8e
- (void)reloadData;	// IMP=0x0000000000015e3f
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;	// IMP=0x0000000000015dbb
- (void)transitionWithLayoutAttributes:(id)arg1 animator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015ccd
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000015c51
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property(readonly, nonatomic) NSArray *visibleCells;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000015615

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

