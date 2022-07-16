//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADClientLiteListener, ADExternalRequestListener, ADPeerLocationRemote, ADSiriConnectionRemote, ADSiriTetherListener, AFInstanceContext, NSCountedSet, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ADDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_analyticsListener;	// 16 = 0x10
    NSXPCListener *_analyticsObservationListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
    NSXPCListener *_dictationListener;	// 40 = 0x28
    NSXPCListener *_settingsListener;	// 48 = 0x30
    NSXPCListener *_synapseSyncListener;	// 56 = 0x38
    NSXPCListener *_managedStorageListener;	// 64 = 0x40
    NSXPCListener *_securityListener;	// 72 = 0x48
    NSXPCListener *_notificationServiceListener;	// 80 = 0x50
    NSXPCListener *_audioSessionAssertionServiceListener;	// 88 = 0x58
    NSObject<OS_xpc_object> *_syncListener;	// 96 = 0x60
    ADExternalRequestListener *_externalRequestListener;	// 104 = 0x68
    ADClientLiteListener *_clientLiteListener;	// 112 = 0x70
    ADSiriTetherListener *_siriTetherListener;	// 120 = 0x78
    unsigned long long _lastSyncRequested;	// 128 = 0x80
    NSMutableSet *_syncReasonsQueued;	// 136 = 0x88
    _Bool _syncActivityRegistered;	// 144 = 0x90
    _Bool _syncUrgentActivityRegistered;	// 145 = 0x91
    ADSiriConnectionRemote *_proxyRemote;	// 152 = 0x98
    ADPeerLocationRemote *_peerLocationManagerRemote;	// 160 = 0xa0
    _Bool _unlockedWorkQueueIsSuspended;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_unlockedWorkQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_dictationListenerQueue;	// 184 = 0xb8
    NSCountedSet *_dictationPidSet;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_trialExperimentsQueue;	// 200 = 0xc8
    struct MGNotificationTokenStruct *_mg_notification_token;	// 208 = 0xd0
    AFInstanceContext *_instanceContext;	// 216 = 0xd8
}

+ (unsigned long long)processLaunchMachTime;	// IMP=0x00200000000b3f68
+ (double)processLaunchTime;	// IMP=0x00100000000b3f5a
+ (id)sharedDaemon;	// IMP=0x00100000000b3eaf
- (void).cxx_destruct;	// IMP=0x00200000000ba256
- (void)_setupOfflineDictationStatusObserver;	// IMP=0x00100000000ba234
- (void)scheduleUnlockedWork:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba102
- (void)scheduleValidationRefreshForInterval:(double)arg1;	// IMP=0x00100000000ba0f8
- (void)unscheduleDestroyJob;	// IMP=0x00100000000ba0ee
- (void)scheduleDestroyJob;	// IMP=0x00100000000ba0e4
- (void)_syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000b9dbb
- (void)syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00100000000b9d03
- (void)_syncCoalesced;	// IMP=0x00100000000b9b0b
- (void)_syncUrgently:(id)arg1;	// IMP=0x00100000000b98c5
- (void)_setupSessionLanguage;	// IMP=0x00100000000b9881
- (void)_daemonWillShutdown;	// IMP=0x00100000000b9788
- (void)_daemonDidLaunchWithContext:(id)arg1;	// IMP=0x00100000000b9032
- (void)_setupAudioSessionAssertionAcquisitionService;	// IMP=0x00100000000b8fca
- (void)_setupCacheDelete;	// IMP=0x00100000000b88c9
- (void)_setupNanoPreferences;	// IMP=0x00100000000b88c3
- (void)_setupWirelessCoexManagerSubscription;	// IMP=0x00100000000b88bd
- (void)_setupMemoryPressureObservation;	// IMP=0x00100000000b88b7
- (void)_setupMultiUserCloudSyncer;	// IMP=0x00100000000b88b1
- (void)_setupCloudKit;	// IMP=0x00100000000b88ab
- (void)_setupHomeKit;	// IMP=0x00100000000b8889
- (void)_setupPairedSync;	// IMP=0x00100000000b8883
- (void)_setupClientLiteListener;	// IMP=0x00100000000b8849
- (void)_setupExternalRequestListener;	// IMP=0x00100000000b880a
- (void)_setupTetherListener;	// IMP=0x00100000000b87d0
- (void)_registerForSyncNotifications;	// IMP=0x00100000000b8695
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000b864c
- (void)_setupSyncListener;	// IMP=0x00100000000b8410
- (void)_setupMobileGestaltNotificationHandlers;	// IMP=0x00100000000b8302
- (void)_setupDistributedNotificationHandlers;	// IMP=0x00100000000b80ca
- (void)_setupNotifyHandlers;	// IMP=0x00100000000b7a22
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000b7926
- (void)_setupAnnouncementSpeakingStatePublisher;	// IMP=0x00100000000b7904
- (_Bool)_audioSessionAssertionServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b74d8
- (void)_setupAudioSessionAssertionServiceListener;	// IMP=0x00100000000b7471
- (_Bool)_notificationServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b70d5
- (void)_setupNotificationServiceListener;	// IMP=0x00100000000b7056
- (_Bool)_securityListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b6d19
- (void)_setupSecurityListener;	// IMP=0x00100000000b6cb2
- (_Bool)_analyticsObservationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b6939
- (void)_setupAnalyticsObservationListener;	// IMP=0x00100000000b68d2
- (_Bool)_analyticsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b6436
- (void)_setupAnalyticsListener;	// IMP=0x00100000000b634d
- (void)_setupSiriAnalyticsListener;	// IMP=0x00100000000b6309
- (void)_setupContextListener;	// IMP=0x00100000000b62ff
- (_Bool)_managedStorageListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b6080
- (void)_setupManagedStorageListener;	// IMP=0x00100000000b6019
- (_Bool)_synapseSyncListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b5bdc
- (id)_synapseAppBundleIDFromPossibleDeamonBundleID:(id)arg1;	// IMP=0x00100000000b5b91
- (void)_bundleID:(id *)arg1 andPath:(id *)arg2 forXPCConnection:(id)arg3;	// IMP=0x00100000000b5952
- (void)_setupSynapseSyncListener;	// IMP=0x00100000000b58eb
- (void)_setupSettingsListener;	// IMP=0x00100000000b583f
- (_Bool)_settingsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b54a2
- (void)_setupDictationListener;	// IMP=0x00100000000b53a2
- (_Bool)_dictationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b4e45
- (void)startUISpeechRequest;	// IMP=0x00100000000b4e1c
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00100000000b4d67
- (_Bool)_clientListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000000b4700
- (void)_setupClientListener;	// IMP=0x00100000000b45f7
- (id)_peerLocationService;	// IMP=0x00100000000b452d
- (id)_proxyService;	// IMP=0x00100000000b4463
- (void)_setupIDSServices;	// IMP=0x00100000000b436f
- (void)_setupRapportServices;	// IMP=0x00100000000b4369
- (void)_setupInternal;	// IMP=0x00100000000b429a
- (void)keepAlive;	// IMP=0x00100000000b4197
- (void)shutdown;	// IMP=0x00100000000b417f
- (void)runWithLaunchContext:(id)arg1;	// IMP=0x00100000000b40f3
- (void)dealloc;	// IMP=0x00100000000b4034
- (id)init;	// IMP=0x00100000000b3f75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
