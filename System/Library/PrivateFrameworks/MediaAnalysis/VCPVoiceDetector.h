//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVoiceDetector : NSObject
{
    NSDictionary *_model;	// 8 = 0x8
    struct AudioStreamBasicDescription _audioStream;	// 16 = 0x10
    int _sampleBatchSize;	// 56 = 0x38
    CDStruct_1b6d18a9 _trackStart;	// 60 = 0x3c
    _Bool _voiceActivity;	// 84 = 0x54
    CDStruct_1b6d18a9 _voiceStart;	// 88 = 0x58
    NSMutableArray *_voiceDetections;	// 112 = 0x70
    NSMutableArray *_utteranceDetections;	// 120 = 0x78
    NSMutableArray *_musicDetections;	// 128 = 0x80
}

+ (id)detector;	// IMP=0x000000000023ee8d
- (void).cxx_destruct;	// IMP=0x000000000023f475
@property(retain) NSMutableArray *voiceDetections; // @synthesize voiceDetections=_voiceDetections;
- (id)results;	// IMP=0x000000000023f44a
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x000000000023f43f
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x000000000023f434
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x000000000023f429
- (int)loadModel;	// IMP=0x000000000023f41e
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;	// IMP=0x000000000023f37f
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 result:(id)arg3;	// IMP=0x000000000023f0b8
- (id)audioFormatRequirements;	// IMP=0x000000000023efaa
- (id)init;	// IMP=0x000000000023eea6

@end

