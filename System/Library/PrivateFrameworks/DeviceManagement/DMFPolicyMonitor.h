//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject
{
    int _firstUnlockToken;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;	// 32 = 0x20
    NSMutableDictionary *_notificationTokensByPolicyMonitorIdentifier;	// 40 = 0x28
    NSMutableArray *_pendingRequests;	// 48 = 0x30
}

+ (const char *)mobileKeyBagFirstUnlockNotificationName;	// IMP=0x000000000002f5d9
+ (_Bool)hasFirstUnlocked;	// IMP=0x000000000002f5d1
+ (id)remoteInterface;	// IMP=0x000000000002f457
+ (id)policyMonitor;	// IMP=0x000000000002ee5c
- (void).cxx_destruct;	// IMP=0x00000000000309f0
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier; // @synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(readonly, nonatomic) int firstUnlockToken; // @synthesize firstUnlockToken=_firstUnlockToken;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)_dispatchRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030848
- (id)requestPoliciesForTypes:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000030351
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ff35
- (void)invalidatePolicyMonitor:(id)arg1;	// IMP=0x000000000002fe5c
- (void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f5e1
- (void)dealloc;	// IMP=0x000000000002f401
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000000002ef17
- (id)init;	// IMP=0x000000000002eeb1

@end
