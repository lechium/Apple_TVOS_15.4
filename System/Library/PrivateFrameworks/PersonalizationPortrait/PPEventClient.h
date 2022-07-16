//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPEventClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPEventClient : NSObject <PPEventClientProtocol>
{
    PPXPCClientHelper *_clientHelper;	// 8 = 0x8
    PPXPCClientPipelinedBatchQueryManager *_queryManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000b980
- (void).cxx_destruct;	// IMP=0x000000000000b2aa
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b224
- (_Bool)sendRTCLogsWithError:(id *)arg1;	// IMP=0x000000000000affb
- (void)interactionSummaryMetricsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000af0b
- (_Bool)interactionSummaryMetricsWithError:(id *)arg1 handleBatch:(CDUnknownBlockType)arg2;	// IMP=0x000000000000adb7
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;	// IMP=0x000000000000ad3a
- (void)scoredEventsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000ac4a
- (_Bool)scoredEventsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;	// IMP=0x000000000000aaba
- (void)eventHighlightsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a9ca
- (_Bool)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id *)arg4 handleBatch:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a7f7
- (void)eventNameRecordChangesBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a707
- (_Bool)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3 handleBatch:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a51f
- (void)eventNameRecordBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a42f
- (_Bool)eventNameRecordsForClient:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a274
- (id)_remoteObjectProxy;	// IMP=0x000000000000a25e
- (void)_unblockPendingQueries;	// IMP=0x000000000000a148
- (id)init;	// IMP=0x0000000000009cc0

@end
