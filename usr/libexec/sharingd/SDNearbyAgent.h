//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, CUSystemMonitor, IDSService, MISSING_TYPE, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEDevice, SFBLEPipe, SFBLEScanner, SFSystemService;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDNearbyAgent : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    unsigned char _activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    _Bool _bleNearbyInfoAdvertised;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 184 = 0xb8
    _Bool _bleNearbyInfoAirDropUsable;	// 192 = 0xc0
    NSMutableDictionary *_bleNearbyInfoDevices;	// 200 = 0xc8
    _Bool _bleNearbyInfoRSSILog;	// 208 = 0xd0
    _Bool _bleNearbyInfoWiFiP2P;	// 209 = 0xd1
    SFBLEScanner *_bleNearbyInfoScanner;	// 216 = 0xd8
    _Bool _bleProximityEnabled;	// 224 = 0xe0
    NSDictionary *_bleProximityInfo;	// 232 = 0xe8
    NSDictionary *_bleProximityInfoOverride;	// 240 = 0xf0
    SFBLEScanner *_bleProximityPairingScanner;	// 248 = 0xf8
    _Bool _bleProximityRSSILog;	// 256 = 0x100
    _Bool _btPipeEnabled;	// 257 = 0x101
    _Bool _btPipeForced;	// 258 = 0x102
    SFBLEDevice *_btPipePeer;	// 264 = 0x108
    _Bool _caEnabled;	// 272 = 0x110
    int _caForce;	// 276 = 0x114
    unsigned int _caMessageNoScans;	// 280 = 0x118
    unsigned int _caMessageScans;	// 284 = 0x11c
    _Bool _caPhoneCalls;	// 288 = 0x120
    NSMutableSet *_caRequests;	// 296 = 0x128
    _Bool _caScanIfVeryActive;	// 304 = 0x130
    _Bool _caSingleDevice;	// 305 = 0x131
    NSData *_contactHashesCached;	// 312 = 0x138
    _Bool _contactHashesEnabled;	// 320 = 0x140
    _Bool _coreDeviceEnabled;	// 321 = 0x141
    unsigned long long _ddFastScanLastEndTicks;	// 328 = 0x148
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 336 = 0x150
    NSMutableDictionary *_ddNearbyActionDevices;	// 344 = 0x158
    _Bool _ddNearbyActionEnabled;	// 352 = 0x160
    _Bool _ddNearbyActionScreenOff;	// 353 = 0x161
    NSMutableDictionary *_ddNearbyInfoDevices;	// 360 = 0x168
    _Bool _ddNearbyInfoEnabled;	// 368 = 0x170
    _Bool _ddNearbyInfoScreenOff;	// 369 = 0x171
    NSMutableDictionary *_ddProximityPairingDevices;	// 376 = 0x178
    _Bool _ddProximityPairingEnabled;	// 384 = 0x180
    _Bool _ddProximityPairingScreenOff;	// 385 = 0x181
    NSMutableSet *_ddRequests;	// 392 = 0x188
    _Bool _enhancedDiscoveryAdvActive;	// 400 = 0x190
    unsigned int _enhancedDiscoveryAssertCount;	// 404 = 0x194
    _Bool _enhancedDiscoveryShouldRun;	// 408 = 0x198
    NSObject<OS_dispatch_source> *_enhancedDiscoveryTimer;	// 416 = 0x1a0
    unsigned long long _familyFlags;	// 424 = 0x1a8
    int _familyNotifyToken;	// 432 = 0x1b0
    _Bool _fitnessPairingEnabled;	// 436 = 0x1b4
    _Bool _homePodIdentifiesAsB520;	// 437 = 0x1b5
    _Bool _isRIClientEnabled;	// 438 = 0x1b6
    int _idsAppleTVCountCache;	// 440 = 0x1b8
    NSArray *_idsBluetoothDevicesArray;	// 448 = 0x1c0
    NSSet *_idsBluetoothDevicesSet;	// 456 = 0x1c8
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 464 = 0x1d0
    NSSet *_idsBluetoothDeviceIDsForMe;	// 472 = 0x1d8
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 480 = 0x1e0
    int _idsContinuityDeviceCountCache;	// 488 = 0x1e8
    NSArray *_idsDeviceArray;	// 496 = 0x1f0
    NSDictionary *_idsDeviceBTDictionary;	// 504 = 0x1f8
    MISSING_TYPE *_idsDeviceCountBTDictionary;	// 512 = 0x200
    int _idsHasActiveWatchCache;	// 520 = 0x208
    int _idsHomePodCountCache;	// 524 = 0x20c
    int _idsIsSignedInCache;	// 528 = 0x210
    int _idsMacCountCache;	// 532 = 0x214
    int _idsShouldAdvertiseNearbyInfo;	// 536 = 0x218
    int _idsShouldEncryptActivityLevel;	// 540 = 0x21c
    IDSService *_idsService;	// 544 = 0x220
    _Bool _logProxAdvFields;	// 552 = 0x228
    NSUUID *_remoteAppServiceUUID;	// 560 = 0x230
    NSMutableDictionary *_services;	// 568 = 0x238
    NSMutableDictionary *_sessions;	// 576 = 0x240
    NSMutableDictionary *_setupSessions;	// 584 = 0x248
    double _startTime;	// 592 = 0x250
    SDStatusMonitor *_statusMonitor;	// 600 = 0x258
    CUSystemMonitor *_systemMonitor;	// 608 = 0x260
    SFSystemService *_systemService;	// 616 = 0x268
    _Bool _unlockAdvertiseAlways;	// 624 = 0x270
    _Bool _unlockAdvertiseAggressive;	// 625 = 0x271
    _Bool _unlockAdvertiseEnabled;	// 626 = 0x272
    _Bool _unlockAdvertiseBackground;	// 627 = 0x273
    _Bool _unlockAdvertiseWatch;	// 628 = 0x274
    _Bool _unlockAdvertiseWatchLocked;	// 629 = 0x275
    SFBLEPipe *_unlockBtPipe;	// 632 = 0x278
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 640 = 0x280
    NSMutableDictionary *_idDevices;	// 648 = 0x288
    _Bool _idEnabled;	// 656 = 0x290
    int _idIdentitiesChangedNotifyToken;	// 660 = 0x294
    NSArray *_idIdentityArray;	// 664 = 0x298
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 672 = 0x2a0
    _Bool _systemWillPowerDown;	// 680 = 0x2a8
    _Bool _autoUnlockActive;	// 681 = 0x2a9
    _Bool _boostNearbyInfo;	// 682 = 0x2aa
    _Bool _enhancedDiscovery;	// 683 = 0x2ab
    int _audioRoutingScore;	// 684 = 0x2ac
    unsigned int _hotspotInfo;	// 688 = 0x2b0
    NSData *_bleAuthTag;	// 696 = 0x2b8
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 704 = 0x2c0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 712 = 0x2c8
    RPIdentity *_idSelfIdentity;	// 720 = 0x2d0
}

+ (id)sharedNearbyAgent;	// IMP=0x0020000000164dcc
- (void).cxx_destruct;	// IMP=0x0020000000188bf8
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(nonatomic) _Bool enhancedDiscovery; // @synthesize enhancedDiscovery=_enhancedDiscovery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
@property(nonatomic) _Bool autoUnlockActive; // @synthesize autoUnlockActive=_autoUnlockActive;
- (void)_testPipePing;	// IMP=0x0010000000188a19
- (void)testPipePing;	// IMP=0x00100000001889b5
@property(readonly, nonatomic) _Bool screenOn;
- (void)_systemHasPoweredOn;	// IMP=0x001000000018892d
- (void)_systemWillSleep;	// IMP=0x00100000001888be
- (void)unlockStopTestServer;	// IMP=0x0010000000188871
- (void)unlockStartTestServer;	// IMP=0x0010000000188824
- (void)unlockStopTestClient;	// IMP=0x0010000000188788
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x00100000001883ea
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x0010000000188242
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x0010000000187d43
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x0010000000187b71
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x00100000001878c9
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000187675
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000018765a
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000187547
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0010000000187425
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x001000000018737a
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0010000000187117
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x001000000018705c
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x0010000000186a81
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x00100000001866d2
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x0010000000185f20
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x0010000000185a6f
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x0010000000185564
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x0010000000184f77
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x0010000000184179
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x001000000018415c
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x0010000000183f12
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x0010000000183a30
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000183841
- (void)sessionStop:(id)arg1;	// IMP=0x00100000001835eb
- (int)sessionStart:(id)arg1;	// IMP=0x00100000001830e4
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x00100000001830c7
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x0010000000182e7d
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x0010000000182e60
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0010000000182ce0
- (void)serviceStop:(id)arg1;	// IMP=0x0010000000182bbb
- (int)serviceStart:(id)arg1;	// IMP=0x0010000000182821
- (_Bool)isDeviceValidRIServer:(id)arg1;	// IMP=0x0010000000182819
- (void);	// IMP=0x00100000001823c0
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000182303
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000001821d5
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000001820d4
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0010000000181ff9
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000181ef3
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x0010000000181be1
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x00100000001817fb
- (void)_idsMeDeviceChanged;	// IMP=0x00100000001815db
- (int)_idsMacCount;	// IMP=0x001000000018141a
- (_Bool)idsIsSignedIn;	// IMP=0x00100000001810f8
- (int)_idsHomePodCount;	// IMP=0x0010000000180eca
- (_Bool)_idsHasActiveWatch;	// IMP=0x0010000000180c7f
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x0010000000180267
- (id)idsDeviceForBluetoothDeviceID:(id)arg1 conflictDetected:(_Bool *)arg2;	// IMP=0x001000000017fe8d
- (id)_idsDeviceArrayLocked;	// IMP=0x001000000017fdee
- (id)idsDeviceArray;	// IMP=0x001000000017fd8b
- (int)_idsContinuityDeviceCount;	// IMP=0x001000000017fc0b
- (id)_idsBluetoothDeviceIDsForAnnouncements;	// IMP=0x001000000017f90d
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x001000000017f6f2
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x001000000017f51a
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000017f4b7
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x001000000017f29c
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x001000000017f1d4
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x001000000017ee2e
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000017eb5d
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x001000000017eacd
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x001000000017e8ff
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x001000000017e6e4
- (id)idsBluetoothDeviceIDsForRIServers;	// IMP=0x001000000017e46d
- (int)_idsAppleTVCount;	// IMP=0x001000000017e2ac
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x001000000017e11c
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x001000000017dcaf
- (void)_idsEnsureStopped;	// IMP=0x001000000017db81
- (void)_idsEnsureStarted;	// IMP=0x001000000017dac4
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000017d933
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000017d740
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x001000000017d550
- (_Bool)_identificationIdentifyDevice:(id)arg1 sfDevice:(id)arg2;	// IMP=0x001000000017d13f
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x001000000017cc15
- (void)_identificationReIdentify;	// IMP=0x001000000017c90c
- (void)_identificationMaintenanceTimer;	// IMP=0x001000000017c5e6
- (void)_identificationHandleDiscoveryStop;	// IMP=0x001000000017c503
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000017c445
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x001000000017b7e0
- (void)_identificationGetIdentities;	// IMP=0x001000000017b0e8
- (void)_identificationEnsureStopped;	// IMP=0x001000000017aff9
- (void)_identificationEnsureStarted;	// IMP=0x001000000017ae5a
- (void)_identificationCheckFlagsAndACL;	// IMP=0x001000000017a9fb
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x001000000017a975
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x001000000017a8ef
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x001000000017a866
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x001000000017a7c1
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x001000000017a6f9
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x001000000017a4fc
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x0010000000179c2d
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000179834
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000178ea5
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x0010000000178bc8
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x00100000001787e0
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x0010000000178513
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1 reason:(id)arg2;	// IMP=0x00100000001784b2
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000178425
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x00100000001783af
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x0010000000177d70
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x0010000000177944
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x0010000000177280
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x00100000001771d5
- (_Bool)_deviceCanTriggerEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000176fdf
- (void)_enhancedDiscoveryTimerFired;	// IMP=0x0010000000176f9b
- (void)_enhancedDiscoveryScreenChange:(_Bool)arg1;	// IMP=0x0010000000176824
- (void)_disableEnhancedDiscovery:(id)arg1;	// IMP=0x0010000000176755
- (void)_enableEnhancedDiscovery:(id)arg1;	// IMP=0x00100000001765aa
- (_Bool)isWifiCritical;	// IMP=0x0010000000176591
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x00100000001764e9
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x0010000000175a06
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x0010000000175247
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x0010000000175113
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x0010000000174fbf
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x00100000001749ba
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x001000000017491c
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x001000000017467e
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x0010000000174649
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x001000000017403c
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x0010000000173f5c
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x0010000000173e02
- (id)bleProximityInfo;	// IMP=0x0010000000173d9d
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x0010000000173b62
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x0010000000173b02
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x0010000000172c6e
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x0010000000172a6f
- (void)_bleAdvertisingAddressChanged;	// IMP=0x0010000000172839
- (void)_wirelessCriticalChanged:(id)arg1;	// IMP=0x001000000017272f
- (void)_smartCoverStatusChanged:(id)arg1;	// IMP=0x0010000000172668
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x001000000017224c
- (void)_btPipeStateChanged:(id)arg1;	// IMP=0x0010000000172051
- (void)_btPipeEnsureStopped;	// IMP=0x0010000000171fbd
- (void)_btPipeEnsureStarted;	// IMP=0x0010000000171fb7
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x0010000000171f4d
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x0010000000171cef
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x001000000017160d
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x00100000001713a3
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x0010000000171161
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x0010000000170b69
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x001000000016fcb9
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x001000000016fb7f
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x001000000016f8c3
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x001000000016eb68
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x001000000016e04d
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x001000000016ddd4
- (_Bool)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x001000000016dda0
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x001000000016db2f
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x001000000016d7e3
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x001000000016d497
- (_Bool)_bleNearbyInfoAdvertiserShouldAddField3;	// IMP=0x001000000016d42a
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x001000000016c955
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x001000000016c745
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x001000000016c655
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x001000000016c59d
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x001000000016c329
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x001000000016c0e7
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x001000000016bb3a
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x001000000016bb09
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x001000000016ba45
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x001000000016a60f
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000016a530
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x001000000016a434
- (void)_activityMonitorMediaAccessControlSettingChanged:(id)arg1;	// IMP=0x001000000016a34c
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x001000000016a313
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x001000000016a1fd
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x001000000016a146
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x001000000016a04a
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x001000000016a020
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x0010000000169f24
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x0010000000169c60
- (void)_activityMonitorUpdate;	// IMP=0x0010000000169ad4
- (void)_activityMonitorEnsureStopped;	// IMP=0x0010000000169991
- (void)_activityMonitorEnsureStarted;	// IMP=0x0010000000169892
- (void)_update;	// IMP=0x00100000001695e4
- (void)update;	// IMP=0x0010000000169580
- (void)prefsChanged;	// IMP=0x00100000001683a5
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x00100000001682be
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x00100000001681f3
- (void)_invalidate;	// IMP=0x0010000000167c2b
- (void)invalidate;	// IMP=0x0010000000167bc7
- (void)_activate;	// IMP=0x001000000016701e
- (void)activate;	// IMP=0x0010000000166fb2
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000164ee8
- (id)sharedNearbyPipe;	// IMP=0x0010000000164e23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

