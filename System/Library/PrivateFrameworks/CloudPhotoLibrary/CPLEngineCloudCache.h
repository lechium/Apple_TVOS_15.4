//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache <CPLAbstractObject>
{
}

- (id)allRecordsIsFinal:(_Bool)arg1;	// IMP=0x000000000010f4b9
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010f455
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forScopedIdentifier:(id)arg3;	// IMP=0x000000000010f319
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 record:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000010f079
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ef9b
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ede2
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ebf8
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010ea2e
- (_Bool)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e9b1
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000000010e934
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000000010e8ab
- (_Bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e834
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e7b1
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e728
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x000000000010e69a
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e611
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e59a
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;	// IMP=0x000000000010e50c
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e480
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000010e374
- (_Bool)confirmAllRecordsWithError:(id *)arg1;	// IMP=0x000000000010e321
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000000010bc06
- (_Bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010b3a2
- (_Bool)applyBatch:(id)arg1 isFinal:(_Bool)arg2 direction:(unsigned long long)arg3 withError:(id *)arg4;	// IMP=0x000000000010a939
- (_Bool)updateStagedRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a765
- (_Bool)updateFinalRecord:(id)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000010a58a
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000010a3af
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x000000000010a340
- (unsigned long long)scopeType;	// IMP=0x000000000010a335

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

