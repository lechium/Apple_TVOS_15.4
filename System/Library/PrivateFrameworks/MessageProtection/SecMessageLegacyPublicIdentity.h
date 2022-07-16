//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LegacySigningKeyPublic, SecKeyRSAPublic;

@interface SecMessageLegacyPublicIdentity : NSObject
{
    LegacySigningKeyPublic *_signingKey;	// 8 = 0x8
    SecKeyRSAPublic *_encryptionKey;	// 16 = 0x10
}

+ (id)identityWithIdentityData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000034e9
- (void).cxx_destruct;	// IMP=0x0000000000003f36
@property(readonly, nonatomic) SecKeyRSAPublic *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) LegacySigningKeyPublic *signingKey; // @synthesize signingKey=_signingKey;
- (struct _SecMPPublicIdentity *)asRef;	// IMP=0x0000000000003e47
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2;	// IMP=0x0000000000003dbc
- (unsigned long long)encryptionSize;	// IMP=0x0000000000003d50
- (id)publicIDCanonicalHash;	// IMP=0x0000000000003be2
- (id)publicIDHash;	// IMP=0x0000000000003b22
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003a14
- (id)encryptData:(id)arg1;	// IMP=0x000000000000398f
- (id)identityData;	// IMP=0x0000000000003714
- (id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2;	// IMP=0x0000000000003450

@end

