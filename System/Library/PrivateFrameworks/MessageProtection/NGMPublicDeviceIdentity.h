//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NGMPublicPreKey, SigningPublicKey;

@interface NGMPublicDeviceIdentity : NSObject
{
    SigningPublicKey *_signingKey;	// 8 = 0x8
    NGMPublicPreKey *_prekey;	// 16 = 0x10
}

+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000074cb
- (void).cxx_destruct;	// IMP=0x0000000000008294
@property(retain, nonatomic) NGMPublicPreKey *prekey; // @synthesize prekey=_prekey;
@property(retain, nonatomic) SigningPublicKey *signingKey; // @synthesize signingKey=_signingKey;
- (id)description;	// IMP=0x0000000000008184
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000007b8a
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000007b70
- (_Bool)isValidSigningDestination;	// IMP=0x0000000000007b0a
- (_Bool)verifySignature:(id)arg1 formatter:(id)arg2;	// IMP=0x0000000000007a7f
- (id)prekeyData;	// IMP=0x0000000000007795
- (id)identityData;	// IMP=0x0000000000007686
- (id)initWithPrekey:(id)arg1 signingKey:(id)arg2;	// IMP=0x0000000000007432

@end

