//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/APSConnectionDelegate-Protocol.h>
#import <UserNotificationsServer/UNSBlueListMonitorDelegate-Protocol.h>

@class BSPlatform, NSMutableDictionary, NSMutableSet, NSSet, NSString, UNSAttachmentsService, UNSBlueListMonitor, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationServiceExtensionManager, UNSPushRegistrationRepository;
@protocol OS_dispatch_queue, UNSRemoteNotificationServerObserver, _DASActivityScheduler;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate, UNSBlueListMonitorDelegate>
{
    UNSNotificationRepository *_notificationRepository;	// 8 = 0x8
    UNSNotificationCategoryRepository *_categoryRepository;	// 16 = 0x10
    UNSAttachmentsService *_attachmentsService;	// 24 = 0x18
    UNSPushRegistrationRepository *_pushRegistrationRepository;	// 32 = 0x20
    id <_DASActivityScheduler> _duetActivityScheduler;	// 40 = 0x28
    UNSBlueListMonitor *_blueListMonitor;	// 48 = 0x30
    UNSNotificationServiceExtensionManager *_serviceExtensionManager;	// 56 = 0x38
    BSPlatform *_platform;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_apsQueue;	// 80 = 0x50
    NSMutableSet *_cloudKitBundleIdentifiers;	// 88 = 0x58
    NSMutableSet *_contentAvailableBundleIdentifiers;	// 96 = 0x60
    NSMutableSet *_quietServiceExtensionBundleIdentifiers;	// 104 = 0x68
    NSMutableSet *_foregroundBundleIdentifiers;	// 112 = 0x70
    NSMutableSet *_installedBundleIdentifiers;	// 120 = 0x78
    NSMutableSet *_restrictedBundleIdentifiers;	// 128 = 0x80
    NSMutableSet *_runningBundleIdentifiers;	// 136 = 0x88
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;	// 144 = 0x90
    NSMutableSet *_visibleUserNotificationEnabledBundleIdentifiers;	// 152 = 0x98
    NSSet *_backgroundAppRefreshDisabledList;	// 160 = 0xa0
    NSMutableDictionary *_bundleIdentifierToRegistration;	// 168 = 0xa8
    NSMutableDictionary *_environmentsToConnections;	// 176 = 0xb0
    NSMutableSet *_bundleIdentifiersNeedingToken;	// 184 = 0xb8
    id <UNSRemoteNotificationServerObserver> _observer;	// 192 = 0xc0
}

+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000164b1
- (void).cxx_destruct;	// IMP=0x000000000001655c
@property(nonatomic) id <UNSRemoteNotificationServerObserver> observer; // @synthesize observer=_observer;
- (void)_queue_performMigration;	// IMP=0x000000000001649b
- (void)_queue_didCompleteInitialization;	// IMP=0x0000000000016405
- (void)_queue_removeRegistrationForBundleIdentifier:(id)arg1;	// IMP=0x000000000001639e
- (void)_queue_setPushRegistration:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000001631b
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;	// IMP=0x00000000000161fd
- (_Bool)allowsRemoteNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x00000000000160fc
- (void)bluelistStatusChanged;	// IMP=0x0000000000016049
- (void)backgroundRefreshApplicationsDidChange;	// IMP=0x0000000000015fe8
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2;	// IMP=0x0000000000015c53
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000015b7f
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000015a9f
- (id)_queue_allTopicsForApplication:(id)arg1;	// IMP=0x00000000000159f0
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x0000000000015974
- (void)_queue_calculateTopics;	// IMP=0x0000000000014ce5
- (_Bool)_queue_isVisibleUserNotificationEnabledForApplication:(id)arg1;	// IMP=0x0000000000014c91
- (void)_queue_didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000149d6
- (_Bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;	// IMP=0x0000000000014982
- (_Bool)_queue_shouldBoostTopicToEnabled:(id)arg1;	// IMP=0x000000000001497a
- (_Bool)_queue_isPushEnabledForApplication:(id)arg1;	// IMP=0x00000000000148ce
- (_Bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;	// IMP=0x000000000001483e
- (void)_queue_applicationDidTerminate:(id)arg1;	// IMP=0x00000000000147ef
- (void)_queue_applicationDidLaunch:(id)arg1;	// IMP=0x00000000000147a0
- (_Bool)_queue_isApplicationRunning:(id)arg1;	// IMP=0x000000000001474c
- (void)_queue_applicationDidBecomeBackground:(id)arg1;	// IMP=0x00000000000145dc
- (void)_queue_applicationDidBecomeForeground:(id)arg1;	// IMP=0x00000000000144c1
- (_Bool)_queue_isApplicationForeground:(id)arg1;	// IMP=0x0000000000014470
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000014288
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;	// IMP=0x0000000000013e5a
- (void)_queue_backgroundRefreshApplicationsDidChange;	// IMP=0x0000000000013c01
- (void)_queue_reloadBackgroundAppRefreshDisabledList;	// IMP=0x00000000000139d3
- (void)_queue_reloadRegistrations;	// IMP=0x00000000000137bb
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x00000000000134fb
- (void)notificationSourcesDidInstall:(id)arg1;	// IMP=0x0000000000013194
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000001314b
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4 extensionStart:(id)arg5 extensionEnd:(id)arg6;	// IMP=0x0000000000012785
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4;	// IMP=0x0000000000012763
- (void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 enforcePushType:(_Bool)arg5;	// IMP=0x0000000000011d16
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4;	// IMP=0x0000000000011a98
- (_Bool)_queue_allowServiceExtensionFilteringForMessage:(id)arg1;	// IMP=0x00000000000119e6
- (_Bool)_queue_messageIsValidForDelivery:(id)arg1;	// IMP=0x0000000000011917
- (_Bool)_queue_enforcePushTypeForMessage:(id)arg1;	// IMP=0x00000000000118aa
- (_Bool)_queue_canDeliverMessageToBundle:(id)arg1;	// IMP=0x0000000000011610
- (void)_queue_didReceiveIncomingMessage:(id)arg1;	// IMP=0x0000000000010de5
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000000010d3d
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000000010349
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000000fd9a
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000000fcc1
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000000fb0e
- (void)performMigration;	// IMP=0x000000000000faad
- (void)didCompleteInitialization;	// IMP=0x000000000000fa4a
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000f96d
- (void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000f894
- (void)dealloc;	// IMP=0x000000000000f854
- (id)_initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5 queue:(id)arg6 apsQueue:(id)arg7 duetActivityScheduler:(id)arg8 serviceExtensionManager:(id)arg9;	// IMP=0x000000000000f58e
- (id)initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5;	// IMP=0x000000000000f430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
