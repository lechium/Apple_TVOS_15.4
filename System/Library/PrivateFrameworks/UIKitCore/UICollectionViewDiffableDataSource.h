//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/_UIDiffableDataSourceIdentifying-Protocol.h>

@class NSString, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, __UIDiffableDataSource;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource>
{
    __UIDiffableDataSource *_impl;	// 8 = 0x8
    CDUnknownBlockType __didReorderItemsHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029157e
@property(copy, nonatomic) CDUnknownBlockType _didReorderItemsHandler; // @synthesize _didReorderItemsHandler=__didReorderItemsHandler;
@property(retain, nonatomic) __UIDiffableDataSource *impl; // @synthesize impl=_impl;
- (id)_diffableDataSourceImpl;	// IMP=0x000000000029153c
- (_Bool)_isDiffableDataSource;	// IMP=0x0000000000291534
- (id)_snapshotForSection:(id)arg1;	// IMP=0x000000000029151e
- (void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000291508
- (id)_associatedSectionControllerForSectionIdentifier:(id)arg1;	// IMP=0x00000000002914f2
- (id)_associatedSectionControllerForItemIdentifier:(id)arg1;	// IMP=0x00000000002914dc
- (id)collectionView;	// IMP=0x00000000002914c6
- (void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002914b0
- (void)_applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000029149e
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000000291482
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x0000000000291469
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002912a7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002911bc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000291089
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000291073
- (id)initWithViewUpdatesSink:(id)arg1;	// IMP=0x0000000000290ff1
- (CDUnknownBlockType)_canReorderItemHandler;	// IMP=0x0000000000290fdb
- (void)_setCanReorderItemHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000290fc5
- (void)_setDidReorderItemsHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000290e33
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x0000000000290e1d
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x0000000000290e07
- (long long)indexForSectionIdentifier:(id)arg1;	// IMP=0x0000000000290df1
- (id)sectionIdentifierForIndex:(long long)arg1;	// IMP=0x0000000000290ddb
@property(copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers;
- (id)snapshotForSection:(id)arg1;	// IMP=0x0000000000290d6d
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000290d57
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3;	// IMP=0x0000000000290d3e
- (void)applySnapshotUsingReloadData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000290cc5
- (void)applySnapshotUsingReloadData:(id)arg1;	// IMP=0x0000000000290cb1
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000290c33
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;	// IMP=0x0000000000290c1e
- (id)snapshot;	// IMP=0x0000000000290bb4
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 itemRenderer:(id)arg2;	// IMP=0x0000000000290a92
- (id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x000000000029086d
- (id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x0000000000290796
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002906db
- (void)validateIdentifiers;	// IMP=0x00000000002915a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

