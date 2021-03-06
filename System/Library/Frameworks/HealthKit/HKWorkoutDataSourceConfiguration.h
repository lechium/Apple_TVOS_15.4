//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutConfiguration, NSDictionary, NSSet;

@interface HKWorkoutDataSourceConfiguration
{
    HKWorkoutConfiguration *_workoutConfiguration;	// 8 = 0x8
    NSSet *_sampleTypesToCollect;	// 16 = 0x10
    NSDictionary *_filtersBySampleType;	// 24 = 0x18
    NSSet *_eventTypesToCollect;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000098548
- (void).cxx_destruct;	// IMP=0x00000000000988ca
@property(readonly, copy) NSSet *eventTypesToCollect; // @synthesize eventTypesToCollect=_eventTypesToCollect;
@property(readonly, copy) NSDictionary *filtersBySampleType; // @synthesize filtersBySampleType=_filtersBySampleType;
@property(readonly, copy) NSSet *sampleTypesToCollect; // @synthesize sampleTypesToCollect=_sampleTypesToCollect;
@property(readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009879d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098550
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000984e7
- (id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4;	// IMP=0x00000000000983ba

@end

