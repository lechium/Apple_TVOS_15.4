//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNProcessorCreating-Protocol.h>

@class NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintFeatureExtractorConfiguration : NSObject <SNProcessorCreating>
{
    id <SNMLModel> _model;	// 8 = 0x8
    unsigned int _windowLengthFrames;	// 16 = 0x10
    unsigned int _stepSizeFrames;	// 20 = 0x14
    unsigned int _outputFeatureSize;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001f549
@property(readonly) unsigned int outputFeatureSize; // @synthesize outputFeatureSize=_outputFeatureSize;
@property(readonly) unsigned int stepSizeFrames; // @synthesize stepSizeFrames=_stepSizeFrames;
@property(readonly) unsigned int windowLengthFrames; // @synthesize windowLengthFrames=_windowLengthFrames;
@property(readonly) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly) id <SNMLModel> model; // @synthesize model=_model;
- (id)createProcessorWithError:(id *)arg1;	// IMP=0x000000000001f4d9
- (_Bool)isEqualToSoundPrintFeatureExtractorConfiguration:(id)arg1;	// IMP=0x000000000001f488
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f415
@property(readonly) unsigned long long hash;
- (id)initWithModel:(id)arg1 overlapFactor:(double)arg2;	// IMP=0x000000000001ed4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

