//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INCurrencyAmount, NSNumber, NSString;

@interface INSendRideFeedbackIntent
{
    NSString *_rideIdentifier;	// 8 = 0x8
    NSNumber *_rating;	// 16 = 0x10
    INCurrencyAmount *_tip;	// 24 = 0x18
}

+ (id)intentDescription;	// IMP=0x000000000022cc68
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022cc60
- (void).cxx_destruct;	// IMP=0x000000000022cc1e
@property(copy, nonatomic) INCurrencyAmount *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(readonly, copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (id)_dictionaryRepresentation;	// IMP=0x000000000022ca58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022c9c2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022c8af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022c82b
- (id)initWithRideIdentifier:(id)arg1;	// IMP=0x000000000022c7b1

@end

