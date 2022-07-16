//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSString;
@protocol DirectUploadSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DirectUploadSessionController : NSObject
{
    id <DirectUploadSessionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_preparationQueue;	// 24 = 0x18
    NSMutableArray *_progress;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_progressFlushTimer;	// 40 = 0x28
    NSMutableArray *_sessions;	// 48 = 0x30
    NSMutableArray *_uploadDatabaseIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000055781
@property(nonatomic) __weak id <DirectUploadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_flushProgress;	// IMP=0x0010000000055218
- (void)_failUploadWithDatabaseID:(id)arg1 error:(id)arg2;	// IMP=0x001000000005515d
- (void)_cleanupForDatabaseID:(id)arg1;	// IMP=0x0010000000055038
- (void)_asyncModifyTasksForDatabaseIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054bd2
- (void)_addUploadTaskWithRequest:(id)arg1 configuration:(id)arg2 URLRequest:(id)arg3;	// IMP=0x0010000000054665
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005450c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x001000000005411f
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000537c3
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000534a9
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000053396
- (void)pauseUploadTasksWithDatabaseIdentifiers:(id)arg1;	// IMP=0x00100000000530df
@property(readonly, nonatomic) long long numberOfTasks;
- (void)invalidURLSessions;	// IMP=0x0010000000052f81
- (void)cancelUploadTasksWithDatabaseIdentifiers:(id)arg1;	// IMP=0x0010000000052ccd
- (void)addUploadTasksWithRequests:(id)arg1;	// IMP=0x00100000000523a6
- (void)dealloc;	// IMP=0x0010000000052322
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x001000000005222b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

