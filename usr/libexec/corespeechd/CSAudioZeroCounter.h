//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAudioZeroCounter : NSObject
{
    NSString *_methodToken;	// 8 = 0x8
    unsigned int _continuousZeroCounter;	// 16 = 0x10
    unsigned int _zeroCounterWinSz;	// 20 = 0x14
    unsigned int _zeroCounterWinSzForReport;	// 24 = 0x18
    unsigned int _maxContinuousZeroCount;	// 28 = 0x1c
    unsigned int _numChannels;	// 32 = 0x20
    unsigned int _analyzeStep;	// 36 = 0x24
    float _sampleRate;	// 40 = 0x28
    _Bool _shouldDeinterleaveAudio;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00200000000c293b
- (void)stopReportZeroStatistics;	// IMP=0x00100000000c289d
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;	// IMP=0x00100000000c26fa
- (void)resetWithSampleRate:(float)arg1;	// IMP=0x00100000000c2631
- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;	// IMP=0x00100000000c24d6

@end

