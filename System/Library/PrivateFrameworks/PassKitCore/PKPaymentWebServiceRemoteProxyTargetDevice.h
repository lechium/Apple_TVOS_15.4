//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceProxyObjectExportedInterface-Protocol.h>

@class NSString, NSXPCConnection, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 8 = 0x8
    PKPaymentWebService *_webService;	// 16 = 0x10
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c996
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c976
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c95e
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c948
- (void)invalidateRemoteProxyTargetDevice;	// IMP=0x000000000001c81f
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x000000000001c819
- (void)archiveContext:(id)arg1;	// IMP=0x000000000001c75c
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c670
- (_Bool)areUnifiedAccessPassesSupported;	// IMP=0x000000000001c668
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c58b
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c4ae
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000001c211
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c042
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001be1e
- (void)availableHomeKeyPassesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bd75
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bc98
- (void)generateTransactionKeyWithParameters:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bbb7
- (void)familyMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bb0e
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ba2d
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000001b94c
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b7f3
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b74a
- (void)endRequiringUpgradedPasscodeIfNecessary;	// IMP=0x000000000001b6e5
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;	// IMP=0x000000000001b676
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b5cd
- (void)notePasscodeUpgradeFlowDidEnd;	// IMP=0x000000000001b568
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b4bf
- (void)appleAccountInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b3f2
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b349
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;	// IMP=0x000000000001b29c
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b1a5
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b185
- (void)deviceMetadataWithFields:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b0c5
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b01c
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001af73
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aeca
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001adf0
- (void)supportedFeatureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ad16
- (void)supportsAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ac4a
- (void)supportsPeerPaymentRegistrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ab7e
- (void)removePass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001aa9d
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a8bd
- (void)handlePotentialExpressPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a7dc
- (void)validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a6b8
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a5f0
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a547
- (void)downloadAllPaymentPasses;	// IMP=0x000000000001a4de
- (void)validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a3ba
- (void)updateHasLocallyProvisionedPass:(_Bool)arg1 forFeatureIdentifier:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a2ef
- (void)hasLocallyProvisionedPassForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a213
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a10f
- (void)passesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a025
- (void)hasPassesWithFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019f49
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019e6d
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019dc0
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019d13
- (void)noteProvisioningDidEnd;	// IMP=0x0000000000019cae
- (void)noteProvisioningDidBegin;	// IMP=0x0000000000019c49
- (void)noteProvisioningUserInterfaceDidDisappear;	// IMP=0x0000000000019be4
- (void)noteProvisioningUserInterfaceDidAppear;	// IMP=0x0000000000019b7f
- (void)registrationSupportedInCurrentRegionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019abb
- (void)paymentSupportedInCurrentRegion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000199f0
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;	// IMP=0x00000000000198e3
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;	// IMP=0x000000000001983a
- (void)deleteApplicationWithAID:(id)arg1;	// IMP=0x0000000000019768
- (void)getProvisioningDataIncludingDeviceMetadata:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000196a8
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000195b8
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000194de
- (void)getRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019431
- (void)getConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019384
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001925f
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019189
- (void)dealloc;	// IMP=0x00000000000190be
- (id)initWithWebService:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000018bd4
- (id)init;	// IMP=0x0000000000018bbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

