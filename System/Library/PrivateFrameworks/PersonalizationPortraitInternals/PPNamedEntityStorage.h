//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase, PPSourceStorage, PPTrialWrapper;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject
{
    PPSQLDatabase *_db;	// 8 = 0x8
    PPDKStorage *_dkStorage;	// 16 = 0x10
    id _deletionObserver;	// 24 = 0x18
    PPRecordStorageHelper *_storageHelper;	// 32 = 0x20
    PPSourceStorage *_sourceStorage;	// 40 = 0x28
    PPTrialWrapper *_trialWrapper;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000035d5b
- (id)firstDonationSourceCountsWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035d39
- (_Bool)setNamedEntityFilterLastRunDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000035bbf
- (_Bool)setNamedEntityFilterLastRecordDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000035a45
- (id)namedEntityFilterLastRecordDate;	// IMP=0x00000000000358f0
- (id)namedEntityFilterLastRunDateWithError:(id *)arg1;	// IMP=0x00000000000357a8
- (id)lastDonationTimeForSourcesBeforeDate:(id)arg1;	// IMP=0x0000000000035786
- (id)thirdPartyBundleIdsFromToday;	// IMP=0x0000000000035767
- (unsigned int)uniqueClusterIdentifierCount;	// IMP=0x0000000000035748
- (id)clusterIdentifiersExistingBeforeDate:(id)arg1;	// IMP=0x0000000000035726
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;	// IMP=0x00000000000355fd
- (id)sourceStats:(unsigned long long)arg1 withExcludedAlgorithms:(id)arg2;	// IMP=0x00000000000354d3
- (double)duetWriteBatchInterval;	// IMP=0x00000000000354bd
- (unsigned int)duetWriteBatchSize;	// IMP=0x00000000000354a7
- (unsigned int)duetReadBatchSize;	// IMP=0x0000000000035491
- (void)disableSyncForBundleIds:(id)arg1;	// IMP=0x00000000000353e4
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000353c4
- (void)fixupDKEventsWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000352bc
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003529a
- (void)exportRecordsToDKWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034c00
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2 shouldContinueBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034b1c
- (void)processNewDKEventDeletions;	// IMP=0x0000000000034add
- (_Bool)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long *)arg3 isComplete:(_Bool *)arg4;	// IMP=0x0000000000034a1b
- (_Bool)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)arg1;	// IMP=0x0000000000034929
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneNamedEntityRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000034728
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 atLeastOneNamedEntityRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003457d
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneNamedEntityRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000000343ae
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneNamedEntityRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000000341df
- (_Bool)deleteNamedEntitiesMatchingRowIds:(id)arg1 atLeastOneNamedEntityRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003412f
- (_Bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 atLeastOneNamedEntityRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000003407f
- (_Bool)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003401d
- (_Bool)donateNamedEntityFeedback:(id)arg1;	// IMP=0x0000000000033fe7
- (id)decayedFeedbackCountsForClusterIdentifier:(id)arg1;	// IMP=0x0000000000033fc7
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id *)arg7;	// IMP=0x0000000000033d51
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x0000000000033d1b
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033c7a
- (_Bool)iterNamedEntityRecordsAndIdsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032a72
- (void)dealloc;	// IMP=0x0000000000032a2c
- (id)init;	// IMP=0x0000000000032a26
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000000032923
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(_Bool)arg4 trialWrapper:(id)arg5;	// IMP=0x000000000003260d

@end

