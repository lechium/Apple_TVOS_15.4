//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBagValue, AMSProcessInfo, AMSSnapshotBag, NSDate, NSString;
@protocol AMSBagProtocol;

@interface URLBag : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    AMSSnapshotBag *_snapshotBag;	// 24 = 0x18
    id _snapshotBagChangedObserver;	// 32 = 0x20
    _Bool expired;	// 40 = 0x28
    NSDate *expirationDate;	// 48 = 0x30
    NSString *profile;	// 56 = 0x38
    NSString *profileVersion;	// 64 = 0x40
}

+ (id)_keySet;	// IMP=0x002000000013afa6
+ (id)sandboxBag;	// IMP=0x0010000000138c62
+ (id)octaneBag;	// IMP=0x0010000000138bfd
+ (id)defaultBag;	// IMP=0x0010000000138ba8
- (void).cxx_destruct;	// IMP=0x002000000013c27a
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void)_commonInit;	// IMP=0x001000000013c0b1
- (id)snapshotURLForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x001000000013ae26
- (id)snapshotStringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x001000000013aca6
- (long long)snapshotIntegerForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x001000000013ab44
- (double)snapshotDoubleForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x001000000013a9e1
- (id)snapshotDictionaryForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x001000000013a861
- (_Bool)snapshotBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x001000000013a702
- (id)snapshotArrayForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x001000000013a582
- (id)snapshotURLForKey:(id)arg1;	// IMP=0x001000000013a4ff
- (id)snapshotStringForKey:(id)arg1;	// IMP=0x001000000013a47c
- (id)snapshotIntegerForKey:(id)arg1;	// IMP=0x001000000013a3f9
- (id)snapshotDoubleForKey:(id)arg1;	// IMP=0x001000000013a376
- (id)snapshotDictionaryForKey:(id)arg1;	// IMP=0x001000000013a2f3
- (id)snapshotBoolForKey:(id)arg1;	// IMP=0x001000000013a270
- (id)snapshotArrayForKey:(id)arg1;	// IMP=0x001000000013a1ed
@property(readonly) AMSBagValue *welcomeToAppStoreActionURL;
@property(readonly) AMSBagValue *welcomeToAppStoreActionButton;
@property(readonly) AMSBagValue *welcomeToAppStoreDontRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreLaterButton;
@property(readonly) AMSBagValue *welcomeToAppStoreMessage;
@property(readonly) AMSBagValue *welcomeToAppStoreTitle;
@property(readonly) AMSBagValue *welcomeToAppStoreSample;
@property(readonly) AMSBagValue *welcomeToAppStoreDelay;
@property(readonly) AMSBagValue *watchSuppressDialogs;
@property(readonly) AMSBagValue *watchRequestThrottle;
- (id)updatesReloadIntervalCellular;	// IMP=0x001000000013a091
- (id)updatesReloadInterval;	// IMP=0x001000000013a074
- (id)updateProductContentType;	// IMP=0x001000000013a057
- (id);	// IMP=0x001000000013a03a
- (id)viewUpdatesRequestURL;	// IMP=0x001000000013a01d
- (id)updateUsingOptimizedRequest;	// IMP=0x001000000013a000
- (id)doNotUpdateList;	// IMP=0x0010000000139fe3
- (id)availableUpdatesRequestURL;	// IMP=0x0010000000139fc6
@property(readonly) AMSBagValue *testFlightExtensionSyncGracePeriodMinutes;
@property(readonly) AMSBagValue *testFlightExtensionSyncIntervalMinutes;
@property(readonly) AMSBagValue *testFlightExtensionPushEnabled;
@property(readonly) AMSBagValue *testFlightExtensionEnabled;
@property(readonly) AMSBagValue *uploadFeedbackURL;
@property(readonly) AMSBagValue *getImageUploadURLsURL;
@property(readonly) AMSBagValue *backoffRandomRange;
@property(readonly) AMSBagValue *backoffDelays;
@property(readonly) AMSBagValue *hideableSystemAppsForWatch;
@property(readonly) AMSBagValue *hideableSystemApps;
@property(readonly) AMSBagValue *pendingAppsURL;
@property(readonly) AMSBagValue *completeStoreDownloadURL;
@property(readonly) AMSBagValue *automaticDownloadsURL;
@property(readonly, nonatomic) AMSBagValue *externalPurchasesSpringBoardAppDeleteAlertIsEnabled;
@property(readonly, nonatomic) AMSBagValue *externalLinkSheetURL;
@property(readonly, nonatomic) AMSBagValue *externalPurchasesSheetURL;
@property(readonly, nonatomic) AMSBagValue *allowedCustomBuyParams;
@property(readonly, nonatomic) AMSBagValue *useMediaWithLegacyClientRate;
@property(readonly, nonatomic) AMSBagValue *transactionReceiptsURL;
@property(readonly, nonatomic) AMSBagValue *transactionReceiptsMaxCount;
@property(readonly, nonatomic) AMSBagValue *transactionReceiptsMaxAge;
@property(readonly, nonatomic) AMSBagValue *subscriptionStatusURL;
@property(readonly, nonatomic) AMSBagValue *subscriptionStatusMaxAge;
@property(readonly, nonatomic) AMSBagValue *StoreKitMessagesEndpointURL;
@property(readonly, nonatomic) AMSBagValue *sandboxInAppsMediaAPIHost;
@property(readonly, nonatomic) AMSBagValue *restoreTransactionsURL;
@property(readonly, nonatomic) AMSBagValue *renewVPPReceiptURL;
@property(readonly, nonatomic) AMSBagValue *refundRequestURL;
@property(readonly, nonatomic) AMSBagValue *redeemCodeURL;
@property(readonly, nonatomic) AMSBagValue *productOffersBatchSize;
@property(readonly, nonatomic) AMSBagValue *productOffersURL;
@property(readonly, nonatomic) AMSBagValue *manageSubscriptionsURL;
@property(readonly, nonatomic) AMSBagValue *languageTag;
@property(readonly, nonatomic) AMSBagValue *installAttributionPostbackProxyURL;
@property(readonly, nonatomic) AMSBagValue *installAttributionShouldSendDeveloperPingback;
@property(readonly, nonatomic) AMSBagValue *installAttributionShouldUseProxy;
@property(readonly, nonatomic) AMSBagValue *installAttributionStartEndWindow;
@property(readonly, nonatomic) AMSBagValue *installAttributionLowFidelityCap;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxImpressionsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxPingbackRetries;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxPingbackAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxLowFidelityParamsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxParamsAge;
@property(readonly, nonatomic) AMSBagValue *installAttributionMaxCampaignNumber;
@property(readonly, nonatomic) AMSBagValue *inAppTransactionDoneURL;
@property(readonly, nonatomic) AMSBagValue *inAppsMediaAPIHost;
@property(readonly, nonatomic) AMSBagValue *inAppPendingQueueCountURL;
@property(readonly, nonatomic) AMSBagValue *ignoreIAPQueueCheckSupression;
@property(readonly, nonatomic) AMSBagValue *inAppPendingQueueURL;
@property(readonly, nonatomic) AMSBagValue *disablePurchaseIntentNotifications;
@property(readonly, nonatomic) AMSBagValue *createAppReceiptURL;
@property(readonly, nonatomic) AMSBagValue *countryCode2Char;
@property(readonly, nonatomic) AMSBagValue *countryCode3Char;
@property(readonly, nonatomic) AMSBagValue *appleIDLookupURL;
@property(readonly) AMSBagValue *subscriptionEntitlementsTimeout;
@property(readonly) AMSBagValue *subscriptionEntitlementsURL;
- (id)URLForKey:(id)arg1;	// IMP=0x00100000001399b4
- (id)stringForKey:(id)arg1;	// IMP=0x001000000013999e
- (id)integerForKey:(id)arg1;	// IMP=0x0010000000139988
- (id)doubleForKey:(id)arg1;	// IMP=0x0010000000139972
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000013975d
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000139747
- (id)boolForKey:(id)arg1;	// IMP=0x0010000000139731
- (id)arrayForKey:(id)arg1;	// IMP=0x001000000013971b
@property(readonly) AMSBagValue *removePushTypeURL;
@property(readonly) AMSBagValue *registerPushTokenURL;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
@property(readonly) AMSBagValue *addPushTypeURL;
@property(readonly) AMSBagValue *PurchaseHistoryUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *PurchaseHistoryPurchaseRefreshEnabled;
@property(readonly) AMSBagValue *PurchaseHistoryForcedRefreshMinutes;
@property(readonly) AMSBagValue *PurchaseHistoryDatabaseID;
@property(readonly) AMSBagValue *PurchaseHistoryBaseURL;
@property(readonly, nonatomic) AMSBagValue *useAlternateTextForManageSubsOnAppDelete;
@property(readonly, nonatomic) AMSBagValue *bundleIDsToSkipManageSubsOnAppDelete;
@property(readonly) AMSBagValue *IAPInfoUpdatePollingFrequencySeconds;
@property(readonly) AMSBagValue *IAPInfoForcedRefreshMinutes;
@property(readonly) AMSBagValue *IAPInfoDatabaseID;
@property(readonly) AMSBagValue *IAPInfoBaseURL;
@property(readonly) AMSBagValue *clusterMappingRefreshFrequencySeconds;
@property(readonly) AMSBagValue *clusterMappingURL;
@property(readonly) AMSBagValue *appUsageResetActorIDFrequencySeconds;
@property(readonly) AMSBagValue *ownsCheckURL;
@property(readonly) AMSBagValue *odrURL;
@property(readonly) AMSBagValue *drmRecovery;
@property(readonly) AMSBagValue *invalidBuildToolVersions;
@property(readonly) AMSBagValue *deltaIncompatibleBuildToolVersions;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalCellular;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalSeconds;
@property(readonly) AMSBagValue *arcadeSubscriptionGroupIdentifier;
@property(readonly, nonatomic) AMSBagValue *arcadeInSpotlightEnabled;
@property(readonly, nonatomic) AMSBagValue *enableMacOSCompatibleIOSAppsForCarry;
@property(readonly, nonatomic) AMSBagValue *enableMacOSCompatibleIOSApps;
@property(readonly) AMSBagValue *unadoptURL;
@property(readonly) AMSBagValue *adoptionEligibilityURL;
@property(readonly) AMSBagValue *adoptProductsURL;
@property(readonly, nonatomic) AMSBagValue *switchArcadeUserURL;
@property(readonly, nonatomic) AMSBagValue *switchArcadeUserFallbackURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncSandboxURL;
@property(readonly, nonatomic) AMSBagValue *sbsyncProductionURL;
@property(readonly, nonatomic) AMSBagValue *lowDataPromptThreshold;
@property(readonly, nonatomic) AMSBagValue *contentRestoreURL;
@property(readonly, nonatomic) AMSBagValue *contentRestoreMaxItemCount;
@property(readonly, nonatomic) AMSBagValue *upToDateClaimURL;
@property(readonly, nonatomic) AMSBagValue *authorizeURL;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly, nonatomic) AMSSnapshotBag *snapshotBag;
@property(readonly, nonatomic) AMSBagValue *storefront;
@property(readonly) AMSBagValue *unpersonalizedLookupURL;
@property(readonly) AMSBagValue *personalizedLookupURL;
@property(readonly) AMSBagValue *mescalSignedActions;
- (void)dealloc;	// IMP=0x0010000000138ed1
- (id)initWithOctane;	// IMP=0x0010000000138e2c
- (id)initWithSandbox:(_Bool)arg1;	// IMP=0x0010000000138cfe
- (id)init;	// IMP=0x0010000000138ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

