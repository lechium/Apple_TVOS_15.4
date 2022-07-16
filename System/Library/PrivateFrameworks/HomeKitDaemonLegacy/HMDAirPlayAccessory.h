//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAccessoryDisassociation-Protocol.h>
#import <HomeKitDaemonLegacy/HMDAccessoryMinimumUserPrivilegeCapable-Protocol.h>
#import <HomeKitDaemonLegacy/HMDAccessoryUserManagement-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

@interface HMDAirPlayAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>
{
    HMFPairingIdentity *_pairingIdentity;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    long long _minimumUserPriviledge;	// 48 = 0x30
    HMFExponentialBackoffTimer *_configurationRetryTimer;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000058ca3c
+ (void)initialize;	// IMP=0x000000000058c9d2
- (void).cxx_destruct;	// IMP=0x0000000000588d98
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000588bf7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000588adb
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000588a6a
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000588a55
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000058849a
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005880b1
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000587b33
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000587597
@property(readonly) _Bool supportsUserManagement;
- (void)disassociateUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000587071
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000587009
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000586f45
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x0000000000586e06
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000586cb3
- (void)setMinimumUserPriviledge:(long long)arg1;	// IMP=0x0000000000586c0d
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;	// IMP=0x0000000000586a4b
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;	// IMP=0x0000000000586854
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x0000000000586624
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x0000000000586572
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x000000000058656a
- (id)messageSendPolicy;	// IMP=0x0000000000586537
- (void)setReachable:(_Bool)arg1;	// IMP=0x000000000058640f
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x0000000000586126
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x000000000058569b
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000005855a0
- (id)advertisement;	// IMP=0x0000000000585471
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000005852fc
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x0000000000585112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

