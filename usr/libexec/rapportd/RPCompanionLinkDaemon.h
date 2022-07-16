//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, MISSING_TYPE, NSData, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPNearbyActionV2Advertiser, RPNearbyActionV2Discovery, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSUserDefaults *_airplayPrefs;	// 32 = 0x20
    _Bool _awdlTransactionEnabled;	// 40 = 0x28
    NSMutableDictionary *_bleDevices;	// 48 = 0x30
    SFDeviceDiscovery *_bleActionDiscovery;	// 56 = 0x38
    unsigned int _bleActionDiscoveryID;	// 64 = 0x40
    NSMutableDictionary *_bleClientConnections;	// 72 = 0x48
    SFDeviceDiscovery *_bleDiscovery;	// 80 = 0x50
    unsigned long long _bleDiscoveryControlFlags;	// 88 = 0x58
    _Bool _bleDiscoveryForce;	// 96 = 0x60
    unsigned int _bleDiscoveryID;	// 100 = 0x64
    _Bool _bleDiscoveryScreenOff;	// 104 = 0x68
    RPNearbyActionV2Advertiser *_bleNearbyActionV2Advertiser;	// 112 = 0x70
    RPNearbyActionV2Discovery *_bleNearbyActionV2Discovery;	// 120 = 0x78
    RPCompanionLinkDevice *_bleNearbyActionV2Device;	// 128 = 0x80
    SFService *_bleNeedsCLinkAdvertiser;	// 136 = 0x88
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 144 = 0x90
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 152 = 0x98
    unsigned int _bleNeedsCLinkScannerID;	// 160 = 0xa0
    _Bool _bleProximityDetection;	// 164 = 0xa4
    long long _bleRSSIThreshold;	// 168 = 0xa8
    CUBLEServer *_bleServer;	// 176 = 0xb0
    NSMutableSet *_bleServerConnections;	// 184 = 0xb8
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 192 = 0xc0
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 200 = 0xc8
    _Bool _bonjourAWDLAdvertiserForce;	// 208 = 0xd0
    NSMutableDictionary *_bonjourAWDLDevices;	// 216 = 0xd8
    CUBonjourBrowser *_bonjourBrowser;	// 224 = 0xe0
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 232 = 0xe8
    _Bool _bonjourBrowserAWDLForce;	// 240 = 0xf0
    unsigned long long _bonjourReevaluateNextTicks;	// 248 = 0xf8
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 256 = 0x100
    NSData *_btAdvAddrData;	// 264 = 0x108
    NSString *_btAdvAddrStr;	// 272 = 0x110
    CUSystemMonitor *_btAdvAddrMonitor;	// 280 = 0x118
    _Bool _prefBTPipeEnabled;	// 288 = 0x120
    CUBluetoothScalablePipe *_btPipe;	// 296 = 0x128
    RPConnection *_btPipeConnection;	// 304 = 0x130
    CUBluetoothScalablePipe *_btPipeHighPriority;	// 312 = 0x138
    unsigned int _cnxIDLast;	// 320 = 0x140
    int _coreDeviceChangedNotifier;	// 324 = 0x144
    NSString *_deviceAuthTagStr;	// 328 = 0x148
    NSData *_deviceAWDLRandomID;	// 336 = 0x150
    _Bool _discoverPairedDevices;	// 344 = 0x158
    NSData *_discoveryNonceData;	// 352 = 0x160
    SFClient *_duetSyncClient;	// 360 = 0x168
    _Bool _disabled;	// 368 = 0x170
    NSMutableDictionary *_interestEvents;	// 376 = 0x178
    NSMutableDictionary *_interestPeers;	// 384 = 0x180
    _Bool _invalidateCalled;	// 392 = 0x188
    _Bool _invalidateDone;	// 393 = 0x189
    _Bool _fixedSoundBoardNameIssue;	// 394 = 0x18a
    NSMutableDictionary *_homeHubDevices;	// 400 = 0x190
    NSData *_homeKitAuthTag;	// 408 = 0x198
    _Bool _homeKitForceGetIdentity;	// 416 = 0x1a0
    _Bool _homeKitGettingIdentity;	// 417 = 0x1a1
    NSData *_homeKitIRK;	// 424 = 0x1a8
    NSData *_homeKitLTPK;	// 432 = 0x1b0
    CUHomeKitManager *_homeKitManager;	// 440 = 0x1b8
    NSData *_homeKitRotatingID;	// 448 = 0x1c0
    _Bool _homeKitWaiting;	// 456 = 0x1c8
    NSMutableDictionary *_loopbackRequests;	// 464 = 0x1d0
    unsigned int _loopbackXid;	// 472 = 0x1d8
    CUNetLinkManager *_netLinkManager;	// 480 = 0x1e0
    _Bool _mediaAccessControlKVO;	// 488 = 0x1e8
    _Bool _mediaRemoteIDGetting;	// 489 = 0x1e9
    _Bool _mediaRouteIDGetting;	// 490 = 0x1ea
    _Bool _miscStarted;	// 491 = 0x1eb
    NSMutableSet *_needsAWDLNewPeers;	// 496 = 0x1f0
    NSMutableSet *_needsAWDLRequestIdentifiers;	// 504 = 0x1f8
    NSMutableSet *_needsAWDLSentToPeers;	// 512 = 0x200
    NSObject<OS_dispatch_source> *_needsAWDLRequestTimer;	// 520 = 0x208
    _Bool _needsAWDLTransaction;	// 528 = 0x210
    NSObject<OS_os_transaction> *_osTransaction;	// 536 = 0x218
    NSMutableDictionary *_pairedDevices;	// 544 = 0x220
    RPConnection *_personalCnx;	// 552 = 0x228
    _Bool _receiveHomeKitPairingUpdated;	// 560 = 0x230
    NSMutableDictionary *_registeredEvents;	// 568 = 0x238
    NSMutableSet *_registeredProfileIDs;	// 576 = 0x240
    NSMutableDictionary *_registeredRequests;	// 584 = 0x248
    RPHomeKitManager *_rpHomeKitManager;	// 592 = 0x250
    NSString *_serviceType;	// 600 = 0x258
    unsigned int _sessionIDLast;	// 608 = 0x260
    _Bool _serverBonjourInfraPairing;	// 612 = 0x264
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 616 = 0x268
    NSUserDefaults *_soundBoardPrefs;	// 624 = 0x270
    _Bool _soundBoardUserLeader;	// 632 = 0x278
    _Bool _soundBoardUserLeaderKVO;	// 633 = 0x279
    unsigned long long _startTicks;	// 640 = 0x280
    unsigned long long _startTicksFull;	// 648 = 0x288
    RPConnection *_stereoCnx;	// 656 = 0x290
    CUSystemMonitor *_systemMonitor;	// 664 = 0x298
    NSMutableDictionary *_tcpClientConnections;	// 672 = 0x2a0
    NSMutableDictionary *_tcpOnDemandClientConnections;	// 680 = 0x2a8
    NSMutableSet *_tcpServerConnections;	// 688 = 0x2b0
    CUTCPServer *_tcpServer;	// 696 = 0x2b8
    NSMutableDictionary *_unauthDevices;	// 704 = 0x2c0
    NSData *_uniqueIDData;	// 712 = 0x2c8
    NSString *_uniqueIDStr;	// 720 = 0x2d0
    CUWiFiManager *_wifiManager;	// 728 = 0x2d8
    unsigned int _xidLast;	// 736 = 0x2e0
    NSMutableSet *_xpcConnections;	// 744 = 0x2e8
    NSXPCInterface *_xpcClientInterface;	// 752 = 0x2f0
    NSXPCInterface *_xpcServerInterface;	// 760 = 0x2f8
    NSXPCListener *_xpcListener;	// 768 = 0x300
    unsigned int _xpcLastID;	// 776 = 0x308
    NSMutableDictionary *_xpcMatchingMap;	// 784 = 0x310
    _Bool _prefApplyNoiWiFiToUSB;	// 792 = 0x318
    _Bool _prefAppSignIn;	// 793 = 0x319
    _Bool _prefBLEClient;	// 794 = 0x31a
    _Bool _prefClientEnabled;	// 795 = 0x31b
    _Bool _prefCommunal;	// 796 = 0x31c
    _Bool _prefCoreDeviceEnabled;	// 797 = 0x31d
    _Bool _prefCoreDevicePaired;	// 798 = 0x31e
    _Bool _prefHomeKitConfigured;	// 799 = 0x31f
    _Bool _prefHomeKitEnabled;	// 800 = 0x320
    _Bool _prefIPEnabled;	// 801 = 0x321
    unsigned int _prefMaxConnectionCount;	// 804 = 0x324
    _Bool _prefServerBonjourAlways;	// 808 = 0x328
    _Bool _prefServerBonjourOpportunitistic;	// 809 = 0x329
    _Bool _prefServerEnabled;	// 810 = 0x32a
    _Bool _prefServerShouldRun;	// 811 = 0x32b
    _Bool _prefUseTargetAuthTag;	// 812 = 0x32c
    RPHIDDaemon *_hidDaemon;	// 816 = 0x330
    _Bool _prefHIDEnabled;	// 824 = 0x338
    RPMediaControlDaemon *_mediaControlDaemon;	// 832 = 0x340
    _Bool _prefMediaControlEnabled;	// 840 = 0x348
    RPSiriDaemon *_siriDaemon;	// 848 = 0x350
    _Bool _prefSiriEnabled;	// 856 = 0x358
    RPTextInputDaemon *_textInputDaemon;	// 864 = 0x360
    _Bool _prefTextInputEnabled;	// 872 = 0x368
    _Bool _prefTouchEnabled;	// 873 = 0x369
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 880 = 0x370
    RPCompanionLinkDevice *_localDeviceInfo;	// 888 = 0x378
    NSMutableSet *_activeServers;	// 896 = 0x380
    NSMutableDictionary *_activeSessions;	// 904 = 0x388
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x00200000000092a2
- (void).cxx_destruct;	// IMP=0x00200000000372da
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0010000000037256
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00100000000371d7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000036c26
- (long long)_sessionsActiveOnConnection:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x0010000000036a26
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x001000000003667b
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000361ba
- (MISSING_TYPE *)_sessionHandleStartRequest:options:responseHandler: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000035497
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003501c
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034903
- (id)_checkForProxyOrLocalDestinations:(id)arg1 eventID:(id)arg2 event:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000346e5
- (void)_proxyDevice:(id)arg1 loopbackRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000033c49
- (void)_createRequestEntryForXid:(id)arg1 requestID:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000338ed
- (void)_existingProxyDeviceUpdated:(id)arg1 event:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x0010000000033344
- (id)homeHubDeviceForLaunchInstanceID:(id)arg1;	// IMP=0x001000000003316d
- (void)_proxyLocalDeviceUpdateOnConnection:(id)arg1 launchInstanceID:(id)arg2;	// IMP=0x0010000000032fc2
- (void)_sendProxyDeviceUpdateToPeer:(id)arg1;	// IMP=0x0010000000032c6d
- (id)_addProxyIdentifier:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0010000000032bb3
- (_Bool)_destinationID:(id)arg1 matchesProxyDeviceOnCnx:(id)arg2;	// IMP=0x00100000000329fe
- (_Bool)_proxyDevice:(id)arg1 isEqualTo:(id)arg2;	// IMP=0x00100000000328e9
- (_Bool)_proxyDevice:(id)arg1 receivedRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 cnx:(id)arg6;	// IMP=0x0010000000032502
- (void)_proxyDeviceRemove:(id)arg1 options:(id)arg2 cnx:(id)arg3;	// IMP=0x0010000000032110
- (void)_proxyDeviceAdd:(id)arg1 options:(id)arg2 eventID:(id)arg3 deviceInfo:(id)arg4 cnx:(id)arg5;	// IMP=0x0010000000031e34
- (void)_proxyDeviceListUpdated:(id)arg1 content:(id)arg2 options:(id)arg3 cnx:(id)arg4;	// IMP=0x001000000003179c
- (_Bool)_allowStreamRequest:(id)arg1 xpcCnx:(id)arg2 rpCnx:(id)arg3;	// IMP=0x00100000000312b9
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000003121d
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x0010000000030d20
- (_Bool)_receivedRequestID:(id)arg1 onXPCCnx:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 unauth:(_Bool)arg6 rpCnx:(id)arg7;	// IMP=0x0010000000030b84
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003078f
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003076e
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000030741
- (void)deregisterRequestID:(id)arg1;	// IMP=0x00100000000306ba
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000304f0
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030326
- (void)_deliverEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5 outError:(id *)arg6;	// IMP=0x001000000002fe24
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x001000000002fb97
- (void)_receivedEventID:(id)arg1 onXPCCnx:(id)arg2 event:(id)arg3 options:(id)arg4 unauth:(_Bool)arg5 rpCnx:(id)arg6;	// IMP=0x001000000002f9ee
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002ee73
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002ee44
- (void)deregisterEventID:(id)arg1;	// IMP=0x001000000002edbd
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ebf3
- (void)_updatePersonalRequestsStateForHomeHubDevices;	// IMP=0x001000000002ebed
- (void)_updateRoomInfoForHomeHubDevice:(id)arg1 roomName:(id)arg2;	// IMP=0x001000000002ebe7
- (void)_updateHomeHubDevices:(id)arg1;	// IMP=0x001000000002e6e0
- (void)_homeHubDeviceRemoved:(id)arg1;	// IMP=0x001000000002e478
- (void)_homeHubDeviceAdded:(id)arg1;	// IMP=0x001000000002e002
- (id)_eventForHomeHubDevice:(id)arg1;	// IMP=0x001000000002dd5d
- (id)_filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x001000000002dd44
- (void)_homeKitUpdateUserIdentifiers;	// IMP=0x001000000002dadc
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x001000000002d557
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x001000000002cfc4
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x001000000002c43d
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x001000000002c11f
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x001000000002bc98
- (void)_homeKitGetUserInfo:(id)arg1;	// IMP=0x001000000002bb3a
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x001000000002b953
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x001000000002b80d
- (void)_homeKitGetPairingIdentities;	// IMP=0x001000000002b708
- (void)_homeKitPairingUpdated:(id)arg1;	// IMP=0x001000000002b641
- (void)_homeKitEnsureStopped;	// IMP=0x001000000002b4da
- (void)_homeKitEnsureStarted;	// IMP=0x001000000002af17
- (void)_textInputEnsureStopped;	// IMP=0x001000000002ae83
- (void)_textInputEnsureStarted;	// IMP=0x001000000002ad55
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x0010000000029f9a
- (void)_siriEnsureStopped;	// IMP=0x0010000000029f06
- (void)_siriEnsureStarted;	// IMP=0x0010000000029dd8
- (void)_reachabilityEnsureStopped;	// IMP=0x0010000000029d4b
- (void)_reachabilityEnsureStarted;	// IMP=0x0010000000029c7c
- (void)_personalDeviceUpdate;	// IMP=0x001000000002996a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000029723
- (unsigned long long)_nearbyActionDeviceActionTypes;	// IMP=0x0010000000029718
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029510
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029105
- (void)_miscEnsureStopped;	// IMP=0x001000000002908f
- (void)_miscEnsureStarted;	// IMP=0x0010000000028e04
- (void)_mediaRouteIDGet;	// IMP=0x0010000000028ab8
- (void)_mediaRemoteIDGet;	// IMP=0x001000000002878f
- (void)_mediaControlEnsureStopped;	// IMP=0x00100000000286fb
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000002856c
- (int)_localMediaAccessControlSetting;	// IMP=0x00100000000284de
- (void)_localDeviceCleanup;	// IMP=0x00100000000283ff
- (void)_localDeviceUpdate;	// IMP=0x0010000000026950
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x00100000000267a5
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x0010000000026428
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000025d23
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x0010000000025af4
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x0010000000025866
- (void)_hidEnsureStopped;	// IMP=0x00100000000257d2
- (void)_hidEnsureStarted;	// IMP=0x00100000000256a4
- (_Bool)_haveActiveServerConnectionsOnAWDL;	// IMP=0x001000000002556b
- (_Bool)_haveActiveClientConnectionsOnAWDL;	// IMP=0x00100000000253e1
- (id)_getAppleID;	// IMP=0x00100000000253a1
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002528e
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024d1e
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x0010000000024b18
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x00100000000249ab
- (id)_findMatchingAWDLBonjourDevice:(id)arg1;	// IMP=0x001000000002486f
- (id)_findWiFiConnectionByID:(id)arg1;	// IMP=0x0010000000024628
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x001000000002402a
- (void)_duetSyncEnsureStopped;	// IMP=0x0010000000023f96
- (void)_duetSyncEnsureStarted;	// IMP=0x0010000000023ed6
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x0010000000023e1a
- (void)_disconnectUnpairedDevices;	// IMP=0x0010000000023ac2
- (void)_disconnectUnauthConnections;	// IMP=0x0010000000023917
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x00100000000235bf
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x001000000002317c
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x0010000000022d37
- (id)_findExistingActiveDevice:(id)arg1;	// IMP=0x0010000000022bb9
- (unsigned char)_controlFlagsToNearbyActionType:(unsigned long long)arg1;	// IMP=0x0010000000022ba4
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x0010000000022698
- (void)_disableAWDLTransactionForBrowsing:(_Bool)arg1;	// IMP=0x0010000000022692
- (void)_enableAWDLTransactionForBrowsing:(_Bool)arg1;	// IMP=0x001000000002268c
- (int)_airPlayLeaderStateUncached;	// IMP=0x0010000000022388
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000002221b
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x0010000000021fd1
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000021b70
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002183f
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x0010000000021600
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x00100000000215b5
- (void)_btPipeConnectionStart;	// IMP=0x0010000000020fb1
- (void)_btPipeHandleStateChanged:(id)arg1;	// IMP=0x0010000000020dea
- (void)_btPipeEnsureStopped;	// IMP=0x0010000000020d6c
- (void)_btPipeTearDown:(id)arg1;	// IMP=0x0010000000020c8d
- (void)_btPipeEnsureStarted;	// IMP=0x0010000000020a21
- (void)_btPipeSetup:(id)arg1 withPriority:(int)arg2;	// IMP=0x00100000000207f4
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x001000000002077e
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x0010000000020163
- (void)_bleServerEnsureStopped;	// IMP=0x001000000001ff89
- (void)_bleServerEnsureStarted;	// IMP=0x001000000001fcfb
- (_Bool)_serverTCPHasActiveConnections;	// IMP=0x001000000001fcc4
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x001000000001f9d3
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x001000000001f95d
- (id)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x001000000001f244
- (void)_serverTCPEnsureStopped;	// IMP=0x001000000001f062
- (void)_serverTCPEnsureStarted;	// IMP=0x001000000001ee02
- (_Bool)_serverShouldAdvertiseIdentifiableInfoWhenUnpairedForAirPlayWithLinkType:(int)arg1;	// IMP=0x001000000001ec48
- (void)_serverBTAddressChanged;	// IMP=0x001000000001eabd
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x001000000001ea29
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x001000000001e8d3
- (void)_serverReceivedNeedsAWDLEvent:(id)arg1 event:(id)arg2;	// IMP=0x001000000001e4ba
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x001000000001e1bc
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x001000000001e0b5
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x001000000001dd73
- (_Bool)_serverBonjourAWDLAdvertiserShouldRun;	// IMP=0x001000000001d46a
- (void)_serverBonjourUpdateTXT;	// IMP=0x001000000001cf36
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x001000000001cde6
- (id)_serverBonjourAuthTagString;	// IMP=0x001000000001cd21
- (void)_serverBonjourEnsureStopped;	// IMP=0x001000000001cc8d
- (void)_serverBonjourEnsureStarted;	// IMP=0x001000000001ca65
- (_Bool)_serverBonjourAWDLShouldRun;	// IMP=0x001000000001c9c9
- (_Bool)_serverBonjourShouldRun;	// IMP=0x001000000001c966
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x001000000001c7f6
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x001000000001c582
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x001000000001c4ee
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x001000000001c439
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x001000000001c055
- (void)_serverNearbyActionV2DiscoveryEnsureStopped;	// IMP=0x001000000001c017
- (void)_serverNearbyActionV2DiscoveryEnsureStarted;	// IMP=0x001000000001bec0
- (_Bool)_serverNearbyActionV2DiscoveryShouldRun;	// IMP=0x001000000001be3a
- (void)_serverEnsureStopped;	// IMP=0x001000000001bdd8
- (void)_serverEnsureStarted;	// IMP=0x001000000001bcbd
- (_Bool)triggerEnhancedDiscoveryForReason:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001bc65
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000001baf8
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x001000000001b9a1
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x001000000001b456
- (id)logDictionaryOfStringArrays:(id)arg1 withPrefix:(id)arg2;	// IMP=0x001000000001b085
- (void)_clientPurgeUnauthAWDLDevices;	// IMP=0x001000000001adb9
- (void)_clientOnDemandAWDLDiscoveryStartForXPC:(id)arg1;	// IMP=0x001000000001aad0
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000001a6bc
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x001000000001a5ca
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000019954
- (void)_clientOnDemandConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x00100000000197e3
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0010000000019688
- (id)_clientCreateConnection:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000180dc
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001808d
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x00100000000177df
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x0010000000017587
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x001000000001688c
- (id)_clientShouldConnectOverBonjour:(id)arg1 device:(id)arg2 identities:(id)arg3;	// IMP=0x00000000000164a8
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x00100000000162a5
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x00100000000161ad
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x0010000000015f30
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x0010000000015cc3
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x0010000000015907
- (_Bool)_clientBonjourCheckLostPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x0010000000015755
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x001000000001548f
- (_Bool)_clientBonjourCheckFoundPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x00100000000150b6
- (void)_clientBonjourFoundUnauthDevice:(id)arg1 isAWDLDevice:(_Bool)arg2;	// IMP=0x0010000000014b80
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x001000000001485f
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x0010000000013a36
- (void)_clientBonjourEnsureStopped;	// IMP=0x0010000000013961
- (void)_clientBonjourEnsureStarted;	// IMP=0x001000000001368a
- (void)_clientSendNeedsAWDLOverWiFi:(_Bool)arg1;	// IMP=0x001000000001304f
- (void)_clientBLENearbyActionV2AdvertiserEnsureStopped;	// IMP=0x0010000000012f95
- (void)_clientBLENearbyActionV2AdvertiserRestart;	// IMP=0x0010000000012ecf
- (void)_clientBLENearbyActionV2AdvertiserUpdate;	// IMP=0x0010000000012d4e
- (void)_clientBLENearbyActionV2AdvertiserEnsureStarted;	// IMP=0x001000000001299e
- (_Bool)_clientBLENearbyActionV2AdvertiserShouldRun;	// IMP=0x00100000000127a8
- (id)_clientBLETargetDataForDevice:(id)arg1;	// IMP=0x001000000001261a
- (id)_clientBLENeedsCLinkTargetAuthTag;	// IMP=0x0010000000011b78
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x00100000000119ca
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x0010000000011917
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x0010000000011661
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2 deviceFlags:(unsigned char)arg3;	// IMP=0x0010000000010e21
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x0010000000010609
- (_Bool)_clientBLETriggerEnhancedDiscovery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001056e
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x00100000000104ce
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x001000000000fe33
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x001000000000fe28
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x001000000000fd81
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x001000000000f8f4
- (void)_clientEnsureStopped;	// IMP=0x001000000000f80a
- (void)_clientEnsureStarted;	// IMP=0x001000000000f6f8
- (void)_updateForXPCServerChange;	// IMP=0x001000000000f48e
- (void)_updateForXPCClientChange;	// IMP=0x001000000000ed40
- (void)_updateAssertions;	// IMP=0x001000000000ea26
- (void)_update;	// IMP=0x001000000000e41a
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x001000000000dff9
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000000de95
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000db3c
- (void)prefsChanged;	// IMP=0x001000000000ceb2
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000000c94e
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000000c57d
- (void)_invalidated;	// IMP=0x001000000000c3e1
- (void)_invalidate;	// IMP=0x001000000000bfbc
- (void)invalidate;	// IMP=0x001000000000bf58
- (void)_activate;	// IMP=0x001000000000bcb7
- (void)activate;	// IMP=0x001000000000bc43
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000009396
- (id)init;	// IMP=0x00100000000092f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

