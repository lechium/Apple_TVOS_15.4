//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying>
{
    long long _activitySummaryIndex;	// 8 = 0x8
    NSDateComponents *_dateComponents;	// 16 = 0x10
    HKQuantity *_activeEnergyBurned;	// 24 = 0x18
    HKQuantity *_appleMoveTime;	// 32 = 0x20
    HKQuantity *_appleExerciseTime;	// 40 = 0x28
    HKQuantity *_appleStandHours;	// 48 = 0x30
    HKQuantity *_distanceWalkingRunning;	// 56 = 0x38
    HKQuantity *_stepCount;	// 64 = 0x40
    HKQuantity *_activeEnergyBurnedGoal;	// 72 = 0x48
    HKQuantity *_appleMoveTimeGoal;	// 80 = 0x50
    HKQuantity *_appleExerciseTimeGoal;	// 88 = 0x58
    HKQuantity *_appleStandHoursGoal;	// 96 = 0x60
    HKQuantity *_deepBreathingDuration;	// 104 = 0x68
    HKQuantity *_pushCount;	// 112 = 0x70
    HKQuantity *_flightsClimbed;	// 120 = 0x78
    long long _wheelchairUse;	// 128 = 0x80
    long long _activityMoveMode;	// 136 = 0x88
    NSArray *_dailyEnergyBurnedStatistics;	// 144 = 0x90
    NSArray *_dailyMoveTimeStatistics;	// 152 = 0x98
    NSArray *_dailyBriskMinutesStatistics;	// 160 = 0xa0
    _Bool _dataLoading;	// 168 = 0xa8
    NSDate *_startDate;	// 176 = 0xb0
    NSDate *_endDate;	// 184 = 0xb8
    NSDate *_creationDate;	// 192 = 0xc0
    NSDate *_energyBurnedGoalDate;	// 200 = 0xc8
    NSDate *_moveTimeGoalDate;	// 208 = 0xd0
    NSDate *_briskMinutesGoalDate;	// 216 = 0xd8
    NSDate *_activeHoursGoalDate;	// 224 = 0xe0
    NSArray *_dailyMoveMinuteStatistics;	// 232 = 0xe8
}

+ (id)_mostRecentlyCreatedCacheAmongCaches:(id)arg1;	// IMP=0x000000000017c7e6
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;	// IMP=0x00000000000126a6
+ (_Bool)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id *)arg3;	// IMP=0x000000000017c4b6
+ (_Bool)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id *)arg2;	// IMP=0x000000000001cb45
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017b73e
- (void).cxx_destruct;	// IMP=0x000000000000fc74
@property(nonatomic, getter=_isDataLoading, setter=_setDataLoading:) _Bool dataLoading; // @synthesize dataLoading=_dataLoading;
@property(retain, nonatomic, getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics; // @synthesize dailyBriskMinutesStatistics=_dailyBriskMinutesStatistics;
@property(retain, nonatomic, getter=_dailyMoveTimeStatistics, setter=_setDailyMoveTimeStatistics:) NSArray *dailyMoveTimeStatistics; // @synthesize dailyMoveTimeStatistics=_dailyMoveTimeStatistics;
@property(retain, nonatomic, getter=_dailyMoveMinutesStatistics, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinuteStatistics; // @synthesize dailyMoveMinuteStatistics=_dailyMoveMinuteStatistics;
@property(retain, nonatomic, getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics; // @synthesize dailyEnergyBurnedStatistics=_dailyEnergyBurnedStatistics;
@property(retain, nonatomic, getter=_activeHoursGoalDate, setter=_setActiveHoursGoalDate:) NSDate *activeHoursGoalDate; // @synthesize activeHoursGoalDate=_activeHoursGoalDate;
@property(retain, nonatomic, getter=_briskMinutesGoalDate, setter=_setBriskMinutesGoalDate:) NSDate *briskMinutesGoalDate; // @synthesize briskMinutesGoalDate=_briskMinutesGoalDate;
@property(retain, nonatomic, getter=_moveTimeGoalDate, setter=_setMoveTimeGoalDate:) NSDate *moveTimeGoalDate; // @synthesize moveTimeGoalDate=_moveTimeGoalDate;
@property(retain, nonatomic, getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:) NSDate *energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property(retain, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic, getter=_endDate, setter=_setEndDate:) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic, getter=_startDate, setter=_setStartDate:) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(_Bool)arg2;	// IMP=0x0000000000013229
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;	// IMP=0x0000000000014179
@property(readonly, nonatomic, getter=_standHoursCompletionPercentage) double standHoursCompletionPercentage;
@property(readonly, nonatomic, getter=_exerciseTimeCompletionPercentage) double exerciseTimeCompletionPercentage;
@property(readonly, nonatomic, getter=_moveMinutesCompletionPercentage) double moveMinutesCompletionPercentage;
@property(readonly, nonatomic, getter=_activeEnergyCompletionPercentage) double activeEnergyCompletionPercentage;
@property(copy, nonatomic, getter=_gregorianDateComponents, setter=_setGregorianDateComponents:) NSDateComponents *gregorianDateComponents;
@property(nonatomic, getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:) long long activitySummaryIndex;
- (void)_setActivityMoveMode:(long long)arg1;	// IMP=0x000000000017c4a4
@property(nonatomic) long long activityMoveMode;
@property(nonatomic, getter=_wheelchairUse, setter=_setWheelchairUse:) long long wheelchairUse;
@property(retain, nonatomic, getter=_flightsClimbed, setter=_setFlightsClimbed:) HKQuantity *flightsClimbed;
@property(retain, nonatomic, getter=_pushCount, setter=_setPushCount:) HKQuantity *pushCount;
@property(retain, nonatomic, getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:) HKQuantity *deepBreathingDuration;
@property(retain, nonatomic) HKQuantity *appleStandHoursGoal;
@property(retain, nonatomic) HKQuantity *appleExerciseTimeGoal;
@property(retain, nonatomic) HKQuantity *appleMoveMinutesGoal;
@property(retain, nonatomic) HKQuantity *appleMoveTimeGoal;
@property(retain, nonatomic) HKQuantity *activeEnergyBurnedGoal;
@property(retain, nonatomic) HKQuantity *stepCount;
@property(retain, nonatomic) HKQuantity *distanceWalkingRunning;
@property(retain, nonatomic) HKQuantity *appleStandHours;
@property(retain, nonatomic) HKQuantity *appleExerciseTime;
@property(retain, nonatomic) HKQuantity *appleMoveMinutes;
@property(retain, nonatomic) HKQuantity *appleMoveTime;
@property(retain, nonatomic) HKQuantity *activeEnergyBurned;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;	// IMP=0x000000000001394a
- (_Bool)_useHourlyGoalComparison;	// IMP=0x000000000017c379
- (long long)_activityMoveMode;	// IMP=0x000000000017c367
- (_Bool)_hasStandHoursGoal;	// IMP=0x000000000017c2ac
- (_Bool)_hasExerciseGoal;	// IMP=0x000000000017c1fe
@property(readonly, nonatomic, getter=_hasAppleMoveMinutesGoal) _Bool hasAppleMoveMinutesGoal;
- (_Bool)_hasAppleMoveTimeGoal;	// IMP=0x000000000017c13e
@property(readonly, nonatomic, getter=_hasEnergyBurnedGoal) _Bool hasEnergyBurnedGoal;
@property(readonly, nonatomic, getter=_hasMoveGoal) _Bool hasMoveGoal;
- (id)dateComponentsForCalendar:(id)arg1;	// IMP=0x0000000000014041
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;	// IMP=0x0000000000003c79
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003363
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;	// IMP=0x000000000017be89
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017b746
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000040b8
- (id)description;	// IMP=0x0000000000008d48
- (unsigned long long)hash;	// IMP=0x000000000017b734
- (_Bool)_allFieldsAreEqual:(id)arg1;	// IMP=0x0000000000005811
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000076d3
- (id)init;	// IMP=0x000000000017b6f5

@end

