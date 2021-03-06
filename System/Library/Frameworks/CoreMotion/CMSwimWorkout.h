//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMSwimWorkout
{
    long long fLocation;	// 56 = 0x38
    double fPoolLength;	// 64 = 0x40
}

+ (id)swimWorkoutInstance:(id)arg1;	// IMP=0x00000000000d4c70
+ (id)swimLocationName:(long long)arg1;	// IMP=0x00000000000d4b94
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d48f7
+ (_Bool)isAvailable;	// IMP=0x00000000000d43a4
- (id)description;	// IMP=0x00000000000d4bc8
@property(readonly, nonatomic) double poolLength;
@property(readonly, nonatomic) long long location;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d4aef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d4a3a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d48ff
- (void)dealloc;	// IMP=0x00000000000d48c8
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x00000000000d4714
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3;	// IMP=0x00000000000d45bc
- (id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3;	// IMP=0x00000000000d43ba

@end

