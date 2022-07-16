//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface TCCDEventPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_event_publisher> *_publisher;	// 16 = 0x10
    NSMutableDictionary *_subscribers;	// 24 = 0x18
    _Bool _receivedInitialBarrier;	// 32 = 0x20
    NSMutableArray *_pendingEvents;	// 40 = 0x28
}

+ (id)sharedPublisher;	// IMP=0x00400000000329a2
- (void).cxx_destruct;	// IMP=0x0020000000033abc
- (void)publish:(id)arg1;	// IMP=0x001000000003380f
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2;	// IMP=0x00100000000336ce
- (void)_publishPendingEvents;	// IMP=0x0010000000033586
- (void)_addPendingEvent:(id)arg1;	// IMP=0x00100000000334a4
- (void)_removeSubscriber:(unsigned long long)arg1;	// IMP=0x0010000000033366
- (void)checkEntitlementForSubscriber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033034
- (void)_addSubscriber:(unsigned long long)arg1 withFilterCriteria:(id)arg2;	// IMP=0x0010000000032ea4
- (void)_handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;	// IMP=0x0010000000032ce6
- (void)_handleError:(int)arg1;	// IMP=0x0010000000032ca0
- (id)init;	// IMP=0x00100000000329f7

@end
