//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewShadowUpdatesController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UIDataSourceSnapshotter *_initialSnapshot;	// 16 = 0x10
    _UIDataSourceUpdateMap *_updateMap;	// 24 = 0x18
    NSMutableArray *__shadowUpdates;	// 32 = 0x20
    NSPointerArray *_rebaseObservers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000036c798
@property(retain, nonatomic) NSPointerArray *rebaseObservers; // @synthesize rebaseObservers=_rebaseObservers;
@property(retain, nonatomic) NSMutableArray *_shadowUpdates; // @synthesize _shadowUpdates=__shadowUpdates;
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;	// IMP=0x000000000036c607
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;	// IMP=0x000000000036c388
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;	// IMP=0x000000000036c1ab
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000036c1a5
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x000000000036c198
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000036c182
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000036bfd1
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x000000000036be9c
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;	// IMP=0x000000000036be88
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;	// IMP=0x000000000036be19
- (id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x000000000036bc96
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x000000000036bc82
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000036bbe7
- (id)_coalesceUpdatesIfPossible:(id)arg1;	// IMP=0x000000000036b93d
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2;	// IMP=0x000000000036b7e3
- (id)_rebasedUpdateMapForUpdate:(id)arg1;	// IMP=0x000000000036b690
- (void)_regenerateUpdateMap;	// IMP=0x000000000036b5c3
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;	// IMP=0x000000000036ae34
- (_Bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;	// IMP=0x000000000036ac40
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x000000000036ac38
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000036aa0d
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000036a7e2
- (void)_collectionView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forItemAtIndexPath:(id)arg4;	// IMP=0x000000000036a6f0
- (id)_collectionView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;	// IMP=0x000000000036a637
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000036a51c
- (id)_collectionView:(id)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)arg2;	// IMP=0x000000000036a3f7
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x000000000036a359
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;	// IMP=0x000000000036a299
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000036a1e3
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;	// IMP=0x000000000036a142
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000036a09c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000369fc9
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x0000000000369f13
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000369e49
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000369d93
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0000000000369cba
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x0000000000369bc3
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;	// IMP=0x0000000000369aea
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000003699fc
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000369907
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;	// IMP=0x000000000036983d
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000036975b
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000369669
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000369589
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000369497
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000003693b7
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00000000003692f4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000369231
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000369167
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000036909d
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000368fda
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000368f17
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000368e4d
- (void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2;	// IMP=0x0000000000368b26
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000000368a65
- (id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x00000000003689be
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000036891d
- (_Bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x0000000000368853
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000000368751
- (_Bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000036867d
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x0000000000368595
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x00000000003684bf
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000003683f3
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000036834d
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000036824b
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x0000000000368181
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000368090
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000367eff
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000367dec
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000367ccd
- (void)addRebaseObserver:(id)arg1;	// IMP=0x0000000000367c26
- (id)computeRevertShadowUpdates;	// IMP=0x0000000000367a7f
- (id)shadowUpdates;	// IMP=0x0000000000367a6d
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x0000000000367706
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;	// IMP=0x0000000000367700
- (void)rebaseForUpdates:(id)arg1 notifyRebaseObservers:(_Bool)arg2;	// IMP=0x000000000036729a
- (_Bool)shouldRebaseForUpdates;	// IMP=0x0000000000367252
- (void)reset;	// IMP=0x00000000003671e9
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000000367108

@end

