//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMAccessoryNetworkAccessViolation, NSArray;
@protocol _HMNetworkConfigurationProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkConfigurationProfile
{
    _Bool _networkAccessRestricted;	// 16 = 0x10
    _Bool _supportsWiFiReconfiguration;	// 17 = 0x11
    long long _targetProtectionMode;	// 24 = 0x18
    long long _currentProtectionMode;	// 32 = 0x20
    NSArray *_allowedHosts;	// 40 = 0x28
    HMAccessoryNetworkAccessViolation *_accessViolation;	// 48 = 0x30
    long long _credentialType;	// 56 = 0x38
    id <_HMNetworkConfigurationProfileDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000d8b95
@property(nonatomic) __weak id <_HMNetworkConfigurationProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;	// IMP=0x00000000000d8976
- (void)_handleAccessViolationUpdated:(id)arg1;	// IMP=0x00000000000d878f
- (void)_handleHostsUpdated:(id)arg1;	// IMP=0x00000000000d84e7
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;	// IMP=0x00000000000d83ec
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;	// IMP=0x00000000000d82f1
- (void)_notifyDelegateOfUpdatedAccessViolation;	// IMP=0x00000000000d81f6
- (void)_notifyDelegateOfUpdatedAllowedHosts;	// IMP=0x00000000000d80fb
- (void)_notifyDelegateOfNetworkAccessModeChanged;	// IMP=0x00000000000d8000
- (void)_notifyDelegateOfUpdatedProtectionMode;	// IMP=0x00000000000d7f05
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7b76
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d75d7
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000d7269
- (id)messageReceiveQueue;	// IMP=0x00000000000d7219
- (id)messageDestination;	// IMP=0x00000000000d71b0
- (id)messageTargetUUID;	// IMP=0x00000000000d7160
- (void)setCredentialType:(long long)arg1;	// IMP=0x00000000000d70c1
@property(readonly) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)setSupportsWiFiReconfiguration:(_Bool)arg1;	// IMP=0x00000000000d6f33
@property(readonly) _Bool supportsWiFiReconfiguration; // @synthesize supportsWiFiReconfiguration=_supportsWiFiReconfiguration;
- (void)setTargetProtectionMode:(long long)arg1;	// IMP=0x00000000000d6da6
@property(readonly) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
- (void)setNetworkAccessRestricted:(_Bool)arg1;	// IMP=0x00000000000d6c18
@property(readonly, getter=isNetworkAccessRestricted) _Bool networkAccessRestricted; // @synthesize networkAccessRestricted=_networkAccessRestricted;
- (void)setCurrentProtectionMode:(long long)arg1;	// IMP=0x00000000000d6a8b
@property(readonly) long long currentProtectionMode; // @synthesize currentProtectionMode=_currentProtectionMode;
- (void)setAccessViolation:(id)arg1;	// IMP=0x00000000000d68d7
@property(readonly) HMAccessoryNetworkAccessViolation *accessViolation; // @synthesize accessViolation=_accessViolation;
- (void)setAllowedHosts:(id)arg1;	// IMP=0x00000000000d66ee
@property(readonly) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
- (void)_registerNotificationHandlers;	// IMP=0x00000000000d650c
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(_Bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(_Bool)arg7 credentialType:(long long)arg8;	// IMP=0x00000000000d63e7

@end

