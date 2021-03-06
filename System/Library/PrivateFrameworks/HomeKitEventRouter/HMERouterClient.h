//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitEventRouter/HMECachedEventSource-Protocol.h>
#import <HomeKitEventRouter/HMELastEventStoreWriter-Protocol.h>
#import <HomeKitEventRouter/HMESubscriptionProviding-Protocol.h>
#import <HomeKitEventRouter/HMESynchronousSubscriptionProviding-Protocol.h>
#import <HomeKitEventRouter/HMETopicRouterDelegate-Protocol.h>

@class HMETopicRouter, NSString;
@protocol HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, HMERouterClientDelegate, OS_dispatch_queue, OS_os_log;

@interface HMERouterClient : NSObject <HMECachedEventSource, HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMESubscriptionProviding>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    id <HMELastEventStoreReadHandle> _eventStoreReadHandle;	// 16 = 0x10
    id <HMELastEventStoreWriteHandle> _eventStoreWriteHandle;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    HMETopicRouter *_topicRouter;	// 40 = 0x28
    id <HMERouterClientDelegate> _privateDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007b88
@property __weak id <HMERouterClientDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(readonly) HMETopicRouter *topicRouter; // @synthesize topicRouter=_topicRouter;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id <HMELastEventStoreWriteHandle> eventStoreWriteHandle; // @synthesize eventStoreWriteHandle=_eventStoreWriteHandle;
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle; // @synthesize eventStoreReadHandle=_eventStoreReadHandle;
- (_Bool)handleChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000007b09
- (void)processReceivedCachedEvents:(id)arg1;	// IMP=0x00000000000075eb
- (void)processReceivedEvents:(id)arg1;	// IMP=0x00000000000070cf
@property(readonly, nonatomic) _Bool isCachedEventSourceCurrentProcess;
- (void)unregisterConsumerSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007002
- (void)changeRegistrationsSyncForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006edb
- (id)synchronousSubscriptionProvider;	// IMP=0x0000000000006ed2
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006dc8
- (void)unregisterConsumer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006cec
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006be2
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006aa7
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000006987
- (id)dumpStateDescription;	// IMP=0x00000000000068ca
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000006860
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 logger:(id)arg3;	// IMP=0x0000000000006848
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logger:(id)arg4;	// IMP=0x0000000000006737

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

