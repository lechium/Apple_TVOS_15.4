//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSAccelerometer, NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent
{
    BKSAccelerometer *_motionAccelerometer;	// 32 = 0x20
    long long _subtype;	// 40 = 0x28
    int _shakeState;	// 48 = 0x30
    long long _stateMachineState;	// 56 = 0x38
    double _shakeStartTime;	// 64 = 0x40
    double _lastMovementTime;	// 72 = 0x48
    double _highLevelTime;	// 80 = 0x50
    double _lowEndTimeout;	// 88 = 0x58
    NSTimer *_idleTimer;	// 96 = 0x60
    _Bool _sentMotionBegan;	// 104 = 0x68
    float _lowPassState[10];	// 108 = 0x6c
    unsigned long long _lowPassStateIndex;	// 152 = 0x98
    unsigned long long _highPassStateIndex;	// 160 = 0xa0
    float _highPassState[2];	// 168 = 0xa8
    int notifyToken;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000be3e11
@property(nonatomic) int shakeState; // @synthesize shakeState=_shakeState;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;	// IMP=0x0000000000be3d73
- (void)_enablePeakDetectionIfNecessary;	// IMP=0x0000000000be3ce9
- (int)_shakeState;	// IMP=0x0000000000be3cd9
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;	// IMP=0x0000000000be3b8c
- (float)_lowPass:(float)arg1;	// IMP=0x0000000000be3b27
- (void)_resetLowPassState;	// IMP=0x0000000000be3afc
- (float)_highPass:(float)arg1;	// IMP=0x0000000000be3abc
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be3968
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x0000000000be37af
- (void)_idleTimerFired;	// IMP=0x0000000000be36d3
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;	// IMP=0x0000000000be3605
- (_Bool)_isDetectingMotionEvents;	// IMP=0x0000000000be35e8
- (_Bool)_detectWhenNotActive;	// IMP=0x0000000000be35a8
- (void)_updateAccelerometerEnabled;	// IMP=0x0000000000be3516
- (void)_willSuspend;	// IMP=0x0000000000be34b5
- (void)_willResume;	// IMP=0x0000000000be3493
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000be3423
- (id)_windows;	// IMP=0x0000000000be33b9
- (id)description;	// IMP=0x0000000000be3308
- (void)_setSubtype:(long long)arg1;	// IMP=0x0000000000be32f7
- (long long)subtype;	// IMP=0x0000000000be32e6
- (long long)type;	// IMP=0x0000000000be32db
- (void)dealloc;	// IMP=0x0000000000be323e
- (id)_init;	// IMP=0x0000000000be2ff4

@end
