//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/AFSiriAnnouncementRequestCapabilityObserving-Protocol.h>
#import <BulletinBoard/BBDataProviderManagerDelegate-Protocol.h>
#import <BulletinBoard/BBMuteExpirationManagerDelegate-Protocol.h>
#import <BulletinBoard/BBSectionAuthorizationManagerDelegate-Protocol.h>
#import <BulletinBoard/BBServerConduitServerInterface-Protocol.h>
#import <BulletinBoard/BBSettingsGatewayServerInterface-Protocol.h>
#import <BulletinBoard/BBSyncServiceDelegate-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class AFSiriAnnouncementRequestCapabilityManager, BBBiometricResource, BBDataProviderManager, BBDismissalSyncCache, BBMaskedSet, BBMuteExpirationManager, BBSectionAuthorizationManager, BBSyncService, NSDate, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BBServer : NSObject <BBDataProviderManagerDelegate, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, AFSiriAnnouncementRequestCapabilityObserving, BBSectionAuthorizationManagerDelegate, BBMuteExpirationManagerDelegate, BBSyncServiceDelegate>
{
    NSMutableDictionary *_bulletinRequestsByID;	// 8 = 0x8
    NSMutableDictionary *_sectionInfoByID;	// 16 = 0x10
    unsigned long long _currentSystemState;	// 24 = 0x18
    unsigned long long _globalCounter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _isRunning;	// 48 = 0x30
    BBDataProviderManager *_dataProviderManager;	// 56 = 0x38
    NSMutableSet *_observers;	// 64 = 0x40
    BBMaskedSet *_observerFeedSet;	// 72 = 0x48
    NSMutableArray *_observerGateways;	// 80 = 0x50
    NSMutableDictionary *_observerGatewaysByName;	// 88 = 0x58
    NSMutableDictionary *_observerGatewayEnumerators;	// 96 = 0x60
    NSMutableDictionary *_pendingUpdatesByBulletinID;	// 104 = 0x68
    NSMutableSet *_settingsGatewayConnections;	// 112 = 0x70
    NSMutableDictionary *_activeSectionIDsByCategory;	// 120 = 0x78
    NSMutableDictionary *_sortedSectionIDsByCategory;	// 128 = 0x80
    NSMutableDictionary *_bulletinsByID;	// 136 = 0x88
    NSMutableDictionary *_bulletinIDsBySectionID;	// 144 = 0x90
    NSMutableDictionary *_noticeBulletinIDsBySectionID;	// 152 = 0x98
    NSMutableArray *_expiringBulletinIDs;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_expirationTimer;	// 168 = 0xa8
    NSMutableArray *_eventBasedExpiringBulletinIDs;	// 176 = 0xb0
    NSDate *_nextScheduledExpirationTimerFireDate;	// 184 = 0xb8
    NSDateComponents *_defaultExpirationComponents;	// 192 = 0xc0
    NSDateComponents *_expirationReferenceComponents;	// 200 = 0xc8
    NSMutableDictionary *_clearedSections;	// 208 = 0xd0
    int _serverIsRunningToken;	// 216 = 0xd8
    BBSyncService *_syncService;	// 224 = 0xe0
    NSXPCListener *_observerListener;	// 232 = 0xe8
    NSXPCListener *_conduitListener;	// 240 = 0xf0
    NSXPCListener *_settingsListener;	// 248 = 0xf8
    NSMutableSet *_suspendedConnections;	// 256 = 0x100
    BBDismissalSyncCache *_dismissalSyncCache;	// 264 = 0x108
    BBSectionAuthorizationManager *_sectionAuthorizationManager;	// 272 = 0x110
    BBMuteExpirationManager *_muteManager;	// 280 = 0x118
    BBBiometricResource *_biometricResource;	// 288 = 0x120
    _Bool _siriAllowedWhenLocked;	// 296 = 0x128
    _Bool _siriEnabled;	// 297 = 0x129
    AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForHeadphones;	// 304 = 0x130
    AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForCarPlay;	// 312 = 0x138
}

+ (unsigned long long)pairedDeviceCount;	// IMP=0x0000000000032cf7
+ (_Bool)_removeSavedChronologicalSectionInfos:(id)arg1;	// IMP=0x00000000000318d2
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1;	// IMP=0x00000000000316ca
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1;	// IMP=0x00000000000314c6
+ (void)removeSavedChronologicalSectionInfo:(id)arg1;	// IMP=0x0000000000031468
+ (void)writeSectionInfo:(id)arg1;	// IMP=0x0000000000031451
+ (void)writeSectionInfo:(id)arg1 withVersionNumber:(unsigned long long)arg2;	// IMP=0x00000000000310ce
+ (id)savedSectionInfo;	// IMP=0x0000000000030d60
+ (id)savedLegacyOrderArray;	// IMP=0x0000000000030cfd
+ (void)writeOrderDictionary:(id)arg1;	// IMP=0x0000000000030c48
+ (id)savedOrderDictionary;	// IMP=0x0000000000030be5
+ (id)savedChronologicalSectionOrder;	// IMP=0x0000000000030b5a
+ (id)_behaviorOverridesPath;	// IMP=0x0000000000030afb
+ (id)_versionedSectionInfoPath;	// IMP=0x0000000000030aa4
+ (id)_sectionInfoPath;	// IMP=0x0000000000030a4d
+ (id)_sectionOrderPath;	// IMP=0x00000000000309f6
+ (void)writeClearedSections:(id)arg1;	// IMP=0x000000000003086d
+ (id)savedClearedSections;	// IMP=0x000000000003080a
+ (id)_clearedSectionsPath;	// IMP=0x00000000000307b3
+ (id)_dataDirectoryPath;	// IMP=0x00000000000306ff
+ (void)initialize;	// IMP=0x0000000000017a09
- (void).cxx_destruct;	// IMP=0x0000000000032d29
- (unsigned long long)_pairedDeviceCount;	// IMP=0x0000000000032d10
- (void)didChangeMuteAssertionForSectionID:(id)arg1;	// IMP=0x0000000000032c77
- (void)didChangeEffectiveAuthorizationStatusForSectionID:(id)arg1;	// IMP=0x0000000000032c27
- (id)syncService:(id)arg1 sectionIdentifiersForUniversalSectionIdentifier:(id)arg2;	// IMP=0x0000000000032c12
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;	// IMP=0x0000000000032bfd
- (_Bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;	// IMP=0x0000000000032b34
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;	// IMP=0x0000000000032383
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;	// IMP=0x0000000000032317
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;	// IMP=0x00000000000322a0
- (void)_queue_managedUserNotificationsSetttingsDidChange;	// IMP=0x0000000000031c84
- (void)_unobserveManagedProfileChanges;	// IMP=0x0000000000031c59
- (void)_observeManagedProfileChanges;	// IMP=0x0000000000031c08
- (_Bool)_deviceSupportsFavorites;	// IMP=0x0000000000031bf7
- (void)_writeSectionInfo;	// IMP=0x0000000000031bc3
- (void)_loadSavedSectionInfo;	// IMP=0x00000000000319f3
- (void)_removeVestigialSections:(id)arg1;	// IMP=0x00000000000319a0
- (void)_writeClearedSections;	// IMP=0x00000000000309bf
- (void)_loadClearedSections;	// IMP=0x0000000000030922
- (void)_ensureDataDirectoryExists;	// IMP=0x0000000000030718
- (void)_removeActiveSectionID:(id)arg1;	// IMP=0x000000000003055e
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2;	// IMP=0x0000000000030495
- (void)_addActiveSectionID:(id)arg1;	// IMP=0x00000000000303c1
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;	// IMP=0x0000000000030376
- (void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;	// IMP=0x0000000000030262
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;	// IMP=0x00000000000300cf
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;	// IMP=0x000000000003006f
- (id)dataProviderForSectionID:(id)arg1;	// IMP=0x0000000000030010
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fed0
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x000000000002fdf0
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fccc
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x000000000002fcba
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x000000000002fbd3
- (id)_clearedInfoForSectionID:(id)arg1;	// IMP=0x000000000002fb71
- (unsigned long long)_filtersForSectionID:(id)arg1;	// IMP=0x000000000002fb69
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3;	// IMP=0x000000000002fa92
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;	// IMP=0x000000000002f8f0
- (void)_updateSectionParametersForDataProvider:(id)arg1;	// IMP=0x000000000002f73d
- (void)_reloadSectionParametersForSectionID:(id)arg1;	// IMP=0x000000000002f6a3
- (void)_updateAllBulletinsForDataProvider:(id)arg1;	// IMP=0x000000000002f62f
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;	// IMP=0x000000000002ee95
- (id)_sinceDate;	// IMP=0x000000000002ede1
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;	// IMP=0x000000000002edc7
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;	// IMP=0x000000000002ed37
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2;	// IMP=0x000000000002ece3
- (id)_enabledSectionIDsForDataProvider:(id)arg1;	// IMP=0x000000000002ea48
- (_Bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;	// IMP=0x000000000002e890
- (void)_publishBulletinsForAllDataProviders;	// IMP=0x000000000002e7ce
- (void)_loadDataProvidersAndSettings;	// IMP=0x000000000002e64f
- (void)_loadSystemCapabilities;	// IMP=0x000000000002e14b
- (void)_migrateGlobalAnnounceSettingIfNeeded;	// IMP=0x000000000002e023
- (void)_migrateSectionInfoIfNeeded;	// IMP=0x000000000002d46a
- (void)loadDataProvidersAndSettings;	// IMP=0x000000000002d409
- (void)_migrateContentPreviewSettings:(id)arg1;	// IMP=0x000000000002d08e
- (void)_migrateSectionIDs:(id)arg1;	// IMP=0x000000000002cb4e
- (void)_migrateLoadedData;	// IMP=0x000000000002c7f6
- (id)_sectionIDsToMigrate;	// IMP=0x000000000002c7e9
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b18d
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;	// IMP=0x000000000002af55
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000002aded
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ab74
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x000000000002ab5f
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1;	// IMP=0x000000000002aaf8
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a980
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a560
- (void)getBulletinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a483
- (id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2;	// IMP=0x000000000002a0c4
- (id)bulletinsRequestsForBulletinIDs:(id)arg1;	// IMP=0x0000000000029ee0
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029dbe
- (id)sectionIDsForUniversalSectionID:(id)arg1;	// IMP=0x0000000000029d5f
- (id)universalSectionIDForSectionID:(id)arg1;	// IMP=0x0000000000029d00
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029b8b
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029a18
- (long long)_effectiveGlobalScheduledDeliveryShowNextSummarySetting;	// IMP=0x00000000000299df
- (void)_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;	// IMP=0x0000000000029954
- (long long)_globalScheduledDeliveryShowNextSummarySetting;	// IMP=0x0000000000029900
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000297a4
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002965e
- (id)_effectiveGlobalScheduledDeliveryTimes;	// IMP=0x000000000002964c
- (void)_setGlobalScheduledDeliveryTimes:(id)arg1;	// IMP=0x0000000000029575
- (id)_globalScheduledDeliveryTimes;	// IMP=0x00000000000294e5
- (id)_encodedScheduledDeliveryTimesForDeliveryTimes:(id)arg1;	// IMP=0x0000000000029280
- (id)_scheduledDeliveryTimesForEncodedDeliveryTimes:(id)arg1;	// IMP=0x0000000000029109
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028f94
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028e21
- (long long)_effectiveGlobalScheduledDeliverySetting;	// IMP=0x0000000000028de6
- (void)_setGlobalScheduledDeliverySetting:(long long)arg1;	// IMP=0x0000000000028d5b
- (long long)_globalScheduledDeliverySetting;	// IMP=0x0000000000028d07
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028b92
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028a1f
- (long long)_effectiveGlobalAnnounceCarPlaySetting;	// IMP=0x0000000000028996
- (void)_setGlobalAnnounceCarPlaySetting:(long long)arg1;	// IMP=0x00000000000288cb
- (long long)_globalAnnounceCarPlaySetting;	// IMP=0x0000000000028850
- (void)_setPairedVehiclesForCarPlay:(_Bool)arg1;	// IMP=0x00000000000287c4
- (_Bool)_hasPairedVehiclesForCarPlay;	// IMP=0x0000000000028779
- (void)_setAnnounceSupportedForCarPlay:(_Bool)arg1;	// IMP=0x00000000000286ed
- (_Bool)_isAnnounceSupportedForCarPlay;	// IMP=0x00000000000286a2
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002852d
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000283ba
- (long long)_effectiveGlobalAnnounceHeadphonesSetting;	// IMP=0x0000000000028339
- (void)_setGlobalAnnounceHeadphonesSetting:(long long)arg1;	// IMP=0x000000000002826e
- (long long)_globalAnnounceHeadphonesSetting;	// IMP=0x00000000000281f3
- (void)_setAnnounceSupportedForHeadphones:(_Bool)arg1;	// IMP=0x0000000000028167
- (_Bool)_isAnnounceSupportedForHeadphones;	// IMP=0x000000000002811c
- (void)setEffectiveGlobalAnnounceSetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027fa7
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027e34
- (long long)_effectiveGlobalAnnounceSetting;	// IMP=0x0000000000027da1
- (void)_setGlobalAnnounceSetting:(long long)arg1;	// IMP=0x0000000000027ca6
- (long long)_globalAnnounceSetting;	// IMP=0x0000000000027c2b
- (void)_updateAnnounceSettings;	// IMP=0x0000000000027bf0
- (void)_saveGlobalAnnounceSettingEnabledEvent;	// IMP=0x0000000000027919
- (void)_updateAnnounceControlCenterModuleAvailability;	// IMP=0x0000000000027888
- (void)_updateSiriPreferences;	// IMP=0x0000000000027726
- (void)_siriPreferencesDidChange:(id)arg1;	// IMP=0x00000000000276c5
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;	// IMP=0x00000000000276bf
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;	// IMP=0x0000000000027575
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027412
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002734c
- (long long)_effectiveGlobalContentPreviewsSetting;	// IMP=0x00000000000272fc
- (void)_setGlobalContentPreviewsSetting:(long long)arg1;	// IMP=0x00000000000272a0
- (long long)_globalContentPreviewsSetting;	// IMP=0x000000000002724c
- (void)_biometricResourceStateChanged;	// IMP=0x00000000000271f8
- (void)_updateGlobalSettings;	// IMP=0x0000000000026fd2
- (void)_updateAllSectionInfos;	// IMP=0x0000000000026db9
- (long long)_defaultGlobalContentPreviewSetting;	// IMP=0x0000000000026da5
- (void)getSectionIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026b7e
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026961
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000267f9
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002668e
- (void)getSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026523
- (void)getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000263fb
- (void)getSectionInfoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000261da
- (void)getEffectiveSectionInfoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025f8e
- (void)_sendObserver:(id)arg1 noticesBulletinsForSectionID:(id)arg2;	// IMP=0x0000000000025be7
- (void)requestNoticesBulletinsForAllSections:(id)arg1;	// IMP=0x0000000000025a8b
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;	// IMP=0x00000000000259b2
- (void)observer:(id)arg1 getSectionInfoForSectionIDs:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002589e
- (void)observer:(id)arg1 getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000257c5
- (void)observer:(id)arg1 getSectionInfoWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000256c1
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4;	// IMP=0x0000000000025603
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000000025493
- (void)observer:(id)arg1 clearBulletinsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;	// IMP=0x000000000002518f
- (void)observer:(id)arg1 clearSection:(id)arg2;	// IMP=0x0000000000025063
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3;	// IMP=0x0000000000024d78
- (void)observer:(id)arg1 handleResponse:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000242d6
- (void)_sendBulletinsLoadedForSectionID:(id)arg1;	// IMP=0x0000000000024186
- (void)_didReceiveResponseForBulletin:(id)arg1;	// IMP=0x0000000000023f20
- (id)_openApplicationOptionsForResponse:(id)arg1;	// IMP=0x0000000000023e50
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4;	// IMP=0x0000000000023bd6
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3;	// IMP=0x00000000000239d4
- (void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x000000000002396e
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002380d
- (void)ping:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023760
- (void)_scheduleExpirationForBulletin:(id)arg1;	// IMP=0x00000000000234a8
- (void)_validateExpirationDateForBulletinRequest:(id)arg1;	// IMP=0x00000000000233a3
- (id)_bulletinDefaultExpirationDateFromDate:(id)arg1;	// IMP=0x0000000000023301
- (void)_setDefaultExpirationComponents:(id)arg1;	// IMP=0x00000000000231b3
- (id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)arg1;	// IMP=0x00000000000230e1
- (id)_newValidatedDefaultExpirationComponentsFromComponents:(id)arg1;	// IMP=0x0000000000023007
- (void)_expireBulletins;	// IMP=0x0000000000022c06
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1;	// IMP=0x0000000000022819
- (unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;	// IMP=0x0000000000022691
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;	// IMP=0x00000000000223cd
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;	// IMP=0x000000000002220c
- (id)_nextExpireBulletinsDate;	// IMP=0x0000000000022156
- (void)_scheduleTimerForDate:(id)arg1;	// IMP=0x0000000000021f11
- (void)_clearExpirationTimer;	// IMP=0x0000000000021eb8
- (void)_handleSignificantTimeChange;	// IMP=0x0000000000021e83
- (void)_handleSystemWake;	// IMP=0x0000000000021e71
- (void)_handleSystemSleep;	// IMP=0x0000000000021e5f
- (void)_addStateCaptureHandlers;	// IMP=0x0000000000020efe
- (void)_updateDataProviderForSectionInfo:(id)arg1 sectionID:(id)arg2;	// IMP=0x0000000000020ca6
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000020a1a
- (void)_setSectionInfoNoteSettingsChanged:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000020941
- (_Bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;	// IMP=0x00000000000205f4
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;	// IMP=0x00000000000200ff
- (id)_sectionInfoArray:(_Bool)arg1;	// IMP=0x0000000000020058
- (id)_sectionInfoArrayForActiveSections:(_Bool)arg1;	// IMP=0x000000000001fff4
- (id)_sectionInfoArrayForSectionIDs:(id)arg1 effective:(_Bool)arg2;	// IMP=0x000000000001fd9a
- (id)_sectionInfoForSectionID:(id)arg1 effective:(_Bool)arg2;	// IMP=0x000000000001fcfa
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;	// IMP=0x000000000001fb4a
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;	// IMP=0x000000000001f13a
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;	// IMP=0x000000000001ec91
- (id)_sortedSectionIDs;	// IMP=0x000000000001ec5e
- (id)_activeSectionIDs;	// IMP=0x000000000001ec2e
- (id)_allBulletinsForSectionID:(id)arg1;	// IMP=0x000000000001ebcf
- (id)_bulletinsForIDs:(id)arg1;	// IMP=0x000000000001e9e8
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x000000000001d4db
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000001d24a
- (void)_removeSection:(id)arg1;	// IMP=0x000000000001cff9
- (void)_clearSection:(id)arg1;	// IMP=0x000000000001cdfb
- (void)_clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 forSection:(id)arg3;	// IMP=0x000000000001c967
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(_Bool)arg3;	// IMP=0x000000000001c7d4
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;	// IMP=0x000000000001c71c
- (void)_dataProviderDidClearInfo:(id)arg1 forSection:(id)arg2;	// IMP=0x000000000001c67b
- (void)_removeBulletins:(id)arg1 forSectionID:(id)arg2 shouldSync:(_Bool)arg3;	// IMP=0x000000000001c2de
- (void)_removeBulletin:(id)arg1 shouldSync:(_Bool)arg2;	// IMP=0x000000000001c2c4
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(_Bool)arg2 shouldSync:(_Bool)arg3;	// IMP=0x000000000001c04d
- (void)_modifyBulletin:(id)arg1;	// IMP=0x000000000001bfd1
- (void)_addBulletin:(id)arg1;	// IMP=0x000000000001be85
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;	// IMP=0x000000000001be1e
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;	// IMP=0x000000000001bb8a
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;	// IMP=0x000000000001ba9f
- (void)_sendBulletinUpdate:(id)arg1;	// IMP=0x000000000001b572
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;	// IMP=0x000000000001b33e
- (void)_enqueueBulletinUpdate:(id)arg1;	// IMP=0x000000000001b258
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;	// IMP=0x000000000001ab4e
- (id)_observerGatewaysForFeeds:(unsigned long long)arg1;	// IMP=0x000000000001a998
- (void)_sendRemoveSection:(id)arg1;	// IMP=0x000000000001a846
- (id)_observersForNoticesFeed;	// IMP=0x000000000001a81b
- (void)_sendUpdateSectionInfo:(id)arg1;	// IMP=0x000000000001a398
- (void)_removeObserver:(id)arg1;	// IMP=0x0000000000019fcd
- (void)_addObserver:(id)arg1;	// IMP=0x0000000000019f24
- (void)_resumeAllSuspendedConnectionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019d07
- (void)_removeSuspendedConnection:(id)arg1;	// IMP=0x0000000000019c5b
- (void)_addSuspendedConnection:(id)arg1;	// IMP=0x0000000000019baf
- (id)allBulletinIDsForSectionID:(id)arg1;	// IMP=0x0000000000019b45
- (id)carBulletinIDsForSectionID:(id)arg1;	// IMP=0x0000000000019b2e
- (id)noticesBulletinIDsForSectionID:(id)arg1;	// IMP=0x0000000000019b17
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2;	// IMP=0x0000000000019a3a
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;	// IMP=0x0000000000019a22
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3;	// IMP=0x000000000001990a
- (id)_mapForFeed:(unsigned long long)arg1;	// IMP=0x00000000000198d1
- (void)withdrawBulletinID:(id)arg1;	// IMP=0x000000000001978d
- (void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x00000000000193b4
- (void)_removeSettingsGatewayConnection:(id)arg1;	// IMP=0x00000000000192ee
- (void)_addSettingsGatewayConnection:(id)arg1;	// IMP=0x000000000001921f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000018199
- (_Bool)isRunning;	// IMP=0x0000000000018190
- (void)dealloc;	// IMP=0x00000000000180e3
- (id)initWithQueue:(id)arg1 dataProviderManager:(id)arg2 syncService:(id)arg3 dismissalSyncCache:(id)arg4 observerListener:(id)arg5 conduitListener:(id)arg6 settingsListener:(id)arg7;	// IMP=0x0000000000017b77
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000017a13
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000051173
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000050f15
- (void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3;	// IMP=0x0000000000050699
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2;	// IMP=0x000000000005017f
- (void)_updateInterruptionLevelForBulletin:(id)arg1;	// IMP=0x0000000000050098
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;	// IMP=0x000000000004fe16
- (void)deliverResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004fcac
- (void)noteFinishedWithBulletinID:(id)arg1;	// IMP=0x000000000004fc8c
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;	// IMP=0x000000000005167c
- (void)_assignIDToBulletinRequest:(id)arg1;	// IMP=0x00000000000515c0
- (id)_bulletinRequestsForIDs:(id)arg1;	// IMP=0x00000000000513d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

