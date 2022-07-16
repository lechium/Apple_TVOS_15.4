//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFMessageTransportDelegate-Protocol.h>

@class HMFMessageTransport, HMFTimer, NSBackgroundActivityScheduler, NSDictionary, NSMutableOrderedSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher <HMFLogging, HMFMessageTransportDelegate>
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    NSMutableOrderedSet *_handlers;	// 16 = 0x10
    HMFTimer *_indexWatchdog;	// 24 = 0x18
    NSBackgroundActivityScheduler *_indexScheduler;	// 32 = 0x20
    NSDictionary *_destinationHandlerIndexes;	// 40 = 0x28
    NSDictionary *_nameHandlerIndexes;	// 48 = 0x30
    _Bool _indexed;	// 56 = 0x38
    _Bool _shouldAutomaticallyIndex;	// 57 = 0x39
    NSSet *_filterClasses;	// 64 = 0x40
    HMFMessageTransport *_transport;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x000000000002695d
+ (id)allMessagesForMessageNameTarget;	// IMP=0x0000000000023b53
- (void).cxx_destruct;	// IMP=0x0000000000026a20
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool shouldAutomaticallyIndex; // @synthesize shouldAutomaticallyIndex=_shouldAutomaticallyIndex;
@property(readonly, nonatomic) HMFMessageTransport *transport; // @synthesize transport=_transport;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000269c4
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026873
- (void)sendMessage:(id)arg1;	// IMP=0x000000000002685f
- (void)dispatchMessage:(id)arg1;	// IMP=0x0000000000025948
- (void)deregisterReceiver:(id)arg1;	// IMP=0x00000000000256bd
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;	// IMP=0x00000000000250aa
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000024f97
- (void)registerForMessage:(id)arg1 targetUUID:(id)arg2 receiver:(id)arg3 policies:(id)arg4 selector:(SEL)arg5;	// IMP=0x0000000000024b7f
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;	// IMP=0x0000000000024acd
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024ab1
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3;	// IMP=0x0000000000024a95
- (id)handlersForMessage:(id)arg1;	// IMP=0x0000000000024519
- (void)index;	// IMP=0x0000000000023eb2
@property(readonly, getter=isIndexed) _Bool indexed; // @synthesize indexed=_indexed;
@property(copy) NSSet *filterClasses; // @synthesize filterClasses=_filterClasses;
- (void)dealloc;	// IMP=0x0000000000023b0a
- (id)initWithTransport:(id)arg1;	// IMP=0x00000000000239e1
- (id)init;	// IMP=0x0000000000023939
- (id)sendMessageExpectingResponse:(id)arg1;	// IMP=0x000000000000204c
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000026c6a
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026c45
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000026c22
- (void)sendMessage:(id)arg1 target:(id)arg2;	// IMP=0x0000000000026bf9
- (void)dispatchMessage:(id)arg1 target:(id)arg2;	// IMP=0x0000000000026ab7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
