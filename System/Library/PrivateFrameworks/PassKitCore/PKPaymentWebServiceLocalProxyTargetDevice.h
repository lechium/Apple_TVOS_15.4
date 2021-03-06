//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceArchiver-Protocol.h>
#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000018b96
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x0000000000018b1a
- (void)archiveContext:(id)arg1;	// IMP=0x0000000000018aa8
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000189c7
- (_Bool)areUnifiedAccessPassesSupported;	// IMP=0x0000000000018983
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000188a2
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000187c3
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000018641
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001852f
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000183f3
- (void)availableHomeKeyPassesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001832a
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018244
- (void)paymentWebService:(id)arg1 generateTransactionKeyWithParameters:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001815a
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017f81
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017d7a
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x0000000000017cf4
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017acd
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000178e3
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000178ca
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;	// IMP=0x0000000000017858
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;	// IMP=0x0000000000017758
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001757c
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017348
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001714c
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016f21
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016d35
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016b57
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016979
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001676c
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;	// IMP=0x000000000001661f
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;	// IMP=0x00000000000164d2
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;	// IMP=0x00000000000163d5
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;	// IMP=0x00000000000162d8
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000160c0
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015e10
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015c06
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000159f4
- (unsigned long long)secureElementOwnershipStateForCurrentUser;	// IMP=0x000000000001591d
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000156fb
- (_Bool)claimSecureElementForCurrentUser;	// IMP=0x0000000000015626
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;	// IMP=0x00000000000155e9
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000153e7
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000151d5
- (void)paymentWebService:(id)arg1 updateHasLocallyProvisionedPass:(_Bool)arg2 forFeatureIdentifier:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015158
- (_Bool)paymentWebService:(id)arg1 hasLocallyProvisionedPassForFeatureIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000015055
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;	// IMP=0x0000000000014f3b
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;	// IMP=0x0000000000014e03
- (_Bool)paymentWebService:(id)arg1 hasPassesWithFeatureIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000014d00
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;	// IMP=0x0000000000014bfd
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014a50
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014834
- (void)endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x00000000000147f7
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x00000000000147ab
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000146db
- (void)notePasscodeUpgradeFlowDidEnd;	// IMP=0x000000000001469e
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000145ce
- (id)secureElementIdentifiers;	// IMP=0x00000000000145b5
- (void)noteProvisioningDidEnd;	// IMP=0x0000000000014578
- (void)noteProvisioningDidBegin;	// IMP=0x000000000001453b
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x00000000000144fe
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x00000000000144c1
- (_Bool)supportsAutomaticPassPresentation;	// IMP=0x00000000000144b4
- (id)deviceRegion;	// IMP=0x00000000000144aa
- (id)osVersion;	// IMP=0x00000000000144a0
- (id)deviceVersion;	// IMP=0x0000000000014487
- (id)deviceClass;	// IMP=0x000000000001447d
- (id)bridgedClientInfo;	// IMP=0x0000000000014475
- (id)deviceName;	// IMP=0x000000000001446b
- (id)deviceDescriptionForPaymentWebService:(id)arg1;	// IMP=0x0000000000014461
- (int)registrationSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x0000000000014362
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;	// IMP=0x0000000000014263
- (id)appleAccountInformation;	// IMP=0x0000000000014127
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013f37
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;	// IMP=0x0000000000013f21
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;	// IMP=0x0000000000013e9b
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;	// IMP=0x0000000000013e29
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;	// IMP=0x0000000000013db7
- (void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013ba1
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000138c0
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013797
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013526
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001330e
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;	// IMP=0x0000000000013308
- (void)contextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000130aa
- (id)context;	// IMP=0x0000000000012ed6
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012cf5
- (id)_synchronousProxy;	// IMP=0x0000000000012ce1
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012b00
- (id)_proxy;	// IMP=0x0000000000012aec
- (void)_invalidateConnection;	// IMP=0x00000000000129fe
- (void)dealloc;	// IMP=0x0000000000012968
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000000125d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

