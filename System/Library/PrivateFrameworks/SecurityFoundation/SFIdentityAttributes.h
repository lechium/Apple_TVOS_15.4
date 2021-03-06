//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes>
{
    id _identityAttributesInternal;	// 8 = 0x8
    NSString *persistentIdentifier;	// 16 = 0x10
    NSString *_privateKeyDomain;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c49a
- (void).cxx_destruct;	// IMP=0x000000000000c6e2
@property(readonly, copy, nonatomic) NSString *privateKeyDomain; // @synthesize privateKeyDomain=_privateKeyDomain;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(readonly, nonatomic) _Bool hasCertificate;
@property(copy, nonatomic) NSString *identityName;
- (void)setKeySpecifier:(id)arg1;	// IMP=0x000000000000c63d
@property(readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c4d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c4d1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c4a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

