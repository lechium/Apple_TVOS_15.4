//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLNoiseTexture
{
    _Bool _vectorNoise;	// 539 = 0x21b
    float _smoothness;	// 540 = 0x21c
    _Bool _grayScale;	// 544 = 0x220
    float _frequency;	// 548 = 0x224
    int _noiseMode;	// 552 = 0x228
}

- (id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;	// IMP=0x00000000004764f9
- (id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(_Bool)arg5 grayscale: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000476386
- (id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;	// IMP=0x000000000047621b
- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;	// IMP=0x0000000000475b6c
- (id)_generateCellularNoiseAtLevel:(long long)arg1 selector:(SEL)arg2;	// IMP=0x0000000000475741

@end

