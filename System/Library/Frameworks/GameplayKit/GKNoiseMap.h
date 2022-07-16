//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface GKNoiseMap : NSObject
{
    float *_map;	// 8 = 0x8
    _Bool _seamless;	// 16 = 0x10
    MISSING_TYPE *_sampleCount;	// 24 = 0x18
    NSDictionary *_gradientColors;	// 32 = 0x20
    MISSING_TYPE *_size;	// 48 = 0x30
    MISSING_TYPE *_origin;	// 64 = 0x40
}

+ (id)noiseMapWithNoise:(id)arg1 size:(_Bool)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000e633
+ (id)noiseMapWithNoise:(id)arg1;	// IMP=0x000000000000e5ce
- (void).cxx_destruct;	// IMP=0x000000000000f7e9
@property(copy, nonatomic) NSDictionary *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(readonly, nonatomic, getter=isSeamless) _Bool seamless; // @synthesize seamless=_seamless;
@property(readonly, nonatomic) MISSING_TYPE *sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly, nonatomic) MISSING_TYPE *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) MISSING_TYPE *size; // @synthesize size=_size;
- (void)setValue:(float)arg1 atPosition: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000f74a
- (float)interpolatedValueAtPosition: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000f431
- (float)valueAtPosition: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000f3ba
- (id)__colorData;	// IMP=0x000000000000ea44
- (void)dealloc;	// IMP=0x000000000000e9fd
- (id)initWithNoise:(id)arg1 size:(_Bool)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000e6ec
- (id)initWithNoise:(id)arg1;	// IMP=0x000000000000e6c5
- (id)init;	// IMP=0x000000000000e52e
- (int)mapIndexX:(int)arg1 y:(int)arg2;	// IMP=0x000000000000e521

@end

