//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTVehicleEvent;

@interface RTSourceCoreRoutineVehicleEvent
{
    RTVehicleEvent *_vehicleEvent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a20d
- (void).cxx_destruct;	// IMP=0x000000000002a5ec
@property(readonly, nonatomic) RTVehicleEvent *vehicleEvent; // @synthesize vehicleEvent=_vehicleEvent;
- (id)description;	// IMP=0x000000000002a545
- (unsigned long long)hash;	// IMP=0x000000000002a4c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a37d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a32d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a2b0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a215
- (id)initWithVehicleEvent:(id)arg1;	// IMP=0x000000000002a19f

@end
