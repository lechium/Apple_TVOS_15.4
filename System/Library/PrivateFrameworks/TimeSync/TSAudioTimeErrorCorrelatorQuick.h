//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSAudioTimeErrorCorrelatorQuick
{
    float *_channelABuffer;	// 40 = 0x28
    float *_scratchBuffer;	// 48 = 0x30
    float *_correlationBuffer;	// 56 = 0x38
    float *_interpollationIndiciesBuffer;	// 64 = 0x40
}

- (void)dealloc;	// IMP=0x0000000000003997
- (void)_makeBlock;	// IMP=0x00000000000036ed
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;	// IMP=0x00000000000034ca

@end

