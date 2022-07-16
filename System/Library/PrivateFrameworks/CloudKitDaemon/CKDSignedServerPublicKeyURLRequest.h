//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKPublicKey, NSDate, NSURL;

@interface CKDSignedServerPublicKeyURLRequest
{
    _Bool _requiresProtectionSource;	// 8 = 0x8
    _Bool _verifyFullIntegers;	// 9 = 0x9
    CKPublicKey *_verifiedPublicKey;	// 16 = 0x10
    NSDate *_expirationDateOverride;	// 24 = 0x18
    NSURL *_plistURL;	// 32 = 0x20
    struct __SecPolicy *_certificateTrustPolicy;	// 40 = 0x28
}

+ (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3;	// IMP=0x00000000001b6143
+ (_Bool)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3 verifyFullInteger:(_Bool)arg4;	// IMP=0x00000000001b6069
+ (struct __SecTrust *)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy *)arg2;	// IMP=0x00000000001b5c27
+ (id)nearestExpirationInCertificateList:(id)arg1;	// IMP=0x00000000001b5a42
+ (id)certificateListServerPlist:(id)arg1;	// IMP=0x00000000001b59be
+ (_Bool)serverResponseIsComplete:(id)arg1 requireProtectionSource:(_Bool)arg2;	// IMP=0x00000000001b55bf
- (void).cxx_destruct;	// IMP=0x00000000001b6211
@property(readonly, nonatomic) struct __SecPolicy *certificateTrustPolicy; // @synthesize certificateTrustPolicy=_certificateTrustPolicy;
@property(readonly, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;
@property(retain, nonatomic) NSDate *expirationDateOverride; // @synthesize expirationDateOverride=_expirationDateOverride;
@property(nonatomic) _Bool verifyFullIntegers; // @synthesize verifyFullIntegers=_verifyFullIntegers;
@property(nonatomic) _Bool requiresProtectionSource; // @synthesize requiresProtectionSource=_requiresProtectionSource;
@property(retain) CKPublicKey *verifiedPublicKey; // @synthesize verifiedPublicKey=_verifiedPublicKey;
- (_Bool)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey *)arg2;	// IMP=0x00000000001b5e5f
- (void)requestDidParsePlistObject:(id)arg1;	// IMP=0x00000000001b5148
- (id)url;	// IMP=0x00000000001b5136
- (_Bool)hasRequestBody;	// IMP=0x00000000001b512e
- (id)httpMethod;	// IMP=0x00000000001b5121
- (long long)partitionType;	// IMP=0x00000000001b5116
- (long long)serverType;	// IMP=0x00000000001b510b
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000001b5103
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000001b50fb
- (_Bool)requiresDeviceID;	// IMP=0x00000000001b50f3
- (_Bool)requiresConfiguration;	// IMP=0x00000000001b50eb
- (void)dealloc;	// IMP=0x00000000001b5099
- (id)initWithOperation:(id)arg1 plistURL:(id)arg2 verifyWithPolicy:(struct __SecPolicy *)arg3;	// IMP=0x00000000001b5002

@end

