//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TVCSPairedEndpoint
{
    NSNumber *_pairingIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b0b
- (void).cxx_destruct;	// IMP=0x0000000000004df7
@property(copy, nonatomic) NSNumber *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
- (void)_cloneFromPairedEndpoint:(id)arg1;	// IMP=0x0000000000004d86
- (_Bool)_isEqualToPairedEndpoint:(id)arg1;	// IMP=0x0000000000004c6f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004bae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004b13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004abd
- (id)description;	// IMP=0x00000000000049b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004959
- (unsigned long long)hash;	// IMP=0x0000000000004915

@end

