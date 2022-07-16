//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerStatAggregator : NSObject
{
    unsigned long long _numFalseWakeUp;	// 8 = 0x8
    unsigned long long _lastAggTimeFalseWakeUp;	// 16 = 0x10
}

+ (id)sharedAggregator;	// IMP=0x0040000000099620
@property(nonatomic) unsigned long long lastAggTimeFalseWakeUp; // @synthesize lastAggTimeFalseWakeUp=_lastAggTimeFalseWakeUp;
@property(nonatomic) unsigned long long numFalseWakeUp; // @synthesize numFalseWakeUp=_numFalseWakeUp;
- (void)logAudioZeroRun:(float)arg1;	// IMP=0x001000000009a0d3
- (void)logTriggerLengthSampleCountStatistics:(unsigned long long)arg1 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)arg2;	// IMP=0x0010000000099e9a
- (void)logFalseWakeUp:(_Bool)arg1;	// IMP=0x0010000000099c21
- (void)logSecondPassResult:(int)arg1 eventInfo:(id)arg2 triggerAPWakeUp:(_Bool)arg3;	// IMP=0x00100000000997ec
- (void)logAOPFirstPassTriggerWakeupLatency:(float)arg1;	// IMP=0x00100000000996b0
- (id)init;	// IMP=0x0010000000099675

@end

