//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCActivity, NSCache, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAnalyticsPipelineUploader : NSObject
{
    NSObject<OS_dispatch_queue> *_uploadQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_uploadTimer;	// 16 = 0x10
    GEOXPCActivity *_activity;	// 24 = 0x18
    NSCache *_sessionCache;	// 32 = 0x20
}

+ (id)sharedUploader;	// IMP=0x0020000000035f5c
- (void).cxx_destruct;	// IMP=0x002000000003a41d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
- (id)_additionalHTTPHeadersForAnalyticSessionType:(int)arg1;	// IMP=0x001000000003a240
- (id)_urlForAnalyticSessionType:(int)arg1;	// IMP=0x001000000003a11d
- (id)_urlForBatchId:(unsigned long long)arg1;	// IMP=0x001000000003a0f4
- (_Bool)_compressForType:(int)arg1;	// IMP=0x001000000003a0e8
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000038baf
- (_Bool)_startTaskForFile:(id)arg1 taskDescription:(id)arg2 analyticSessionType:(int)arg3 apURLsessionConfigType:(int)arg4 ttl:(double)arg5;	// IMP=0x0010000000038892
- (_Bool)_issueUploadRequestForBatchId:(unsigned long long)arg1 request:(id)arg2 stageDescription:(id)arg3 apURLSessionConfigType:(int)arg4 stageTTL:(double)arg5;	// IMP=0x0010000000038694
- (id)_sessionForType:(int)arg1;	// IMP=0x00100000000383b4
- (id)filePathForTaskDescription:(id)arg1;	// IMP=0x0010000000038307
- (void)_submitBatchForUploadWithBatchId:(unsigned long long)arg1;	// IMP=0x00100000000371dc
- (void)submitBatchForUploadWithBatchId:(unsigned long long)arg1;	// IMP=0x0010000000036f5e
- (void)_submitBatchesForUpload;	// IMP=0x0010000000036cd0
- (void)_clearExpired;	// IMP=0x0010000000036ba5
- (void)_clearUploadTimer;	// IMP=0x0010000000036b8c
- (void)_startUploadTimer;	// IMP=0x0010000000036b45
- (void)submitBatchesForUpload;	// IMP=0x0010000000036ae4
- (void)startCountsAggregator;	// IMP=0x0010000000036a8b
- (unsigned long long)batchSizeThreshold;	// IMP=0x0010000000036a74
- (void)_registerXPCActivity;	// IMP=0x001000000003685c
- (id)persistence;	// IMP=0x00100000000367f7
- (id)init;	// IMP=0x0010000000035fb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

