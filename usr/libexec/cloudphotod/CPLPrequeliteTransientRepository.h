//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteScopeFilter, NSString;

@interface CPLPrequeliteTransientRepository
{
    CPLPrequeliteScopeFilter *_scopeFilter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000050cbf
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000050bb4
- (id)status;	// IMP=0x0010000000050aee
- (unsigned long long)countOfUnmingledRecords;	// IMP=0x0010000000050a41
- (unsigned long long)countOfAssetChanges;	// IMP=0x001000000005095b
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000050735
- (_Bool)hasUnmingledRecordsWithScopeFilter:(id)arg1;	// IMP=0x001000000005063c
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000503ea
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000502a7
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000050137
- (_Bool)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005005d
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000004ff80
- (_Bool)popChangeBatchOfChangedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000004fbe3
- (_Bool)_fillArray:(id)arg1 alreadySeen:(id)arg2 withChangeAndRelated:(id)arg3 scopedIdentifiersToDelete:(id)arg4 transientType:(int)arg5 maximumCount:(unsigned long long *)arg6 error:(id *)arg7;	// IMP=0x001000000004f8b7
- (_Bool)popChangeBatchOfDeletedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000004f56a
- (_Bool)_fillBatchWithDeletedRecords:(id)arg1 withEnumerator:(id)arg2 maximumCount:(unsigned long long *)arg3 additionalRecordsToAdd:(id)arg4 scopedIdentifiersToDelete:(id)arg5 alreadyDeleted:(id)arg6 error:(id *)arg7;	// IMP=0x001000000004ef59
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000004ec0e
- (_Bool)_hasRecordWithTransientType:(int)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x001000000004eab9
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;	// IMP=0x001000000004e919
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000004e7d1
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000004e640
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 class:(Class)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x001000000004e3b5
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x001000000004e15c
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004dd5a
- (_Bool)prepareForMinglingWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004dd43
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004dbc8
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004d390
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000004d157
- (_Bool)initializeStorage;	// IMP=0x001000000004d04f
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x001000000004d020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

