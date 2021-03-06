//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DaemonBiometricKeychain : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueueX509;	// 16 = 0x10
}

+ (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00400000000e76cf
+ (void)x509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e73e5
+ (void)signDataUsingContextWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e6d76
+ (void)signDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e6727
+ (void)getPublicKeyDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e650a
+ (void)deleteKeychainTokensWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e632e
+ (void)createX509CertChainDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e6111
+ (void)createAttestationDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000e5ef4
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000e5e00
+ (id)sharedInstance;	// IMP=0x00100000000e3e9c
- (void).cxx_destruct;	// IMP=0x00200000000e8733
- (id)_signData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000e86e6
- (id)_regenerateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e8699
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2 useTokenID:(_Bool)arg3;	// IMP=0x00100000000e83bc
- (id)_queryForPrivateKeyWithLabel:(id)arg1 prompt:(id)arg2;	// IMP=0x00100000000e83a4
- (id)_publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000e8357
- (id)_presentPaymentSheetForChallenge:(id)arg1 authContext:(id)arg2 biometricContext:(id)arg3 touchIDContext:(id)arg4 touchIDOptions:(id)arg5 accessControlRef:(struct __SecAccessControl *)arg6 passwordToken:(id *)arg7 paymentTokenData:(id *)arg8 fpanID:(id *)arg9 error:(id *)arg10;	// IMP=0x00100000000e82d0
- (_Bool)_generateKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e8283
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e8236
- (_Bool)_deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e81e1
- (id)_createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e816e
- (id)_createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e8121
- (id)_copyPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e810d
- (id)_constraintsForPurchase;	// IMP=0x00100000000e7c48
- (id)_constraintsForExtendedActions;	// IMP=0x00100000000e7a19
- (_Bool)_isDeviceUnlocked;	// IMP=0x00100000000e7a11
- (id)_amsKeychainLabelForPurpose:(long long)arg1;	// IMP=0x00100000000e766b
- (id)_amsCertificateLabelForPurpose:(long long)arg1;	// IMP=0x00100000000e7646
- (id)x509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateCerts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000e4fe6
- (id)signData_:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000e4b4d
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 regenerateKeys:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000e46d0
- (id)publicKeyDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e46b5
- (_Bool)deleteKeychainTokensForAccountIdentifier_:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e44a7
- (id)createX509CertChainDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e3fef
- (id)createAttestationDataForAccountIdentifier_:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000e3fa2
- (id)init;	// IMP=0x00100000000e3f29

@end

