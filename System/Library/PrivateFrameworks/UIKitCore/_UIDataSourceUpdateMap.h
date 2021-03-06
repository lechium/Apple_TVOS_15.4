//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;	// 8 = 0x8
    _UIDataSourceSnapshotter *_finalSnapshot;	// 16 = 0x10
    NSArray *_originalUpdateItems;	// 24 = 0x18
    NSArray *_updateItems;	// 32 = 0x20
    NSArray *_reverseUpdateItems;	// 40 = 0x28
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;	// 48 = 0x30
}

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;	// IMP=0x0000000000371946
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;	// IMP=0x00000000003718d8
- (void).cxx_destruct;	// IMP=0x000000000037673c
@property(retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // @synthesize batchUpdateMapHelper=_batchUpdateMapHelper;
@property(retain, nonatomic) NSArray *reverseUpdateItems; // @synthesize reverseUpdateItems=_reverseUpdateItems;
@property(retain, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
@property(copy, nonatomic) NSArray *originalUpdateItems; // @synthesize originalUpdateItems=_originalUpdateItems;
@property(retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (id)updates;	// IMP=0x000000000037668a
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;	// IMP=0x0000000000376496
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000376243
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000375d7c
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;	// IMP=0x0000000000375868
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;	// IMP=0x0000000000375576
- (id)_rebasedUpdatesForUpdate:(id)arg1;	// IMP=0x0000000000375022
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000000374b1c
- (id)submapAfterUpdate:(id)arg1;	// IMP=0x0000000000374787
- (id)submapBeforeUpdate:(id)arg1;	// IMP=0x0000000000374548
- (id)_findUpdateForIdentifier:(id)arg1;	// IMP=0x0000000000374358
- (void)_performAppendingInsertsFixups;	// IMP=0x00000000003740c5
- (_Bool)_mapIsSimpleInsertMoveSequence;	// IMP=0x0000000000373f5b
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;	// IMP=0x0000000000373f00
- (id)_sectionIndexPathForSection:(long long)arg1;	// IMP=0x0000000000373eda
- (id)description;	// IMP=0x0000000000373de8
- (id)initialUpdateForFinalUpdate:(id)arg1;	// IMP=0x0000000000373c7e
- (id)finalUpdateForInitialUpdate:(id)arg1;	// IMP=0x00000000003739e9
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;	// IMP=0x00000000003737fe
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;	// IMP=0x000000000037373a
- (id)initialUpdateForUpdateIdentifier:(id)arg1;	// IMP=0x0000000000373581
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000000373033
@property(readonly, nonatomic) _Bool isBatchUpdateMap;
- (id)rebasedMapFromNewBaseMap:(id)arg1;	// IMP=0x0000000000372512
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x000000000037226f
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x0000000000371fcc
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x0000000000371cd0
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x00000000003719d4
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;	// IMP=0x00000000003717a0

@end

