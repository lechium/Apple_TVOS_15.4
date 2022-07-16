//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, MISSING_TYPE, NEVPNConnection, NSData, NSMutableDictionary, NSURL, NSUUID, SDStatusMonitor, SFBLEScanner, SFDeviceDiscovery, SFDeviceRepairService, SFDeviceRepairSession, SFPINPairSession, SFService, SFWiFiHealthMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, PBSMediaRemoteServiceInterface;

__attribute__((visibility("hidden")))
@interface SDSetupAgent : NSObject
{
    NSData *_bleAuthTagFilter;	// 8 = 0x8
    _Bool _clientEnabled;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _hsa2Enabled;	// 40 = 0x28
    id <PBSMediaRemoteServiceInterface> _pbsMediaService;	// 48 = 0x30
    id _pinPairDialogToken;	// 56 = 0x38
    SFService *_pinPairService;	// 64 = 0x40
    SFPINPairSession *_pinPairSession;	// 72 = 0x48
    NSUUID *_pinPairUUID;	// 80 = 0x50
    int _profilesNotifyToken;	// 88 = 0x58
    _Bool _pwsAutoGrantingEnabled;	// 92 = 0x5c
    _Bool _pwsGrantingEnabled;	// 93 = 0x5d
    _Bool _scanEligible;	// 94 = 0x5e
    int _scanSeconds;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_scanTimer;	// 104 = 0x68
    _Bool _serverEnabled;	// 112 = 0x70
    NSURL *_setupURL;	// 120 = 0x78
    _Bool _shouldScan;	// 128 = 0x80
    SDStatusMonitor *_statusMonitor;	// 136 = 0x88
    CUSystemMonitor *_systemMonitor;	// 144 = 0x90
    NSMutableDictionary *_triggeredDevices;	// 152 = 0x98
    _Bool _triggeredUIAppleTVPair;	// 160 = 0xa0
    MISSING_TYPE *_triggeredUIAppleTVSetup;	// 161 = 0xa1
    _Bool _renableB238SetupAfterWiFi;	// 162 = 0xa2
    _Bool _triggeredUIB238Setup;	// 163 = 0xa3
    _Bool _triggeredUIiOSSetup;	// 164 = 0xa4
    _Bool _triggeredUIRepair;	// 165 = 0xa5
    _Bool _triggeredUIWatchSetup;	// 166 = 0xa6
    _Bool _triggeredUIWHASetup;	// 167 = 0xa7
    _Bool _triggeredUIAuthenticateAccounts;	// 168 = 0xa8
    NEVPNConnection *_vpnCnx;	// 176 = 0xb0
    unsigned long long _watchFastScanLastEndTicks;	// 184 = 0xb8
    NSObject<OS_dispatch_source> *_watchFastScanTimer;	// 192 = 0xc0
    NSMutableDictionary *_watchSetupDevices;	// 200 = 0xc8
    _Bool _watchMigrationEnabled;	// 208 = 0xd0
    unsigned long long _watchMigrationLastTicks;	// 216 = 0xd8
    _Bool _watchSetupEnabled;	// 224 = 0xe0
    SFBLEScanner *_watchSetupScanner;	// 232 = 0xe8
    _Bool _cdpEnabled;	// 240 = 0xf0
    int _iTunesNotifyToken;	// 244 = 0xf4
    CUSystemMonitor *_manateeMonitor;	// 248 = 0xf8
    _Bool _manateeProblem;	// 256 = 0x100
    unsigned long long _problemFlags;	// 264 = 0x108
    int _problemNotifyToken;	// 272 = 0x110
    _Bool _repairEnabled;	// 276 = 0x114
    SFDeviceRepairService *_repairService;	// 280 = 0x118
    SFDeviceRepairSession *_repairSession;	// 288 = 0x120
    _Bool _repairSilent;	// 296 = 0x128
    NSObject<OS_dispatch_source> *_repairTimer;	// 304 = 0x130
    SFWiFiHealthMonitor *_wifiHealthMonitor;	// 312 = 0x138
    _Bool _wifiBad;	// 320 = 0x140
    _Bool _wifiBad8021x;	// 321 = 0x141
    _Bool _prefRepairAccounts;	// 322 = 0x142
    _Bool _prefRepairHomeKit;	// 323 = 0x143
    _Bool _prefRepairVPN;	// 324 = 0x144
    _Bool _prefRepairWiFi;	// 325 = 0x145
    _Bool _preventRepair;	// 326 = 0x146
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 328 = 0x148
}

+ (id)sharedSetupAgent;	// IMP=0x0020000000034d90
- (void).cxx_destruct;	// IMP=0x0020000000040c8a
@property(nonatomic) _Bool preventRepair; // @synthesize preventRepair=_preventRepair;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testProxCardKit:(id)arg1;	// IMP=0x0010000000040b40
- (void)testUIAppleTVSetup:(id)arg1;	// IMP=0x0010000000040917
- (void)testSetupUIWHA:(id)arg1;	// IMP=0x0010000000040639
- (void)testSetupUIWatch:(id)arg1;	// IMP=0x00100000000404e1
- (void)testSetupUIPasswordSharing:(id)arg1;	// IMP=0x0010000000040294
- (void)testSetupUIiOS:(id)arg1;	// IMP=0x0010000000040060
- (long long)extractParameter:(id)arg1 inString:(id)arg2;	// IMP=0x001000000003fe7b
- (void)testSetupUIB238:(id)arg1;	// IMP=0x001000000003f8cc
- (void)testRepairUI:(id)arg1;	// IMP=0x001000000003f6cd
- (void)testPINHide;	// IMP=0x001000000003f669
- (void)testPINShow:(id)arg1;	// IMP=0x001000000003f5be
- (void)testPairUI:(id)arg1;	// IMP=0x001000000003f395
- (void)testNFCUI:(id)arg1;	// IMP=0x001000000003f23f
- (void)testHomeKitDeviceDetected:(id)arg1;	// IMP=0x001000000003f135
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003f024
- (void)_repairVPNError:(id)arg1;	// IMP=0x001000000003ef57
- (void)_repairUpdateIDSCache;	// IMP=0x001000000003eea8
- (void)_repairSilentProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x001000000003ec3e
- (void)_repairSilentStart:(id)arg1;	// IMP=0x001000000003e96f
- (void)_repairProblemFlagsChanged;	// IMP=0x001000000003e8af
- (void)_repairProblemCheck;	// IMP=0x001000000003e820
- (void)_repairHandleManateeChanged;	// IMP=0x001000000003e793
- (void)_repairHandleCompletion;	// IMP=0x001000000003e6e7
- (void)_repairEnsuredStopped;	// IMP=0x001000000003e4ee
- (void)_repairEnsuredStarted;	// IMP=0x001000000003d6c0
- (void)_pwsHandleProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x001000000003d4cb
- (void)_pwsHandleUserResponse:(int)arg1 device:(id)arg2 info:(id)arg3;	// IMP=0x001000000003d43f
- (void)_pinPairHandleHidePIN;	// IMP=0x001000000003d3a8
- (void)_pinPairHandleShowPIN:(id)arg1;	// IMP=0x001000000003cf2a
- (void)_pinPairHandleRequest:(id)arg1;	// IMP=0x001000000003caca
- (void)_ensureServerStopped;	// IMP=0x001000000003c93d
- (void)_ensureServerStarted;	// IMP=0x001000000003c57f
- (void)_wifiStateChanged;	// IMP=0x001000000003c4e6
- (void)_watchFound:(id)arg1;	// IMP=0x001000000003c0b6
- (void)_watchFastScanStop;	// IMP=0x001000000003bfd8
- (void)_watchFastScanStartIfAllowed:(id)arg1;	// IMP=0x001000000003be50
- (void)_uiStopIfNeededWithDevice:(id)arg1;	// IMP=0x001000000003bde7
- (void)_uiStartForMacWithDevice:(id)arg1 label:(id)arg2 extraInfo:(id)arg3;	// IMP=0x001000000003bd3f
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 extraInfo:(id)arg5;	// IMP=0x001000000003bd26
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 unlessApps:(id)arg5 extraInfo:(id)arg6;	// IMP=0x001000000003bc3a
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 label:(id)arg3 unlessApps:(id)arg4 extraInfo:(id)arg5;	// IMP=0x001000000003bc16
- (void)_uiStartWiFiPasswordSharing:(id)arg1;	// IMP=0x001000000003b91c
- (void)_uiStartAuthenticateAccounts:(id)arg1;	// IMP=0x001000000003b8a5
- (void)_uiStartProxCardKitTest:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003b875
- (void)_uiStartSetupWHA:(id)arg1;	// IMP=0x001000000003b841
- (void)_uiStartSetupWatch:(id)arg1;	// IMP=0x001000000003b749
- (void)_uiStartSetupiOS:(id)arg1 autoStart:(_Bool)arg2;	// IMP=0x001000000003b58b
- (void)_uiStartSetupB238:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003b413
- (void)_uiStartRepair:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x001000000003b317
- (void)_uiStartPair:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003b2e3
- (void)_uiStartHomeKitDeviceDetectedWithURL:(id)arg1;	// IMP=0x001000000003b1b4
- (void)_uiStartAppleTVSetup:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003b184
- (_Bool)_uiShowing;	// IMP=0x001000000003b17c
- (void)_uiLockStatusChanged;	// IMP=0x001000000003b080
- (_Bool)_shouldOfferPassword:(id)arg1;	// IMP=0x001000000003aaec
- (void)_screenStateChanged;	// IMP=0x001000000003a9f0
- (_Bool)_screenLocked;	// IMP=0x001000000003a9c1
- (void)_scanTimerFired;	// IMP=0x001000000003a909
- (void)_resetTriggers;	// IMP=0x001000000003a8b3
- (void)_iTunesAccountsChanged;	// IMP=0x001000000003a833
- (void)_hsa2Changed;	// IMP=0x001000000003a7a9
- (void)_appleAccountSignIn:(id)arg1;	// IMP=0x001000000003a6de
- (void)_postDeviceSetupNotificationForDevice:(id)arg1 present:(_Bool)arg2;	// IMP=0x001000000003a516
- (void)_launchAppWithMachServiceName:(id)arg1;	// IMP=0x001000000003a2c1
- (void)_deviceLost:(id)arg1;	// IMP=0x001000000003a1e8
- (void)_deviceFound:(id)arg1;	// IMP=0x0010000000038cb0
- (void)_ensureClientStopped;	// IMP=0x00100000000389d2
- (void)_ensureClientStarted;	// IMP=0x0010000000037bf2
- (void)_update;	// IMP=0x0010000000037b65
@property(readonly, nonatomic) _Bool uiShowing;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037869
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037612
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037525
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x00100000000371d6
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000370e0
- (_Bool)reenableProxCardType:(unsigned char)arg1;	// IMP=0x0010000000036d70
- (void)prefsChanged;	// IMP=0x0010000000036571
- (void)_openSetupURL:(id)arg1;	// IMP=0x0010000000036508
- (void)openSetupURL:(id)arg1;	// IMP=0x001000000003649f
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000361db
- (void)_invalidate;	// IMP=0x0010000000036142
- (void)invalidate;	// IMP=0x00100000000360de
- (void)_activate;	// IMP=0x0010000000035fa0
- (void)activate;	// IMP=0x0010000000035f3a
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000034f79
- (id)description;	// IMP=0x0010000000034f62
- (void)dealloc;	// IMP=0x0010000000034e58
- (id)init;	// IMP=0x0010000000034de7

@end
