//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fAppQueue;	// 16 = 0x10
    void *fLocationdConnection;	// 24 = 0x18
    CDUnknownBlockType fOffsetUpdateHandler;	// 32 = 0x20
    CDUnknownBlockType fCumulativeUpdateHandler;	// 40 = 0x28
    long long fStepCountFromStart;	// 48 = 0x30
    long long fPushCountFromStart;	// 56 = 0x38
    long long fStepCountOffset;	// 64 = 0x40
    long long fPushCountOffset;	// 72 = 0x48
    double fDistanceFromStart;	// 80 = 0x50
    double fDistanceOffset;	// 88 = 0x58
    int fFloorAscendedStart;	// 96 = 0x60
    int fFloorAscendedOffset;	// 100 = 0x64
    int fFloorDescendedStart;	// 104 = 0x68
    int fFloorDescendedOffset;	// 108 = 0x6c
    double fActiveTimeFromStart;	// 112 = 0x70
    double fActiveTimeOffset;	// 120 = 0x78
    double fValidStartDate;	// 128 = 0x80
    _Bool fStopUpdates;	// 136 = 0x88
    _Bool fFloorCountingAvailable;	// 137 = 0x89
    _Bool fPaceAndCadenceAvailable;	// 138 = 0x8a
    CDUnknownBlockType fEventHandler;	// 144 = 0x90
    _Bool fStopEventUpdates;	// 152 = 0x98
    int fWorkoutType;	// 156 = 0x9c
    int fElevationAscendedStart;	// 160 = 0xa0
    int fElevationAscendedOffset;	// 164 = 0xa4
    int fElevationDescendedStart;	// 168 = 0xa8
    int fElevationDescendedOffset;	// 172 = 0xac
    _Bool fElevationCountingAvailable;	// 176 = 0xb0
    int fDistanceSource;	// 180 = 0xb4
}

- (void)_queryPedometerCalibrationBinsWithHandler:(CDUnknownBlockType)arg1 forType:(long long)arg2 forRemote:(_Bool)arg3;	// IMP=0x000000000014e32d
- (id)_strideCalibrationDump;	// IMP=0x000000000014e08d
- (void)_stopPedometerEventUpdates;	// IMP=0x000000000014dec2
- (void)_startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014dcd7
- (void)_handleRecordQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;	// IMP=0x000000000014d885
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;	// IMP=0x000000000014d5be
- (void)_subscribeToCumulativePedometerUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000014d428
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014d385
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014cee5
- (void)_stopPedometerUpdates;	// IMP=0x000000000014cce2
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014c6bf
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014c63f
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000014c351
- (void)_teardown;	// IMP=0x000000000014c2c8
- (void)dealloc;	// IMP=0x000000000014c248
- (id)init;	// IMP=0x000000000014ac82

@end

