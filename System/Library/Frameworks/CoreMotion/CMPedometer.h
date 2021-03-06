//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMPedometerProxy;

@interface CMPedometer : NSObject
{
    CMPedometerProxy *_pedometerProxy;	// 8 = 0x8
}

+ (long long)authorizationStatus;	// IMP=0x000000000014ec4b
+ (_Bool)isAllDayElevationAvailable;	// IMP=0x000000000014ec2c
+ (_Bool)isPedometerEventTrackingAvailable;	// IMP=0x000000000014ec09
+ (_Bool)isCadenceAvailable;	// IMP=0x000000000014ebe3
+ (_Bool)isPaceAvailable;	// IMP=0x000000000014eba4
+ (_Bool)isFloorCountingAvailable;	// IMP=0x000000000014eb86
+ (_Bool)isDistanceAvailable;	// IMP=0x000000000014eb60
+ (_Bool)isStepCountingAvailable;	// IMP=0x000000000014eb21
@property(readonly, nonatomic) CMPedometerProxy *pedometerProxy; // @synthesize pedometerProxy=_pedometerProxy;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001506eb
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000150650
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001505b5
- (void)queryRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015051d
- (id)strideCalibrationDump;	// IMP=0x00000000001504f2
- (_Bool)sendStrideCalibrationHistoryToFile:(id)arg1;	// IMP=0x000000000014f5a9
- (void)stopPedometerEventUpdates;	// IMP=0x000000000014f524
- (void)startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014f426
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014f2c9
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014f262
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014f222
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014f0eb
- (id)_pedometerDataWithRecordID:(long long)arg1;	// IMP=0x000000000014f06f
- (void)stopPedometerUpdates;	// IMP=0x000000000014efea
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014ee7f
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014ec64
- (void)dealloc;	// IMP=0x000000000014ea46
- (id)init;	// IMP=0x000000000014e9fa

@end

