//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject
{
    double _elapsedTime;	// 8 = 0x8
    NSDate *_snapshotDate;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    unsigned long long _activityType;	// 32 = 0x20
}

+ (id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1;	// IMP=0x00000000001dbb75
- (void).cxx_destruct;	// IMP=0x000000000001788d
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;	// IMP=0x00000000001dbcc7
- (double)durationForDate:(id)arg1;	// IMP=0x00000000001dbc7e
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4;	// IMP=0x00000000001dbae5

@end
