//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HKFeatureAvailabilityStoreServerConfiguration
{
    NSString *_featureIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010095d
- (void).cxx_destruct;	// IMP=0x0000000000100a8e
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000100a00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000100965
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000100928
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x00000000001008ae

@end

