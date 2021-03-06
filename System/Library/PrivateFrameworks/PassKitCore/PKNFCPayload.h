//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requiresAuthentication;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSData *_encryptionPublicKeyData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e2627
- (void).cxx_destruct;	// IMP=0x00000000001e26d0
@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(copy, nonatomic) NSData *encryptionPublicKeyData; // @synthesize encryptionPublicKeyData=_encryptionPublicKeyData;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)description;	// IMP=0x00000000001e262f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e2594
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e2496
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e2415
- (_Bool)isEqualToPKNFCPayload:(id)arg1;	// IMP=0x00000000001e23bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e2354
- (unsigned long long)hash;	// IMP=0x00000000001e22d1
- (id)initWithNFCDictionary:(id)arg1;	// IMP=0x00000000001e21a8

@end

