//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragAndDropController
{
    int _sessionKind;	// 8 = 0x8
    NSMutableArray *__reorderedItems;	// 16 = 0x10
    NSUUID *_currentDropInsertionShadowUpdateIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000361344
@property(nonatomic) int sessionKind; // @synthesize sessionKind=_sessionKind;
@property(retain, nonatomic) NSUUID *currentDropInsertionShadowUpdateIdentifier; // @synthesize currentDropInsertionShadowUpdateIdentifier=_currentDropInsertionShadowUpdateIdentifier;
@property(retain, nonatomic) NSMutableArray *_reorderedItems; // @synthesize _reorderedItems=__reorderedItems;
- (_Bool)_deleteShadowUpdateWithIdentifier:(id)arg1;	// IMP=0x00000000003611ca
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000003611c4
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x0000000000361186
- (_Bool)_hasReorderingMoved;	// IMP=0x00000000003610a1
- (_Bool)_isReordering;	// IMP=0x0000000000361059
- (_Bool)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1;	// IMP=0x0000000000360d3b
- (void)_updateReorderedCellStatesRemovingFromViewHierarchyIfRequired;	// IMP=0x00000000003609af
- (void)_resetReorderedItems;	// IMP=0x0000000000360962
- (int)_determineSessionKind;	// IMP=0x000000000036091b
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;	// IMP=0x00000000003605a4
- (void)_shadowUpdatesWereReverted;	// IMP=0x000000000036053f
- (void)_rollbackCurrentDropInsertion;	// IMP=0x00000000003601b2
- (void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;	// IMP=0x000000000035ffe4
- (void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1;	// IMP=0x000000000035fc6a
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x000000000035fc51
- (_Bool)updateWillCauseInternalInconsistency:(id)arg1;	// IMP=0x000000000035fba7
- (id)indexPathForCurrentReorderedItem;	// IMP=0x000000000035fb95
- (id)indexPathForOriginalReorderedItem;	// IMP=0x000000000035fafc
- (id)indexPathForDragAndDropInsertion;	// IMP=0x000000000035fa75
@property(readonly, nonatomic) unsigned long long reorderingCapabilities;
@property(readonly, nonatomic) NSArray *reorderedItems;
@property(readonly, nonatomic) unsigned long long reorderedItemCount;
- (void)reset;	// IMP=0x000000000035f8fc
- (_Bool)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1;	// IMP=0x000000000035f81e
- (_Bool)cancelReorderingShouldRevertOrdering;	// IMP=0x000000000035f805
- (_Bool)hasShadowUpdates;	// IMP=0x000000000035f7bd
- (void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000035f7b7
- (CDUnknownBlockType)endReordering;	// IMP=0x000000000035f6e7
- (CDUnknownBlockType)cancelReordering;	// IMP=0x000000000035f61e
- (void)commitReorderedItems;	// IMP=0x000000000035f4f1
- (void)updateReorderingTargetIndexPath:(id)arg1;	// IMP=0x000000000035f103
- (_Bool)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;	// IMP=0x000000000035f030
- (id)description;	// IMP=0x000000000035eeb5
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000035ee48

@end

