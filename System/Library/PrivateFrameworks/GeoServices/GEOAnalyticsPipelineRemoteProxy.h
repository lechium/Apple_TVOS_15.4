//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSOperationQueue, NSString, geo_isolater;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
    NSOperationQueue *_opQueue;	// 8 = 0x8
    unsigned long long _maxOpCount;	// 16 = 0x10
    unsigned long long _droppedLogMsgCount;	// 24 = 0x18
    geo_isolater *_enqueueLock;	// 32 = 0x20
    NSObject<OS_xpc_object> *_sharedXPCConnection;	// 40 = 0x28
    struct os_unfair_lock_s _connectionLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000098ea6f
- (void)reportRRLogMessage:(id)arg1;	// IMP=0x000000000098e9e5
- (void)processMapsDeletionWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000098e8e4
- (void)runAggregationTasks;	// IMP=0x000000000098e88d
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000098e565
- (void)flushEvalData;	// IMP=0x000000000098e50e
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x000000000098e49b
- (void)updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000098e3ae
- (void)reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000098e2c2
- (void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000098e1e5
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x000000000098e0c6
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000098dfd2
- (id)_geodXPCConnection;	// IMP=0x000000000098dda5
- (id)init;	// IMP=0x000000000098dc5f
- (void)_enqueueOperation:(id)arg1;	// IMP=0x000000000098daf7
- (void)_reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000098eaa2
- (void)_reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000098ebf6
- (void)_reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x000000000098ed35
- (void)_reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000098eecd
- (void)_updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000098f02b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

