//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INCancelRideIntent
{
    NSString *_rideIdentifier;	// 8 = 0x8
}

+ (id)intentDescription;	// IMP=0x0000000000125dd4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000125dcc
- (void).cxx_destruct;	// IMP=0x0000000000125db9
@property(readonly, copy, nonatomic) NSString *rideIdentifier; // @synthesize rideIdentifier=_rideIdentifier;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000125ce9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000125cbf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000125c27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125bd7
- (id)initWithRideIdentifier:(id)arg1;	// IMP=0x0000000000125b69

@end

