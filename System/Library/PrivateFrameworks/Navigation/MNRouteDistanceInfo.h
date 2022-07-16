//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface MNRouteDistanceInfo : NSObject <NSSecureCoding>
{
    unsigned long long _legIndex;	// 8 = 0x8
    NSUUID *_routeID;	// 16 = 0x10
    double _distanceRemainingToEndOfLeg;	// 24 = 0x18
    double _distanceRemainingToEndOfRoute;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9b81
- (void).cxx_destruct;	// IMP=0x00000000000b9e11
@property(readonly, nonatomic) double distanceRemainingToEndOfRoute; // @synthesize distanceRemainingToEndOfRoute=_distanceRemainingToEndOfRoute;
@property(readonly, nonatomic) double distanceRemainingToEndOfLeg; // @synthesize distanceRemainingToEndOfLeg=_distanceRemainingToEndOfLeg;
- (id)description;	// IMP=0x00000000000b9dcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b9d19
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b9c73
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b9b89
- (id)initWithDistanceRemainingToEndOfLeg:(double)arg1 distanceRemainingToEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4;	// IMP=0x00000000000b9aed
- (id)init;	// IMP=0x00000000000b9ac3

@end
