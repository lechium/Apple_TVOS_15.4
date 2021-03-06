//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIVibrancyEffectImpl;

@interface UIVibrancyEffect
{
    _UIVibrancyEffectImpl *_impl;	// 8 = 0x8
}

+ (id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(_Bool)arg4;	// IMP=0x00000000000d12aa
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d1055
+ (id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2;	// IMP=0x00000000000d0d09
+ (id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(_Bool)arg2;	// IMP=0x00000000000d0bfd
+ (id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;	// IMP=0x00000000000d0bb8
+ (id)vibrantChromeShadowEffect;	// IMP=0x00000000000d0b4d
+ (id)vibrantHeavyShadowEffect;	// IMP=0x00000000000d0ae2
+ (id)vibrantMediumShadowEffect;	// IMP=0x00000000000d0a77
+ (id)_vibrantShadowEffect;	// IMP=0x00000000000d09eb
+ (id)_vibrantEffectWithCAColorMatrix:(struct CAColorMatrix)arg1 alpha:(double)arg2;	// IMP=0x00000000000d094c
+ (id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3;	// IMP=0x00000000000d087a
+ (id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3;	// IMP=0x00000000000d07a8
+ (id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;	// IMP=0x00000000000d0718
+ (id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3;	// IMP=0x00000000000d0646
+ (id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3;	// IMP=0x00000000000d0574
+ (id)effectForBlurEffect:(id)arg1 style:(long long)arg2;	// IMP=0x00000000000d0562
+ (id)effectForBlurEffect:(id)arg1;	// IMP=0x00000000000d047c
- (void).cxx_destruct;	// IMP=0x00000000000d1646
@property(readonly, nonatomic, getter=_vibrancyStyle) long long _vibrancyStyle;
- (long long)_blurStyle;	// IMP=0x00000000000d160c
- (id)description;	// IMP=0x00000000000d1585
- (id)effectForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000d14d9
- (_Bool)_isAutomaticStyle;	// IMP=0x00000000000d1499
- (_Bool)_isATVStyle;	// IMP=0x00000000000d1472
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1467
- (long long)_expectedUsage;	// IMP=0x00000000000d145c
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d143f
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000d1422
- (id)effectConfigForReducedTransperancy:(_Bool)arg1;	// IMP=0x00000000000d120e
- (id)effectConfig;	// IMP=0x00000000000d11fa
- (id)effectConfigForQuality:(long long)arg1;	// IMP=0x00000000000d116e
- (id)_reduceTransparencyEffectConfig;	// IMP=0x00000000000d10f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d107a
- (unsigned long long)hash;	// IMP=0x00000000000d105d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d0fe3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d0f3a
- (id)_initWithImplementation:(id)arg1;	// IMP=0x00000000000d0eb1
- (id)init;	// IMP=0x00000000000d0d1b
- (id)_effectReplacingTintColor:(id)arg1;	// IMP=0x00000000000d0c70

@end

