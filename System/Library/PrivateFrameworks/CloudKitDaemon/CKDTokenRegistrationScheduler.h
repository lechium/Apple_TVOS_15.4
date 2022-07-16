//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDLogicalDeviceContext, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_callbackBlocks;	// 16 = 0x10
    NSMutableDictionary *_callbackTimers;	// 24 = 0x18
    NSMutableSet *_operations;	// 32 = 0x20
    CKDLogicalDeviceContext *_deviceContext;	// 40 = 0x28
    NSMutableDictionary *_unitTestingPushTokens;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001ba65b
@property(retain, nonatomic) NSMutableDictionary *unitTestingPushTokens; // @synthesize unitTestingPushTokens=_unitTestingPushTokens;
@property(nonatomic) __weak CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableDictionary *callbackTimers; // @synthesize callbackTimers=_callbackTimers;
@property(retain, nonatomic) NSMutableDictionary *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)registerTokenForAppContainerAccountTuple:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ba42b
- (void)handlePublicPushTokenDidUpdate:(id)arg1;	// IMP=0x00000000001ba30f
- (void)forceTokenRefreshForAllClients;	// IMP=0x00000000001ba278
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b97f1
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;	// IMP=0x00000000001b9233
- (void)_handlePushToken:(id)arg1 forContainer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b8401
- (void)refreshAllClientsNow:(_Bool)arg1;	// IMP=0x00000000001b75ad
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b6efb
- (void)_refreshApsToken:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b6767
- (void)tokenRefreshChanged;	// IMP=0x00000000001b6755
- (void)registerTokenRefreshActivity;	// IMP=0x00000000001b647f
- (void)dealloc;	// IMP=0x00000000001b640a
- (id)initWithDeviceContext:(id)arg1;	// IMP=0x00000000001b6253

@end
