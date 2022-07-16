//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKAssertion, PKPassLibrary, PKPassUpgradeController, PKPaymentService;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol>
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
    PKPaymentService *_paymentService;	// 16 = 0x10
    PKAssertion *_provisioningAssertion;	// 24 = 0x18
    _Bool _provisioningAssertionActive;	// 32 = 0x20
    PKAssertion *_verificationAssertion;	// 40 = 0x28
    _Bool _verificationAssertionActive;	// 48 = 0x30
    PKAssertion *_requiringUpgradedPasscodeAssertion;	// 56 = 0x38
    _Bool _requiringUpgradedPasscodeAssertionActive;	// 64 = 0x40
    PKAssertion *_activePasscodeUpgradeFlowAssertion;	// 72 = 0x48
    _Bool _activePasscodeUpgradeFlowAssertionActive;	// 80 = 0x50
    PKPassUpgradeController *_passUpgradeController;	// 88 = 0x58
}

+ (id)localTargetDevice;	// IMP=0x0000000000024161
- (void).cxx_destruct;	// IMP=0x000000000002bb54
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bb3e
- (_Bool)areUnifiedAccessPassesSupported;	// IMP=0x000000000002bb36
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bb20
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bb0a
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000002baf4
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002bade
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000002bac8
- (void)availableHomeKeyPassesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002bab2
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ba9c
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ba86
- (void)_initializeSecureElement:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ba70
- (void)_initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ba5a
- (void)_consistencyCheck;	// IMP=0x000000000002ba44
- (_Bool)_willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x000000000002ba2e
- (void)_performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ba18
- (void)_productsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ba02
- (void)_productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b9ec
- (void)_passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b9d6
- (void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000002b9c0
- (void)_performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b919
- (void)_performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b903
- (void)_setDefaultPaymentPassUniqueIdentifier:(id)arg1;	// IMP=0x000000000002b8ed
- (void)_matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b8d7
- (void)_subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b8c1
- (void)_credentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b8ab
- (void)_canAcceptInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b895
- (void)_canAddSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b837
- (void)_requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b821
- (void)_removeSharingInvitation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b80b
- (void)_declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b7f5
- (void)_addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b7df
- (void)_removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b7c9
- (void)_addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b7b3
- (void)_updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b79d
- (void)_enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b787
- (void)_setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b771
- (void)_accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b75b
- (void)_featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b745
- (void)_cachedFeatureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b64b
- (void)_removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;	// IMP=0x000000000002b635
- (void)_downloadAllPaymentPasses;	// IMP=0x000000000002b61f
- (void)_removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b609
- (id)_upgradeRequestForPass:(id)arg1;	// IMP=0x000000000002b4f5
- (void)_sanitizeExpressPasses;	// IMP=0x000000000002b4df
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b4c9
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b4b3
- (void)_setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b49d
- (void)_startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x000000000002b487
- (void)_addPass:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b1a5
- (void)consistencyCheck;	// IMP=0x000000000002b193
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x000000000002b181
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b16f
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b15d
- (void)productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b14b
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002b06c
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b054
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x000000000002b03c
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b02a
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b018
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;	// IMP=0x000000000002b003
- (id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2;	// IMP=0x000000000002ad0e
- (void)paymentWebService:(id)arg1 generateTransactionKeyWithParameters:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ac88
- (void)paymentWebService:(id)arg1 credentialWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ac70
- (void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ac55
- (void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ac40
- (void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ac28
- (void)paymentWebService:(id)arg1 canAddSecureElementPassWithConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ac10
- (void)requestBackgroundRegistrationForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ab0b
- (void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a900
- (void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a8e8
- (void)paymentWebService:(id)arg1 addSubcredential:(id)arg2 fromSharingInvitation:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a8cd
- (void)paymentWebService:(id)arg1 revokeSharedCredentialGroup:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029085
- (void)paymentWebService:(id)arg1 removeSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028e47
- (void)paymentWebService:(id)arg1 addSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028db9
- (void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028be5
- (void)endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x0000000000028bae
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x00000000000288eb
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000288d9
- (void)notePasscodeUpgradeFlowDidEnd;	// IMP=0x00000000000288a2
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002844d
- (void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028435
- (void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028420
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028394
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002831c
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028160
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027f33
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027d65
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027cca
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027c2f
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027b6b
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027a10
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;	// IMP=0x0000000000027853
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;	// IMP=0x00000000000277ac
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;	// IMP=0x00000000000274ea
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;	// IMP=0x0000000000027282
- (_Bool)supportsCredentialType:(long long)arg1;	// IMP=0x000000000002727a
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;	// IMP=0x0000000000027261
- (_Bool)secureElementIsAvailable;	// IMP=0x0000000000027259
- (_Bool)felicaSecureElementIsAvailable;	// IMP=0x0000000000027249
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027234
- (unsigned long long)secureElementOwnershipStateForCurrentUser;	// IMP=0x0000000000027201
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000271e8
- (_Bool)claimSecureElementForCurrentUser;	// IMP=0x0000000000027199
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002710f
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;	// IMP=0x00000000000270fd
- (void)paymentWebService:(id)arg1 isPassExpressWithUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000270e1
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000270cf
- (void)_paymentWebService:(id)arg1 pass:(id)arg2 withExpressInfo:(id)arg3 hasDisqualifyingConflicts:(CDUnknownBlockType)arg4;	// IMP=0x000000000002673f
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025714
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;	// IMP=0x00000000000256fc
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025542
- (void)_validateCommonPreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002549a
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025485
- (void)paymentWebService:(id)arg1 updateHasLocallyProvisionedPass:(_Bool)arg2 forFeatureIdentifier:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025467
- (_Bool)paymentWebService:(id)arg1 hasLocallyProvisionedPassForFeatureIdentifier:(unsigned long long)arg2;	// IMP=0x000000000002544e
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;	// IMP=0x0000000000025434
- (id)paymentWebService:(id)arg1 passWithUniqueID:(id)arg2;	// IMP=0x000000000002541b
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;	// IMP=0x0000000000025402
- (_Bool)paymentWebService:(id)arg1 hasPassesWithFeatureIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000253e9
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;	// IMP=0x00000000000253d0
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025328
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025280
- (id)deviceName;	// IMP=0x0000000000025276
- (id)deviceDescriptionForPaymentWebService:(id)arg1;	// IMP=0x000000000002526c
- (id)appleAccountInformation;	// IMP=0x0000000000025215
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002519f
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;	// IMP=0x0000000000025189
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;	// IMP=0x0000000000025117
- (int)registrationSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x000000000002510a
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x00000000000250fd
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;	// IMP=0x00000000000250e7
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;	// IMP=0x0000000000025061
- (void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024fdb
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;	// IMP=0x0000000000024f88
- (void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024f10
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000024e82
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024dfc
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024d2f
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024bdb
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000248c8
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000000248c2
- (id)secureElementIdentifiers;	// IMP=0x00000000000248a9
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0000000000024897
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x00000000000246a1
- (id)deviceIDSIdentifier;	// IMP=0x000000000002468f
- (void)setMaximumPaymentCards:(unsigned long long)arg1;	// IMP=0x0000000000024682
- (unsigned long long)maximumPaymentCards;	// IMP=0x0000000000024678
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x0000000000024617
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x00000000000245b6
- (void)noteProvisioningDidEnd;	// IMP=0x0000000000024526
- (void)noteProvisioningDidBegin;	// IMP=0x00000000000242ff
- (_Bool)supportsAutomaticPassPresentation;	// IMP=0x00000000000242f2
- (id)cellularNetworkRegion;	// IMP=0x00000000000242e8
- (id)deviceRegion;	// IMP=0x00000000000242de
- (id)osVersion;	// IMP=0x00000000000242d4
- (id)deviceVersion;	// IMP=0x00000000000242bb
- (id)deviceClass;	// IMP=0x00000000000242b1
- (id)bridgedClientInfo;	// IMP=0x00000000000242a9
- (void)dealloc;	// IMP=0x0000000000024244
- (id)init;	// IMP=0x00000000000241b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
