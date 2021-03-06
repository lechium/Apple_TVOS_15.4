//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NEIKEv2Crypto : NSObject
{
}

+ (struct __SecIdentity *)copySecIdentity:(id)arg1;	// IMP=0x00000000000a87f9
+ (id)createDecryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 aad:(id)arg5 padDataToKeyLength:(_Bool)arg6;	// IMP=0x00000000000a7f7e
+ (id)createEncryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 encryptionContext:(id)arg5 aad:(id)arg6 padDataToKeyLength:(_Bool)arg7;	// IMP=0x00000000000a76a8
+ (_Bool)decryptChaChaPolyWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;	// IMP=0x00000000000a7553
+ (_Bool)encryptChaChaPolyWithContext:(id)arg1 key:(id)arg2 iv:(id)arg3 aad:(const char *)arg4 aadLen:(int)arg5 plaintext:(const char *)arg6 len:(int)arg7 output:(char *)arg8 outputLen:(int)arg9;	// IMP=0x00000000000a71ee
+ (_Bool)decryptGCMWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;	// IMP=0x00000000000a6f06
+ (_Bool)encryptGCMWithContext:(id)arg1 aad:(const char *)arg2 aadLen:(int)arg3 plaintext:(const char *)arg4 len:(int)arg5 output:(char *)arg6 outputLen:(int)arg7;	// IMP=0x00000000000a6d3c
+ (_Bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey *)arg4 padding:(unsigned int)arg5;	// IMP=0x00000000000a6bd7
+ (_Bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey *)arg4 padding:(unsigned int)arg5 sha2:(_Bool)arg6;	// IMP=0x00000000000a69c6
+ (struct __SecPolicy *)createPolicyWithHostname:(id)arg1;	// IMP=0x00000000000a68ce
+ (id)copyPersistentCertificateDataForCommonName:(id)arg1 matchingCertificateHash:(id)arg2;	// IMP=0x00000000000a6531
+ (id)copyDataFromPersistentReference:(id)arg1;	// IMP=0x00000000000a63b4
+ (id)copyPersistentIdentityDataForCommonName:(id)arg1;	// IMP=0x00000000000a611c
+ (struct __SecKey *)copyTrustedKeyForCertificate:(id)arg1 remoteCAArray:(id)arg2 policyRef:(void *)arg3 enableRevocationCheck:(_Bool)arg4 strictRevocationCheck:(_Bool)arg5;	// IMP=0x00000000000a5981
+ (id)createCertificateAuthorityPublicKeyHash:(struct __SecCertificate *)arg1;	// IMP=0x00000000000a5931
+ (struct __SecCertificate *)copyCertificateFromPersistentData:(id)arg1;	// IMP=0x00000000000a57b1
+ (id)copyPersistentDataForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x00000000000a563e
+ (id)copyPersistentDataForIdentity:(struct __SecIdentity *)arg1;	// IMP=0x00000000000a54e7
+ (id)copyAllCertificates;	// IMP=0x00000000000a5386
+ (id)copyAllCertIdentities;	// IMP=0x00000000000a5225
+ (id)copyDHKeys:(unsigned long long)arg1;	// IMP=0x00000000000a4fda
+ (id)prototypeDHKeysForGroup:(unsigned long long)arg1;	// IMP=0x00000000000a476b
+ (id)createBase16EncodedDataForString:(const char *)arg1;	// IMP=0x00000000000a45f1
+ (id)createNATDetectionHashForInitiatorSPI:(id)arg1 responderSPI:(id)arg2 address:(id)arg3;	// IMP=0x00000000000a4205
+ (id)createIVForEncryptionAlgorithm:(id)arg1 encryptContext:(id)arg2;	// IMP=0x00000000000a3f87
+ (id)copySignHashDataForSet:(id)arg1 authentication:(id)arg2;	// IMP=0x00000000000a3e8f
+ (id)copySignHashDataForSet:(id)arg1;	// IMP=0x00000000000a3c31
+ (id)createSignHashProtocolForAuth:(id)arg1;	// IMP=0x00000000000a3be8
+ (id)copyAuthenticationProtocolForAuthMethod:(unsigned long long)arg1 authData:(id)arg2;	// IMP=0x00000000000a39a8
+ (unsigned long long)signHashTypeForAuthentication:(id)arg1;	// IMP=0x00000000000a3902
+ (id)createHashFromData:(id)arg1;	// IMP=0x00000000000a38e4
+ (id)createHashFromData:(id)arg1 hashAlgorithm:(unsigned long long)arg2;	// IMP=0x00000000000a3548
+ (id)createHashFromData:(id)arg1 algorithm:(unsigned long long)arg2;	// IMP=0x00000000000a304a
+ (id)createPRFPlusFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3 outputLength:(unsigned int)arg4;	// IMP=0x00000000000a2cf4
+ (id)createHMACFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3;	// IMP=0x00000000000a2a7f
+ (id)createHMACFromData:(id)arg1 key:(id)arg2 integrityAlgorithm:(unsigned long long)arg3;	// IMP=0x00000000000a2802
+ (id)createRandomWithSize:(unsigned int)arg1;	// IMP=0x00000000000a25e4

@end

