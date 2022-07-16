//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPXPCNamedEntityStore
{
    PPRecordMonitoringHelper *_monitoringHelper;	// 8 = 0x8
    PPClientFeedbackHelper *_clientFeedbackHelper;	// 16 = 0x10
    NSDate *_lastCallDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000152f3
- (void)setClientIdentifier:(id)arg1;	// IMP=0x00000000000152d6
- (id)clientIdentifier;	// IMP=0x00000000000152b9
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015090
- (_Bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014f8f
- (void)_loadNamedEntityRecordsWithDelegate:(id)arg1;	// IMP=0x0000000000014f0f
- (void)_sendChangesToDelegates;	// IMP=0x0000000000014e7f
- (void)_sendResetToAllDelegates;	// IMP=0x0000000000014e2b
- (CDUnknownBlockType)_recordGenerator;	// IMP=0x0000000000014ddd
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000014d27
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;	// IMP=0x0000000000014cc8
- (_Bool)cloudSyncWithError:(id *)arg1;	// IMP=0x0000000000014c6e
- (_Bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014bed
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014b6c
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014adf
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014a48
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x000000000001498a
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000000000148e6
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000014842
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000000147bc
- (_Bool)flushDonationsWithError:(id *)arg1;	// IMP=0x0000000000014762
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;	// IMP=0x00000000000144cf
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014124
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013f4f
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013ba4
- (_Bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000139cf
- (id)_getLastCallDate;	// IMP=0x0000000000013953
- (void)_setLastCallDate;	// IMP=0x00000000000138d7
- (id)_init;	// IMP=0x0000000000013818

@end

