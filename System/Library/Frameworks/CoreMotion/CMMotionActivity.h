//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMMotionActivity
{
    struct CLMotionActivity fState;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000167810
- (struct CLMotionActivity *)motionActivity;	// IMP=0x0000000000167ea2
- (id)description;	// IMP=0x0000000000167d88
@property(readonly, nonatomic) _Bool cycling;
@property(readonly, nonatomic) _Bool automotive;
@property(readonly, nonatomic) _Bool running;
@property(readonly, nonatomic) _Bool walking;
@property(readonly, nonatomic) _Bool stationary;
@property(readonly, nonatomic) _Bool unknown;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic, getter=isVehicleBTHint) _Bool vehicleBTHint;
@property(readonly, nonatomic, getter=isVehicleMotionHint) _Bool vehicleMotionHint;
@property(readonly, nonatomic, getter=isVehicleBasebandHint) _Bool vehicleBasebandHint;
@property(readonly, nonatomic, getter=isVehicleGpsHint) _Bool vehicleGpsHint;
@property(readonly, nonatomic, getter=isVehicleWifiHint) _Bool vehicleWifiHint;
@property(readonly, nonatomic, getter=isVehicleConnected) _Bool vehicleConnected;
@property(readonly, nonatomic) long long confidence;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167a9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000167a14
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167818
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;	// IMP=0x0000000000167786

@end

