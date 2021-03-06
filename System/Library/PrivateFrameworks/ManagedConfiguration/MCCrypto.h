//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCCrypto : NSObject
{
}

+ (id)storedActivationLockBypassCodeHash;	// IMP=0x000000000005ae8e
+ (void)clearStoredActivationLockHash;	// IMP=0x000000000005ae4b
+ (void)clearStoredActivationLockBypassCode;	// IMP=0x000000000005ae08
+ (id)storedActivationLockBypassCodeWithOutError:(id *)arg1;	// IMP=0x000000000005adbc
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;	// IMP=0x000000000005ac5a
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;	// IMP=0x000000000005aaa4
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;	// IMP=0x000000000005a900
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;	// IMP=0x000000000005a8a8
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate **)arg2 outError:(id *)arg3;	// IMP=0x000000000005a554
+ (id)_decryptionFailedErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000000005a459
+ (_Bool)isValidPKCS12Data:(id)arg1;	// IMP=0x000000000005a429
+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg1;	// IMP=0x000000000005a2e1
+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg1;	// IMP=0x000000000005a2ca

@end

