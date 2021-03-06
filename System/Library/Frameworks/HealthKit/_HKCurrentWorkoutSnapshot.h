//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKWorkoutConfiguration, NSDate, NSString, NSUUID;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>
{
    NSUUID *_sessionIdentifier;	// 8 = 0x8
    HKWorkoutConfiguration *_configuration;	// 16 = 0x10
    NSString *_applicationIdentifier;	// 24 = 0x18
    long long _sessionState;	// 32 = 0x20
    long long _internalState;	// 40 = 0x28
    NSDate *_snapshotDate;	// 48 = 0x30
    double _elapsedTime;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017cdab
- (void).cxx_destruct;	// IMP=0x000000000017d066
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) NSDate *snapshotDate; // @synthesize snapshotDate=_snapshotDate;
@property(readonly, nonatomic) long long internalState; // @synthesize internalState=_internalState;
@property(readonly, nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) HKWorkoutConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017cf41
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017cdb3
- (long long)state;	// IMP=0x000000000017cd86
- (double)elapsedTimeAtDate:(id)arg1;	// IMP=0x000000000017ccf0
@property(readonly, nonatomic) _Bool isFirstPartyWorkout;
- (id)description;	// IMP=0x000000000017cbe0
- (id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 applicationIdentifier:(id)arg4 elapsedTime:(double)arg5 snapshotDate:(id)arg6;	// IMP=0x000000000017cacd

@end

