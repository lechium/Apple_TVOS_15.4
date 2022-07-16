//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CIBlendKernel
{
}

+ (id)kernelWithString:(id)arg1 extentType:(int)arg2;	// IMP=0x00000000000dd3bd
+ (id)cachedKernelWithString:(id)arg1 extentType:(int)arg2;	// IMP=0x00000000000dd2f5
+ (id)kernelWithString:(id)arg1;	// IMP=0x00000000000dd276
+ (id)plusLighter;	// IMP=0x0000000000016d52
+ (id)plusDarker;	// IMP=0x0000000000016d32
+ (id)lighterColor;	// IMP=0x0000000000016cdd
+ (id)darkerColor;	// IMP=0x0000000000016c88
+ (id)hardMix;	// IMP=0x0000000000016c33
+ (id)pinLight;	// IMP=0x0000000000016bde
+ (id)linearLight;	// IMP=0x0000000000016b89
+ (id)vividLight;	// IMP=0x0000000000016b34
+ (id)linearDodge;	// IMP=0x0000000000016adf
+ (id)linearBurn;	// IMP=0x0000000000016a8a
+ (id)divide;	// IMP=0x0000000000016a35
+ (id)subtract;	// IMP=0x00000000000169e0
+ (id)luminosity;	// IMP=0x000000000001698b
+ (id)color;	// IMP=0x0000000000016936
+ (id)saturation;	// IMP=0x00000000000168e1
+ (id)hue;	// IMP=0x000000000001688c
+ (id)exclusion;	// IMP=0x0000000000016837
+ (id)difference;	// IMP=0x00000000000167e2
+ (id)softLight;	// IMP=0x000000000001678d
+ (id)hardLight;	// IMP=0x0000000000016738
+ (id)colorBurn;	// IMP=0x00000000000166e3
+ (id)colorDodge;	// IMP=0x000000000001668e
+ (id)lighten;	// IMP=0x0000000000016639
+ (id)darken;	// IMP=0x00000000000165e4
+ (id)overlay;	// IMP=0x000000000001658f
+ (id)screen;	// IMP=0x000000000001653a
+ (id)multiply;	// IMP=0x00000000000164e5
+ (id)exclusiveOr;	// IMP=0x0000000000016490
+ (id)destinationAtop;	// IMP=0x000000000001643b
+ (id)sourceAtop;	// IMP=0x00000000000163e6
+ (id)destinationOut;	// IMP=0x0000000000016391
+ (id)sourceOut;	// IMP=0x0000000000016337
+ (id)destinationIn;	// IMP=0x00000000000162dd
+ (id)sourceIn;	// IMP=0x0000000000016283
+ (id)destinationOver;	// IMP=0x000000000001622e
+ (id)sourceOver;	// IMP=0x00000000000161d9
+ (id)destination;	// IMP=0x0000000000016184
+ (id)source;	// IMP=0x000000000001612f
+ (id)clear;	// IMP=0x000000000001610f
+ (id)componentMax;	// IMP=0x00000000000160ef
+ (id)componentMin;	// IMP=0x00000000000160ca
+ (id)componentMultiply;	// IMP=0x0000000000016070
+ (id)componentAdd;	// IMP=0x000000000001601b
- (id)applyWithForeground:(id)arg1 background:(id)arg2 colorSpace:(struct CGColorSpace *)arg3;	// IMP=0x00000000000dd8c8
- (id)applyWithForeground:(id)arg1 background:(id)arg2;	// IMP=0x00000000000dd624
- (void)setIsClearIfBackIsClear:(_Bool)arg1;	// IMP=0x00000000000dd60b
- (void)setIsClearIfForeIsClear:(_Bool)arg1;	// IMP=0x00000000000dd5f2
- (void)setIsForeIfBackIsClear:(_Bool)arg1;	// IMP=0x00000000000dd5d9
- (void)setIsBackIfForeIsClear:(_Bool)arg1;	// IMP=0x00000000000dd5c0
- (_Bool)isClearIfBackIsClear;	// IMP=0x00000000000dd5a9
- (_Bool)isClearIfForeIsClear;	// IMP=0x00000000000dd592
- (_Bool)isForeIfBackIsClear;	// IMP=0x00000000000dd57b
- (_Bool)isBackIfForeIsClear;	// IMP=0x00000000000dd564
- (void)setBlendBehaviorBit:(int)arg1 value:(_Bool)arg2;	// IMP=0x00000000000dd544
- (_Bool)getBlendBehaviorBit:(int)arg1;	// IMP=0x00000000000dd52b
- (id)initWithString:(id)arg1 extentType:(int)arg2;	// IMP=0x00000000000dd3f8
- (id)initWithString:(id)arg1;	// IMP=0x00000000000dd2ac

@end

