//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFSSHKeyFormat-Protocol.h>

@class NSString;

@interface WFSSHKeyFormatED25519 : NSObject <WFSSHKeyFormat>
{
}

+ (id)sshPrivateKeyFromED25519PrivateKey:(id)arg1 publicKey:(id)arg2 comment:(id)arg3;	// IMP=0x00000000001f4ff8
+ (id)sshPublicKeyFromED25519Data:(id)arg1;	// IMP=0x00000000001f4f31
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f4994
+ (id)publicKeySpecifier;	// IMP=0x00000000001f4987
+ (id)privateKeySpecifier;	// IMP=0x00000000001f497a
+ (id)publicKeyType;	// IMP=0x00000000001f496d
+ (id)privateKeyType;	// IMP=0x00000000001f4960
+ (id)defaultKeySize;	// IMP=0x00000000001f4958
+ (id)possibleKeySizes;	// IMP=0x00000000001f494b
+ (id)localizedDisplayName;	// IMP=0x00000000001f493a
+ (id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;	// IMP=0x00000000001f478e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

