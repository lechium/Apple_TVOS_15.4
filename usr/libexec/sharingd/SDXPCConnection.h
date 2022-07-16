//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFProximityClient, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    SFCoordinatedAlertRequest *_caRequest;	// 24 = 0x18
    SFDeviceDiscovery *_ddRequest;	// 32 = 0x20
    _Bool _diagnosticBLEModeStarted;	// 40 = 0x28
    _Bool _entitledBluetoothUserInteraction;	// 41 = 0x29
    _Bool _entitledClient;	// 42 = 0x2a
    _Bool _entitledCoordinatedAlerts;	// 43 = 0x2b
    _Bool _entitledDeviceDiscovery;	// 44 = 0x2c
    _Bool _entitledDiagnostics;	// 45 = 0x2d
    _Bool _entitledProximityClient;	// 46 = 0x2e
    _Bool _entitledRemoteInteractionSession;	// 47 = 0x2f
    _Bool _entitledService;	// 48 = 0x30
    _Bool _entitledSession;	// 49 = 0x31
    SFUserAlert *_notification;	// 56 = 0x38
    NSString *_preventExitForLocaleReason;	// 64 = 0x40
    SFProximityClient *_proxClient;	// 72 = 0x48
    SFRemoteInteractionSession *_riSession;	// 80 = 0x50
    SFService *_service;	// 88 = 0x58
    SFSession *_session;	// 96 = 0x60
    SDXPCServer *_server;	// 104 = 0x68
    _Bool _unlockTestClientStarted;	// 112 = 0x70
    NSXPCConnection *_xpcCnx;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000f6e79
- (void)userNotificationPresent:(id)arg1;	// IMP=0x00100000000f6e10
- (void)sessionSendResponse:(id)arg1;	// IMP=0x00100000000f6cf8
- (void)sessionSendRequest:(id)arg1;	// IMP=0x00100000000f6be0
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00100000000f6a16
- (void)sessionSendEvent:(id)arg1;	// IMP=0x00100000000f68fe
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f61d0
- (void)serviceSendResponse:(id)arg1;	// IMP=0x00100000000f60d6
- (void)serviceSendRequest:(id)arg1;	// IMP=0x00100000000f5fdc
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x00100000000f5e5f
- (void)serviceSendEvent:(id)arg1;	// IMP=0x00100000000f5d65
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x00100000000f5c4b
- (void)serviceUpdate:(id)arg1;	// IMP=0x00100000000f5b3a
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f516c
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x00100000000f507d
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f4b1b
- (void)proximityClientRequestScannerTimerReset;	// IMP=0x00100000000f4928
- (void)proximityClientUpdateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f470a
- (void)proximityClientStopSuppressingDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f450c
- (void)proximityClientSuppressDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f430e
- (void)proximityClientProvideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f40db
- (void)proximityClientDismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f3edd
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x00100000000f3d8c
- (void)proximityClientActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f33c8
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f313f
- (void)diagnosticUnlockTestServer;	// IMP=0x00100000000f308d
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x00100000000f2fbb
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f2626
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f2596
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f2506
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f23b2
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f2280
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f17d6
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f15e5
- (void)bluetoothUserInteraction;	// IMP=0x00100000000f1558
- (void)deviceDiscoveryTriggerEnhancedDiscovery:(id)arg1;	// IMP=0x00100000000f1507
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x00100000000f14b6
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x00100000000f1465
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x00100000000f1091
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0b54
- (void)coordinatedAlertsRequestFinish;	// IMP=0x00100000000f0aaa
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0791
- (void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f064e
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0424
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f036e
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f01b2
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x00100000000f016a
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f00f5
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0021
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eff2f
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000efe24
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x00100000000efc8a
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000efb0a
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000efa90
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ef9ac
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef565
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x00100000000ef495
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef421
- (void)preheatXPCConnection;	// IMP=0x00100000000ef3d4
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef20c
- (void)hashManagerControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eee9f
- (void)_getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edef7
- (void)_getPeopleInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ed6b2
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ed4e0
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ed42d
- (void)findContact:(id)arg1 skipIfContactBlocked:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec59e
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ec409
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec2c1
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec17b
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec035
- (void)clearXPCHelperImageCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ebfe5
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ebc9b
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ebae7
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eb94b
- (void)_invalidateAssertions;	// IMP=0x00100000000eb554
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x00100000000eb1a7
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x00100000000eb0a5
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x00100000000eafa3
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x00100000000eaea1
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x00100000000ead52
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ea8db
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x00100000000ea7c3
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x00100000000ea69a
- (void)connectionInvalidated;	// IMP=0x00100000000ea33b
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00100000000ea2a2

@end

