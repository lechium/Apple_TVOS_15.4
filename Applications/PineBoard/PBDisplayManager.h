//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSUserDefaults, PBBulletinService, PBCableSignalInfo, PBMultiLatch, PBSDisplayMode;
@protocol OS_dispatch_source;

@interface PBDisplayManager : NSObject
{
    _Bool _filteredUsingdPineBoardPolicy;	// 8 = 0x8
    _Bool _canHandleHighBandwidthModes;	// 9 = 0x9
    _Bool _shouldModeSwitchForDynamicRange;	// 10 = 0xa
    _Bool _shouldModeSwitchForFrameRate;	// 11 = 0xb
    _Bool _atmosEnabled;	// 12 = 0xc
    _Bool _detectedPoorCableConnection;	// 13 = 0xd
    _Bool _deemed4KCapable;	// 14 = 0xe
    _Bool _usesDolbyLowLatency;	// 15 = 0xf
    double _baseCableCheckTimeInterval;	// 16 = 0x10
    NSArray *_blackScreenRecoveryDisplayModes;	// 24 = 0x18
    NSMutableDictionary *_nextEstablishModePerDisplays;	// 32 = 0x20
    NSHashTable *_stateObservers;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_reloadStateSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_notifyClientsSource;	// 56 = 0x38
    NSNumber *_displayConnectionToNotify;	// 64 = 0x40
    PBBulletinService *_bulletinService;	// 72 = 0x48
    PBMultiLatch *_wakeProgressLatch;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_displayIDStabilizer;	// 88 = 0x58
    double _localeRefreshRate;	// 96 = 0x60
    NSArray *_sortedDisplayModes;	// 104 = 0x68
    PBSDisplayMode *_currentDisplayMode;	// 112 = 0x70
    PBSDisplayMode *_fallbackDisplayMode;	// 120 = 0x78
    PBSDisplayMode *_userSelectedDisplayMode;	// 128 = 0x80
    NSSet *_seenDisplayIDs;	// 136 = 0x88
    NSString *_currentDisplayID;	// 144 = 0x90
    long long _displayConnection;	// 152 = 0x98
    long long _lastCablePollStatus;	// 160 = 0xa0
    NSDictionary *_audioLatencies;	// 168 = 0xa8
    long long _eARCStatus;	// 176 = 0xb0
    double _userPreferredRefreshRate;	// 184 = 0xb8
    NSSet *_encodedPromotedDisplayModes;	// 192 = 0xc0
    NSNumber *_presentedDisplayAssistantKind;	// 200 = 0xc8
    NSUserDefaults *_defaults;	// 208 = 0xd0
    NSDictionary *_memoryStore;	// 216 = 0xd8
    NSString *_currentDisplayIdentifier;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_cableCheckTimer;	// 232 = 0xe8
    PBCableSignalInfo *_lastCableErrorInfo;	// 240 = 0xf0
    NSMutableArray *_matchContentRequestedModes;	// 248 = 0xf8
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00200000002cb390
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002cae10
+ (unsigned long long)migrateDisplayModes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002c9ee0
+ (unsigned long long)migratePreferenceKeyToDisplayIdentifier:(id)arg1;	// IMP=0x00100000002c99e0
+ (void)reevaluateAtmosCapabilities;	// IMP=0x00100000002bfd80
+ (id)sharedInstanceIfExists;	// IMP=0x00100000002bfd50
+ (id)sharedInstance;	// IMP=0x00100000002bfc50
+ (id)dependencyDescription;	// IMP=0x00100000002bfab0
+ (_Bool)shouldAllowModeSwitchForDynamicFrameRate;	// IMP=0x00100000000b4b90
+ (_Bool)shouldAllowModeSwitchForDynamicRange;	// IMP=0x00100000000b4ac0
+ (MISSING_TYPE *)enumerateMutableDisplayPreferencesUsingBlock: /* Error: Ran out of types for this method. */;	// IMP=0x001000000018bd60
- (void).cxx_destruct;	// IMP=0x00100000002cc870
@property(retain, nonatomic) NSMutableArray *matchContentRequestedModes; // @synthesize matchContentRequestedModes=_matchContentRequestedModes;
@property(copy, nonatomic) PBCableSignalInfo *lastCableErrorInfo; // @synthesize lastCableErrorInfo=_lastCableErrorInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cableCheckTimer; // @synthesize cableCheckTimer=_cableCheckTimer;
@property(copy, nonatomic) NSString *currentDisplayIdentifier; // @synthesize currentDisplayIdentifier=_currentDisplayIdentifier;
@property(retain, nonatomic) NSDictionary *memoryStore; // @synthesize memoryStore=_memoryStore;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) _Bool usesDolbyLowLatency; // @synthesize usesDolbyLowLatency=_usesDolbyLowLatency;
@property(retain, nonatomic) NSNumber *presentedDisplayAssistantKind; // @synthesize presentedDisplayAssistantKind=_presentedDisplayAssistantKind;
@property(nonatomic) _Bool deemed4KCapable; // @synthesize deemed4KCapable=_deemed4KCapable;
@property(copy, nonatomic) NSSet *encodedPromotedDisplayModes; // @synthesize encodedPromotedDisplayModes=_encodedPromotedDisplayModes;
@property(nonatomic) double userPreferredRefreshRate; // @synthesize userPreferredRefreshRate=_userPreferredRefreshRate;
@property(nonatomic) long long eARCStatus; // @synthesize eARCStatus=_eARCStatus;
@property(retain, nonatomic) NSDictionary *audioLatencies; // @synthesize audioLatencies=_audioLatencies;
@property(nonatomic) long long lastCablePollStatus; // @synthesize lastCablePollStatus=_lastCablePollStatus;
@property(nonatomic) _Bool detectedPoorCableConnection; // @synthesize detectedPoorCableConnection=_detectedPoorCableConnection;
@property(nonatomic) long long displayConnection; // @synthesize displayConnection=_displayConnection;
@property(nonatomic) _Bool atmosEnabled; // @synthesize atmosEnabled=_atmosEnabled;
@property(nonatomic) _Bool shouldModeSwitchForFrameRate; // @synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate;
@property(nonatomic) _Bool shouldModeSwitchForDynamicRange; // @synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange;
@property(nonatomic) _Bool canHandleHighBandwidthModes; // @synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes;
@property(copy, nonatomic) NSString *currentDisplayID; // @synthesize currentDisplayID=_currentDisplayID;
@property(copy, nonatomic) NSSet *seenDisplayIDs; // @synthesize seenDisplayIDs=_seenDisplayIDs;
@property(copy, nonatomic) PBSDisplayMode *userSelectedDisplayMode; // @synthesize userSelectedDisplayMode=_userSelectedDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *fallbackDisplayMode; // @synthesize fallbackDisplayMode=_fallbackDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(copy, nonatomic) NSArray *sortedDisplayModes; // @synthesize sortedDisplayModes=_sortedDisplayModes;
@property(nonatomic) double localeRefreshRate; // @synthesize localeRefreshRate=_localeRefreshRate;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *displayIDStabilizer; // @synthesize displayIDStabilizer=_displayIDStabilizer;
@property(readonly, nonatomic) PBMultiLatch *wakeProgressLatch; // @synthesize wakeProgressLatch=_wakeProgressLatch;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) NSNumber *displayConnectionToNotify; // @synthesize displayConnectionToNotify=_displayConnectionToNotify;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *notifyClientsSource; // @synthesize notifyClientsSource=_notifyClientsSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *reloadStateSource; // @synthesize reloadStateSource=_reloadStateSource;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) NSMutableDictionary *nextEstablishModePerDisplays; // @synthesize nextEstablishModePerDisplays=_nextEstablishModePerDisplays;
@property(nonatomic) _Bool filteredUsingdPineBoardPolicy; // @synthesize filteredUsingdPineBoardPolicy=_filteredUsingdPineBoardPolicy;
@property(copy, nonatomic) NSArray *blackScreenRecoveryDisplayModes; // @synthesize blackScreenRecoveryDisplayModes=_blackScreenRecoveryDisplayModes;
@property(nonatomic) double baseCableCheckTimeInterval; // @synthesize baseCableCheckTimeInterval=_baseCableCheckTimeInterval;
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x00100000002cbf20
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x00100000002cbbe0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002cb780
- (void)setDisplayStabilizationTimer:(double)arg1;	// IMP=0x00100000002cb720
- (void)removeStateObserver:(id)arg1;	// IMP=0x00100000002cb300
- (void)addStateObserver:(id)arg1;	// IMP=0x00100000002cb270
- (void)notifyStateChangeForDisplayConnection:(long long)arg1;	// IMP=0x00100000002cafb0
- (void)displayConnectionUpdated:(long long)arg1;	// IMP=0x00100000002caf60
- (id)audioLatencyForDisplayMode:(id)arg1;	// IMP=0x00100000002c9970
- (void)setAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000002c98f0
- (_Bool)didCompleteDisplayAssistantForCurrentDisplay;	// IMP=0x00100000002c98c0
- (void)displayAssistantDidCompleteForKind:(id)arg1 fromUserInteraction:(_Bool)arg2;	// IMP=0x00100000002c9710
- (void)removeCableCheckHistory;	// IMP=0x00100000002c96e0
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x00100000002c96b0
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x00100000002c9650
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x00100000002c95f0
- (void)presentDisplayAssistantWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c9380
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c9300
- (void)wakeDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c92a0
- (void)sleepDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c9150
- (void)completeDisplayTransition:(long long)arg1 error:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000002c8ba0
- (void)_resetSettingsForCurrentDisplay;	// IMP=0x00100000002c8930
- (_Bool)_recalculateDefaultDisplayMode:(id *)arg1;	// IMP=0x00100000002c7d30
- (id)_recalculatedBlackScreenRecoveryDisplayModes;	// IMP=0x00100000002c7480
- (id)_recalculatedDisplayModesFromCoreAnimationModes:(id)arg1;	// IMP=0x00100000002c6c10
- (void)reloadState;	// IMP=0x00100000002c4bf0
- (void)updateDisplayManagerWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c35b0
- (_Bool)updateCurrentCADisplayFromDisplayMode:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002c2b20
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x00100000002c2ae0
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x00100000002c2aa0
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x00100000002c2a60
- (id)findMatchingCAMode:(id)arg1;	// IMP=0x00100000002c2570
- (id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(_Bool)arg2;	// IMP=0x00100000002c24f0
- (id)findFirstMode:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c2480
- (id)filterModes:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c2410
- (void)fetchCurrentDisplayStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c2380
@property(readonly, nonatomic) NSDictionary *serialisedState;
@property(readonly, nonatomic) _Bool isPresentingDisplayAssistant;
- (_Bool)isAdvertisingHDMI2;	// IMP=0x00100000002c1b40
- (id)promotedVirtualDisplayModes;	// IMP=0x00100000002c1860
- (void)dealloc;	// IMP=0x00100000002c0af0
- (id)_init;	// IMP=0x00100000002bfec0
- (id)init;	// IMP=0x00100000002bfe10
- (double)recalculatedCurrentLocaleRefreshRate;	// IMP=0x0010000000078a10
- (void)updateDisplayForNewRegionWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000785c0
- (_Bool)_isModeSwitchInProgress;	// IMP=0x00100000000b7930
- (void)_notifyDisplayModeChange:(_Bool)arg1;	// IMP=0x00100000000b76b0
- (void)_notifyDisplayModeChangeDidFinish;	// IMP=0x00100000000b7680
- (void)_considerDisplayModeSwitchFinished:(id)arg1;	// IMP=0x00100000000b7600
- (long long)reportingValueForMatchFrameRate;	// IMP=0x00100000000b75c0
- (long long)reportingValueForMatchDynamicRange;	// IMP=0x00100000000b7580
- (id)_bestSDRDisplayMode;	// IMP=0x00100000000b7100
- (_Bool)_shouldModeSwitchForBundleIdentifier:(id)arg1;	// IMP=0x00100000000b6d30
- (void)_updateDisplayManagerWithDisplayMode:(id)arg1;	// IMP=0x00100000000b6a30
- (id)_findDisplayModeFromPredicate:(id)arg1;	// IMP=0x00100000000b6440
- (id)_bestDisplayModeForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x00100000000b6140
- (id)_fallbackPredicatesForDynamicRange:(long long)arg1 frameRates:(id)arg2;	// IMP=0x00100000000b5de0
- (id)_displayModePredicatesForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x00100000000b5900
- (id)preferredDisplayModeForBundleIdentifier:(id)arg1;	// IMP=0x00100000000b54b0
- (void)performModeSwitchForDisplayConfigurationRequest:(id)arg1;	// IMP=0x00100000000b4f20
- (void)performModeSwitchForBundleIdentifierIfNeeded:(id)arg1;	// IMP=0x00100000000b4d60
- (_Bool)isModeSwitchNeededForTransitionToBundleIdentifier:(id)arg1;	// IMP=0x00100000000b4c60
- (void)removeNativeAndPerformanceObservers;	// IMP=0x00100000000b4a60
- (void)addNativeAndPerformanceObservers;	// IMP=0x00100000000b49e0
- (void)runSleepWakeModeSetCycleToMode:(id)arg1 oldMode:(id)arg2 forDisplayIdentifier:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000014e970
- (void)_saveDisplayMode:(id)arg1 forDisplayID:(id)arg2;	// IMP=0x001000000018f830
- (id)_displayModeForDisplayID:(id)arg1;	// IMP=0x001000000018f620
- (void)removeDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x001000000018f550
- (id)_readDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x001000000018f270
- (void)_saveDisplayMode:(id)arg1 forKey:(id)arg2 persisted:(_Bool)arg3;	// IMP=0x001000000018f110
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2 forDisplayID:(id)arg3;	// IMP=0x001000000018ed30
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2;	// IMP=0x001000000018ec80
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1 forDisplayID:(id)arg2;	// IMP=0x001000000018e780
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1;	// IMP=0x001000000018e6f0
- (double)readCableAlertIntervalOverride;	// IMP=0x001000000018e690
- (int)readCableScoreOverride;	// IMP=0x001000000018e5e0
- (double)readCableErrorPollingIntervalOverride;	// IMP=0x001000000018e580
- (double)readCableHistoryWindowOverride;	// IMP=0x001000000018e520
- (_Bool)_debugAlwaysSaveModeEnabled;	// IMP=0x001000000018e4c0
- (_Bool)_shouldPreferDolbyVisionLowLatency;	// IMP=0x001000000018e460
- (void)resetCableCheckCumulativeTime;	// IMP=0x001000000018e400
- (double)readCableCheckCumulativeTime;	// IMP=0x001000000018e3a0
- (void)saveCableCheckCumulativeTime:(double)arg1;	// IMP=0x001000000018e340
- (_Bool)readDetectedPoorCableConnection;	// IMP=0x001000000018e2e0
- (void)saveDetectedPoorCableConnection:(_Bool)arg1;	// IMP=0x001000000018e270
- (void)removeLastCableErrorInfo;	// IMP=0x001000000018e210
- (id)readLastCableErrorInfo;	// IMP=0x001000000018dfe0
- (void)saveLastCableErrorInfo:(id)arg1;	// IMP=0x001000000018ddc0
- (id)readAudioLatencies;	// IMP=0x001000000018dcb0
- (void)adjustAtmos:(id)arg1;	// IMP=0x001000000018da10
- (void)removeAudioLatencies;	// IMP=0x001000000018d8b0
- (void)saveNewAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000018d730
- (id)readEncodedPromotedDisplayModes;	// IMP=0x001000000018d5d0
- (void)removePromotedDisplayModes;	// IMP=0x001000000018d500
- (void)saveNewPromotedDisplayMode:(id)arg1;	// IMP=0x001000000018d1f0
- (void)removeAllCompleteDisplayAssistants;	// IMP=0x001000000018d0e0
- (_Bool)readDidCompleteDisplayAssistant;	// IMP=0x001000000018d010
- (void)saveDidCompleteDisplayAssistant:(_Bool)arg1;	// IMP=0x001000000018cf30
- (double)readUserPreferredRefreshRate;	// IMP=0x001000000018ce50
- (void)saveUserPreferredRefreshRate:(double)arg1;	// IMP=0x001000000018cdc0
- (_Bool)readAtmosEnabled;	// IMP=0x001000000018ccf0
- (_Bool)readShouldModeSwitchForFrameRate;	// IMP=0x001000000018cc20
- (void)saveAtmosEnabled:(_Bool)arg1;	// IMP=0x001000000018cb40
- (void)saveShouldModeSwitchForFrameRate:(_Bool)arg1;	// IMP=0x001000000018ca60
- (_Bool)readShouldModeSwitchForDynamicRange;	// IMP=0x001000000018c990
- (void)saveShouldModeSwitchForDynamicRange:(_Bool)arg1;	// IMP=0x001000000018c8b0
- (_Bool)readCanDoHighBandwidth;	// IMP=0x001000000018c7e0
- (void)saveCanHandleHighBandwidthModes:(_Bool)arg1;	// IMP=0x001000000018c700
- (id)readSeenDisplayIDs;	// IMP=0x001000000018c530
- (void)saveCurrentDisplayID:(id)arg1;	// IMP=0x001000000018c3f0
- (void)removeUserSelectedDisplayMode;	// IMP=0x001000000018c330
- (id)readUserSelectedDisplayMode;	// IMP=0x001000000018c1d0
- (void)saveUserSelectedDisplayMode:(id)arg1;	// IMP=0x001000000018c0c0
- (double)_historyWindowInterval;	// IMP=0x00100000001a86e0
- (double)_pollingInterval;	// IMP=0x00100000001a8570
- (void)_stopBackgroundMonitoring;	// IMP=0x00100000001a83e0
- (void)_startBackgroundMonitoringAndIgnoreFirstPoll:(_Bool)arg1;	// IMP=0x00100000001a83c0
- (void)_resetTimer;	// IMP=0x00100000001a8380
- (void)registerModeSwitch;	// IMP=0x00100000001a8350
- (void)resetCableInfoHistory;	// IMP=0x00100000001a8210
- (void)_processCurrentCableInfo;	// IMP=0x00100000001a8200
- (void)stopMonitoringCable;	// IMP=0x00100000001a81f0
- (void)startMonitoringCable;	// IMP=0x00100000001a81e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

