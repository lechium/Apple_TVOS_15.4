//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFNetMonitor, HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString;

@interface HMDKeyTransferAgentClient <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate>
{
    _Bool _resolutionInProgress;	// 8 = 0x8
    _Bool _haveCulledPlist;	// 9 = 0x9
    unsigned long long _residentProvisioningStatus;	// 16 = 0x10
    HMFNetServiceBrowser *_serviceBrowser;	// 24 = 0x18
    NSMutableDictionary *_idsKeys;	// 32 = 0x20
    NSMutableDictionary *_bonjourKeys;	// 40 = 0x28
    NSMutableSet *_targetsToProcess;	// 48 = 0x30
    NSString *_pairingWithUUID;	// 56 = 0x38
    HMFExponentialBackoffTimer *_atHomeRetryTimer;	// 64 = 0x40
    HMFNetMonitor *_netMonitor;	// 72 = 0x48
    long long _tfaState;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00000000004e2d27
- (void).cxx_destruct;	// IMP=0x00000000004e0261
@property(nonatomic) long long tfaState; // @synthesize tfaState=_tfaState;
@property(nonatomic) _Bool haveCulledPlist; // @synthesize haveCulledPlist=_haveCulledPlist;
@property(retain, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property(retain, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer; // @synthesize atHomeRetryTimer=_atHomeRetryTimer;
@property(retain, nonatomic) NSString *pairingWithUUID; // @synthesize pairingWithUUID=_pairingWithUUID;
@property(nonatomic) _Bool resolutionInProgress; // @synthesize resolutionInProgress=_resolutionInProgress;
@property(retain, nonatomic) NSMutableSet *targetsToProcess; // @synthesize targetsToProcess=_targetsToProcess;
@property(retain, nonatomic) NSMutableDictionary *bonjourKeys; // @synthesize bonjourKeys=_bonjourKeys;
@property(retain, nonatomic) NSMutableDictionary *idsKeys; // @synthesize idsKeys=_idsKeys;
@property(retain, nonatomic) HMFNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(nonatomic) unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;	// IMP=0x00000000004e0041
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;	// IMP=0x00000000004dffc2
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;	// IMP=0x00000000004dfe02
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;	// IMP=0x00000000004dfd26
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;	// IMP=0x00000000004dfa3f
- (void)_handleKeyTransferAgentMessage:(id)arg1;	// IMP=0x00000000004df1f5
- (void)_restartKeyTransfer:(id)arg1;	// IMP=0x00000000004def4f
- (void)__accountChanged:(id)arg1;	// IMP=0x00000000004dee9e
- (void)__accessoryIsReachable:(id)arg1;	// IMP=0x00000000004dedb0
- (void)__deviceRemovedFromAccount:(id)arg1;	// IMP=0x00000000004decc2
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;	// IMP=0x00000000004de7fa
- (void)__deviceUpdated:(id)arg1;	// IMP=0x00000000004de70c
- (void)__deviceAddedToAccount:(id)arg1;	// IMP=0x00000000004de61e
- (void)_device:(id)arg1 addedToAccount:(id)arg2;	// IMP=0x00000000004de383
- (_Bool)_newDeviceSeen:(id)arg1;	// IMP=0x00000000004ddfbd
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3;	// IMP=0x00000000004dd8e9
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;	// IMP=0x00000000004dd4a3
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000004dd22e
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x00000000004dc273
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004dc11d
- (void)_tfaVerificationCompleteForKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x00000000004dbede
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;	// IMP=0x00000000004dbb25
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(_Bool)arg2;	// IMP=0x00000000004db5ce
- (void)_beginBonjourResolution:(_Bool)arg1;	// IMP=0x00000000004db2a5
- (void)_reallyBeginBonjourResolution;	// IMP=0x00000000004db1d6
- (void)_stopBrowser;	// IMP=0x00000000004db0c1
- (void)_startBrowser;	// IMP=0x00000000004daf0a
- (void)resetConfig;	// IMP=0x00000000004dabed
- (void)queryPlistDevices;	// IMP=0x00000000004da8ee
- (id)_deviceWithUUID:(id)arg1;	// IMP=0x00000000004da451
- (void)_saveKeyPlist;	// IMP=0x00000000004da2c5
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x00000000004da254
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004da196
- (void)dealloc;	// IMP=0x00000000004da0cc
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000004d98ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
