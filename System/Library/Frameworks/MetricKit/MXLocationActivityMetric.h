//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMeasurement;

@interface MXLocationActivityMetric
{
    NSMeasurement *_cumulativeBestAccuracyTime;	// 8 = 0x8
    NSMeasurement *_cumulativeBestAccuracyForNavigationTime;	// 16 = 0x10
    NSMeasurement *_cumulativeNearestTenMetersAccuracyTime;	// 24 = 0x18
    NSMeasurement *_cumulativeHundredMetersAccuracyTime;	// 32 = 0x20
    NSMeasurement *_cumulativeKilometerAccuracyTime;	// 40 = 0x28
    NSMeasurement *_cumulativeThreeKilometersAccuracyTime;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006953
- (void).cxx_destruct;	// IMP=0x0000000000006f7e
@property(readonly) NSMeasurement *cumulativeThreeKilometersAccuracyTime; // @synthesize cumulativeThreeKilometersAccuracyTime=_cumulativeThreeKilometersAccuracyTime;
@property(readonly) NSMeasurement *cumulativeKilometerAccuracyTime; // @synthesize cumulativeKilometerAccuracyTime=_cumulativeKilometerAccuracyTime;
@property(readonly) NSMeasurement *cumulativeHundredMetersAccuracyTime; // @synthesize cumulativeHundredMetersAccuracyTime=_cumulativeHundredMetersAccuracyTime;
@property(readonly) NSMeasurement *cumulativeNearestTenMetersAccuracyTime; // @synthesize cumulativeNearestTenMetersAccuracyTime=_cumulativeNearestTenMetersAccuracyTime;
@property(readonly) NSMeasurement *cumulativeBestAccuracyForNavigationTime; // @synthesize cumulativeBestAccuracyForNavigationTime=_cumulativeBestAccuracyForNavigationTime;
@property(readonly) NSMeasurement *cumulativeBestAccuracyTime; // @synthesize cumulativeBestAccuracyTime=_cumulativeBestAccuracyTime;
- (id)toDictionary;	// IMP=0x0000000000006c12
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006a42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000695b
- (id)initWithCumulativeBestAccuracyTimeMeasurement:(id)arg1 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)arg2 nearestTenMetersAccuracyTimeMeasurement:(id)arg3 hundredMetersAccuracyTimeMeasurement:(id)arg4 kilometerAccuracyTimeMeasurement:(id)arg5 threeKilometerAccuracyTimeMeasurement:(id)arg6;	// IMP=0x000000000000675d

@end

