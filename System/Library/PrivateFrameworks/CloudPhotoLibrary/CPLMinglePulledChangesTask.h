//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLScopeFilter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSString *_clientCacheIdentifier;	// 16 = 0x10
    _Bool _hasPreparedForMingling;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 32 = 0x20
    _Bool _didNotifySchedulerPullQueueIsFullOnce;	// 40 = 0x28
    _Bool _needsToNotifySchedulerPullQueueIsFull;	// 41 = 0x29
    CPLScopeFilter *_scopeFilter;	// 48 = 0x30
}

+ (_Bool)mingleBatch:(id)arg1 forStore:(id)arg2 onPutBatchInPullQueue:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000000523fb
- (void).cxx_destruct;	// IMP=0x0000000000050f9d
@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
- (id)taskIdentifier;	// IMP=0x0000000000050f6b
- (void)cancel;	// IMP=0x0000000000050f3c
- (void)taskDidFinishWithError:(id)arg1;	// IMP=0x0000000000050f0d
- (void)launch;	// IMP=0x0000000000050ecc
- (void)_launch;	// IMP=0x0000000000050e43
- (void)_processNextBatch;	// IMP=0x0000000000050b37
- (void)_taskDidFinishWithError:(id)arg1;	// IMP=0x00000000000508db
- (_Bool)_checkContinueMinglingInTransaction:(id)arg1;	// IMP=0x0000000000050580
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;	// IMP=0x00000000000504b4
- (void)_notifySchedulerPullQueueIsFull;	// IMP=0x00000000000503c0
- (void)_reallyNotifySchedulerPullQueueIsFull;	// IMP=0x00000000000502f9
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;	// IMP=0x0000000000050240

@end

