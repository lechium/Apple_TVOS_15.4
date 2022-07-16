//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext
{
    id _iesCiphertextInternal;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011393
- (void).cxx_destruct;	// IMP=0x0000000000011b08
@property(readonly) NSData *authenticationCode;
@property(readonly) _SFECPublicKey *ephemeralSenderPublicKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000119b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000118da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000115d2
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;	// IMP=0x000000000001139b

@end

