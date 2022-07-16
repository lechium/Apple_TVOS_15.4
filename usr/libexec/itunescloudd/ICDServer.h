//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudPushNotificationController, CloudUserNotificationController, ICDCloudServiceStatusMonitor, ICDEnhancedAudioKeyManager, ICDNetworkAvailabilityService, ICDServerNotificationsManager, ICDServerOperationsManager, ICDelegateAccountStoreServiceListener, ICDelegationProviderService, NSMutableDictionary, NSOperationQueue, NSString, NSUserDefaults;
@protocol ICDAccountManaging, ICDBackgroundTaskManaging, ICDHandlerCoordinating, OS_dispatch_queue, OS_dispatch_source;

@interface ICDServer : NSObject
{
    _Bool _startupSequenceCompleted;	// 8 = 0x8
    _Bool _ignoreAccountChanges;	// 9 = 0x9
    _Bool _havePendingOperationToReloadSecondaryAccountLibraries;	// 10 = 0xa
    unsigned int _outputClusterType;	// 12 = 0xc
    ICDCloudServiceStatusMonitor *_cloudServiceStatusMonitor;	// 16 = 0x10
    long long _preferredVideoQuality;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_startupQueue;	// 40 = 0x28
    NSOperationQueue *_internalOperationQueue;	// 48 = 0x30
    NSMutableDictionary *_xpcListeners;	// 56 = 0x38
    ICDNetworkAvailabilityService *_networkAvailabilityService;	// 64 = 0x40
    ICDServerOperationsManager *_serverOperationsManager;	// 72 = 0x48
    ICDServerNotificationsManager *_serverNotificationsManager;	// 80 = 0x50
    id <ICDAccountManaging> _accountManager;	// 88 = 0x58
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 96 = 0x60
    id <ICDBackgroundTaskManaging> _backgroundTaskManager;	// 104 = 0x68
    ICDelegateAccountStoreServiceListener *_delegateAccountStoreListener;	// 112 = 0x70
    ICDelegationProviderService *_delegationProviderService;	// 120 = 0x78
    CloudPushNotificationController *_pushNotificationController;	// 128 = 0x80
    NSUserDefaults *_mediaPlaybackDefaults;	// 136 = 0x88
    CloudUserNotificationController *_userNotificationController;	// 144 = 0x90
    unsigned long long _stateHandle;	// 152 = 0x98
    ICDEnhancedAudioKeyManager *_enhancedAudioKeyManager;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_sigtermSource;	// 168 = 0xa8
}

+ (id)server;	// IMP=0x002000000004623c
- (void).cxx_destruct;	// IMP=0x002000000004047e
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource; // @synthesize sigtermSource=_sigtermSource;
@property(readonly, nonatomic) ICDEnhancedAudioKeyManager *enhancedAudioKeyManager; // @synthesize enhancedAudioKeyManager=_enhancedAudioKeyManager;
@property(nonatomic) _Bool havePendingOperationToReloadSecondaryAccountLibraries; // @synthesize havePendingOperationToReloadSecondaryAccountLibraries=_havePendingOperationToReloadSecondaryAccountLibraries;
@property(readonly, nonatomic) unsigned int outputClusterType; // @synthesize outputClusterType=_outputClusterType;
@property(readonly, nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(readonly, nonatomic) CloudUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(readonly, nonatomic) NSUserDefaults *mediaPlaybackDefaults; // @synthesize mediaPlaybackDefaults=_mediaPlaybackDefaults;
@property(readonly, nonatomic) CloudPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(readonly, nonatomic) ICDelegationProviderService *delegationProviderService; // @synthesize delegationProviderService=_delegationProviderService;
@property(readonly, nonatomic) ICDelegateAccountStoreServiceListener *delegateAccountStoreListener; // @synthesize delegateAccountStoreListener=_delegateAccountStoreListener;
@property(readonly, nonatomic) id <ICDBackgroundTaskManaging> backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) ICDServerNotificationsManager *serverNotificationsManager; // @synthesize serverNotificationsManager=_serverNotificationsManager;
@property(readonly, nonatomic) ICDServerOperationsManager *serverOperationsManager; // @synthesize serverOperationsManager=_serverOperationsManager;
@property(readonly, nonatomic) ICDNetworkAvailabilityService *networkAvailabilityService; // @synthesize networkAvailabilityService=_networkAvailabilityService;
@property(readonly, nonatomic) NSMutableDictionary *xpcListeners; // @synthesize xpcListeners=_xpcListeners;
@property(readonly, nonatomic) NSOperationQueue *internalOperationQueue; // @synthesize internalOperationQueue=_internalOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(nonatomic) _Bool ignoreAccountChanges; // @synthesize ignoreAccountChanges=_ignoreAccountChanges;
- (void)_updateAirPlaySettingsForConfiguration:(id)arg1;	// IMP=0x0010000000040093
- (void)_handleFamilyContentDeletionEvent:(id)arg1;	// IMP=0x001000000003fc96
- (void)_updateHTTPCookieStoreForContentRestrictions;	// IMP=0x001000000003fc4b
- (void)_updateEnhancedAudioAvailabilityIfNeeded;	// IMP=0x001000000003fb27
- (void)_performPeriodicSubscriptionTasks;	// IMP=0x001000000003fa27
- (void)_loadICMLForSecondaryAccountsOnAppleTVWithOutputClusterType:(unsigned int)arg1 activeAccountConfiguration:(id)arg2;	// IMP=0x001000000003f901
- (void)_retryLoadingCloudLibraryForSecondaryAccountsOnAppleTV;	// IMP=0x001000000003f8b6
- (long long)_libraryManagementPolicyTypeForPlatformWithOutputClusterType:(unsigned int)arg1 canRetryLoadingSecondaryAccounts:(_Bool *)arg2;	// IMP=0x001000000003f72a
- (long long)_secondaryAccountsCloudLibraryLoadingStateWithClusterType:(unsigned int)arg1;	// IMP=0x001000000003f412
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;	// IMP=0x001000000003ecd2
- (void)_writeURLResolutionCacheFileUsingBag:(id)arg1;	// IMP=0x001000000003e7c6
- (void)_ensureURLResolutionCacheFileExists;	// IMP=0x001000000003e59f
- (id)_urlResolutionCacheFilePath;	// IMP=0x001000000003e57e
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x001000000003e44a
- (void)_handleApplicationRegistrationNotification:(id)arg1;	// IMP=0x001000000003e011
- (void)_ensureMusicSubscriptionKeysAreAvailableForConfiguration:(id)arg1;	// IMP=0x001000000003ddf6
- (void)_ensureSubscriptionInformationIsUpToDateForConfiguration:(id)arg1;	// IMP=0x001000000003dcc5
- (void)_updateAllowsExplicitContentSettingForConfiguration:(id)arg1 automatically:(_Bool)arg2;	// IMP=0x001000000003d6ff
- (void)_setupMPMediaLibraryFilteringForConfigurations:(id)arg1;	// IMP=0x001000000003d3d8
- (void)_migrateToLatestUserVersionForConfigurations:(id)arg1;	// IMP=0x001000000003d0e6
- (void)_completeStartupSequenceIfNeeded;	// IMP=0x001000000003cfeb
- (_Bool)_canCompleteStartupSequence;	// IMP=0x001000000003ce9c
@property(nonatomic, getter=isStartupSequenceCompleted) _Bool startupSequenceCompleted; // @synthesize startupSequenceCompleted=_startupSequenceCompleted;
@property(readonly, nonatomic) ICDCloudServiceStatusMonitor *cloudServiceStatusMonitor; // @synthesize cloudServiceStatusMonitor=_cloudServiceStatusMonitor;
- (void)_tearDownKVO;	// IMP=0x001000000003ccef
- (void)_setupKVO;	// IMP=0x001000000003ccc3
- (void)_stopAncillaryServices;	// IMP=0x001000000003cb60
- (void)_startAncillaryServices;	// IMP=0x001000000003c41c
- (void)_initializeAncillaryServices;	// IMP=0x001000000003c3ab
- (void)_setupSigtermHandler;	// IMP=0x001000000003c26f
- (void)_setupInternalQueues;	// IMP=0x001000000003c17a
- (void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2;	// IMP=0x001000000003c0ef
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003bfe1
- (void)notificationsManagerDidReceiveMusicSettingsChangedNotification:(id)arg1;	// IMP=0x001000000003bef0
- (void)notificationsManagerDidReceivePhoneNumberChangedNotification:(id)arg1;	// IMP=0x001000000003bda7
- (void)notificationsManagerDidReceiveFirstUnlockNotification:(id)arg1;	// IMP=0x001000000003bcb6
- (void)notificationsManager:(id)arg1 didReceiveApplicationInstallationNotification:(id)arg2;	// IMP=0x001000000003bba6
- (void)notificationsManager:(id)arg1 didReceiveFamilyDeletionEventNotification:(id)arg2;	// IMP=0x001000000003ba4b
- (void)notificationsManager:(id)arg1 didReceiveAuthServiceTokenDidChangeNotification:(id)arg2;	// IMP=0x001000000003b965
- (void)notificationsManager:(id)arg1 didReceiveSubscriptionStatusDidChangeNotification:(id)arg2;	// IMP=0x001000000003b7e3
- (void)notificationsManager:(id)arg1 didReceiveAllowsMusicVideosDidChangeNotification:(id)arg2;	// IMP=0x001000000003b6f2
- (void)notificationsManager:(id)arg1 didReceiveAllowsExplicitContentDidChangeNotification:(id)arg2;	// IMP=0x001000000003b500
- (void)notificationsManager:(id)arg1 didReceiveActiveUserIdentityDidChangeNotification:(id)arg2;	// IMP=0x001000000003b441
- (void)notificationsManagerDidReceiveCloudAuthenticationDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000003b303
- (void)notificationsManagerDidReceiveCellularDataRestrictionDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000003b09b
- (void)notificationsManagerDidReceiveLibraryImportDidFinishDarwinNotification:(id)arg1;	// IMP=0x001000000003ae9f
- (void)notificationsManagerDidReceiveBuddySetupDoneDarwinNotification:(id)arg1;	// IMP=0x001000000003ae99
- (void)notificationsManagerDidReceiveAccountChangeDarwinNotification:(id)arg1;	// IMP=0x001000000003ae14
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000003a90f
- (long long)_ICCloudServerSupportedServiceForXPCListener:(id)arg1;	// IMP=0x001000000003a7fd
- (id)_setupXPCListenerForService:(long long)arg1;	// IMP=0x001000000003a6ec
- (void)getListenerEndpointForService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a4dd
- (id)handlerWithType:(long long)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000039f6c
- (void)scheduleBackgroundUpdateType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x0010000000039ef4
- (void)listCloudServerOperations;	// IMP=0x0010000000039eaf
- (void)fetchEnhancedAudioOfflineKeys;	// IMP=0x0010000000039e0b
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x0010000000039d67
- (id)daemonOptionsForConfiguration:(id)arg1;	// IMP=0x0010000000039830
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000397be
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003974c
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x00100000000396f9
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x00100000000396a6
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000003962e
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x00100000000395b6
- (void)stop;	// IMP=0x0010000000039410
- (void)start;	// IMP=0x00100000000392a5
- (id)_stateDump;	// IMP=0x0010000000039255
- (void)dealloc;	// IMP=0x00100000000391e4
- (id)_init;	// IMP=0x0010000000039053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

