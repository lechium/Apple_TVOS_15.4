//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSString *_entitlementName;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_observerQueue;	// 32 = 0x20
    NSMutableDictionary *_observers;	// 40 = 0x28
    NSString *_serviceName;	// 48 = 0x30
    NSMutableSet *_xpcRequestsCache;	// 56 = 0x38
}

+ (id)mainServer;	// IMP=0x00000000000cd65c
- (void)_recordCoreAnalyticsEventForClient:(id)arg1 andSelector:(id)arg2;	// IMP=0x00000000000ce139
- (void)_dispatchMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000cdbc3
- (void)start;	// IMP=0x00000000000cd98d
- (void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;	// IMP=0x00000000000cd85d
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3;	// IMP=0x00000000000cd71b
- (void)dealloc;	// IMP=0x00000000000cd5da
- (id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000cd4d8
- (id)initWithServiceName:(id)arg1;	// IMP=0x00000000000cd4c1
- (id)init;	// IMP=0x00000000000cd4ad

@end

