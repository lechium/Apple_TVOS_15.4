//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FTServices/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientPNRDelegate-Protocol.h>
#import <FTServices/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary, NSString;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate>
{
    NSString *_number;	// 8 = 0x8
    _Bool _blockPost;	// 16 = 0x10
    _Bool _supportsFrontCamera;	// 17 = 0x11
    _Bool _supportsBackCamera;	// 18 = 0x12
    _Bool _supportsiMessage;	// 19 = 0x13
    _Bool _supportsSMS;	// 20 = 0x14
    _Bool _supportsMMS;	// 21 = 0x15
    _Bool _mmsConfigured;	// 22 = 0x16
    long long _supportsApplePayState;	// 24 = 0x18
    long long _supportsUWBState;	// 32 = 0x20
    long long _supportsManateeForAppleCash;	// 40 = 0x28
    long long _supportsRegionForAppleCash;	// 48 = 0x30
    long long _supportsFMDV2State;	// 56 = 0x38
    long long _supportsVeniceState;	// 64 = 0x40
    long long _supportsKeySharingState;	// 72 = 0x48
    long long _supportsHarmonyState;	// 80 = 0x50
    _Bool _supportsHandoff;	// 88 = 0x58
    _Bool _supportsTethering;	// 89 = 0x59
    _Bool _supportsFT;	// 90 = 0x5a
    _Bool _supportsFTA;	// 91 = 0x5b
    _Bool _supportsFTMW;	// 92 = 0x5c
    _Bool _supportsWiFi;	// 93 = 0x5d
    _Bool _supportsWLAN;	// 94 = 0x5e
    _Bool _supportsNonWiFiFaceTime;	// 95 = 0x5f
    _Bool _supportsCellularData;	// 96 = 0x60
    _Bool _simBecameNotReady;	// 97 = 0x61
    long long _simInserted;	// 104 = 0x68
    long long _isPNRSupportedCachedValue;	// 112 = 0x70
    _Bool _faceTimeBlocked;	// 120 = 0x78
    _Bool _iMessageBlocked;	// 121 = 0x79
    _Bool _accountModificationRestricted;	// 122 = 0x7a
    _Bool _isGreenTea;	// 123 = 0x7b
    long long _performanceClass;	// 128 = 0x80
    CoreTelephonyClient *_coreTelephonyClient;	// 136 = 0x88
    FTSelectedPNRSubscription *_selectedPNRSubscription;	// 144 = 0x90
    _Bool _commCenterDead;	// 152 = 0x98
}

+ (id)marketingNameForDeviceType:(long long)arg1;	// IMP=0x000000000000a5b4
+ (id)sharedInstance;	// IMP=0x000000000000985f
- (void).cxx_destruct;	// IMP=0x000000000000bbe7
@property(readonly, nonatomic) _Bool commCenterDead; // @synthesize commCenterDead=_commCenterDead;
@property(readonly, nonatomic) _Bool mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property(readonly, nonatomic) _Bool supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property(readonly, nonatomic) _Bool supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property(readonly, nonatomic) _Bool supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(readonly, nonatomic) _Bool supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property(readonly, nonatomic) _Bool supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property(readonly, nonatomic) _Bool supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property(readonly, nonatomic) _Bool supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property(readonly, nonatomic) _Bool supportsTethering; // @synthesize supportsTethering=_supportsTethering;
@property(readonly, nonatomic) _Bool supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property(readonly, nonatomic) _Bool isGreenTea; // @synthesize isGreenTea=_isGreenTea;
@property(readonly, nonatomic) _Bool supportsFunCam;
- (_Bool)_enoughPowerToSupportEffects;	// IMP=0x000000000000ba58
- (long long)memorySize;	// IMP=0x000000000000b9eb
@property(readonly, nonatomic) _Bool lowRAMDevice;
- (int)cpuFamily;	// IMP=0x000000000000b90d
@property(readonly, nonatomic) _Bool slowCPUDevice;
@property(readonly, nonatomic) _Bool supportsUWB;
@property(readonly, nonatomic) _Bool supportsHarmony;
@property(readonly, nonatomic) _Bool supportsKeySharing;
@property(readonly, nonatomic) _Bool supportsVenice;
@property(readonly, nonatomic) _Bool supportsFMDV2;
@property(readonly, nonatomic) _Bool supportsRegionForAppleCash;
@property(readonly, nonatomic) _Bool supportsManateeForAppleCash;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool isInMultiUserMode;
@property(readonly, nonatomic) _Bool nonWifiCallingAvailable;
- (_Bool)nonBluetoothAvailableForBundleId:(id)arg1;	// IMP=0x000000000000b531
- (_Bool)wifiAllowedForBundleId:(id)arg1;	// IMP=0x000000000000b529
- (_Bool)nonWifiAvailableForBundleId:(id)arg1;	// IMP=0x000000000000b479
@property(readonly, nonatomic) _Bool nonWifiFaceTimeAvailable;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) long long performanceClass;
- (void)_registerForLockdownNotifications;	// IMP=0x000000000000b2cf
- (void)_lockdownStateChanged:(id)arg1;	// IMP=0x000000000000b19d
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productOSVersion;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
@property(readonly, nonatomic) NSString *telephoneNumber;
@property(readonly, nonatomic) _Bool isTelephonyDevice;
@property(readonly, nonatomic) _Bool supportsAppleIDIdentification;
- (_Bool)_legacy_supportsSMSIdentification;	// IMP=0x000000000000aeff
@property(readonly, nonatomic) _Bool supportsSMSIdentification;
- (void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4;	// IMP=0x000000000000ad93
@property(readonly, nonatomic) NSDictionary *CTNetworkInformation;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;	// IMP=0x000000000000aa4c
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;	// IMP=0x000000000000aa25
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;	// IMP=0x000000000000a9f7
- (void)_handleCarrierSettingsChanged;	// IMP=0x000000000000a9f1
- (void)_handleSIMStatusChangedToStatus:(id)arg1;	// IMP=0x000000000000a9eb
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000000000a9e5
- (void)operatorBundleChange:(id)arg1;	// IMP=0x000000000000a970
- (void)carrierBundleChange:(id)arg1;	// IMP=0x000000000000a8fb
- (void)phoneNumberChanged:(id)arg1;	// IMP=0x000000000000a7a1
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;	// IMP=0x000000000000a61a
- (id)registrationState;	// IMP=0x000000000000a612
- (_Bool)isInDualPhoneIdentityMode;	// IMP=0x000000000000a5f9
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *deviceRegionInfo;
@property(readonly, nonatomic) _Bool wantsBreakBeforeMake;
- (void)_initializeSIMInsertedCachedValue;	// IMP=0x000000000000a489
@property(readonly, nonatomic) _Bool SIMInserted;
@property(readonly, nonatomic) _Bool supportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) _Bool supportsHDRdecoding;
@property(readonly, nonatomic) _Bool isC2KEquipment;
@property(readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property(readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property(readonly, nonatomic) NSString *deviceIDPrefix;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool supportsCinematicFraming;
@property(readonly, nonatomic) _Bool supportsHomeKitResident;
@property(readonly, nonatomic) _Bool supportsAnimojiV2;
@property(readonly, nonatomic) _Bool accountModificationRestricted;
@property(readonly, nonatomic) _Bool registrationSupported;
@property(readonly, nonatomic) _Bool conferencingAllowed;
@property(readonly, nonatomic) _Bool conferencingEnabled;
@property(readonly, nonatomic) _Bool conferencingBlocked;
@property(readonly, nonatomic) _Bool supportsNonWiFiCalling;
@property(readonly, nonatomic) _Bool supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property(readonly, nonatomic) _Bool identityServicesSupported;
@property(readonly, nonatomic) _Bool faceTimeSupported;
@property(readonly, nonatomic) _Bool faceTimeBlocked;
@property(readonly, nonatomic) _Bool faceTimeAvailable;
@property(readonly, nonatomic) _Bool iMessageSupported;
@property(readonly, nonatomic) _Bool iMessageBlocked;
@property(readonly, nonatomic) _Bool iMessageAvailable;
- (_Bool)inProcess_isCallingSupported;	// IMP=0x0000000000009f32
@property(readonly, nonatomic) _Bool callingSupported;
@property(readonly, nonatomic) _Bool callingBlocked;
@property(readonly, nonatomic) _Bool multiwaySupported;
@property(readonly, nonatomic) _Bool multiwayBlocked;
@property(readonly, nonatomic) _Bool multiwayAvailable;
@property(readonly, nonatomic) _Bool callingAvailable;
@property(readonly, nonatomic) _Bool madridSupported;
@property(readonly, nonatomic) _Bool madridBlocked;
@property(readonly, nonatomic) _Bool madridAvailable;
- (void)_registerForInternalCoreTelephonyNotifications;	// IMP=0x0000000000009bc8
- (void)_registerForCarrierNotifications;	// IMP=0x0000000000009bc2
- (void)_unregisterForCommCenterReadyNotifications;	// IMP=0x0000000000009bbc
- (void)_registerForCommCenterReadyNotifications;	// IMP=0x0000000000009bb6
- (void)_updateCapabilities;	// IMP=0x0000000000009b4a
- (void)_registerForCapabilityNotifications;	// IMP=0x0000000000009b44
- (void)_unregisterForServiceStatusNotifications;	// IMP=0x0000000000009ae4
- (void)_registerForServiceStatusNotifications;	// IMP=0x0000000000009a7d
- (id)_serviceStatus;	// IMP=0x0000000000009a64
- (void)_updateManagedConfigurationSettings;	// IMP=0x0000000000009a5e
- (void)_unregisterForManagedConfigurationNotifications;	// IMP=0x0000000000009a58
- (void)_registerForManagedConfigurationNotifications;	// IMP=0x0000000000009a52
- (void)dealloc;	// IMP=0x00000000000099f2
- (id)init;	// IMP=0x00000000000098b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

