//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMGenericWorkout
{
    unsigned long long fWorkoutLabel;	// 56 = 0x38
}

+ (id)genericWorkoutInstance:(id)arg1;	// IMP=0x00000000000d5394
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d51bb
+ (_Bool)isAvailable;	// IMP=0x00000000000d511d
- (id)description;	// IMP=0x00000000000d5318
@property(readonly, nonatomic) unsigned long long workoutLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d52ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5243
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d51c3
- (void)dealloc;	// IMP=0x00000000000d518c
- (id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2;	// IMP=0x00000000000d5143

@end

