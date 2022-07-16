//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NRPairedDeviceRegistryXPCFrameworkDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry <NRPairedDeviceRegistryXPCFrameworkDelegate>
{
    _Bool _disconnected;	// 8 = 0x8
    unsigned short _lastCompatibilityState;	// 10 = 0xa
    NSMutableDictionary *_legacyDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pairedDeviceRegistryDeviceListQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_pairedRegistryGetDevicesQueue;	// 32 = 0x20
    unsigned long long _lastStatus;	// 40 = 0x28
    NSMutableArray *_waitingForRegistryUpdateBlocks;	// 48 = 0x30
    unsigned long long _callCount;	// 56 = 0x38
}

+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;	// IMP=0x0000000000024735
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;	// IMP=0x00000000000246d7
+ (CDUnknownBlockType)activeDeviceSelectorBlock;	// IMP=0x0000000000024679
+ (id)sharedInstance;	// IMP=0x0000000000024150
+ (_Bool)shouldBoostProcess;	// IMP=0x0000000000021b99
+ (Class)proxyClass;	// IMP=0x00000000000204f6
- (void).cxx_destruct;	// IMP=0x000000000002d940
- (id)applyDiff:(id)arg1;	// IMP=0x000000000002d6df
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d2fc
- (_Bool)isAssertionActive:(id)arg1;	// IMP=0x000000000002d01e
- (_Bool)hasCompletedInitialSyncForPairingID:(id)arg1;	// IMP=0x000000000002cd40
- (unsigned long long)migrationCountForPairingID:(id)arg1;	// IMP=0x000000000002ca63
- (unsigned long long)lastSyncSwitchIndex;	// IMP=0x000000000002c7b8
- (void)clearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c728
- (void)checkIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c698
- (void)keepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c5b2
- (id)devicesFromMigrationConsentRequestData:(id)arg1;	// IMP=0x000000000002c52b
- (id)migrationConsentRequestData;	// IMP=0x000000000002c4d4
- (id)lastMigrationRequestPhoneName;	// IMP=0x000000000002c394
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bfc4
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bc13
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bb96
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b80b
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b572
- (void)stopWatchSetupPush;	// IMP=0x000000000002b4ee
- (_Bool)isWatchSetupPushActive;	// IMP=0x000000000002b453
- (void)startWatchSetupPush;	// IMP=0x000000000002b3cf
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b08a
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ad09
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a8e9
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a77b
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a5c8
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;	// IMP=0x000000000002a3f0
- (unsigned int)switchIndex;	// IMP=0x000000000002a2c3
- (void)pairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029ec2
- (void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029ac1
- (void)pairingClientSetAltAccountName:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029aa7
- (void)pairingClientDidEnterPhase:(id)arg1;	// IMP=0x00000000000299f4
- (id)deviceIDForIDSDevice:(id)arg1;	// IMP=0x00000000000299df
- (id)deviceIDForNRDevice:(id)arg1;	// IMP=0x00000000000299c0
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;	// IMP=0x00000000000297bf
- (id)nonActiveDeviceForIDSDevice:(id)arg1;	// IMP=0x000000000002973f
- (id)deviceForIDSDevice:(id)arg1;	// IMP=0x00000000000296bf
- (id)nonActiveDeviceForBluetoothID:(id)arg1;	// IMP=0x000000000002960e
- (id)nonActiveDeviceForBTDeviceID:(id)arg1;	// IMP=0x0000000000029584
- (id)deviceForBluetoothID:(id)arg1;	// IMP=0x00000000000293bf
- (id)deviceForBTDeviceID:(id)arg1;	// IMP=0x0000000000029335
- (id)deviceForPairingID:(id)arg1;	// IMP=0x00000000000291e6
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028fc7
- (void)_submitAlbertPairingReport;	// IMP=0x0000000000028f21
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;	// IMP=0x0000000000028f1b
- (id)serverRequestReporterWithType:(id)arg1;	// IMP=0x0000000000028ece
- (void)sendDevicesUpdatedNotification;	// IMP=0x0000000000028e11
- (void)xpcHasNewOOBKey:(id)arg1;	// IMP=0x0000000000028d4c
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;	// IMP=0x0000000000028c6c
- (_Bool)supportsPairedDevice;	// IMP=0x0000000000028c5a
- (void)overrideSignalStrengthLimit:(long long)arg1;	// IMP=0x0000000000028b9d
- (void)endDiscovery;	// IMP=0x0000000000028b19
- (void)beginDiscovery;	// IMP=0x0000000000028a95
- (void)retriggerUnpairInfoDialog;	// IMP=0x0000000000028a11
- (long long)minQuickSwitchCompatibilityVersion;	// IMP=0x00000000000289c6
- (long long)minPairingCompatibilityVersion;	// IMP=0x000000000002897b
- (long long)maxPairingCompatibilityVersion;	// IMP=0x0000000000028930
- (long long)pairingCompatibilityVersion;	// IMP=0x00000000000288e5
- (void)userIsCheckingForUpdate;	// IMP=0x000000000002887b
- (id)blockAndQueryVersions;	// IMP=0x000000000002874a
- (_Bool)isPaired;	// IMP=0x0000000000028702
- (id)pairingID;	// IMP=0x000000000002855f
- (id)pairingStorePath;	// IMP=0x000000000002835b
- (void)resumePairingClientCrashMonitoring;	// IMP=0x00000000000282d7
- (void)suspendPairingClientCrashMonitoring;	// IMP=0x0000000000028253
- (void)abortPairingWithReason:(id)arg1;	// IMP=0x00000000000281a0
- (void)abortPairing;	// IMP=0x000000000002818c
- (id)waitForActiveDevice;	// IMP=0x0000000000027ef2
- (id)waitForActiveOrAltAccountDevice;	// IMP=0x0000000000027c6d
- (id)waitForActivePairedOrAltAccountDevice;	// IMP=0x0000000000027c32
- (id)waitForActivePairedDevice;	// IMP=0x0000000000027bf7
- (void)waitForAltAccountPairingStorePathPairingID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000279a8
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000276b6
- (void)altAccountPairingStorePathPairingID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000275b6
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027503
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;	// IMP=0x000000000002744f
- (void)fakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000270f2
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026d75
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000269f8
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002667b
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;	// IMP=0x00000000000262a3
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;	// IMP=0x000000000002619f
- (void)notifyPairingShouldContinue;	// IMP=0x0000000000026135
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000002606c
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x0000000000025fb8
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025c3b
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;	// IMP=0x00000000000258be
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025502
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;	// IMP=0x000000000002514e
- (id)getAllDevicesWithArchivedAltAccountDevicesMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024ed4
- (id)getAllDevicesWithArchivedDevicesMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024bc1
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000000000247f7
- (id)getAllDevicesWithArchivedDevices;	// IMP=0x0000000000024658
- (id)getAllDevices;	// IMP=0x0000000000024637
- (id)getActivePairedDevice;	// IMP=0x00000000000245af
- (id)getPairedDevices;	// IMP=0x0000000000024548
- (id)getDevices;	// IMP=0x00000000000244e1
- (_Bool)isKeychainEnabled;	// IMP=0x0000000000024322
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000241d5
- (unsigned short)compatibilityState;	// IMP=0x0000000000023c2c
@property(readonly, nonatomic) unsigned long long status;
- (unsigned long long)_getStatusWithCollection:(id)arg1;	// IMP=0x00000000000238df
- (id)_;	// IMP=0x00000000000236c1
- (id)_getClientInfo;	// IMP=0x000000000002358c
- (id)_getSecureProperties:(id)arg1;	// IMP=0x0000000000023259
- (id)_getChangeHistory;	// IMP=0x0000000000023124
- (id)initWithBoost:(_Bool)arg1 disconnected:(_Bool)arg2;	// IMP=0x0000000000021dd2
- (_Bool)supportsWatch;	// IMP=0x0000000000021d92
- (id)initWithBoost:(_Bool)arg1;	// IMP=0x0000000000021d7e
- (id)init;	// IMP=0x0000000000021d45
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000000021ae6
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021681
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;	// IMP=0x00000000000212a7
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021290
- (_Bool)pairedDeviceSupportQuickSwitch;	// IMP=0x000000000002117b
- (_Bool)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;	// IMP=0x00000000000210d8
- (_Bool)pairedDeviceCountIsLessThanMaxPairedDevices;	// IMP=0x0000000000021035
- (void)setWatchNeedsGraduation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020cd6
- (void)clearWatchNeedsGraduation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020bf2
- (_Bool)watchNeedsGraduation;	// IMP=0x0000000000020aed
- (long long)maxTinkerPairedDeviceCount;	// IMP=0x0000000000020ae2
- (long long)maxPairedDeviceCount;	// IMP=0x0000000000020ad7
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000205d2
- (void)logCallFrequency;	// IMP=0x0000000000020507
- (id)_getLocalDeviceCollection;	// IMP=0x000000000002039a

@end
