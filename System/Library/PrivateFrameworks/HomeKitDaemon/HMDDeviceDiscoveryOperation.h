//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccount, HMDIDSSendMessageOperation, IDSService, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDDeviceDiscoveryOperation : HMFOperation <IDSServiceDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDIDSSendMessageOperation *_operation;	// 24 = 0x18
    NSMutableSet *_devices;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
    HMDAccount *_account;	// 48 = 0x30
    CDUnknownBlockType _discoveryBlock;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00000000002ac645
+ (double)timeout;	// IMP=0x00000000002ac567
- (void).cxx_destruct;	// IMP=0x00000000002ac4f2
@property(copy) CDUnknownBlockType discoveryBlock; // @synthesize discoveryBlock=_discoveryBlock;
@property(readonly) HMDAccount *account; // @synthesize account=_account;
@property(readonly) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000002abeac
- (void)main;	// IMP=0x00000000002abbb5
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000002ababf
- (void)setQualityOfService:(long long)arg1;	// IMP=0x00000000002aba2b
@property(readonly, copy) NSSet *devices;
- (id)initWithAccount:(id)arg1 service:(id)arg2 timeout:(double)arg3;	// IMP=0x00000000002ab75b
- (id)initWithAccount:(id)arg1 timeout:(double)arg2;	// IMP=0x00000000002ab6ad
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000002ab698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

