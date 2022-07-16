//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitEventRouter/HMEEventConsumer-Protocol.h>
#import <HomeKitEventRouter/HMESubscriptionProviding-Protocol.h>
#import <HomeKitEventRouter/HMESynchronousSubscriptionProviding-Protocol.h>
#import <HomeKitEventRouter/HMETopicRouterDelegate-Protocol.h>

@class HMETopicRouter, NSMutableArray, NSString;
@protocol HMEDelegatingEventRouterDataSource, HMELastEventStoreReadHandle, OS_dispatch_queue, OS_os_log;

@interface HMEDelegatingEventRouter : NSObject <HMETopicRouterDelegate, HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMETopicRouter *_topicRouter;	// 24 = 0x18
    NSMutableArray *_subRouters;	// 32 = 0x20
    id <HMEDelegatingEventRouterDataSource> _dataSource;	// 40 = 0x28
    id <HMELastEventStoreReadHandle> _eventStoreReadHandle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000009008
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x0000000000008c4a
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000008b40
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000008a5f
- (void)unregisterConsumerSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008958
- (void)changeRegistrationsSyncForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008784
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000086a3
- (void)unregisterConsumer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000085c2
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000085a6
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008464
- (void)unregisterSubRouter:(id)arg1;	// IMP=0x00000000000083b8
- (void)registerSubRouter:(id)arg1;	// IMP=0x000000000000830c
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 logger:(id)arg3;	// IMP=0x00000000000081f0
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 logCategory:(const char *)arg3;	// IMP=0x0000000000008169
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000000080df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

