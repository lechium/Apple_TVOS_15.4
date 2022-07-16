//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OctagonTrust/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface OTCustodianRecoveryKey : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSData *_wrappingKey;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
    NSString *_recoveryString;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000181ef
- (void).cxx_destruct;	// IMP=0x00000000000181b1
@property(readonly, nonatomic) NSString *recoveryString; // @synthesize recoveryString=_recoveryString;
@property(readonly, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(readonly, nonatomic) NSData *wrappingKey; // @synthesize wrappingKey=_wrappingKey;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000180f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017fb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017f4b
- (_Bool)isEqualToCustodianRecoveryKey:(id)arg1;	// IMP=0x0000000000017d6e
- (id)initWithWrappedKey:(id)arg1 wrappingKey:(id)arg2 uuid:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000017c81
- (_Bool)unwrapWithError:(id *)arg1;	// IMP=0x0000000000017b04
- (id)initWithUUID:(id)arg1 recoveryString:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000179f7
- (_Bool)generateWrappingWithError:(id *)arg1;	// IMP=0x0000000000017829

@end

