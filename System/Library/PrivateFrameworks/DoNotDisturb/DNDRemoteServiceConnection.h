//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteMonitorServerProtocol-Protocol.h>
#import <DoNotDisturb/DNDRemoteServiceClientProtocol-Protocol.h>
#import <DoNotDisturb/DNDRemoteServiceServerProtocol-Protocol.h>

@class BSServiceConnection, BSServiceQuality, DNDState, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface DNDRemoteServiceConnection : NSObject <DNDRemoteServiceClientProtocol, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol>
{
    BSServiceConnection *_monitorQueue_monitorService;	// 8 = 0x8
    BSServiceConnection *_queue_connection;	// 16 = 0x10
    long long _monitorState;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    BSServiceQuality *_queuePriority;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    BSServiceQuality *_monitorQueuePriority;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_monitorQueue;	// 64 = 0x40
    NSMutableArray *_assertionMonitorRequestDetails;	// 72 = 0x48
    NSMutableArray *_stateMonitorRequestDetails;	// 80 = 0x50
    NSMutableArray *_settingsMonitorRequestDetails;	// 88 = 0x58
    NSMutableArray *_modeIdentifiersMonitorRequestDetails;	// 96 = 0x60
    NSMutableArray *_globalConfigurationMonitorRequestDetails;	// 104 = 0x68
    NSMutableArray *_meDeviceStateMonitorRequestDetails;	// 112 = 0x70
    NSHashTable *_eventListeners;	// 120 = 0x78
    DNDState *_lastReceivedState;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x000000000002ff5d
+ (void)initialize;	// IMP=0x000000000002ff53
- (void).cxx_destruct;	// IMP=0x0000000000037630
- (void)registerForMeDeviceStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000374a1
- (void)queryMeDeviceStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003732c
- (oneway void)deliverMeDeviceState:(id)arg1;	// IMP=0x000000000003716e
- (void)getAppInfoForBundleIdentifiers:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003702f
- (void)getAppInfoForBundleIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036ef0
- (void)invalidateModeAssertionWithUUID:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036db1
- (void)activeModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036c3c
- (void)activateModeWithDetails:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036afd
- (oneway void)deliverActiveModeAssertion:(id)arg1 stateUpdate:(id)arg2 clientIdentifiers:(id)arg3;	// IMP=0x000000000003688f
- (oneway void)deliverAvailableModes:(id)arg1;	// IMP=0x0000000000036631
- (oneway void)deliverAllModes:(id)arg1;	// IMP=0x00000000000363d3
- (void)registerForModeSelectionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036244
- (void)registerForGlobalConfigurationUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000360b7
- (void)getStateDumpWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035f42
- (oneway void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035d9c
- (void)setPreventAutoReply:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035c5d
- (void)getPreventAutoReplyWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035b4f
- (void)publishStatusKitAvailabilityWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035a41
- (void)getUserAvailabilityInActiveModeForContactHandle:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035902
- (void)getAllowedModesForContactHandle:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000357c3
- (void)getModeConfigurationForModeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035684
- (void)getModeConfigurationsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003550f
- (void)removeModeConfigurationForModeIdentifier:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000353d0
- (void)getAvailableModesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003525b
- (void)getAllModesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000350e6
- (void)setModeConfiguration:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034fa7
- (oneway void)deliverUpdatedPreventAutoReplySetting:(id)arg1;	// IMP=0x0000000000034dca
- (oneway void)deliverUpdatedPhoneCallBypassSettings:(id)arg1;	// IMP=0x0000000000034c0c
- (oneway void)deliverUpdatedPairSyncState:(id)arg1;	// IMP=0x0000000000034a2f
- (oneway void)deliverUpdatedScheduleSettings:(id)arg1;	// IMP=0x0000000000034871
- (oneway void)deliverUpdatedBehaviorSettings:(id)arg1;	// IMP=0x00000000000346b3
- (void)setPairSyncPreferenceEnabled:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003450d
- (void)getPairSyncStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034398
- (void)setCloudSyncPreferenceEnabled:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000341f2
- (void)getCloudSyncStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003407d
- (void)syncModeConfigurationsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033f08
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033d7b
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033bd5
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033a60
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000338ba
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033745
- (void)setScreenIsShared:(id)arg1 screenIsMirrored:(id)arg2 withRequestDetails:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000033563
- (oneway void)deliverStateUpdate:(id)arg1;	// IMP=0x0000000000033378
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000331eb
- (void)queryStateForUpdateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000331e5
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033070
- (oneway void)deliverActiveModeAssertionUpdate:(id)arg1 invalidation:(id)arg2 clientIdentifiers:(id)arg3;	// IMP=0x0000000000032d8e
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032c01
- (void)getAllModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032a8c
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032917
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000327a2
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003262d
- (void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(id)arg2 requestDetails:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000323bf
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032219
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032073
- (void)removeEventListener:(id)arg1;	// IMP=0x0000000000031ff8
- (void)addEventListener:(id)arg1;	// IMP=0x0000000000031f7d
- (void)_setMonitorState:(long long)arg1;	// IMP=0x0000000000031f45
- (void)_monitorQueue_invalidateMonitorConnection;	// IMP=0x0000000000031efe
- (void)_monitorQueue_createMonitorConnection;	// IMP=0x00000000000307b1
- (id)_monitorQueue_monitorTarget;	// IMP=0x0000000000030735
- (void)_queue_invalidateConnection;	// IMP=0x00000000000306ee
- (void)_queue_createConnection;	// IMP=0x0000000000030304
- (id)_queue_remoteTarget;	// IMP=0x0000000000030288
- (id)init;	// IMP=0x000000000002ffe2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

