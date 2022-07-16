//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBObserverDelegate-Protocol.h>

@class BBDataProviderConnection, BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationTopicRepository, UNSSettingsGateway;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate>
{
    NSMutableDictionary *_bundleIdentifierToDataProvider;	// 8 = 0x8
    NSMutableSet *_authorizedBundleIdentifiers;	// 16 = 0x10
    NSMutableSet *_supportedBundleIdentifiers;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
    UNSApplicationLauncher *_appLauncher;	// 40 = 0x28
    UNSDaemonLauncher *_daemonLauncher;	// 48 = 0x30
    UNSLocalizationService *_localizationService;	// 56 = 0x38
    UNSNotificationCategoryRepository *_categoryRepository;	// 64 = 0x40
    UNSNotificationRepository *_notificationRepository;	// 72 = 0x48
    UNSNotificationTopicRepository *_topicRepository;	// 80 = 0x50
    UNSAttachmentsService *_attachmentsService;	// 88 = 0x58
    BBDataProviderConnection *_dataProviderConnection;	// 96 = 0x60
    BBObserver *_settingsObserver;	// 104 = 0x68
    UNSSettingsGateway *_settingsGateway;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000004d097
- (void)observer:(id)arg1 removeSection:(id)arg2;	// IMP=0x000000000004cfed
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x000000000004cdea
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000004cd40
- (void)notificationSourcesDidInstall:(id)arg1;	// IMP=0x000000000004cc96
- (void)_queue_notificationSourceDidUninstall:(id)arg1;	// IMP=0x000000000004cb76
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000004ca4c
- (void)_queue_notificationSourceDidInstall:(id)arg1;	// IMP=0x000000000004c90d
- (void)_queue_notificationSourcesDidInstall:(id)arg1;	// IMP=0x000000000004c78b
- (void)_queue_createNewDefaultDataProviders:(id)arg1;	// IMP=0x000000000004bea8
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bd6d
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b84f
- (void)_queue_setCriticalAlertAuthorization:(_Bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b5e4
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 scheduledDeliveryEnabled:(_Bool)arg3 expirationDate:(id)arg4 lastUserGrantDate:(id)arg5 forNotificationSourceDescription:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000004b0a7
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 scheduledDeliveryEnabled:(_Bool)arg3 forNotificationSourceDescription:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004b080
- (id)_queue_sectionInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000004af6b
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000004ae56
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000004ae40
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;	// IMP=0x000000000004aba6
- (id)_queue_notificationSettingsForBundleIdentifier:(id)arg1;	// IMP=0x000000000004aa8a
- (void)_queue_removeObserver:(id)arg1;	// IMP=0x000000000004aa74
- (void)_queue_addObserver:(id)arg1;	// IMP=0x000000000004aa5e
- (void)_queue_sectionInfoDidChange:(id)arg1;	// IMP=0x000000000004a744
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004a69c
- (void)addObserver:(id)arg1;	// IMP=0x000000000004a5f3
- (void)setCriticalAlertAuthorization:(_Bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a37e
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 scheduledDeliveryEnabled:(_Bool)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a07d
- (void)requestRemoveAuthorizationforNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049f6e
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 scheduledDeliveryEnabled:(_Bool)arg3 expirationDate:(id)arg4 lastUserGrantDate:(id)arg5 forNotificationSourceDescription:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000049b63
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 scheduledDeliveryEnabled:(_Bool)arg3 forNotificationSourceDescription:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004978e
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000495df
- (id)notificationSettingsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000049394
- (void)dealloc;	// IMP=0x0000000000049311
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6 localizationService:(id)arg7 settingsGateway:(id)arg8;	// IMP=0x000000000004907c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
