//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCodableLocationSeries;

@interface HKWorkoutRoute
{
    HDCodableLocationSeries *__codableWorkoutRoute;	// 8 = 0x8
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000003bf91
+ (id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000017ef6
- (void).cxx_destruct;	// IMP=0x000000000003c255
@property(retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute; // @synthesize _codableWorkoutRoute=__codableWorkoutRoute;
- (_Bool)_isSmoothed;	// IMP=0x000000000003c1b7
- (_Bool)_requiresPrivateEntitlementForQueries;	// IMP=0x000000000003c0ff
- (id)_valueDescription;	// IMP=0x000000000003c091
- (id)_validateSample;	// IMP=0x000000000003c053
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x000000000003bf99

@end
