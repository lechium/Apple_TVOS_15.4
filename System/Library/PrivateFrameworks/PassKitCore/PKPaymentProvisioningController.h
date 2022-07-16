//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>
#import <PassKitCore/PKAccountServiceObserver-Protocol.h>
#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitCore/PKPaymentWebServiceDelegate-Protocol.h>

@class CIDVUIProofingFlowManager, CLLocationManager, NSArray, NSData, NSExtension, NSHashTable, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, PKAccountService, PKAddPaymentPassRequestConfiguration, PKPaymentCredential, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentProvisioningControllerCredentialQueue, PKPaymentProvisioningResponse, PKPaymentRequirementsResponse, PKPaymentService, PKPaymentSetupMoreInfoItem, PKPaymentSetupProductModel, PKPaymentWebService;
@protocol OS_dispatch_queue, OS_dispatch_source, PKCloudStoreCoordinatorDelegate;

@interface PKPaymentProvisioningController : NSObject <CLLocationManagerDelegate, PKPaymentServiceDelegate, PKAccountServiceObserver, PKPaymentWebServiceDelegate>
{
    NSMutableSet *_tasks;	// 8 = 0x8
    NSTimer *_descriptionTimer;	// 16 = 0x10
    NSMutableArray *_associatedCredentials;	// 24 = 0x18
    _Bool _provisioningUserInterfaceIsVisible;	// 32 = 0x20
    _Bool _proxyTargetDeviceWebServiceInUse;	// 33 = 0x21
    NSString *_provisioningNonce;	// 40 = 0x28
    PKPaymentCredential *_currentCredential;	// 48 = 0x30
    PKAddPaymentPassRequestConfiguration *_currentAddPaymentPassRequestConfiguration;	// 56 = 0x38
    NSHashTable *_delegates;	// 64 = 0x40
    struct os_unfair_lock_s _delegatesLock;	// 72 = 0x48
    NSSet *_supportedFeatureIdentifierStrings;	// 80 = 0x50
    NSSet *_supportedFeatureIdentifierStringsForAccountProvisioning;	// 88 = 0x58
    NSMutableSet *_analyticsFeaturesToReport;	// 96 = 0x60
    unsigned long long _targetDeviceSupportsTypeF;	// 104 = 0x68
    PKPaymentSetupMoreInfoItem *_marketExpressInfoItem;	// 112 = 0x70
    CLLocationManager *_locationManager;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_locationTimer;	// 128 = 0x80
    CDUnknownBlockType _locationCompletion;	// 136 = 0x88
    PKPaymentService *_paymentService;	// 144 = 0x90
    unsigned long long _backgroundTaskIdentifier;	// 152 = 0x98
    long long _provisioningStatusCount;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_updateQueue;	// 168 = 0xa8
    NSSet *_featuresDidBeginReporting;	// 176 = 0xb0
    NSData *_externalizedAuth;	// 184 = 0xb8
    PKAccountService *_accountService;	// 192 = 0xc0
    NSMutableArray *_preflighUpdateHandlers;	// 200 = 0xc8
    _Bool _isPreflighting;	// 208 = 0xd0
    unsigned long long _isTargetUserUnder13;	// 216 = 0xd8
    _Bool _preflightedAccounts;	// 224 = 0xe0
    _Bool _preflightedApplications;	// 225 = 0xe1
    NSArray *_accounts;	// 232 = 0xe8
    NSMutableSet *_postCredentialFetchProductsToFilter;	// 240 = 0xf0
    _Bool _isProvisioningForAltAccount;	// 248 = 0xf8
    _Bool _expressModeSetupOptional;	// 249 = 0xf9
    _Bool _AMPEnrollmentAvailable;	// 250 = 0xfa
    NSString *_productIdentifier;	// 256 = 0x100
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinator;	// 264 = 0x108
    NSString *_referrerIdentifier;	// 272 = 0x110
    unsigned long long _isCurrentUserUnder13;	// 280 = 0x118
    PKPaymentWebService *_webService;	// 288 = 0x120
    long long _state;	// 296 = 0x128
    NSString *_localizedProgressDescription;	// 304 = 0x130
    unsigned long long _preflightRequirements;	// 312 = 0x138
    NSArray *_purchaseCredentials;	// 320 = 0x140
    NSExtension *_provisioningExtension;	// 328 = 0x148
    NSArray *_provisioningExtensionCredentials;	// 336 = 0x150
    PKPaymentProvisioningControllerCredentialQueue *_credentialProvisioningQueue;	// 344 = 0x158
    PKPaymentSetupProductModel *_paymentSetupProductModel;	// 352 = 0x160
    PKPaymentRequirementsResponse *_requirementsResponse;	// 360 = 0x168
    PKPaymentEligibilityResponse *_eligibilityResponse;	// 368 = 0x170
    PKPaymentProvisioningResponse *_provisioningResponse;	// 376 = 0x178
    PKPaymentPass *_provisionedPass;	// 384 = 0x180
    NSArray *_moreInfoItems;	// 392 = 0x188
    NSSet *_automaticExpressModes;	// 400 = 0x190
    NSArray *_allowedPaymentNetworks;	// 408 = 0x198
    NSSet *_requiredTransitNetworkIdentifiers;	// 416 = 0x1a0
    NSSet *_allowedFeatureIdentifiers;	// 424 = 0x1a8
    NSSet *_allowedProductIdentifiers;	// 432 = 0x1b0
    CIDVUIProofingFlowManager *_identityProofingManager;	// 440 = 0x1b8
    CDUnknownBlockType _identityProofingManagerCompletionHandler;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x000000000023de93
@property(copy, nonatomic) CDUnknownBlockType identityProofingManagerCompletionHandler; // @synthesize identityProofingManagerCompletionHandler=_identityProofingManagerCompletionHandler;
@property(retain, nonatomic) CIDVUIProofingFlowManager *identityProofingManager; // @synthesize identityProofingManager=_identityProofingManager;
@property(retain, nonatomic) NSSet *allowedProductIdentifiers; // @synthesize allowedProductIdentifiers=_allowedProductIdentifiers;
@property(retain, nonatomic) NSSet *allowedFeatureIdentifiers; // @synthesize allowedFeatureIdentifiers=_allowedFeatureIdentifiers;
@property(retain, nonatomic) NSSet *requiredTransitNetworkIdentifiers; // @synthesize requiredTransitNetworkIdentifiers=_requiredTransitNetworkIdentifiers;
@property(retain, nonatomic) NSArray *allowedPaymentNetworks; // @synthesize allowedPaymentNetworks=_allowedPaymentNetworks;
@property(readonly, nonatomic, getter=isAMPEnrollmentAvailable) _Bool AMPEnrollmentAvailable; // @synthesize AMPEnrollmentAvailable=_AMPEnrollmentAvailable;
@property(readonly, nonatomic) NSSet *automaticExpressModes; // @synthesize automaticExpressModes=_automaticExpressModes;
@property(readonly, nonatomic, getter=isExpressModeSetupOptional) _Bool expressModeSetupOptional; // @synthesize expressModeSetupOptional=_expressModeSetupOptional;
@property(readonly, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property(readonly, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // @synthesize provisioningResponse=_provisioningResponse;
@property(readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // @synthesize paymentSetupProductModel=_paymentSetupProductModel;
@property(readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue; // @synthesize credentialProvisioningQueue=_credentialProvisioningQueue;
@property(readonly, copy, nonatomic) NSArray *provisioningExtensionCredentials; // @synthesize provisioningExtensionCredentials=_provisioningExtensionCredentials;
@property(readonly, nonatomic) NSExtension *provisioningExtension; // @synthesize provisioningExtension=_provisioningExtension;
@property(readonly, copy, nonatomic) NSArray *purchaseCredentials; // @synthesize purchaseCredentials=_purchaseCredentials;
@property(readonly, copy, nonatomic) NSArray *associatedCredentials; // @synthesize associatedCredentials=_associatedCredentials;
@property(readonly, nonatomic) unsigned long long preflightRequirements; // @synthesize preflightRequirements=_preflightRequirements;
@property(readonly, copy, nonatomic) NSString *localizedProgressDescription; // @synthesize localizedProgressDescription=_localizedProgressDescription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) unsigned long long isCurrentUserUnder13; // @synthesize isCurrentUserUnder13=_isCurrentUserUnder13;
@property(nonatomic) _Bool isProvisioningForAltAccount; // @synthesize isProvisioningForAltAccount=_isProvisioningForAltAccount;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(retain, nonatomic) id <PKCloudStoreCoordinatorDelegate> cloudStoreCoordinator; // @synthesize cloudStoreCoordinator=_cloudStoreCoordinator;
- (void)deleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023d7fe
- (void)_addAssociatedCredential:(id)arg1;	// IMP=0x000000000023d7e8
- (void)_updateLocalizedProgressAndInvalidateTimer;	// IMP=0x000000000023d777
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;	// IMP=0x000000000023d647
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;	// IMP=0x000000000023d484
- (void)featureApplicationChanged:(id)arg1;	// IMP=0x000000000023cf8c
- (void)featureApplicationRemoved:(id)arg1;	// IMP=0x000000000023cac6
- (void)featureApplicationAdded:(id)arg1;	// IMP=0x000000000023c5cc
- (void)_reloadSetupProducts;	// IMP=0x000000000023c534
- (void)accountRemoved:(id)arg1;	// IMP=0x000000000023c3ca
- (void)accountAdded:(id)arg1;	// IMP=0x000000000023c260
- (id)displayableErrorForProvisioningError:(id)arg1;	// IMP=0x000000000023c12c
- (id)displayableErrorForError:(id)arg1;	// IMP=0x000000000023c06f
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;	// IMP=0x000000000023be1d
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1;	// IMP=0x000000000023bb13
- (id)passesWithPaymentMethodType:(unsigned long long)arg1;	// IMP=0x000000000023bb01
- (_Bool)hasDebitPaymentPass;	// IMP=0x000000000023bab4
- (_Bool)hasCreditPaymentPass;	// IMP=0x000000000023ba67
- (_Bool)hasPaymentPass;	// IMP=0x000000000023b993
- (id)provisioningTracker;	// IMP=0x000000000023b95d
- (void)handleOptionalExpressModeSetupDidFinishForPass:(id)arg1 withExpressModes:(id)arg2 provisioningTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000023b5c3
- (void)finishOptionalExpressModeSetupForPass:(id)arg1 withProvisioningTracker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000023b266
- (void)makePaymentPassDefault:(id)arg1;	// IMP=0x000000000023b0f3
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x000000000023b012
- (void)_endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x000000000023af6c
- (void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x000000000023aebf
- (void)passcodeUpgradeCompleted:(_Bool)arg1;	// IMP=0x000000000023adda
- (void)preflightPasscodeUpgradeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000023a98f
@property(readonly, nonatomic, getter=isPasscodeUpgradeRequired) _Bool passcodeUpgradeRequired;
@property(readonly, copy, nonatomic) NSArray *allCredentials;
- (id)associatedCredentialsForDefaultBehaviour;	// IMP=0x000000000023a5dd
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000023a583
- (void)addDelegate:(id)arg1;	// IMP=0x000000000023a529
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000239c64
- (_Bool)_isProvisioningPaymentAccount;	// IMP=0x0000000000239c24
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x0000000000239bb0
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x0000000000239b5d
- (_Bool)provisioningUserInterfaceIsVisible;	// IMP=0x0000000000239b54
- (void)_setLocalizedProgressDescription:(id)arg1;	// IMP=0x0000000000239ab6
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2 pass:(id)arg3;	// IMP=0x00000000002398c4
- (void)_passAlreadyProvisioned;	// IMP=0x0000000000239810
- (void)_provisioningNonceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000239452
- (void)removeProvisionedPass;	// IMP=0x00000000002392d9
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000238fbe
- (_Bool)_isValidLocation:(id)arg1;	// IMP=0x0000000000238efe
- (void)_loadMoreInfoItemForMarket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000238cc5
- (void)_startLocationSearchWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002386d1
- (void)provisionHomeKeyCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237fdd
- (void)_verifyPassIsSupportedForExpressInLocalMarket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000237506
- (void)_ingestPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000235ab9
- (void)_deletePaymentPass:(id)arg1;	// IMP=0x0000000000235a3a
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023479d
- (void)ingestPaymentPassForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000234510
- (id)_localizedProgressDescriptionForEnablingCard;	// IMP=0x000000000023443a
- (void)_noteProvisioningDidEnd;	// IMP=0x00000000002341da
- (void)_noteProvisioningDidBegin;	// IMP=0x0000000000233fd1
- (void)requestProvisioning:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000233cc8
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000233c17
- (_Bool)hasExternalizedAuth;	// IMP=0x0000000000233bf7
- (void)storeExternalizedAuth:(id)arg1;	// IMP=0x0000000000233be3
- (void)requestExternalizedAuthForWatchWithVisibleViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023381e
- (void)_updateProvisioningRequestForEnableRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231e32
- (void)resolveProvisioningForCredential:(id)arg1;	// IMP=0x0000000000231d87
- (void)declineTerms;	// IMP=0x0000000000231c74
- (void)acceptTerms;	// IMP=0x0000000000231bae
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002316b6
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002312c0
- (void)resolveRequirementsUsingAlreadyProvisionedRemoteCredential:(id)arg1;	// IMP=0x0000000000231225
- (void)resolveRequirementsAndEligibilityForHomeKeyCredential:(id)arg1;	// IMP=0x00000000002310f5
- (void)resolveRequirementsForIssuerProvisioningExtensionCredential:(id)arg1;	// IMP=0x0000000000230f94
- (void)resolveRequirementsForShareableCredential:(id)arg1;	// IMP=0x0000000000230e33
- (void)resolveRequirementsUsingProvisioningMethodMetadata:(id)arg1;	// IMP=0x0000000000230dad
- (void)resolveRequirementsUsingProduct:(id)arg1;	// IMP=0x0000000000230d27
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;	// IMP=0x0000000000230c40
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230895
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230770
- (void)_queryEligibilityForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230541
- (void)_queryRequirementsForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002301fe
- (void)_updatePostCredentialProductsToFilter;	// IMP=0x000000000023013e
- (id)_filterPaymentSetupProducts:(id)arg1;	// IMP=0x000000000022f964
- (id)_filteredPaymentSetupProductSections:(id)arg1;	// IMP=0x000000000022f56f
- (void)_setupAccountCredentialForProvisioning:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022ee89
- (void)setupAccountCredentialForProvisioning:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022ea77
- (void)setupProductForProvisioning:(id)arg1 includePurchases:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022d771
- (void)requestPurchasesForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022ca26
- (void)requestProvisioningMethodMetadataForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c5af
- (id)_mockBrowseBanksResponse;	// IMP=0x000000000022c54c
- (void)provisioningExtensionProductsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c536
- (void)_browsableBanksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022c290
- (void)_updatePaymentSetupProductModelExtensionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022c148
- (void)updatePaymentSetupProductModelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b309
- (void)cachedPaymentSetupProductModelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022a5b9
- (void)_informDelegatesOfAccountsUpdated;	// IMP=0x000000000022a3ad
- (void)_preflightRequirementsUpdated:(unsigned long long)arg1 displayableError:(id)arg2;	// IMP=0x000000000022a156
- (void)_metadataUpdatedOnCredenitals;	// IMP=0x0000000000229f68
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1;	// IMP=0x0000000000229d33
- (void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000229ab2
- (void)_updateCredentialWithPaymentPassAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229824
- (void)_updateCredentialWithPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000022934f
- (void)_associateCredential:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000228f4d
- (_Bool)_credentialIsValidForSetupConfiguration:(id)arg1;	// IMP=0x0000000000228d49
- (_Bool)_hasSetupConfiguration;	// IMP=0x0000000000228cee
- (void)_associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002282b1
- (void)associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002281fc
- (void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000227297
- (void)_updateAllAssoicatedCredentialsMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226d65
- (void)retrieveAllAvailableCredentials:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226703
- (_Bool)_featureApplicationInValidStateToPresent:(id)arg1;	// IMP=0x00000000002266d9
- (id)_accountsForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x000000000022660d
- (void)_setupAccounts;	// IMP=0x00000000002261dd
- (void)_setupFeatureApplications:(id)arg1;	// IMP=0x0000000000225b24
- (id)_fetchOrCreateProductsForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000002259b9
- (void)retrieveAccountCredentials:(CDUnknownBlockType)arg1;	// IMP=0x00000000002254c0
- (id)_supportedFeatureIdentifierStringsForAccountProvisioning;	// IMP=0x0000000000225175
- (id)_supportedFeatureIdentifierStrings;	// IMP=0x0000000000224ed1
- (void)retrieveRemoteCredentials:(CDUnknownBlockType)arg1;	// IMP=0x0000000000223e75
- (void)performDeviceCheckInIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x0000000000223bbd
- (id)_doesDisplayableErrorConstitutePreflightFailure:(id)arg1;	// IMP=0x0000000000223afa
- (void)_updatePreflightRequirement:(unsigned long long)arg1 displayableError:(id)arg2;	// IMP=0x0000000000223873
- (void)preflightWithRequirements:(unsigned long long)arg1 update:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221dfb
- (void)preflightWithRequirements:(unsigned long long)arg1 completionRequirements:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000221c5f
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000221bef
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(CDUnknownBlockType)arg1;	// IMP=0x0000000000221b45
- (void)validatePreconditionsAndRegister:(CDUnknownBlockType)arg1;	// IMP=0x00000000002219ea
- (void)registerDevice:(CDUnknownBlockType)arg1;	// IMP=0x00000000002215b4
- (void)validatePreconditions:(CDUnknownBlockType)arg1;	// IMP=0x00000000002210a0
- (void)_setState:(long long)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000221027
- (void)resetForNewProvisioning;	// IMP=0x0000000000220e34
- (void)reset;	// IMP=0x0000000000220e00
- (long long)_defaultResetState;	// IMP=0x0000000000220df8
- (void)_beginReportingIfNecessary;	// IMP=0x0000000000220b1c
- (void)_endSessionIfNecessary;	// IMP=0x0000000000220981
- (void)dealloc;	// IMP=0x0000000000220888
- (id)initWithWebService:(id)arg1 paymentSetupRequest:(id)arg2;	// IMP=0x00000000002205eb
- (id)initWithWebService:(id)arg1;	// IMP=0x000000000022029f
@property(readonly, nonatomic) _Bool suppressDefaultCardholderNameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
