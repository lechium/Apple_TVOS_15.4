//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, Signature, SignedObject, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedObjectHolder : NSObject
{
    SignedObject *_signedObject;	// 8 = 0x8
    TransparencySignatureVerifier *_verifier;	// 16 = 0x10
    TransparencyManagedDataStore *_dataStore;	// 24 = 0x18
}

+ (id)signedTypeWithObject:(id)arg1;	// IMP=0x0000000000057374
+ (id)signedTypeWithObject:(id)arg1 verifier:(id)arg2 dataStore:(id)arg3;	// IMP=0x00000000000572a5
+ (id)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005723f
- (void).cxx_destruct;	// IMP=0x00000000000574d5
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) TransparencySignatureVerifier *verifier; // @synthesize verifier=_verifier;
@property(retain) SignedObject *signedObject; // @synthesize signedObject=_signedObject;
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x0000000000057407
- (id)init;	// IMP=0x00000000000571d4
- (id)data;	// IMP=0x0000000000057184
@property(readonly) _Bool hasSignature;
@property Signature *signature;
@property NSData *object;

@end
