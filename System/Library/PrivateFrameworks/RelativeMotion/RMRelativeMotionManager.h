//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults, RMAudioListenerPoseManager, RMDummyData, RMDummyDataManager;
@protocol OS_dispatch_queue;

@interface RMRelativeMotionManager : NSObject
{
    RMDummyData *_dummyDataBuffer[2];	// 8 = 0x8
    int _dummyDataBufferIndex;	// 24 = 0x18
    struct os_unfair_lock_s _dummyDataBufferLock;	// 28 = 0x1c
    int _currentDummyDataBufferIndex;	// 32 = 0x20
    struct {
        CDStruct_91d2e2b9 quaternion;
        double timestamp;
        long long error;
        double consumedAuxTimestamp;
        double receivedAuxTimestamp;
        double machAbsTimestamp;
    } _audioListenerPoseBuffer[2];	// 40 = 0x28
    long long _audioListenerPoseErrorBuffer[2];	// 184 = 0xb8
    int _audioListenerPoseBufferIndex;	// 200 = 0xc8
    struct os_unfair_lock_s _audioListenerPoseBufferLock;	// 204 = 0xcc
    _Bool _shouldReceiveDummyData;	// 208 = 0xd0
    _Bool _shouldReceiveAudioListenerPose;	// 209 = 0xd1
    _Bool _verboseLatencyAnalysisLogging;	// 210 = 0xd2
    int _currentAudioListenerPoseBufferIndex;	// 212 = 0xd4
    NSDictionary *_audioListenerPoseOptions;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_queue;	// 224 = 0xe0
    RMDummyDataManager *_dummyDataManager;	// 232 = 0xe8
    NSUserDefaults *_defaults;	// 240 = 0xf0
    RMAudioListenerPoseManager *_audioListenerPoseManager;	// 248 = 0xf8
}

+ (_Bool)isAudioListenerPoseAvailable;	// IMP=0x0000000000003258
- (void).cxx_destruct;	// IMP=0x0000000000003d65
@property(retain, nonatomic) NSDictionary *audioListenerPoseOptions; // @synthesize audioListenerPoseOptions=_audioListenerPoseOptions;
- (void)dealloc;	// IMP=0x0000000000003b9f
- (id)getCurrentAudioListenerPoseWithError:(long long *)arg1;	// IMP=0x0000000000003ae8
- (long long)getCurrentAudioListenerPose:(CDStruct_91d2e2b9 *)arg1 timestamp:(double *)arg2;	// IMP=0x000000000000393d
- (void)resetAudioListenerPoseTrackingForAllClients;	// IMP=0x000000000000384f
- (void)stopReceivingAudioListenerPose;	// IMP=0x000000000000371c
- (void)startReceivingAudioListenerPoseWithStatusCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003260
- (id)getCurrentDummyData;	// IMP=0x000000000000320f
- (void)stopReceivingDummyData;	// IMP=0x000000000000314d
- (void)startReceivingDummyData;	// IMP=0x0000000000002e69
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000002b47

@end

