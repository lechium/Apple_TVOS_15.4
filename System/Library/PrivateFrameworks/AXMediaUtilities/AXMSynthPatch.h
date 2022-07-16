//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXMSynthPatch : NSObject
{
    double _baseFrequency;	// 8 = 0x8
    double _baseAmplitude;	// 16 = 0x10
    double *_harmonics;	// 24 = 0x18
    double *_amplitudes;	// 32 = 0x20
    long long _n;	// 40 = 0x28
    NSArray *_harmonicInfos;	// 48 = 0x30
}

+ (id)trapeziumPatch;	// IMP=0x000000000001cf98
+ (id)violinPatch;	// IMP=0x000000000001cbfb
+ (id)sawPatch;	// IMP=0x000000000001ca71
+ (id)trianglePatch;	// IMP=0x000000000001c8e2
+ (id)squarePatch;	// IMP=0x000000000001c757
+ (id)sinePatch;	// IMP=0x000000000001c72e
+ (id)defaultPatch;	// IMP=0x000000000001c71c
- (void).cxx_destruct;	// IMP=0x000000000001d4f3
@property(copy, nonatomic) NSArray *harmonicInfos; // @synthesize harmonicInfos=_harmonicInfos;
- (void)dealloc;	// IMP=0x000000000001d4a6
- (double)waveformValueForPhase:(double)arg1 frequency:(double)arg2 amplitude:(double)arg3;	// IMP=0x000000000001d3e1
- (id)initWithHarmonics:(id)arg1;	// IMP=0x000000000001c6b4

@end

