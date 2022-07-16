//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate-Protocol.h>

@class HMFMACAddress, NSHashTable, NSObject, NSString;
@protocol HMFWiFiManagerDataSource, OS_dispatch_queue;

@interface HMFWiFiManager <HMFLogging, HMFWiFiManagerDataSourceDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldAssertWoW;	// 12 = 0xc
    NSString *_currentNetworkSSID;	// 16 = 0x10
    HMFMACAddress *_MACAddress;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    id <HMFWiFiManagerDataSource> _dataSource;	// 40 = 0x28
    NSHashTable *_activeAssertions;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000000d78e
+ (id)sharedManager;	// IMP=0x000000000000cd29
- (void).cxx_destruct;	// IMP=0x000000000000dd5c
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;	// IMP=0x000000000000dabb
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(_Bool)arg2;	// IMP=0x000000000000d98d
- (void)dataSource:(id)arg1 didChangeWoWState:(_Bool)arg2;	// IMP=0x000000000000d7f5
- (void)releaseWoWAssertion;	// IMP=0x000000000000d5fa
- (void)takeWoWAssertion;	// IMP=0x000000000000d463
- (void)endActiveAssertion:(id)arg1;	// IMP=0x000000000000d393
- (id)beginActiveAssertionWithOptions:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x000000000000d20c
@property(readonly, getter=isCaptive) _Bool captive;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, copy) NSString *currentNetworkSSID;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000000ce27
- (id)init;	// IMP=0x000000000000cd7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
