//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSDiffableDataSourceTransaction, NSHashTable, NSMapTable, NSString, UICollectionView, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, UITableView, _UIDiffableDataSourceViewUpdater;
@protocol OS_dispatch_queue, _UIDiffableDataSourceState;

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    NSMapTable *_rendererMap;	// 24 = 0x18
    CDUnknownBlockType _rendererIdentifierProvider;	// 32 = 0x20
    NSHashTable *_sectionControllers;	// 40 = 0x28
    NSDiffableDataSourceTransaction *_pendingReorderingTransaction;	// 48 = 0x30
    NSDiffableDataSourceTransaction *_currentTransaction;	// 56 = 0x38
    _Bool _pendingReorderingTransactionShouldPerformViewAnimations;	// 64 = 0x40
    _Bool _isApplyingWithoutRebasingSectionSnapshots;	// 65 = 0x41
    CDUnknownBlockType _tableViewCellProvider;	// 72 = 0x48
    CDUnknownBlockType _supplementaryViewProvider;	// 80 = 0x50
    CDUnknownBlockType _supplementaryReuseIdentifierProvider;	// 88 = 0x58
    CDUnknownBlockType _supplementaryViewConfigurationHandler;	// 96 = 0x60
    CDUnknownBlockType _collectionViewCellProvider;	// 104 = 0x68
    CDUnknownBlockType _cellObserver;	// 112 = 0x70
    UICollectionViewDiffableDataSourceReorderingHandlers *_reorderingHandlers;	// 120 = 0x78
    CDUnknownBlockType _willApplySnapshotHandler;	// 128 = 0x80
    CDUnknownBlockType _didApplySnapshotHandler;	// 136 = 0x88
    CDUnknownBlockType _canReorderItemHandler;	// 144 = 0x90
    UICollectionViewDiffableDataSourceSectionSnapshotHandlers *_sectionSnapshotHandlers;	// 152 = 0x98
    CDUnknownBlockType _tableViewCellConfigurationHandler;	// 160 = 0xa0
    CDUnknownBlockType _reuseIdentifierProvider;	// 168 = 0xa8
    CDUnknownBlockType _collectionViewCellConfigurationHandler;	// 176 = 0xb0
    _UIDiffableDataSourceViewUpdater *_viewUpdater;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_applyQueue;	// 192 = 0xc0
    _Atomic long long _outstandingApplyCount;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_snapshotQueue;	// 208 = 0xd0
    unsigned long long _mutationQueueSource;	// 216 = 0xd8
    id <_UIDiffableDataSourceState> _state;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000002acc90
@property(nonatomic) _Bool isApplyingWithoutRebasingSectionSnapshots; // @synthesize isApplyingWithoutRebasingSectionSnapshots=_isApplyingWithoutRebasingSectionSnapshots;
@property(retain, nonatomic) id <_UIDiffableDataSourceState> state; // @synthesize state=_state;
@property unsigned long long mutationQueueSource; // @synthesize mutationQueueSource=_mutationQueueSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(readonly, nonatomic) _Atomic long long outstandingApplyCount; // @synthesize outstandingApplyCount=_outstandingApplyCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *applyQueue; // @synthesize applyQueue=_applyQueue;
@property(retain, nonatomic) _UIDiffableDataSourceViewUpdater *viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellConfigurationHandler; // @synthesize collectionViewCellConfigurationHandler=_collectionViewCellConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType reuseIdentifierProvider; // @synthesize reuseIdentifierProvider=_reuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellConfigurationHandler; // @synthesize tableViewCellConfigurationHandler=_tableViewCellConfigurationHandler;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers; // @synthesize sectionSnapshotHandlers=_sectionSnapshotHandlers;
@property(copy, nonatomic) CDUnknownBlockType canReorderItemHandler; // @synthesize canReorderItemHandler=_canReorderItemHandler;
@property(copy, nonatomic) CDUnknownBlockType didApplySnapshotHandler; // @synthesize didApplySnapshotHandler=_didApplySnapshotHandler;
@property(copy, nonatomic) CDUnknownBlockType willApplySnapshotHandler; // @synthesize willApplySnapshotHandler=_willApplySnapshotHandler;
@property(copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers; // @synthesize reorderingHandlers=_reorderingHandlers;
@property(copy, nonatomic) CDUnknownBlockType cellObserver; // @synthesize cellObserver=_cellObserver;
@property(copy, nonatomic) CDUnknownBlockType collectionViewCellProvider; // @synthesize collectionViewCellProvider=_collectionViewCellProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewConfigurationHandler; // @synthesize supplementaryViewConfigurationHandler=_supplementaryViewConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider; // @synthesize supplementaryReuseIdentifierProvider=_supplementaryReuseIdentifierProvider;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellProvider; // @synthesize tableViewCellProvider=_tableViewCellProvider;
- (id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2;	// IMP=0x00000000002aca9c
- (long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000002aca8a
- (long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1;	// IMP=0x00000000002aca78
- (id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x00000000002aca5d
- (long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000002aca42
- (long long)_numberOfSectionsForTableView:(id)arg1;	// IMP=0x00000000002aca30
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002ac631
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002ac52b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002ac4e0
- (id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;	// IMP=0x00000000002ac4ce
- (id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000002ac4bc
- (long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2;	// IMP=0x00000000002ac4aa
- (long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1;	// IMP=0x00000000002ac498
- (id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3;	// IMP=0x00000000002ac47a
- (id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000002ac45f
- (long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2;	// IMP=0x00000000002ac444
- (long long)_numberOfSectionsForCollectionView:(id)arg1;	// IMP=0x00000000002ac432
- (id)sectionController:(id)arg1 snapshotForExpandingParentItem:(id)arg2 currentSectionSnapshot:(id)arg3;	// IMP=0x00000000002ac31f
- (_Bool)sectionController:(id)arg1 shouldQueryForSnapshotForExpandingParentItem:(id)arg2;	// IMP=0x00000000002ac2bc
- (void)sectionController:(id)arg1 willCollapseItem:(id)arg2;	// IMP=0x00000000002ac1f1
- (_Bool)sectionController:(id)arg1 shouldCollapseItem:(id)arg2;	// IMP=0x00000000002ac114
- (void)sectionController:(id)arg1 willExpandItem:(id)arg2;	// IMP=0x00000000002ac049
- (_Bool)sectionController:(id)arg1 shouldExpandItem:(id)arg2;	// IMP=0x00000000002abf6c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002abc03
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002ab77b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000002ab675
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000002ab62a
- (id)currentTransaction;	// IMP=0x00000000002ab61c
@property(readonly, nonatomic) NSArray *sectionControllers;
- (id)_transactionForFinalSnapshot:(id)arg1 dataSourceDiffer:(id)arg2 shouldSkipRebasingSectionSnapshots:(_Bool)arg3;	// IMP=0x00000000002ab0f5
- (id)_transactionForReloadUpdatesWithSnapshot:(id)arg1;	// IMP=0x00000000002ab057
- (id)_reorderingTransactionForReorderingUpdate:(id)arg1;	// IMP=0x00000000002aade4
- (void)_resetCurrentTransaction;	// IMP=0x00000000002aadab
- (_Bool)_isApplyingReorderingTransaction;	// IMP=0x00000000002aad9d
- (unsigned long long)_capabilities;	// IMP=0x00000000002aac28
- (void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2 shouldPerformViewAnimations:(_Bool)arg3;	// IMP=0x00000000002aab19
- (void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2;	// IMP=0x00000000002aab04
- (void)_willBeginReorderingForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002aa87c
- (_Bool)canMoveItemAtIndexPath:(id)arg1;	// IMP=0x00000000002aa6e2
- (void)_notifyDidApplyForCurrentTransactionIfNeeded;	// IMP=0x00000000002aa57d
- (void)_notifyWillApplyForCurrentTransactionIfNeeded;	// IMP=0x00000000002aa418
- (void)_commitRebasedSectionSnapshotsFromCurrentTransactionIfNeeded;	// IMP=0x00000000002a9f63
- (void)_computeCurrentTransactionForFinalSnapshot:(id)arg1 withDataSourceDiffer:(id)arg2;	// IMP=0x00000000002a9ecf
- (void)_performApplyWithoutRebasingSectionSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a9e57
- (id)associatedSectionControllerForSectionIdentifier:(id)arg1;	// IMP=0x00000000002a9c29
- (id)associatedSectionControllerForItemIdentifier:(id)arg1;	// IMP=0x00000000002a9bc0
- (void)addAssociatedSectionControllerIfNeeded:(id)arg1;	// IMP=0x00000000002a9b4f
- (void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a9316
- (void)_storeState:(id)arg1;	// IMP=0x00000000002a92d8
- (void)_commitStateAtomically:(id)arg1;	// IMP=0x00000000002a917a
- (id)_snapshotWithHandlerAtomic:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a8fa5
- (_Bool)_canApplySnapshotUpdateWithoutDiffing:(id)arg1;	// IMP=0x00000000002a8e79
- (void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 commitAlongsideHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000002a8ba8
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(_Bool)arg3;	// IMP=0x00000000002a86e1
- (id)_reloadViewUpdatesForDiffUpdate:(id)arg1;	// IMP=0x00000000002a86c9
- (void)_commitUpdate:(id)arg1 snapshot:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a8236
- (id)_pendingReloadUpdatesForSnapshot:(id)arg1;	// IMP=0x00000000002a803d
- (void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002a71ff
- (id)_snapshotForSection:(id)arg1;	// IMP=0x00000000002a7170
- (id)snapshotForSection:(id)arg1;	// IMP=0x00000000002a6ff3
- (void)_applyDifferencesFromSnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a6e60
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a6e4e
- (void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a6e25
- (void)_applyDifferencesFromSnapshot:(id)arg1 customAnimationsProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a6df7
@property(nonatomic) long long tableViewDefaultRowAnimation;
- (void)applySnapshot:(id)arg1;	// IMP=0x00000000002a6d55
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a6c92
- (void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;	// IMP=0x00000000002a6c7d
- (void)reloadFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a66ce
- (void)reloadFromSnapshot:(id)arg1;	// IMP=0x00000000002a66ba
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a6690
- (void)applyDifferencesFromSnapshot:(id)arg1;	// IMP=0x00000000002a6662
- (id)emptySnapshot;	// IMP=0x00000000002a6649
- (id)snapshot;	// IMP=0x00000000002a658d
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x00000000002a6574
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000000002a655b
- (long long)indexForSectionIdentifier:(id)arg1;	// IMP=0x00000000002a6542
- (id)sectionIdentifierForIndex:(long long)arg1;	// IMP=0x00000000002a6529
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a6343
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a615d
- (void)appendSectionWithIdentifier:(id)arg1;	// IMP=0x00000000002a6014
- (void)reloadSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a5f26
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a5da7
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a5c28
- (void)deleteSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a5ba6
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a5a27
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a58a8
- (void)appendSectionsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a5826
- (void)reconfigureItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a57a4
- (void)reloadItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a5722
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002a55a3
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002a5424
- (void)deleteAllItems;	// IMP=0x00000000002a53d8
- (void)deleteItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a5356
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;	// IMP=0x00000000002a51d7
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;	// IMP=0x00000000002a5058
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;	// IMP=0x00000000002a4f0e
- (void)appendItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000002a4efa
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x00000000002a4ee1
- (long long)indexOfItemIdentifier:(id)arg1;	// IMP=0x00000000002a4ec8
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x00000000002a4eaf
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000000002a4e96
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x00000000002a4e7d
@property(readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property(readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (id)_diffableDataSourceImpl;	// IMP=0x00000000002a4de9
- (_Bool)_isDiffableDataSource;	// IMP=0x00000000002a4de1
@property(readonly, copy) NSString *description;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a4bb4
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a4b24
@property(readonly, nonatomic) __weak UICollectionView *_collectionView;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a49ec
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 dataSource:(id)arg3;	// IMP=0x00000000002a493e
- (id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a487d
- (id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a45d3
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a4543
- (id)initWithViewUpdatesSink:(id)arg1;	// IMP=0x00000000002a447a
- (id)initWithState:(id)arg1;	// IMP=0x00000000002a43d6
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 state:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000002a41ad
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2 reuseIdentifierProvider:(CDUnknownBlockType)arg3 cellConfigurationHandler:(CDUnknownBlockType)arg4 state:(id)arg5 dataSource:(id)arg6;	// IMP=0x00000000002a3f74
- (void)validateIdentifiers;	// IMP=0x00000000002acdd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
