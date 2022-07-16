//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString, UIFontDescriptor;

@interface UIFont : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)_fontWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d87c0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d867b
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x00000000000d83f7
+ (void)_setSystemFontSize:(double)arg1;	// IMP=0x00000000000d7f72
+ (double)systemFontSize;	// IMP=0x00000000000d7f64
+ (void)_setSmallSystemFontSize:(double)arg1;	// IMP=0x00000000000d7f56
+ (double)smallSystemFontSize;	// IMP=0x00000000000d7f48
+ (void)_setButtonFontSize:(double)arg1;	// IMP=0x00000000000d7f3a
+ (double)buttonFontSize;	// IMP=0x00000000000d7f2c
+ (void)_setLabelFontSize:(double)arg1;	// IMP=0x00000000000d7f1e
+ (double)labelFontSize;	// IMP=0x00000000000d7f10
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d7ee9
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d7ebe
+ (id)monospacedSystemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d7e96
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;	// IMP=0x00000000000d7e78
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;	// IMP=0x00000000000d7e50
+ (id)_ultraLightSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7e2a
+ (id)_lightSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7e04
+ (id)_thinSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7dde
+ (id)italicSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7dc7
+ (id)boldSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7db0
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7d8a
+ (id)_opticalSystemFontOfSize:(double)arg1;	// IMP=0x00000000000d7d67
+ (id)systemFontOfSize:(double)arg1;	// IMP=0x00000000000d7d53
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;	// IMP=0x00000000000d7d30
+ (id)fontWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d7d1c
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;	// IMP=0x00000000000d7cfb
+ (id)ib_preferredFontForTextStyle:(id)arg1;	// IMP=0x00000000000d6d87
+ (id)defaultFontForTextStyle:(id)arg1;	// IMP=0x00000000000d6d69
+ (double)_readableWidth;	// IMP=0x00000000000d6ba4
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4 roundSize:(_Bool)arg5;	// IMP=0x00000000000d696d
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x00000000000d6952
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x00000000000d66a1
+ (id)_supportedDynamicFontStyles;	// IMP=0x00000000000d6040
+ (_Bool)_isSupportedDynamicFontTextStyle:(id)arg1;	// IMP=0x00000000000d5fdb
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(id)arg3 symbolicTraits:(unsigned int)arg4 maximumContentSizeCategory:(id)arg5 compatibleWithTraitCollection:(id)arg6 pointSize:(double)arg7 pointSizeForScaling:(double)arg8;	// IMP=0x00000000000d5e95
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;	// IMP=0x00000000000d5e2c
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 design:(id)arg3 weight:(double)arg4;	// IMP=0x00000000000d5dc2
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 weight:(double)arg3;	// IMP=0x00000000000d5d60
+ (id)_preferredFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;	// IMP=0x00000000000d5d30
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3;	// IMP=0x00000000000d5ccd
+ (id)_preferredFontForTextStyle:(id)arg1 weight:(double)arg2;	// IMP=0x00000000000d5c72
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5 pointSize:(double)arg6 pointSizeForScaling:(double)arg7;	// IMP=0x00000000000d5c11
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 maximumContentSizeCategory:(id)arg4 compatibleWithTraitCollection:(id)arg5;	// IMP=0x00000000000d5bf6
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x00000000000d5bd4
+ (id)_preferredFontForTextStyle:(id)arg1 design:(id)arg2 variant:(long long)arg3;	// IMP=0x00000000000d5bae
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;	// IMP=0x00000000000d5b83
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;	// IMP=0x00000000000d5b58
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x00000000000d5ae0
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;	// IMP=0x00000000000d5acb
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;	// IMP=0x00000000000d5aaf
+ (id)preferredFontForUsage:(id)arg1;	// IMP=0x00000000000d5a94
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00000000000d5a44
+ (id)preferredFontForTextStyle:(id)arg1;	// IMP=0x00000000000d58ab
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;	// IMP=0x00000000000d5769
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(_Bool)arg6 legibilityWeight:(long long)arg7;	// IMP=0x00000000000d544f
+ (id)fontNamesForFamilyName:(id)arg1;	// IMP=0x00000000000d5379
+ (id)familyNames;	// IMP=0x00000000000d535f
+ (id)fontWithMarkupDescription:(id)arg1;	// IMP=0x00000000000d5329
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;	// IMP=0x00000000000d5317
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;	// IMP=0x00000000000d52d9
+ (id)_sharedFontCache;	// IMP=0x00000000000d5294
+ (id)_sharedZeroPointFont;	// IMP=0x00000000000d5227
+ (id)userFontOfSize:(double)arg1;	// IMP=0x00000000000d8ba1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8b72
- (id)description;	// IMP=0x00000000000d8ae1
- (id)verticalFont;	// IMP=0x00000000000d8ad8
- (_Bool)isVertical;	// IMP=0x00000000000d8ace
- (_Bool)isFixedPitch;	// IMP=0x00000000000d8abd
- (_Bool)isSystemFont;	// IMP=0x00000000000d8aa3
- (double)_leading;	// IMP=0x00000000000d8a99
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
- (double)_ascenderDeltaForBehavior:(long long)arg1;	// IMP=0x00000000000d8a7c
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
- (int)traits;	// IMP=0x00000000000d893a
- (double)_defaultLineHeightForUILayout;	// IMP=0x00000000000d8928
- (double)_baseLineHeightForFont:(_Bool)arg1;	// IMP=0x00000000000d88d2
- (_Bool)_isHiraginoFont;	// IMP=0x00000000000d88ca
- (_Bool)__isSystemFont;	// IMP=0x00000000000d88b0
- (unsigned long long)mostCompatibleStringEncoding;	// IMP=0x00000000000d8891
- (id)_kernOverride;	// IMP=0x00000000000d8889
- (unsigned long long)renderingMode;	// IMP=0x00000000000d887e
@property(readonly, nonatomic) UIFontDescriptor *fontDescriptor;
@property(readonly, nonatomic) double pointSize;
@property(readonly, nonatomic) NSString *familyName;
@property(readonly, nonatomic) NSString *fontName;
- (id)fontWithSize:(double)arg1;	// IMP=0x00000000000d86b2
- (double)_bodyLeading;	// IMP=0x00000000000d8683
- (Class)classForCoder;	// IMP=0x00000000000d866a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d8404
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d7f88
- (_Bool)_isUIFont;	// IMP=0x00000000000d7f80
- (id)_fontScaledByScaleFactor:(double)arg1;	// IMP=0x00000000000d7c84
- (id)htmlMarkupDescription;	// IMP=0x00000000000d7c1f
- (id)markupDescription;	// IMP=0x00000000000d7be1
- (id)markupDescriptionForWebKit:(_Bool)arg1 pointSize:(float)arg2 sizeUnit:(id)arg3;	// IMP=0x00000000000d7b39
- (id)familyNameForCSSFontFamilyValueForWebKit:(_Bool)arg1;	// IMP=0x00000000000d7a23
- (id)initWithMarkupDescription:(id)arg1;	// IMP=0x00000000000d70f0
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;	// IMP=0x00000000000d708d
- (id)initWithName:(id)arg1 size:(double)arg2;	// IMP=0x00000000000d702f
- (double)_scaledValueForValue:(double)arg1;	// IMP=0x00000000000d6e3c
- (id)_textStyle;	// IMP=0x00000000000d6e32
- (_Bool)_isTextStyleFont;	// IMP=0x00000000000d6e28
- (double)readableWidth;	// IMP=0x00000000000d69f4
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(_Bool)arg4;	// IMP=0x00000000000d677a
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;	// IMP=0x00000000000d6252
- (id)_fontAdjustedForCurrentContentSizeCategory;	// IMP=0x00000000000d623e
@property(readonly, nonatomic) double maximumPointSizeAfterScaling;
@property(readonly, nonatomic) double pointSizeForScaling;
@property(readonly, nonatomic) NSString *textStyleForScaling;
- (_Bool)isIBFontMetricsScaledFont;	// IMP=0x00000000000d61ae
- (_Bool)isIBTextStyleFont;	// IMP=0x00000000000d616b
- (id)_alternateSystemFonts;	// IMP=0x00000000000d57dc
- (id)init;	// IMP=0x00000000000d51f8
- (_Bool)_hasColorGlyphs;	// IMP=0x00000000000d92b9
- (id)lastResortFont;	// IMP=0x00000000000d9280
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long *)arg4;	// IMP=0x00000000000d91ef
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d91cd
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;	// IMP=0x00000000000d919c
- (_Bool)_getLatin1Glyphs:(const unsigned short **)arg1 advanceWidths:(const double **)arg2;	// IMP=0x00000000000d918c
- (id)_familyName;	// IMP=0x00000000000d917a
- (unsigned long long)getCaretPositions:(double *)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;	// IMP=0x00000000000d9128
- (unsigned int)hyphenGlyphForLocale:(id)arg1;	// IMP=0x00000000000d90d5
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;	// IMP=0x00000000000d90cc
- (struct CGSize)advancementForGlyph:(unsigned short)arg1;	// IMP=0x00000000000d9068
- (double)underlineThickness;	// IMP=0x00000000000d905e
- (double)underlinePosition;	// IMP=0x00000000000d8f96
- (struct CGRect)boundingRectForFont;	// IMP=0x00000000000d8f7e
- (struct CGFont *)_backingCGSFont;	// IMP=0x00000000000d8f6a
- (void)getVerticalOriginTranslations:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d8e01
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000d8dea
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long long)arg2;	// IMP=0x00000000000d8dc4
- (void)setInContext:(struct CGContext *)arg1;	// IMP=0x00000000000d8d7c
- (void)applyToGraphicsContext:(id)arg1;	// IMP=0x00000000000d8c9d
- (struct CGAffineTransform)_textMatrixTransformForContext:(id)arg1;	// IMP=0x00000000000d8bd3
- (unsigned short)glyphWithName:(id)arg1;	// IMP=0x00000000000d8bc6
- (unsigned long long)numberOfGlyphs;	// IMP=0x00000000000d8bbc
- (struct __CTFont *)CTFont;	// IMP=0x00000000000d8bb3
- (_Bool)_isDefaultFace;	// IMP=0x00000000000d8b97
- (id)coveredCharacterSet;	// IMP=0x00000000000d8b7d

@end

