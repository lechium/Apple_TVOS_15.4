//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _nextDeadline;	// 16 = 0x10
    _Bool _lastFaceMetadataValid;	// 24 = 0x18
    _Bool _unitTestSampling;	// 25 = 0x19
    int _currentState;	// 28 = 0x1c
    AWSampleLogger *_sampleLogger;	// 32 = 0x20
    CDUnknownBlockType _stateChangedCallback;	// 40 = 0x28
    unsigned long long _samplingSuppressedMask;	// 48 = 0x30
    unsigned long long _lastTriggerTime;	// 56 = 0x38
    unsigned long long _lastPositiveDetectTime;	// 64 = 0x40
    unsigned long long _lastPollTimeoutTime;	// 72 = 0x48
    double _lastPitch;	// 80 = 0x50
    double _lastYaw;	// 88 = 0x58
    double _lastRoll;	// 96 = 0x60
    unsigned long long _lastOrientation;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000f7f4
@property(readonly, nonatomic) _Bool unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;
@property(nonatomic) unsigned long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) double lastRoll; // @synthesize lastRoll=_lastRoll;
@property(nonatomic) double lastYaw; // @synthesize lastYaw=_lastYaw;
@property(nonatomic) double lastPitch; // @synthesize lastPitch=_lastPitch;
@property(nonatomic) _Bool lastFaceMetadataValid; // @synthesize lastFaceMetadataValid=_lastFaceMetadataValid;
@property(nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
- (id)initWithMask:(unsigned long long)arg1;	// IMP=0x000000000000f6d5
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x000000000000f6cc
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2;	// IMP=0x000000000000f6c3
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;	// IMP=0x000000000000f6ba
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;	// IMP=0x000000000000f6b1
- (void)finishDeadlineComputation;	// IMP=0x000000000000f65c
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x000000000000f5f8
- (void)startDeadlineComputation;	// IMP=0x000000000000f5c7
- (void)setUnitTestMode;	// IMP=0x000000000000f5a1
- (id)description;	// IMP=0x000000000000f50a
- (id)init;	// IMP=0x000000000000f46d

@end

