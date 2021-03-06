//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUICatalog, CUINamedLookup, NSDictionary;

@interface CUINamedVectorGlyph
{
    double _pointSize;	// 56 = 0x38
    double _lookedupScaleFactor;	// 64 = 0x40
    struct CGImage *_cgImageRef;	// 72 = 0x48
    double _fontMatchingScaleFactor;	// 80 = 0x50
    CUICatalog *_catalog;	// 88 = 0x58
    long long _layoutDirection;	// 96 = 0x60
    unsigned int _generatedImage:1;	// 104 = 0x68
    unsigned int _flippable:1;	// 104 = 0x68
    unsigned int _canUsePathConcatenation:1;	// 104 = 0x68
    long long _glyphSize;	// 112 = 0x70
    long long _glyphWeight;	// 120 = 0x78
    CUINamedLookup *_ultralightInterpolationSource;	// 128 = 0x80
    CUINamedLookup *_blackInterpolationSource;	// 136 = 0x88
    struct CGPath *_templatePath;	// 144 = 0x90
    NSDictionary *_multicolorPaths;	// 152 = 0x98
    NSDictionary *_hierarchicalPaths;	// 160 = 0xa0
}

+ (id)_layerHierarchyStyleNames;	// IMP=0x000000000000a59c
+ (id)_knockoutStyleNames;	// IMP=0x000000000000a583
+ (id)_colorStyleNames;	// IMP=0x000000000000a53d
- (void).cxx_destruct;	// IMP=0x000000000000ab00
- (id)debugDescription;	// IMP=0x000000000000a90c
- (id)colorNameForRenderingStyle:(id)arg1;	// IMP=0x000000000000a8a4
- (id)_layersForRenderingMode:(int)arg1 inRendition:(id)arg2;	// IMP=0x000000000000a618
- (id)_stylePrefixForRenderingMode:(int)arg1;	// IMP=0x000000000000a5e2
- (id)_referencePathsForHierarchicalMode;	// IMP=0x0000000000009e19
- (id)_referencePathsForMulticolorMode;	// IMP=0x00000000000094e8
- (struct CGPath *)_referencePathForTemplateMode;	// IMP=0x00000000000091fe
- (void)_drawHierarchicalLayersInContext:(struct CGContext *)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize)arg3 colorResolver:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008d85
- (void)_drawHierarchicalLayerNamed:(id)arg1 inContext:(struct CGContext *)arg2 colorResolver:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008a41
- (void)_drawMulticolorLayersInContext:(struct CGContext *)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize)arg3 colorResolver:(CDUnknownBlockType)arg4;	// IMP=0x00000000000087a9
- (void)_drawMulticolorLayerNamed:(id)arg1 inContext:(struct CGContext *)arg2 colorResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000000083ba
- (void)drawInContext:(struct CGContext *)arg1 withPaletteColors:(id)arg2;	// IMP=0x00000000000078c1
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withPaletteColors:(id)arg3;	// IMP=0x0000000000007621
- (struct CGImage *)imageWithPaletteColors:(id)arg1;	// IMP=0x0000000000007345
- (void)drawHierarchyLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007151
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withHierarchyColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000000701a
- (struct CGImage *)imageWithHierarchyColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006fbc
- (id)hierarchyLayers;	// IMP=0x0000000000006d0b
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x0000000000006bd5
- (id)multicolorColorNames;	// IMP=0x0000000000006922
- (_Bool)containsNamedColorStyle:(id)arg1;	// IMP=0x00000000000065f9
- (_Bool)containsNamedColorStyles;	// IMP=0x00000000000064d5
- (void)drawMulticolorLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext *)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006284
- (id)makeLayerWithColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x000000000000619a
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2 withColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005fe6
- (struct CGImage *)imageWithColorResolver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005f64
- (unsigned long long)numberOfMulticolorLayers;	// IMP=0x0000000000005e45
- (const struct CGPath *)CGPath;	// IMP=0x0000000000005d15
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000005be3
- (struct CGImage *)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize)arg2;	// IMP=0x00000000000056ee
- (struct CGImage *)image;	// IMP=0x00000000000055d5
- (_Bool)generatedImage;	// IMP=0x00000000000055c3
@property(readonly, nonatomic) float templateVersion;
@property(nonatomic) double fontMatchingScaleFactor;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) struct CGRect contentBoundsUnrounded;
@property(readonly, nonatomic) struct CGRect alignmentRect;
@property(readonly, nonatomic) struct CGRect alignmentRectUnrounded;
- (long long)layoutDirection;	// IMP=0x000000000000478f
- (id)knownAvailableVectorSizes;	// IMP=0x0000000000004764
@property(readonly, nonatomic) _Bool isFlippable;
- (struct CGSize)referenceCanvasSize;	// IMP=0x0000000000004620
- (double)referencePointSize;	// IMP=0x00000000000045f5
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double capHeightUnrounded;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) double baselineOffsetUnrounded;
- (double)_requestedPointSizeRatio;	// IMP=0x0000000000004071
- (double)pointSize;	// IMP=0x000000000000405f
- (long long)glyphWeight;	// IMP=0x000000000000404e
- (long long)glyphSize;	// IMP=0x000000000000403d
- (double)scale;	// IMP=0x000000000000402b
- (struct CGSVGDocument *)referenceGlyph;	// IMP=0x0000000000003eb9
- (void)setRepresentsOnDemandContent:(_Bool)arg1;	// IMP=0x0000000000003e47
- (void)dealloc;	// IMP=0x0000000000003db3
- (void)_lookupCatalogImageForIdiom:(long long)arg1;	// IMP=0x0000000000003b41
- (id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7;	// IMP=0x0000000000003994
- (id)intWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 weight:(long long)arg5 glyphSize:(long long)arg6 interpolatedFromRegular:(id)arg7 ultralight:(id)arg8 black:(id)arg9 fromCatalog:(id)arg10 themeRef:(unsigned long long)arg11;	// IMP=0x0000000000003718
- (CDStruct_3c058996)_interpolatedAlignmentRectInsetsWithWeight:(long long)arg1 glyphSize:(long long)arg2 fromUltralight:(CDStruct_3c058996)arg3 regular:(CDStruct_3c058996)arg4 black:(CDStruct_3c058996)arg5;	// IMP=0x0000000000077c3d
- (struct CGSize)_interpolatedCanvasSizeWithWeight:(long long)arg1 glyphSize:(long long)arg2 fromUltralight:(struct CGSize)arg3 regular:(struct CGSize)arg4 black:(struct CGSize)arg5;	// IMP=0x0000000000077b70
- (double)_interpolatedCapHeightWithWeight:(long long)arg1 glyphSize:(long long)arg2 fromUltralight:(double)arg3 regular:(double)arg4 black:(double)arg5;	// IMP=0x0000000000077b14
- (double)_interpolatedBaselineOffsetWithWeight:(long long)arg1 glyphSize:(long long)arg2 fromUltralight:(double)arg3 regular:(double)arg4 black:(double)arg5;	// IMP=0x0000000000077a5b
- (struct CGPath *)_interpolatedPathWithWeight:(long long)arg1 glyphSize:(long long)arg2 fromUltralightSmall:(struct CGPath *)arg3 regularSmall:(struct CGPath *)arg4 blackSmall:(struct CGPath *)arg5;	// IMP=0x0000000000077973

@end

