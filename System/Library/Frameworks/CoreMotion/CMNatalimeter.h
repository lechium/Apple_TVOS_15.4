//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject
{
    CMNatalimeterInternal *_internal;	// 8 = 0x8
}

+ (double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3;	// IMP=0x0000000000125ee0
+ (id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000125ca8
+ (id)maxNatalieEntries;	// IMP=0x0000000000125c8f
+ (_Bool)isNatalimeterAvailable;	// IMP=0x0000000000125842
+ (_Bool)resetCalibrationDataWithError:(id *)arg1;	// IMP=0x0000000000125497
+ (_Bool)setUserInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012528f
+ (_Bool)setUserProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000124f95
+ (id)defaultUserProfile;	// IMP=0x0000000000124eb5
+ (id)userProfile;	// IMP=0x0000000000124c83
+ (double)activeMetsThreshold;	// IMP=0x0000000000124c75
+ (double)briskMinuteMetsThreshold;	// IMP=0x0000000000124c67
@property(readonly, nonatomic) CMNatalimeterInternal *_internal; // @synthesize _internal;
- (void)stopAbsoluteNatalimetryDataUpdates;	// IMP=0x0000000000125c0a
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000125b0c
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000125981
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000125874
- (void)dealloc;	// IMP=0x0000000000124bd4
- (id)init;	// IMP=0x0000000000124b88

@end
