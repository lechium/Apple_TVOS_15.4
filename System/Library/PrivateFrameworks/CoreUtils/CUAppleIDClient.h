//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CUAppleIDClient : NSObject
{
    struct __SecCertificate *_myCertificate;	// 8 = 0x8
    struct __SecIdentity *_myIdentity;	// 16 = 0x10
    struct __SecKey *_mySecretKey;	// 24 = 0x18
    NSData *_myValidationData;	// 32 = 0x20
    struct __SecCertificate *_peerCertificate;	// 40 = 0x28
    struct __SecKey *_peerPublicKey;	// 48 = 0x30
    _Bool _peerSignatureVerified;	// 56 = 0x38
    NSDictionary *_peerValidationDict;	// 64 = 0x40
    _Bool _peerValidated;	// 72 = 0x48
    int _securityLevel;	// 76 = 0x4c
    NSString *_myAppleID;	// 80 = 0x50
    CUAppleIDClient *_myInfoClient;	// 88 = 0x58
    NSString *_peerAppleID;	// 96 = 0x60
    NSArray *_peerAppleIDs;	// 104 = 0x68
    NSData *_peerCertificateData;	// 112 = 0x70
    NSData *_peerValidationData;	// 120 = 0x78
    NSData *_myCertificateData;	// 128 = 0x80
    NSData *_mySecretKeyData;	// 136 = 0x88
    NSString *_mySecretKeyType;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000273ab
@property(copy, nonatomic) NSString *mySecretKeyType; // @synthesize mySecretKeyType=_mySecretKeyType;
@property(copy, nonatomic) NSData *mySecretKeyData; // @synthesize mySecretKeyData=_mySecretKeyData;
@property(copy, nonatomic) NSData *myCertificateData; // @synthesize myCertificateData=_myCertificateData;
@property(copy, nonatomic) NSData *peerValidationData; // @synthesize peerValidationData=_peerValidationData;
@property(copy, nonatomic) NSData *peerCertificateData; // @synthesize peerCertificateData=_peerCertificateData;
@property(copy, nonatomic) NSArray *peerAppleIDs; // @synthesize peerAppleIDs=_peerAppleIDs;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myInfoClient; // @synthesize myInfoClient=_myInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
@property(readonly, nonatomic) int securityLevel;
- (struct __SecKey *)_getPeerPublicKeyAndReturnError:(id *)arg1;	// IMP=0x000000000002711f
- (struct __SecCertificate *)_getPeerCertificateAndReturnError:(id *)arg1;	// IMP=0x0000000000027060
- (id)copyMyValidationDataAndReturnError:(id *)arg1;	// IMP=0x0000000000026eac
- (struct __SecKey *)_getMySecretKeyAndReturnError:(id *)arg1;	// IMP=0x0000000000026c4c
- (struct __SecIdentity *)_getMyIdentityAndReturnError:(id *)arg1;	// IMP=0x0000000000026aa7
- (id)copyMyCertificateDataAndReturnError:(id *)arg1;	// IMP=0x00000000000269dd
- (struct __SecCertificate *)_getMyCertificateAndReturnError:(id *)arg1;	// IMP=0x0000000000026911
- (id)copyMyAppleIDAndReturnError:(id *)arg1;	// IMP=0x00000000000267d3
- (_Bool)verifyBytes:(const void *)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void *)arg3 signatureLength:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000026652
- (_Bool)verifyData:(id)arg1 signature:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000026578
- (_Bool)_validatePeerHashes:(id)arg1;	// IMP=0x0000000000025a9c
- (_Bool)validatePeerWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000255e3
- (id)signBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000025220
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002519d
- (void)dealloc;	// IMP=0x0000000000025045

@end

