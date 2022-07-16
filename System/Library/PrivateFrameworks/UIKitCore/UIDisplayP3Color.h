//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIDisplayP3Color
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000070cec1
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000070ccaa
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000070cbca
- (double)alphaComponent;	// IMP=0x000000000070cbb8
- (struct CGColor *)CGColor;	// IMP=0x000000000070cb62
- (unsigned long long)hash;	// IMP=0x000000000070cadd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000070c8a6
- (_Bool)_isDeepColor;	// IMP=0x000000000070c7f0
- (id)description;	// IMP=0x000000000070c752
- (id)colorSpaceName;	// IMP=0x000000000070c745
- (void)setStroke;	// IMP=0x000000000070c6fa
- (void)setFill;	// IMP=0x000000000070c6af
- (void)set;	// IMP=0x000000000070c64c
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x000000000070c524
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000070c486
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000070c47b
- (void)dealloc;	// IMP=0x000000000070c43a
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070c2e4

@end
