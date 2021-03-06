//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectVibrantColorMatrixImpl
{
    long long _systemName;	// 8 = 0x8
    struct CAColorMatrix _lightVibrantColorMatrix;	// 16 = 0x10
    struct CAColorMatrix _darkVibrantColorMatrix;	// 96 = 0x60
    UIColor *_reducedTransperancyColor;	// 176 = 0xb0
    double _alpha;	// 184 = 0xb8
    _Bool _hasDarkVariant;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000d40c9
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000d3e6a
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d3b51
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d3a3d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d3872
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d3782
- (unsigned long long)hash;	// IMP=0x00000000000d36d0
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000000d35b8
- (id)initWithLightCAColorMatrix:(struct CAColorMatrix)arg1 darkCAColorMatrix:(struct CAColorMatrix)arg2 alpha:(double)arg3;	// IMP=0x00000000000d34cd
- (id)initWithCAColorMatrix:(struct CAColorMatrix)arg1 alpha:(double)arg2;	// IMP=0x00000000000d3461
- (id)initWithSystemName:(long long)arg1;	// IMP=0x00000000000d3181

@end

