//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivityCache <NSCopying>
{
    long long _cacheIndex;	// 8 = 0x8
    NSDateComponents *_dateComponents;	// 16 = 0x10
    long long _stepCount;	// 24 = 0x18
    long long _pushCount;	// 32 = 0x20
    long long _wheelchairUse;	// 40 = 0x28
    double _deepBreathingDuration;	// 48 = 0x30
    HKQuantity *_energyBurned;	// 56 = 0x38
    double _moveMinutes;	// 64 = 0x40
    double _briskMinutes;	// 72 = 0x48
    double _activeHours;	// 80 = 0x50
    HKQuantity *_energyBurnedGoal;	// 88 = 0x58
    NSDate *_energyBurnedGoalDate;	// 96 = 0x60
    double _moveMinutesGoal;	// 104 = 0x68
    NSDate *_moveMinutesGoalDate;	// 112 = 0x70
    double _briskMinutesGoal;	// 120 = 0x78
    NSDate *_briskMinutesGoalDate;	// 128 = 0x80
    double _activeHoursGoal;	// 136 = 0x88
    NSDate *_activeHoursGoalDate;	// 144 = 0x90
    HKQuantity *_walkingAndRunningDistance;	// 152 = 0x98
    long long _flightsClimbed;	// 160 = 0xa0
    NSArray *_dailyEnergyBurnedStatistics;	// 168 = 0xa8
    NSArray *_dailyMoveMinutesStatistics;	// 176 = 0xb0
    NSArray *_dailyBriskMinutesStatistics;	// 184 = 0xb8
    long long _activityMoveMode;	// 192 = 0xc0
    unsigned long long _knownFields;	// 200 = 0xc8
    long long _sequence;	// 208 = 0xd0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014b3d0
+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000014a921
+ (id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5;	// IMP=0x000000000014a685
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 metadata:(id)arg5;	// IMP=0x000000000014a404
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8;	// IMP=0x000000000014a318
- (void).cxx_destruct;	// IMP=0x00000000000125dc
@property(readonly) NSDate *activeHoursGoalDate; // @synthesize activeHoursGoalDate=_activeHoursGoalDate;
@property(readonly) NSDate *briskMinutesGoalDate; // @synthesize briskMinutesGoalDate=_briskMinutesGoalDate;
@property(setter=_setSequence:) long long sequence; // @synthesize sequence=_sequence;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009ac6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014b3d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a301
- (double)_walkingAndRunningDistanceInMeters;	// IMP=0x00000000000121da
- (double)_energyBurnedGoalInKilocalories;	// IMP=0x0000000000012174
- (double)_energyBurnedInKilocalories;	// IMP=0x000000000001210e
- (void)reset;	// IMP=0x000000000014b279
@property(readonly) unsigned long long knownFields;
@property(setter=_setActivityMoveMode:) long long activityMoveMode;
@property(copy, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property(readonly) _Bool hasDailyBriskMinutesStatistics;
@property(copy, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinutesStatistics;
@property(readonly) _Bool hasDailyMoveMinutesStatistics;
@property(copy, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property(readonly) _Bool hasDailyEnergyBurnedStatistics;
@property(readonly) _Bool hasFlightsClimbed;
@property(setter=_setFlightsClimbed:) long long flightsClimbed;
@property(readonly) _Bool hasWalkingAndRunningDistance;
@property(retain, setter=_setWalkingAndRunningDistance:) HKQuantity *walkingAndRunningDistance;
@property(readonly) _Bool hasDeepBreathingDuration;
@property(setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property(readonly) _Bool hasWheelchairUse;
@property(setter=_setWheelchairUse:) long long wheelchairUse;
@property(readonly) _Bool hasPushCount;
@property(setter=_setPushCount:) long long pushCount;
@property(readonly) _Bool hasStepCount;
@property(setter=_setStepCount:) long long stepCount;
@property(readonly) _Bool hasDateComponents;
@property(readonly) NSDateComponents *dateComponents;
@property(setter=_setCacheIndex:) long long cacheIndex;
- (double)activeHoursGoalPercentage;	// IMP=0x000000000014afe3
- (double)briskMinutesGoalPercentage;	// IMP=0x000000000014afaa
- (double)moveMinutesGoalPercentage;	// IMP=0x000000000014af7e
- (double)energyBurnedGoalPercentage;	// IMP=0x000000000014af39
@property(readonly) _Bool hasActiveHoursGoalDate;
@property(readonly) _Bool hasActiveHoursGoal;
- (void)_setActiveHoursGoalDateOnly:(id)arg1;	// IMP=0x000000000014af10
- (void)_setActiveHoursGoalOnly:(double)arg1;	// IMP=0x000000000014aefe
- (void)_setActiveHoursGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014adad
@property(setter=_setActiveHoursGoal:) double activeHoursGoal;
@property(readonly) _Bool hasBriskMinutesGoalDate;
@property(readonly) _Bool hasBriskMinutesGoal;
- (void)_setBriskMinutesGoalDateOnly:(id)arg1;	// IMP=0x000000000014acd2
- (void)_setBriskMinutesGoalOnly:(double)arg1;	// IMP=0x000000000014acc0
- (void)_setBriskMinutesGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014ab6f
@property(setter=_setBriskMinutesGoal:) double briskMinutesGoal;
@property(readonly) _Bool hasMoveMinutesGoal;
- (void)_setMoveMinutesGoalDateOnly:(id)arg1;	// IMP=0x000000000014aa8a
- (void)_setMoveMinutesGoalOnly:(double)arg1;	// IMP=0x000000000014aa78
- (void)_setMoveMinutesGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014a9aa
@property(setter=_setMoveMinutesGoal:) double moveMinutesGoal;
@property(readonly) NSDate *moveMinutesGoalDate;
@property(readonly) _Bool hasEnergyBurnedGoal;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;	// IMP=0x00000000000118bb
- (void)_setEnergyBurnedGoalOnly:(id)arg1;	// IMP=0x00000000000153d6
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;	// IMP=0x000000000000b2fc
@property(retain, setter=_setEnergyBurnedGoal:) HKQuantity *energyBurnedGoal;
@property(readonly) NSDate *energyBurnedGoalDate;
@property(readonly) _Bool hasActiveHours;
@property(setter=_setActiveHours:) double activeHours;
@property(readonly) _Bool hasBriskMinutes;
@property(setter=_setBriskMinutes:) double briskMinutes;
@property(readonly) _Bool hasMoveMinutes;
@property(setter=_setMoveMinutes:) double moveMinutes;
@property(readonly) _Bool hasEnergyBurned;
@property(retain, setter=_setEnergyBurned:) HKQuantity *energyBurned;
- (_Bool)_isEqualToActivityCache:(id)arg1;	// IMP=0x000000000000b4f5
- (id)_valueDescription;	// IMP=0x0000000000011b73

@end

