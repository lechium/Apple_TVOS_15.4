//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OctagonTrust/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface OTInheritanceKey : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSData *_wrappingKeyData;	// 16 = 0x10
    NSString *_wrappingKeyString;	// 24 = 0x18
    NSData *_wrappedKeyData;	// 32 = 0x20
    NSString *_wrappedKeyString;	// 40 = 0x28
    NSData *_claimTokenData;	// 48 = 0x30
    NSString *_claimTokenString;	// 56 = 0x38
    NSData *_recoveryKeyData;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a614
+ (id)parseBase32:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001a191
+ (id)printableWithData:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000019d0e
+ (id)unbase32:(const char *)arg1 len:(unsigned long long)arg2;	// IMP=0x0000000000019b8a
+ (id)base32:(const char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00000000000199f7
- (void).cxx_destruct;	// IMP=0x000000000001998d
@property(readonly, nonatomic) NSData *recoveryKeyData; // @synthesize recoveryKeyData=_recoveryKeyData;
@property(readonly, nonatomic) NSString *claimTokenString; // @synthesize claimTokenString=_claimTokenString;
@property(readonly, nonatomic) NSData *claimTokenData; // @synthesize claimTokenData=_claimTokenData;
@property(readonly, nonatomic) NSString *wrappedKeyString; // @synthesize wrappedKeyString=_wrappedKeyString;
@property(readonly, nonatomic) NSData *wrappedKeyData; // @synthesize wrappedKeyData=_wrappedKeyData;
@property(readonly, nonatomic) NSString *wrappingKeyString; // @synthesize wrappingKeyString=_wrappingKeyString;
@property(readonly, nonatomic) NSData *wrappingKeyData; // @synthesize wrappingKeyData=_wrappingKeyData;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019858
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001964e
- (_Bool)isRecoveryKeyEqual:(id)arg1;	// IMP=0x0000000000019394
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001932d
- (_Bool)isEqualToOTInheritanceKey:(id)arg1;	// IMP=0x0000000000018f8d
- (id)initWithWrappedKeyString:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018ecb
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyString:(id)arg2 uuid:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018e09
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018c79
- (_Bool)unwrapWithError:(id *)arg1;	// IMP=0x00000000000188bf
- (id)initWithUUID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000185d5
- (_Bool)generateWrappingWithError:(id *)arg1;	// IMP=0x00000000000181f7

@end
