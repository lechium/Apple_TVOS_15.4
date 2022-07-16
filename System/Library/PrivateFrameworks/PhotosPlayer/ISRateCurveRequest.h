//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISAVPlayer;

__attribute__((visibility("hidden")))
@interface ISRateCurveRequest : NSObject
{
    double _startTime;	// 8 = 0x8
    CDStruct_1b6d18a9 _startVideoTime;	// 16 = 0x10
    _Bool _cancelled;	// 40 = 0x28
    id _boundaryObserver;	// 48 = 0x30
    double _stepInterval;	// 56 = 0x38
    long long _stepIndex;	// 64 = 0x40
    float _initialRate;	// 72 = 0x48
    double _duration;	// 80 = 0x50
    ISAVPlayer *_avPlayer;	// 88 = 0x58
    CDUnknownBlockType _progressHandler;	// 96 = 0x60
    CDStruct_1b6d18a9 _targetTime;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000002cfb
@property(readonly, copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) __weak ISAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) float initialRate; // @synthesize initialRate=_initialRate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 targetTime; // @synthesize targetTime=_targetTime;
- (void)_stopObservingPlayer;	// IMP=0x0000000000002c46
- (void)dealloc;	// IMP=0x0000000000002c08
- (void)cancel;	// IMP=0x0000000000002bf2
- (void)_didReachTargetTime;	// IMP=0x0000000000002a5e
- (void)_stepDownRate;	// IMP=0x00000000000027c1
- (void)start;	// IMP=0x00000000000024fd
- (id)initWithTargetTime:(CDStruct_1b6d18a9)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002428

@end
