//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMDHomeNFCReaderKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSData *_publicKeyExternalRepresentation;	// 8 = 0x8
    NSData *_privateKey;	// 16 = 0x10
    NSData *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000457b27
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;	// IMP=0x0000000000457b08
+ (id)identifierForKey:(id)arg1;	// IMP=0x00000000004579e4
+ (id)createWithExternalRepresentation:(id)arg1;	// IMP=0x000000000045782a
+ (id)createRandomKey;	// IMP=0x00000000004575e4
+ (id)createWithKeychainItem:(id)arg1;	// IMP=0x00000000006f26b5
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00000000006f2609
- (void).cxx_destruct;	// IMP=0x00000000004575a2
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;	// IMP=0x0000000000457390
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004572e2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004571f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004571ed
- (unsigned long long)hash;	// IMP=0x000000000045712c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000456f81
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;	// IMP=0x0000000000456d79
- (id)createKeychainItemForHome:(id)arg1;	// IMP=0x00000000006f2334

@end

