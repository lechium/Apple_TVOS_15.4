//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject
{
    long long _numberOfSamples;	// 8 = 0x8
    long long _maxMeasurements;	// 16 = 0x10
    long long _measurementsInBuffer;	// 24 = 0x18
    const float *_channelASamples;	// 32 = 0x20
    const float *_channelBSamples;	// 40 = 0x28
    double *_sampleTimestamps;	// 48 = 0x30
    double *_timeErrors;	// 56 = 0x38
    _Bool _calculatedTimeError;	// 64 = 0x40
    long long _interval;	// 72 = 0x48
    long long _correlationLength;	// 80 = 0x50
    long long _upscaleFactor;	// 88 = 0x58
    double _samplingRate;	// 96 = 0x60
    long long _correlationType;	// 104 = 0x68
    _Bool _noCopy;	// 112 = 0x70
}

- (void)dealloc;	// IMP=0x0000000000005137
- (_Bool)exportTimeErrorToPath:(id)arg1;	// IMP=0x0000000000005078
- (_Bool)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2;	// IMP=0x0000000000004fad
- (_Bool)exportTimeErrorToDirectoryURL:(id)arg1;	// IMP=0x0000000000004f94
@property(readonly, copy, nonatomic) NSArray *timeErrors; // @dynamic timeErrors;
@property(readonly, copy, nonatomic) NSArray *audioTimeErrors; // @dynamic audioTimeErrors;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3;	// IMP=0x00000000000049e4
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2;	// IMP=0x00000000000049cf
- (void)calculateTimeErrorWithThreadingOption:(long long)arg1;	// IMP=0x00000000000049b1
- (void)calculateTimeError;	// IMP=0x000000000000499d
- (void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3;	// IMP=0x000000000000488d
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;	// IMP=0x0000000000004778
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;	// IMP=0x000000000000474c
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;	// IMP=0x00000000000045f5
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;	// IMP=0x00000000000045c9

@end

