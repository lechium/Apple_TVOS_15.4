//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage
{
    NSArray *_images;	// 96 = 0x60
    double _duration;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000073aa89
- (void).cxx_destruct;	// IMP=0x000000000073c3dd
- (unsigned long long)hash;	// IMP=0x000000000073c38c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000073bfc3
- (struct CGSize)_sizeWithHairlineThickening:(_Bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;	// IMP=0x000000000073bf0d
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;	// IMP=0x000000000073bece
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;	// IMP=0x000000000073bca4
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;	// IMP=0x000000000073b9a7
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;	// IMP=0x000000000073b701
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000073b69c
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000073b557
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;	// IMP=0x000000000073b229
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000073b215
- (void)_setAlwaysStretches:(_Bool)arg1;	// IMP=0x000000000073b0dc
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x000000000073b06f
- (_Bool)_isResizable;	// IMP=0x000000000073b01e
- (struct CGRect)_contentRectInPixels;	// IMP=0x000000000073afb9
- (struct CGRect)_contentStretchInPixels;	// IMP=0x000000000073af54
- (long long)resizingMode;	// IMP=0x000000000073af03
- (struct UIEdgeInsets)capInsets;	// IMP=0x000000000073ae9e
- (void)_flipImageOrientationHorizontally;	// IMP=0x000000000073ad5d
- (double)duration;	// IMP=0x000000000073ad4b
- (id)images;	// IMP=0x000000000073ad36
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000073ac3e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000073aa91
- (_Bool)_isSVGVector;	// IMP=0x000000000073aa81
- (_Bool)_isPDFVector;	// IMP=0x000000000073aa79
- (id)initWithImages:(id)arg1 duration:(double)arg2;	// IMP=0x000000000073a978
- (id)_initWithOtherImage:(id)arg1;	// IMP=0x000000000073a864

@end
