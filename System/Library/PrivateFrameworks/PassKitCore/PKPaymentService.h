//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentServiceExportedInterface-Protocol.h>
#import <PassKitCore/PKTapToRadarDelegate-Protocol.h>
#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSMutableArray, NSString, PKExpressTransactionState, PKFieldProperties, PKPaymentWebServiceContext, PKXPCService;
@protocol PKPaymentServiceDelegate;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface, PKTapToRadarDelegate>
{
    PKXPCService *_remoteService;	// 8 = 0x8
    unsigned long long _interfaceType;	// 16 = 0x10
    _Atomic _Bool _cachedFieldPropertiesValid;	// 24 = 0x18
    _Bool _hasPaymentDeviceFieldProperties;	// 25 = 0x19
    _Bool _forceConnectionOnResume;	// 26 = 0x1a
    struct os_unfair_lock_s _pendingInvitationRequestsLock;	// 28 = 0x1c
    NSMutableArray *_pendingInvitationRequests;	// 32 = 0x20
    id <PKPaymentServiceDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001a1bdb
@property(nonatomic) __weak id <PKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_accessDelegate:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a1b51
- (_Bool)_hasInterfaceOfType:(unsigned long long)arg1;	// IMP=0x00000000001a1b2d
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a1725
- (void)ambiguousTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a1519
- (void)sendAllPassTransactions;	// IMP=0x00000000001a13cf
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x00000000001a12c2
- (void)deleteTransactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a10b2
- (void)storeTransactionReceiptData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0ea6
- (void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a0c7e
- (void)transactionReceiptWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0a72
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0819
- (void)redeemPaymentShareableCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a05be
- (void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0528
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a02b9
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a0035
- (void)statusForShareableCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019fe0a
- (void)pushProvisioningSharingIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000000019fc10
- (void)didUpdateSharingInvitationWithIdentifier:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019f9e2
- (void)didReceiveSharingInvitationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019f7d2
- (void)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000019f54f
- (void)finishedKeyExchangeForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019f33f
- (void)sharingInvitationWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019f0de
- (void)credentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019eedc
- (void)canAcceptInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ecda
- (void)matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019e2f7
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019e14b
- (void)removeSharingInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019df0b
- (void)declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019dcfb
- (void)addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019da94
- (void)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019d84c
- (void)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019d604
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019d3f4
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019d207
- (void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019cfbf
- (void)subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019cdc7
- (void)addPlaceholderPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019cbbb
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019c96f
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019c775
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019c58a
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000019c409
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019c1f6
- (void)productsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019bffc
- (void)productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019bde9
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;	// IMP=0x000000000019bc60
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019ba62
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2;	// IMP=0x000000000019b8f4
- (void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019b6d9
- (id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1;	// IMP=0x000000000019b5a6
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019b395
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019b152
- (void)submitDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019af41
- (void)submitTermsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ad2e
- (void)submitVerificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ab1b
- (void)submitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a908
- (void)submitApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a6f5
- (void)featureApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a4e4
- (void)featureApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019a2ec
- (void)augmentedProductForInstallmentConfiguration:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a0db
- (void)featureApplicationWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000199ebb
- (void)featureApplicationsForAccountUserInvitationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000199cc1
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000199ac7
- (void)updateFeatureApplicationsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001998b4
- (void)featureApplicationsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001996a3
- (void)defaultPaymentPassIngestionSpecificIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000001994a5
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019919e
- (void)pendingFamilyMembersIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000198eb6
- (void)familyMembersIgnoringCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000198bce
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000198bb7
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000198973
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000198752
- (void)submitTransactionSignatureForTransactionIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001984ea
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019825f
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197ff7
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(id)arg2 sessionExchangeToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000197d85
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197b3b
- (void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019793e
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197739
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197513
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000197311
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 sessionExchangeToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000197072
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196dfd
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196b95
- (void)invalidateAuxiliaryCapabilityCertificatesForPassUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000196998
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 sessionExchangeToken:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196732
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000196506
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001962d7
- (void)setPaymentApplicationRangingSuspensionReason:(unsigned long long)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x0000000000196250
- (unsigned long long)rangingSuspensionReasonForAppletSubcredential:(id)arg1 forPaymentApplicationID:(id)arg2;	// IMP=0x000000000019612c
- (void)mapsMerchantWithIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000195e4d
- (void)updateAllMapsBrandAndMerchantDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000195b98
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000195938
- (void)sharedPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019563a
@property(retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property(retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property(readonly, nonatomic) PKExpressTransactionState *outstandingExpressTransactionState;
@property(readonly, nonatomic) __weak PKFieldProperties *paymentDeviceFieldProperties;
@property(readonly, nonatomic) _Bool hasPaymentDeviceFieldProperties;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0000000000194cdc
- (void)passbookBannerDidLaunch;	// IMP=0x0000000000194c90
- (_Bool)handleStandaloneTransaction:(long long)arg1 forCredentialIdentifier:(id)arg2 appletIdentifier:(id)arg3;	// IMP=0x0000000000194b5e
- (void)passbookUIServiceDidLaunch;	// IMP=0x0000000000194b12
- (void)requestNotificationAuthorizationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000194921
- (void)requestNotificationAuthorizationIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000194730
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000194522
- (void)removeProductsCache;	// IMP=0x00000000001944e3
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;	// IMP=0x0000000000194464
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x0000000000194416
- (void)unscheduleDeviceUpgradeTaskActivity;	// IMP=0x00000000001943d7
- (void)unscheduleDeviceCheckIn;	// IMP=0x0000000000194398
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;	// IMP=0x0000000000194347
- (void)scheduleSetupReminders;	// IMP=0x00000000001942fb
- (void)consistencyCheck;	// IMP=0x0000000000194199
- (void)downloadAllPaymentPasses;	// IMP=0x000000000019414d
- (void)simulatePaymentPushTopic:(id)arg1;	// IMP=0x00000000001940cc
- (void)simulateNotificationOfType:(unsigned long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000194045
- (void)simulatePaymentPush;	// IMP=0x000000000019402c
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000193d22
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2;	// IMP=0x0000000000193c8b
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;	// IMP=0x0000000000193a01
- (void)isPassExpressWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000193711
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001933f1
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019311f
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000192dd8
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000192ce1
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019299d
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000192685
- (id)expressPassInformationForMode:(id)arg1;	// IMP=0x0000000000192622
- (id)expressPassesInformation;	// IMP=0x00000000001924fe
- (id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;	// IMP=0x00000000001923d9
- (id)expressPassesInformationWithCardType:(long long)arg1;	// IMP=0x00000000001922b4
- (id)expressPassInformationWithPassUniqueIdentifier:(id)arg1;	// IMP=0x0000000000192179
- (void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000191e3a
- (id)defaultExpressTransitPassIdentifier;	// IMP=0x0000000000191dbb
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000191a7c
- (id)defaultExpressFelicaTransitPassIdentifier;	// IMP=0x0000000000191a19
- (void)sanitizeExpressPasses;	// IMP=0x00000000001919da
- (void)initializeSecureElement:(CDUnknownBlockType)arg1;	// IMP=0x000000000019194f
- (void)initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001918c0
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x000000000019178c
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019137d
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000190f8e
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000190b9f
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001907a4
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001903ba
- (void)archiveMessageWithIdentifier:(id)arg1;	// IMP=0x0000000000190339
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001902b8
- (void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg1;	// IMP=0x0000000000190237
- (void)deletePaymentTransactionWithIdentifier:(id)arg1;	// IMP=0x00000000001901b6
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018fd54
- (void)commutePlanReminderForCommputePlan:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018f8fa
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018f47c
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018efff
- (void)plansForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018ec10
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018e821
- (void)tilesForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018e718
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018e329
- (void)mapsMerchantsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018df67
- (void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018db78
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018d769
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018d37a
- (void)transactionsForPredicate:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018cfd2
- (void)logoImageDataForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018cce7
- (void)transactionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018c9fe
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000018c6a0
- (void)installmentPlansWithTransactionReferennceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018c3b7
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bfc8
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bbd9
- (void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018b7ca
- (void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018b3f6
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018b007
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018ac21
- (void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000018a8e8
- (id)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6;	// IMP=0x000000000018a74c
- (void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000018a40b
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000018a0ca
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000189d89
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000189a63
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000189638
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000001892db
- (void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000188ea5
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000188a97
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000188654
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000018820e
- (void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forTransactionSourceIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000187df0
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001879f1
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001875d3
- (void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000187214
- (void)peerPaymentCounterpartHandlesForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000186e3a
- (void)_submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 usingSynchronousProxy:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001869a6
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000186984
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;	// IMP=0x000000000018695b
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000186825
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001866ca
- (void)displayTapToRadarAlertForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018630b
- (void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2;	// IMP=0x00000000001861f9
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;	// IMP=0x00000000001860e7
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;	// IMP=0x0000000000185fd5
- (void)credential:(id)arg1 forPaymentApplication:(id)arg2 didUpdateRangingSuspensionReasons:(unsigned long long)arg3;	// IMP=0x0000000000185eb8
- (void)didRecieveCredentialInvitation:(id)arg1;	// IMP=0x0000000000185bbf
- (void)transactionBatch:(id)arg1 moreComing:(_Bool)arg2 readyForNextBatch:(CDUnknownBlockType)arg3;	// IMP=0x0000000000185aa1
- (void)didUpdateFamilyMembers:(id)arg1;	// IMP=0x00000000001859c1
- (void)featureApplicationChanged:(id)arg1;	// IMP=0x00000000001858e1
- (void)featureApplicationRemoved:(id)arg1;	// IMP=0x0000000000185801
- (void)featureApplicationAdded:(id)arg1;	// IMP=0x0000000000185721
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;	// IMP=0x0000000000185636
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x0000000000185524
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;	// IMP=0x0000000000185412
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;	// IMP=0x0000000000185326
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;	// IMP=0x000000000018523a
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x0000000000185128
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;	// IMP=0x0000000000184fef
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;	// IMP=0x0000000000184edd
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x0000000000184d1b
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x0000000000184c09
- (void)passWithUniqueIdentifier:(id)arg1 didUpdateTiles:(id)arg2;	// IMP=0x0000000000184af7
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000001849e5
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000184905
- (void)paymentDeviceDidExitField;	// IMP=0x00000000001848a1
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;	// IMP=0x00000000001847b3
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001846e3
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000184613
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000184543
- (id)_extendedRemoteObjectProxy;	// IMP=0x0000000000184491
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000018447b
- (id)_existingRemoteObjectProxy;	// IMP=0x0000000000184465
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000018444f
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000184439
- (id)_remoteObjectProxy;	// IMP=0x0000000000184423
- (void)remoteServiceDidSuspend:(id)arg1;	// IMP=0x0000000000184418
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;	// IMP=0x0000000000184355
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;	// IMP=0x0000000000184292
- (void)dealloc;	// IMP=0x0000000000184248
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001840ff
- (id)init;	// IMP=0x00000000001840eb
- (void)updateNotificationForProductIdentifier:(id)arg1 configuration:(id)arg2 localizedNotificationTitle:(id)arg3 localizedNotificationMessage:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001517c5
- (void)prepareIdentityProvisioningForTargetDeviceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015158c
- (void)provisionIdentityPassWithPassMetadata:(id)arg1 policyIdentifier:(id)arg2 targetDeviceIdentifier:(id)arg3 credentialIdentifier:(id)arg4 attestations:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001512cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
