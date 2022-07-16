//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKPersistableWorkoutEvent-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDateInterval, NSDictionary, NSError, NSUUID;

@interface HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding, NSCopying>
{
    long long _type;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d1f7c
+ (id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d161c
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d157f
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;	// IMP=0x00000000001d14e2
+ (id)_unvalidatedWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d14c8
+ (id)_workoutEventWithInternalEvent:(id)arg1;	// IMP=0x00000000001d1350
+ (id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d12ef
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d1203
+ (id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000001d1146
- (void).cxx_destruct;	// IMP=0x00000000001d2262
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d21b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d1f84
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x00000000001d1d38
- (void)_assertPropertiesValid;	// IMP=0x00000000001d1c91
@property(readonly, copy, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSUUID *sessionUUID;
@property(readonly, nonatomic) long long workoutEventType;
@property(readonly, copy) NSDate *date;
@property(readonly) long long type;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;	// IMP=0x00000000001d1bf1
- (id)init;	// IMP=0x00000000001d1b77
- (id)_init;	// IMP=0x00000000001d1b48
- (void)_setWorkoutEventMetadata:(id)arg1;	// IMP=0x00000000001d1b1b
- (long long)compare:(id)arg1;	// IMP=0x00000000001d1987
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d197c
- (unsigned long long)hash;	// IMP=0x00000000001d18df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d17f4
- (id)description;	// IMP=0x00000000001d1650

@end
