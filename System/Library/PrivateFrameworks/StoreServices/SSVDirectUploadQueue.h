//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSVDirectUploadQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    int _daemonLaunchToken;	// 16 = 0x10
    SSXPCConnection *_inboundConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_observerQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    SSXPCConnection *_outboundConnection;	// 48 = 0x30
    NSArray *_uploadKinds;	// 56 = 0x38
    NSMutableArray *_uploads;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000145af3
- (void)_sendSimpleMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014587d
- (void)_sendObserversUploadsDidChange;	// IMP=0x000000000014565f
- (id)_outboundConnection;	// IMP=0x000000000014560a
- (void)_handleRemoveUploadsMessage:(id)arg1;	// IMP=0x00000000001453f2
- (void)_handleInboundMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000145349
- (void)_handleChangeUploadsMessage:(id)arg1;	// IMP=0x0000000000144f4f
- (void)_handleAddUploadsMessage:(id)arg1;	// IMP=0x0000000000144a0e
- (void)_establishInboundConnection;	// IMP=0x0000000000144755
@property(readonly, copy) NSArray *uploadKinds;
- (void)resumeUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001444d2
- (void)resumeAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001443f7
- (void)removeUploadObserver:(id)arg1;	// IMP=0x000000000014434e
- (void)pauseUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001440e9
- (void)pauseAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014400e
- (void)getUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143886
- (void)cancelUploads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000143621
- (void)cancelAllUploadsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000143546
- (void)addUploadObserver:(id)arg1;	// IMP=0x0000000000143480
- (void)dealloc;	// IMP=0x0000000000143447
- (id)initWithUploadKinds:(id)arg1;	// IMP=0x000000000014321b
- (id)init;	// IMP=0x0000000000143207

@end

