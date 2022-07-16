//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitEventRouter/HMEEventConsumer-Protocol.h>
#import <HomeKitEventRouter/HMELastEventStoreWriter-Protocol.h>
#import <HomeKitEventRouter/HMETopicRouterDelegate-Protocol.h>

@class HMETopicRouter, NSMapTable, NSString;
@protocol HMEEventForwarder, HMELastEventStoreReadHandle, HMESubscriptionProviding, OS_dispatch_queue, OS_os_log;

@interface HMERouterServer : NSObject <HMEEventConsumer, HMETopicRouterDelegate, HMELastEventStoreWriter>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSMapTable *_unregisterEvents;	// 16 = 0x10
    id <HMESubscriptionProviding> _subscriptionProvider;	// 24 = 0x18
    id <HMEEventForwarder> _localEventForwarder;	// 32 = 0x20
    id <HMELastEventStoreReadHandle> _eventStoreReadHandle;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    HMETopicRouter *_topicRouter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000011872
@property(readonly) HMETopicRouter *topicRouter; // @synthesize topicRouter=_topicRouter;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle; // @synthesize eventStoreReadHandle=_eventStoreReadHandle;
@property(readonly) id <HMEEventForwarder> localEventForwarder; // @synthesize localEventForwarder=_localEventForwarder;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly) NSMapTable *unregisterEvents; // @synthesize unregisterEvents=_unregisterEvents;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x000000000001165e
- (void)handleCachedEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000011601
- (void)handleEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000000115a4
- (id)cachedEventsForTopics:(id)arg1;	// IMP=0x00000000000114cc
- (void)didRemoveConnection:(id)arg1;	// IMP=0x000000000001127b
- (void)didConnectConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3;	// IMP=0x000000000001103f
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000010f4b
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000010e6f
- (id)dumpStateDescription;	// IMP=0x0000000000010db2
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 storeReadHandle:(id)arg4 logger:(id)arg5;	// IMP=0x0000000000010c4e
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3;	// IMP=0x0000000000010ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
