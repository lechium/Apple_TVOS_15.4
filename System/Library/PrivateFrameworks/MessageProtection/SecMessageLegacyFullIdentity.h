//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LegacySigningKeyPrivate, NSData, SecKeyRSAPrivate;

@interface SecMessageLegacyFullIdentity : NSObject
{
    _Bool _isMigratedV2Key;	// 8 = 0x8
    LegacySigningKeyPrivate *_signingKey;	// 16 = 0x10
    SecKeyRSAPrivate *_encryptionKey;	// 24 = 0x18
    NSData *_encryptionKeyPersistentRef;	// 32 = 0x20
    NSData *_signingKeyPersistentRef;	// 40 = 0x28
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010c8f
+ (id)identity;	// IMP=0x0000000000010b4f
+ (id)identityFromV2Bytes:(const char **)arg1 size:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000000942d
+ (id)populateIdentity:(id)arg1 withEncryptionKeyFromPersistentRef:(const char **)arg2 size:(unsigned long long *)arg3;	// IMP=0x0000000000009201
+ (id)populateIdentity:(id)arg1 withSigningKeyFromPersistentRef:(const char **)arg2 size:(unsigned long long *)arg3;	// IMP=0x0000000000008d97
- (void).cxx_destruct;	// IMP=0x00000000000114c8
@property(nonatomic) _Bool isMigratedV2Key; // @synthesize isMigratedV2Key=_isMigratedV2Key;
@property(retain, nonatomic) NSData *signingKeyPersistentRef; // @synthesize signingKeyPersistentRef=_signingKeyPersistentRef;
@property(retain, nonatomic) NSData *encryptionKeyPersistentRef; // @synthesize encryptionKeyPersistentRef=_encryptionKeyPersistentRef;
@property(retain, nonatomic) SecKeyRSAPrivate *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) LegacySigningKeyPrivate *signingKey; // @synthesize signingKey=_signingKey;
- (struct _SecMPFullIdentity *)asRef;	// IMP=0x0000000000011365
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001124e
- (unsigned long long)encryptionSize;	// IMP=0x000000000001120a
- (id)publicIdentity;	// IMP=0x0000000000011136
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x0000000000010fc2
- (id)decryptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010f39
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010eb0
- (id)initWithEncryptionKeyData:(id)arg1 signingKeyData:(id)arg2;	// IMP=0x00000000000109d9
- (id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2;	// IMP=0x000000000001093c
- (id)initWithProtobufData:(id)arg1;	// IMP=0x0000000000010824
- (id)initWithEncryptionSecKey:(struct __SecKey *)arg1 signingSecKey:(struct __SecKey *)arg2;	// IMP=0x000000000001075d
- (void)deleteMigratedKeys;	// IMP=0x0000000000009628
- (void)deleteItemWithPersistentRef:(id)arg1;	// IMP=0x000000000000951c

@end

