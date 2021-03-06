//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <UserNotificationsServer/UNSContentProtectionObserver-Protocol.h>
#import <UserNotificationsServer/UNSDefaultDataProviderFactoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSNotificationRepositoryDelegate-Protocol.h>
#import <UserNotificationsServer/UNSRemoteNotificationServerObserver-Protocol.h>

@class BKSApplicationStateMonitor, NSSet, NSString, UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsRepository, UNSAttachmentsService, UNSBundleLibrarian, UNSContentProtectionManager, UNSDaemonLauncher, UNSDefaultDataProviderFactory, UNSLocalizationService, UNSLocationMonitor, UNSNotificationAuthorizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSNotificationTopicRepository, UNSPendingNotificationRepository, UNSPushRegistrationRepository, UNSRemoteNotificationServer, UNSSettingsGateway, UNSUserNotificationServerConnectionListener, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSUserNotificationServerSettingsConnectionListener, _UNNotificationCommunicationContextService;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver>
{
    UNSApplicationLauncher *_applicationLauncher;	// 8 = 0x8
    UNSApplicationService *_applicationService;	// 16 = 0x10
    UNSAttachmentsRepository *_attachmentsRepository;	// 24 = 0x18
    UNSBundleLibrarian *_librarian;	// 32 = 0x20
    UNSContentProtectionManager *_contentProtectionManager;	// 40 = 0x28
    UNSDefaultDataProviderFactory *_dataProviderFactory;	// 48 = 0x30
    UNSLocalizationService *_localizationService;	// 56 = 0x38
    _UNNotificationCommunicationContextService *_communicationContextService;	// 64 = 0x40
    UNSUserNotificationServerConnectionListener *_userNotificationServerConnectionListener;	// 72 = 0x48
    UNSUserNotificationServerSettingsConnectionListener *_userNotificationServerSettingsConnectionListener;	// 80 = 0x50
    UNSUserNotificationServerRemoteNotificationConnectionListener *_userNotificationServerRemoteNotificationConnectionListener;	// 88 = 0x58
    UNSNotificationCategoryRepository *_categoryRepository;	// 96 = 0x60
    UNSNotificationSchedulingService *_notificationSchedulingService;	// 104 = 0x68
    UNSNotificationAuthorizationService *_notificationAuthorizationService;	// 112 = 0x70
    UNSNotificationSettingsService *_notificationSettingsService;	// 120 = 0x78
    UNSNotificationRepository *_notificationRepository;	// 128 = 0x80
    UNSPendingNotificationRepository *_pendingNotificationRepository;	// 136 = 0x88
    UNSPushRegistrationRepository *_pushRegistrationRepository;	// 144 = 0x90
    UNSRemoteNotificationServer *_remoteNotificationService;	// 152 = 0x98
    UNSNotificationScheduleRepository *_notificationScheduleRepository;	// 160 = 0xa0
    UNSNotificationTopicRepository *_topicRepository;	// 168 = 0xa8
    UNSAttachmentsService *_attachmentsService;	// 176 = 0xb0
    UNSLocationMonitor *_locationMonitor;	// 184 = 0xb8
    UNSDaemonLauncher *_daemonLauncher;	// 192 = 0xc0
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 200 = 0xc8
    NSSet *_systemSourceBundleIdentifiers;	// 208 = 0xd0
    NSString *_libraryDirectory;	// 216 = 0xd8
    NSString *_directory;	// 224 = 0xe0
    UNSSettingsGateway *_settingsGateway;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_installedSourceQueue;	// 240 = 0xf0
}

+ (id)sharedInstanceIfExists;	// IMP=0x000000000001b686
+ (id)sharedInstance;	// IMP=0x000000000001b66f
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;	// IMP=0x000000000001b60a
- (void).cxx_destruct;	// IMP=0x000000000001ddf4
- (void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg1;	// IMP=0x000000000001dc7a
- (void)_removeNotificationSourceDirectories:(id)arg1;	// IMP=0x000000000001d96e
- (void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000001d86e
- (void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg1;	// IMP=0x000000000001d7ec
- (void)_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000001d76d
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;	// IMP=0x000000000001d754
- (void)_registerLoggers;	// IMP=0x000000000001d74a
- (void)_timeDidChangeSignificantly;	// IMP=0x000000000001d734
- (void)_ensureAttachmentsIntegrity;	// IMP=0x000000000001d6c7
- (void)_addObserverForSignificantTimeChanges;	// IMP=0x000000000001d658
- (void)_addObserverForRemoteNotificationServiceChanges;	// IMP=0x000000000001d63c
- (void)_addObserverForDataProviderFactoryChanges;	// IMP=0x000000000001d623
- (void)_addObserverForContentProtectionChanges;	// IMP=0x000000000001d60a
- (void)_addObserverForApplicationWorkspaceChanges;	// IMP=0x000000000001d5b7
- (void)_addObserverForApplicationStateRestore;	// IMP=0x000000000001d5b1
- (void)_addObserverForApplicationStateMonitor;	// IMP=0x000000000001d412
- (void)_backgroundRefreshApplicationsDidChange;	// IMP=0x000000000001d3f9
- (void)_applicationStateDidRestore;	// IMP=0x000000000001d3bb
- (void)_addObserverForBackgroundRefreshApplicationChanges;	// IMP=0x000000000001d34c
- (void)_localeDidChange;	// IMP=0x000000000001d336
- (void)_addObserverForLocaleChanges;	// IMP=0x000000000001d2cf
- (void)_removePushStore;	// IMP=0x000000000001d173
- (void)_migrateAttachments;	// IMP=0x000000000001d15d
- (void)_migrateNotificationSchedule;	// IMP=0x000000000001d144
- (void)_migratePushRegistrations;	// IMP=0x000000000001d12b
- (void)_migrateNotificationCategories;	// IMP=0x000000000001d115
- (void)_migratePendingNotificationRequests;	// IMP=0x000000000001d0fc
- (void)_validateNotificationRepository;	// IMP=0x000000000001d0e3
- (void)_migrateNotificationRepository;	// IMP=0x000000000001d0ca
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;	// IMP=0x000000000001d057
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000001cfd7
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cfc1
- (_Bool)isApplicationForeground:(id)arg1;	// IMP=0x000000000001cfab
- (void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000001cf28
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000001cd21
- (id)_sourceDescriptionsForApplications:(id)arg1;	// IMP=0x000000000001cb5e
- (void)_applicationsDidInstall:(id)arg1;	// IMP=0x000000000001cb12
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x000000000001ca67
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000001c9bc
- (void)initialSystemNotificationSourcesDidInstall:(id)arg1 applicationsDidInstall:(id)arg2;	// IMP=0x000000000001c87a
- (id)_loadAllSystemNotificationSourceDescriptions;	// IMP=0x000000000001c678
- (id)init;	// IMP=0x000000000001b6f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

