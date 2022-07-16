//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSUUID;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fStartDate;	// 8 = 0x8
    NSDate *fEndDate;	// 16 = 0x10
    NSNumber *fNumberOfSteps;	// 24 = 0x18
    NSNumber *fDistance;	// 32 = 0x20
    NSNumber *fFloorsAscended;	// 40 = 0x28
    NSNumber *fFloorsDescended;	// 48 = 0x30
    NSNumber *fRecordId;	// 56 = 0x38
    NSNumber *fCurrentPace;	// 64 = 0x40
    NSNumber *fCurrentCadence;	// 72 = 0x48
    NSDate *fFirstStepTime;	// 80 = 0x50
    NSNumber *fActiveTime;	// 88 = 0x58
    NSUUID *fSourceId;	// 96 = 0x60
    NSNumber *fIsOdometerDistance;	// 104 = 0x68
    NSNumber *fIsOdometerPace;	// 112 = 0x70
    NSNumber *fNumberOfPushes;	// 120 = 0x78
    NSNumber *fWorkoutType;	// 128 = 0x80
    NSNumber *fElevationAscended;	// 136 = 0x88
    NSNumber *fElevationDescended;	// 144 = 0x90
    NSNumber *fDistanceSource;	// 152 = 0x98
}

+ (id)maxPedometerEntries;	// IMP=0x000000000016d805
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016d03d
@property(readonly, nonatomic) NSNumber *distanceSource;
@property(readonly, nonatomic) NSNumber *elevationDescended;
@property(readonly, nonatomic) NSNumber *elevationAscended;
@property(readonly, nonatomic) NSNumber *workoutType;
@property(readonly, nonatomic) NSNumber *numberOfPushes;
- (_Bool)isOdometerPace;	// IMP=0x000000000016d7b1
- (_Bool)isOdometerDistance;	// IMP=0x000000000016d79b
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) long long recordId;
@property(readonly, nonatomic) NSNumber *activeTime;
@property(readonly, nonatomic) NSDate *firstStepTime;
@property(readonly, nonatomic) NSNumber *averageActivePace;
@property(readonly, nonatomic) NSNumber *currentCadence;
@property(readonly, nonatomic) NSNumber *currentPace;
@property(readonly, nonatomic) NSNumber *floorsDescended;
@property(readonly, nonatomic) NSNumber *floorsAscended;
@property(readonly, nonatomic) NSNumber *distance;
@property(readonly, nonatomic) NSNumber *numberOfSteps;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x000000000016d575
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016d3c4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016d045
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016cec2
- (void)dealloc;	// IMP=0x000000000016cdf5
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 firstStepTime:(double)arg10 activeTime:(id)arg11 sourceId:(id)arg12 isOdometerDistance:(id)arg13 isOdometerPace:(id)arg14 pushes:(int)arg15 workoutType:(int)arg16 elevationAscended:(id)arg17 elevationDescended:(id)arg18 distanceSource:(int)arg19;	// IMP=0x000000000016cbab

@end

