//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthenticationController-Protocol.h>

@class AKAppleIDAuthenticationContextManager, NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAppleIDAuthenticationDelegate;

@interface AKAppleIDAuthenticationController : NSObject <AKAuthenticationController>
{
    NSString *_serviceID;	// 8 = 0x8
    NSXPCListenerEndpoint *_daemonXPCEndpoint;	// 16 = 0x10
    NSXPCConnection *_authenticationServiceConnection;	// 24 = 0x18
    AKAppleIDAuthenticationContextManager *_contextManager;	// 32 = 0x20
    NSLock *_connectionLock;	// 40 = 0x28
    CDUnknownBlockType _deallocHandler;	// 48 = 0x30
}

+ (id)sensitiveAuthenticationKeys;	// IMP=0x000000000000446f
- (void).cxx_destruct;	// IMP=0x000000000000fd03
@property(copy, nonatomic) CDUnknownBlockType deallocHandler; // @synthesize deallocHandler=_deallocHandler;
- (id)_authenticationServiceConnection;	// IMP=0x000000000000f99e
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f4ba
- (id)_urlBagFromCache:(_Bool)arg1 altDSID:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000000f0e4
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ec72
- (id)accountNamesForAltDSID:(id)arg1;	// IMP=0x000000000000e9fe
- (void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e603
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000dbab
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d772
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d30d
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ceb3
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ca80
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c675
- (_Bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c2cb
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bc6d
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b60f
- (id)activeLoginCode:(id *)arg1;	// IMP=0x000000000000b366
- (_Bool)isDevicePasscodeProtected:(id *)arg1;	// IMP=0x000000000000b130
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ac80
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a7d0
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a499
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a154
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009dbf
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009a70
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000972b
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009327
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008f1c
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008a68
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008589
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008194
- (_Bool)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007e39
- (_Bool)deleteAuthorizationDatabase:(id *)arg1;	// IMP=0x0000000000007b21
- (id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000076fb
- (id)fetchDeviceListWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007239
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d90
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006a79
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000065de
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000613d
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005c94
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000576a
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;	// IMP=0x0000000000005468
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;	// IMP=0x0000000000005166
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004750
@property(nonatomic) __weak id <AKAppleIDAuthenticationDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000000466f
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;	// IMP=0x000000000000455d
- (id)initWithDaemonXPCEndpoint:(id)arg1;	// IMP=0x0000000000004546
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000004532
- (id)init;	// IMP=0x000000000000451c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

