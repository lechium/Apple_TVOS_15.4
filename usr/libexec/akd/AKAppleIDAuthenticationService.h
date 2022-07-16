//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy;

@interface AKAppleIDAuthenticationService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
    AKAuthenticationTrafficController *_authTrafficController;	// 32 = 0x20
    AKAuthenticationUILiaison *_authUILiaison;	// 40 = 0x28
    CUTReachability *_reachability;	// 48 = 0x30
}

+ (id)_verificationQueue;	// IMP=0x002000000002f056
- (void).cxx_destruct;	// IMP=0x002000000004ca1a
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c946
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c8a2
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;	// IMP=0x001000000004c6db
- (_Bool)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x001000000004b65b
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b5cd
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004aeeb
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ac09
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a8df
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a7f7
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a70f
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;	// IMP=0x001000000004a62d
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a10c
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049c4a
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000499bc
- (void)_handleCreateNewAppleIDError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000049874
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049171
- (void)_repairAppleIDWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048bd3
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000048a71
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004861d
- (void)_handleRecoverCredentialsError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000484dd
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047dff
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047d53
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047ca7
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047c10
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000046aab
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000465d6
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046360
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;	// IMP=0x0010000000046347
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000462ad
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004621e
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046206
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000045c57
- (void)_handleGrandslamResponse:(id)arg1 data:(id)arg2 error:(id)arg3 serverResponse:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000045a9d
- (void)_performGrandslamEndpointActionWithContext:(id)arg1 serverResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045761
- (void)_attemptPasswordlessAuthAfterBiometricOrPasscodeValidationWithContext:(id)arg1 promptType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000452ca
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045104
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000044fc8
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000044b23
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000044af8
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044388
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;	// IMP=0x001000000004436c
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 withNewTokens:(id)arg2;	// IMP=0x0010000000043e0e
- (_Bool)_persistGrandSlamServiceTokensHelper:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 appleIDAuthAccount:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000437a6
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 forContext:(id)arg5 error:(id *)arg6;	// IMP=0x001000000004353b
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004327d
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000042a11
- (id)_authKitAccountFromContext:(id)arg1;	// IMP=0x0010000000042799
- (void)_handleSuccessfulVerificationForContext:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004239a
- (void)_shouldContinueAuthenticatingForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000040fd2
- (void)_handleVerificationCompletionForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000040db8
- (void)_performSafeSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040bdd
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000409d7
- (id)_srpAuthContextHelperWithContext:(id)arg1;	// IMP=0x001000000004092a
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003febc
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fea2
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003f5ac
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000003f3ae
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003f1c6
- (void)_titleAndMessageForError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e7b1
- (_Bool)_incrementAttemptsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003e584
- (void)_showAlertForVerificationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e3c1
- (void)_handleVerificationError:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e22c
- (void)_handleMissingUsernameOrPasswordForContext:(id)arg1 password:(id)arg2 username:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003dde3
- (void)_keepLoginAliveWithContext:(id)arg1 error:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003dce6
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000003c8d6
- (void)_refreshAuthModeForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c7cc
- (void)_refreshAuthModeIfNecessaryForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c45f
- (void)_refreshLocalAccountAndUpdateContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bd08
- (void)_updateAltDSIDAndUsername:(id)arg1;	// IMP=0x001000000003b73d
- (void)_correlateContext:(id)arg1 withAuthMode:(unsigned long long)arg2;	// IMP=0x001000000003b505
- (void)_performInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b140
- (void)refreshAuthMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ae91
- (void)_attemptInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a9ab
- (id)_accountForContinuationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a595
- (void)_showContinueUsingUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039fec
- (void)_accountForContinuationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039eab
- (void)_attemptPasswordlessAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039990
- (void)_attemptPasswordlessAuthOptionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039434
- (void)_showBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000390a2
- (void)_attemptBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038fd3
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;	// IMP=0x0010000000038d5a
- (void)_handlePasswordlessAuthResults:(id)arg1 context:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000038a36
- (void)_performAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038623
- (void)_upgradeSecurityLevelWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038151
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003804c
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003781d
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037268
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036fb3
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036d67
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036971
- (oneway void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036795
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000356a7
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000003487b
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034274
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034167
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032f75
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032ec5
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032e31
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032c5f
- (void)activeLoginCode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032b04
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032a80
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ca0
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000031177
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031026
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030f16
- (void)deleteAuthorizationDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030dd9
- (void)fetchAppListWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030cc1
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030915
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003064a
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030504
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030333
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030162
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f97e
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f710
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f4a2
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f401
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f332
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f2a8
- (void)accountNamesForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f0d7
- (id)init;	// IMP=0x001000000002eee6
- (id)initWithProxy:(id)arg1;	// IMP=0x001000000002ee8c
- (id)initWithClient:(id)arg1;	// IMP=0x001000000002ee18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

