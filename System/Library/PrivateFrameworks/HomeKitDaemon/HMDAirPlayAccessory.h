//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAccessoryDisassociation-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryMinimumUserPrivilegeCapable-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryUserManagement-Protocol.h>
#import <HomeKitDaemon/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

@interface HMDAirPlayAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>
{
    HMFPairingIdentity *_pairingIdentity;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    long long _minimumUserPriviledge;	// 48 = 0x30
    HMFExponentialBackoffTimer *_configurationRetryTimer;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005f1009
+ (void)initialize;	// IMP=0x00000000005f0f9f
- (void).cxx_destruct;	// IMP=0x00000000005ed365
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005ed1c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005ed0a8
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005ed037
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x00000000005ed022
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005eca67
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005ec67e
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005ec100
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005ebb64
@property(readonly) _Bool supportsUserManagement;
- (void)disassociateUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005eb63e
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005eb5d6
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000005eb512
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x00000000005eb3d3
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000005eb280
- (void)setMinimumUserPriviledge:(long long)arg1;	// IMP=0x00000000005eb1da
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;	// IMP=0x00000000005eb018
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;	// IMP=0x00000000005eae21
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x00000000005eabf1
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x00000000005eab3f
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x00000000005eab37
- (id)messageSendPolicy;	// IMP=0x00000000005eab04
- (void)setReachable:(_Bool)arg1;	// IMP=0x00000000005ea9dc
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x00000000005ea6f3
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x00000000005e9c68
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000005e9b6d
- (id)advertisement;	// IMP=0x00000000005e9a3e
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000005e98c9
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000005e96df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
