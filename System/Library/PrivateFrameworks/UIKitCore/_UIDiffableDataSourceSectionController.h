//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSMapTable, NSSet, _UIDiffableDataSourceSectionControllerHandlers, __UIDiffableDataSource;
@protocol _UIDiffableDataSourceSectionControllerDelegate;

@interface _UIDiffableDataSourceSectionController : NSObject <NSCopying>
{
    __UIDiffableDataSource *_dataSource;	// 8 = 0x8
    NSMapTable *_snapshotsMap;	// 16 = 0x10
    NSSet *_associatedSectionIdentifiers;	// 24 = 0x18
    id <_UIDiffableDataSourceSectionControllerDelegate> _delegate;	// 32 = 0x20
    NSArray *_itemRenderers;	// 40 = 0x28
    _UIDiffableDataSourceSectionControllerHandlers *_handlers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006a6f36
@property(copy, nonatomic) _UIDiffableDataSourceSectionControllerHandlers *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSSet *associatedSectionIdentifiers; // @synthesize associatedSectionIdentifiers=_associatedSectionIdentifiers;
@property(readonly, nonatomic) NSArray *itemRenderers; // @synthesize itemRenderers=_itemRenderers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a6e04
- (id)_queryClientSnapshotForExpandingParentItemForItem:(id)arg1 currentSectionSnapshot:(id)arg2;	// IMP=0x00000000006a6c6d
- (_Bool)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)arg1;	// IMP=0x00000000006a6b77
- (void)_queryClientWillCollapseItem:(id)arg1;	// IMP=0x00000000006a6a4d
- (_Bool)_queryClientShouldCollapseItem:(id)arg1;	// IMP=0x00000000006a6600
- (void)_queryClientWillExpandItem:(id)arg1;	// IMP=0x00000000006a64d6
- (_Bool)_queryClientShouldExpandItem:(id)arg1;	// IMP=0x00000000006a6398
- (void)_updateSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000006a62a8
- (id)_snapshotsMap;	// IMP=0x00000000006a629a
- (id)_extantMutableSnapshotForItem:(id)arg1;	// IMP=0x00000000006a61df
- (id)_extantMutableSnapshotForSection:(id)arg1;	// IMP=0x00000000006a61c9
- (id)_parentFocusItemForItem:(id)arg1;	// IMP=0x00000000006a6041
- (_Bool)_performDisclosureAction:(unsigned long long)arg1 forItem:(id)arg2;	// IMP=0x00000000006a5d38
- (id)_sectionIdentifierForItem:(id)arg1;	// IMP=0x00000000006a5c13
- (void)_configureForItemRenderersIfNeeded:(id)arg1;	// IMP=0x00000000006a5809
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000006a5658
- (void)_configureForDataSource:(id)arg1;	// IMP=0x00000000006a5646
- (void)setDataSource:(id)arg1;	// IMP=0x00000000006a55f8
- (void)setDelegate:(id)arg1;	// IMP=0x00000000006a55e7
- (id)delegate;	// IMP=0x00000000006a55d1
- (id)dataSource;	// IMP=0x00000000006a55bb
- (id)_collectionView;	// IMP=0x00000000006a556b
- (id)_snapshotForSectionContainingItem:(id)arg1;	// IMP=0x00000000006a5468
- (void)_configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000006a5314
- (CDUnknownBlockType)_customCollapseExpandAnimationsForSnapshot:(id)arg1 initialSectionSnapshot:(id)arg2 finalSectionSnapshot:(id)arg3 viewPropertyAnimator:(id)arg4 visibleBounds:(struct CGRect)arg5 sectionIndex:(long long)arg6;	// IMP=0x00000000006a1a42
- (_Bool)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2;	// IMP=0x00000000006a173e
- (_Bool)_snapshotHasExpandOrCollapseUpdates:(id)arg1;	// IMP=0x00000000006a1692
- (void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)arg1;	// IMP=0x00000000006a1413
- (void)__applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006a0f85
- (void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006a0af2
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(CDUnknownBlockType)arg4;	// IMP=0x00000000006a0acc
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000006a0aa6
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000006a0a86
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(_Bool)arg3;	// IMP=0x00000000006a0a61
- (id)snapshotForItem:(id)arg1;	// IMP=0x00000000006a09ea
- (id)snapshotForSection:(id)arg1;	// IMP=0x00000000006a0973
- (id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2 snapshotsMap:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000006a07d5
- (id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2;	// IMP=0x00000000006a07bd
- (id)initWithItemRenderers:(id)arg1;	// IMP=0x00000000006a0736
- (id)initWithDiffableDataSource:(id)arg1;	// IMP=0x00000000006a068b
- (id)initWithDiffableDataSourceImpl:(id)arg1;	// IMP=0x00000000006a0600

@end

