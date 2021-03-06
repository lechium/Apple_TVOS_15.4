//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSItemProviderReading-Protocol.h>
#import <UIKitCore/NSItemProviderWriting-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIMenuImageOrName-Protocol.h>

@class CIImage, NSArray, NSMapTable, NSString, UIGraphicsImageRendererFormat, UIImageAsset, UIImageConfiguration, UIImageSymbolConfiguration, UITraitCollection, _UIImageContent;

@interface UIImage : NSObject <NSItemProviderReading, NSItemProviderWriting, _UIMenuImageOrName, NSCopying, NSSecureCoding>
{
    NSMapTable *_siblingImages;	// 8 = 0x8
    UIImageConfiguration *_configuration;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 24 = 0x18
    struct CGSize _sizeInPixels;	// 56 = 0x38
    double _baselineOffsetFromBottom;	// 72 = 0x48
    double _capHeight;	// 80 = 0x50
    struct {
        unsigned int named:1;
        unsigned int asksContentForImageOrientation:1;
        unsigned int imageOrientation:3;
        unsigned int cached:1;
        unsigned int hasPattern:1;
        unsigned int isCIImage:1;
        unsigned int renderingMode:2;
        unsigned int suppressesAccessibilityHairlineThickening:1;
        unsigned int isSymbolConfiguration:1;
        unsigned int hasBaseline:1;
        unsigned int isBaselineExplicit:1;
        unsigned int areContentInsetsExplicit:1;
        unsigned int areAlignmentRectInsetsExplicit:1;
        unsigned int flipsForRightToLeftLayoutDirection:1;
        unsigned int hasCapHeight:1;
    } _imageFlags;	// 88 = 0x58
    UIImageAsset *_imageAsset;	// 96 = 0x60
    _UIImageContent *_content;	// 104 = 0x68
    struct UIEdgeInsets _alignmentRectInsets;	// 112 = 0x70
}

+ (id)_noiseImage;	// IMP=0x0000000000748fa3
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000747b85
+ (id)_deviceSpecificImageNamed:(id)arg1;	// IMP=0x0000000000747ab8
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000747742
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(_Bool)arg5;	// IMP=0x0000000000747624
+ (id)_defaultBackgroundGradient;	// IMP=0x000000000074752c
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;	// IMP=0x0000000000747362
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithFont:(id)arg3 traitCollection:(id)arg4 inBundle:(id)arg5;	// IMP=0x0000000000746920
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithFont:(id)arg3;	// IMP=0x0000000000746740
+ (id)preferredSymbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithTextStyle:(id)arg3 traitCollection:(id)arg4 inBundle:(id)arg5;	// IMP=0x00000000007464e1
+ (id)preferredSymbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithTextStyle:(id)arg3;	// IMP=0x0000000000746301
+ (id)preferredSymbolImageNamed:(id)arg1;	// IMP=0x0000000000746143
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 weight:(long long)arg3 compatibleWithFontSize:(double)arg4 traitCollection:(id)arg5 inBundle:(id)arg6;	// IMP=0x0000000000745ef3
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 weight:(long long)arg3 compatibleWithFontSize:(double)arg4;	// IMP=0x0000000000745d23
+ (id)symbolImageNamed:(id)arg1;	// IMP=0x0000000000745ba3
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000745ac8
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;	// IMP=0x0000000000745ab8
+ (id)kitImageNamed:(id)arg1;	// IMP=0x0000000000745a9d
+ (_Bool)_isCGImageAlphaMask:(struct CGImage *)arg1;	// IMP=0x000000000074596f
+ (void)_dropResourceReferencesForURL:(id)arg1;	// IMP=0x00000000007458eb
+ (void)_clearAssetCaches;	// IMP=0x00000000007458e5
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000744041
+ (id)_animatedResizableImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 capInsets:(struct UIEdgeInsets)arg4 resizingMode:(long long)arg5 duration:(double)arg6;	// IMP=0x0000000000743fa6
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 resizingMode:(long long)arg3 duration:(double)arg4;	// IMP=0x0000000000743f82
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 duration:(double)arg3;	// IMP=0x0000000000743f67
+ (id)_animatedImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000743bb5
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000743b9e
+ (struct UIEdgeInsets)_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2 traitCollection:(id)arg3;	// IMP=0x00000000007413d1
+ (id)_imageWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000740ee4
+ (id)_imageWithCGSVGDocument:(struct CGSVGDocument *)arg1;	// IMP=0x0000000000740eb5
+ (id)_imageWithCGPDFPage:(struct CGPDFPage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000740cad
+ (id)_imageWithCGPDFPage:(struct CGPDFPage *)arg1;	// IMP=0x0000000000740c7e
+ (long long)_mirroredImageOrientationForOrientation:(long long)arg1;	// IMP=0x0000000000740a74
+ (struct CGSize)_applyOrientation:(long long)arg1 toContentSizeInPixels:(struct CGSize)arg2;	// IMP=0x00000000007408a3
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000073f444
+ (void)_loadImageFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000073eb11
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x000000000073eaab
+ (id)imageWithCIImage:(id)arg1;	// IMP=0x000000000073ea5e
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x000000000073ea11
+ (id)imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x000000000073e9db
+ (id)imageWithData:(id)arg1 scale:(double)arg2;	// IMP=0x000000000073e97c
+ (id)imageWithData:(id)arg1;	// IMP=0x000000000073e92f
+ (id)imageWithContentsOfFile:(id)arg1;	// IMP=0x000000000073e8e2
+ (id)_generateCompositedSymbolImageForAsset:(id)arg1 usingLayers:(id)arg2 configuration:(id)arg3 alignUsingBaselines:(_Bool)arg4;	// IMP=0x000000000073daf3
+ (id)_systemImageNamed:(id)arg1 fallback:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000073d372
+ (id)_systemImageNamed:(id)arg1 fallback:(id)arg2;	// IMP=0x000000000073d35d
+ (id)_systemImageNamed:(id)arg1 withConfiguration:(id)arg2 allowPrivate:(_Bool)arg3;	// IMP=0x000000000073cf99
+ (id)_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000073cf81
+ (id)systemImageNamed:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000073cf6c
+ (id)systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000073cef8
+ (id)systemImageNamed:(id)arg1;	// IMP=0x000000000073cee4
+ (id)__systemImageNamed:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000073ced2
+ (id)__systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000073cec0
+ (id)__systemImageNamedSwift:(id)arg1;	// IMP=0x000000000073ceac
+ (id)__systemImageNamed:(id)arg1;	// IMP=0x000000000073ce98
+ (id)_systemImageNamed:(id)arg1;	// IMP=0x000000000073ce84
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000073cae7
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x000000000073ca53
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;	// IMP=0x000000000073c9dd
+ (id)imageNamed:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000073c9c6
+ (id)imageNamed:(id)arg1;	// IMP=0x000000000073c9af
+ (void)initialize;	// IMP=0x000000000073c893
+ (id)imageAtPath:(id)arg1;	// IMP=0x000000000074963a
+ (long long)_idiomDefinedByPath:(id)arg1;	// IMP=0x000000000074c2e7
+ (unsigned long long)_scaleDefinedByPath:(id)arg1;	// IMP=0x000000000074c246
+ (void)_flushCache:(id)arg1;	// IMP=0x000000000074b179
+ (void)_flushSharedImageCache;	// IMP=0x000000000074b163
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000074cf6d
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;	// IMP=0x000000000074cf58
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 options:(int)arg3 variantsScale:(double)arg4;	// IMP=0x000000000074cd78
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;	// IMP=0x000000000074cd63
+ (id)_tvFlatIconFromImage:(id)arg1 scale:(double)arg2;	// IMP=0x000000000074cc0e
+ (id)_tvIconNameForApplicationProxy:(id)arg1;	// IMP=0x000000000074caa6
+ (id)_tvIconForApplicationProxy:(id)arg1 scale:(double)arg2;	// IMP=0x000000000074c95e
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;	// IMP=0x000000000074c8ee
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;	// IMP=0x000000000074c8d4
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 idiom:(long long)arg2 scale:(double *)arg3;	// IMP=0x000000000074c42c
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double *)arg2;	// IMP=0x000000000074c3b1
+ (id)_systemCloseImageCompatibleWithTraitCollection:(id)arg1;	// IMP=0x000000000074da25
+ (id)_systemRemoveImageWithColor:(id)arg1;	// IMP=0x000000000074d9b3
+ (id)_systemAddImageWithColor:(id)arg1;	// IMP=0x000000000074d941
+ (id)strokedCheckmarkImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d8f3
+ (id)strokedCheckmarkImage;	// IMP=0x000000000074d8a5
+ (id)checkmarkImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d857
+ (id)checkmarkImage;	// IMP=0x000000000074d809
+ (id)removeImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d7bb
+ (id)removeImage;	// IMP=0x000000000074d76d
+ (id)addImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d71f
+ (id)addImage;	// IMP=0x000000000074d6d1
+ (id)actionsImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d683
+ (id)actionsImage;	// IMP=0x000000000074d635
+ (id)_systemActionsImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d5e7
+ (id)_systemActionsImage;	// IMP=0x000000000074d599
+ (id)_systemRemoveImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d54b
+ (id)_systemRemoveImage;	// IMP=0x000000000074d4fd
+ (id)_systemAddImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d4af
+ (id)_systemAddImage;	// IMP=0x000000000074d461
+ (id)_systemCameraImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d413
+ (id)_systemCameraImage;	// IMP=0x000000000074d3c5
+ (id)_systemCloseImageWithConfiguration:(id)arg1;	// IMP=0x000000000074d377
+ (id)_systemCloseImage;	// IMP=0x000000000074d329
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2 fill:(long long)arg3 withConfiguration:(id)arg4;	// IMP=0x000000000074e31a
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2 fill:(long long)arg3;	// IMP=0x000000000074e2dc
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2;	// IMP=0x000000000074e2b0
+ (id)_systemImageNamed:(id)arg1 variant:(unsigned long long)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000074e235
+ (id)_systemImageNamed:(id)arg1 variant:(unsigned long long)arg2;	// IMP=0x000000000074e1df
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000075c426
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets)arg6;	// IMP=0x000000000075c275
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;	// IMP=0x000000000075c102
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;	// IMP=0x000000000075bf91
+ (struct CGSize)_legibilityImageSizeForSize:(struct CGSize)arg1 style:(long long)arg2;	// IMP=0x000000000075e3c5
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a87fd3
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a87c47
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a87ba8
- (void).cxx_destruct;	// IMP=0x00000000007493e5
@property(retain, nonatomic, setter=_setImageAsset:) UIImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
- (void)_imageByCreatingBitmapRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007493c2
- (id)_imageWithBitmapRepresentation;	// IMP=0x000000000074935c
- (void)_prepareForScreen:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000749347
- (id)_imagePreparedForScreen:(id)arg1;	// IMP=0x0000000000749335
- (id)_imageByResizingToSize:(struct CGSize)arg1;	// IMP=0x0000000000749323
- (void)prepareThumbnailOfSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007491e7
- (id)imageByPreparingThumbnailOfSize:(struct CGSize)arg1;	// IMP=0x0000000000749153
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000749036
- (id)imageByPreparingForDisplay;	// IMP=0x0000000000748fc3
- (_Bool)_suppressesAccessibilityHairlineThickening;	// IMP=0x0000000000748f28
- (id)_imageThatSuppressesAccessibilityHairlineThickening;	// IMP=0x0000000000748eae
- (id)_imageWithSize:(struct CGSize)arg1 content:(id)arg2;	// IMP=0x0000000000748bf1
- (id)_imageWithSize:(struct CGSize)arg1;	// IMP=0x0000000000748b62
- (id)_rasterizedImage;	// IMP=0x000000000074890a
- (id)_imagePaddedByInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000748858
- (id)_flatImageWithColor:(id)arg1;	// IMP=0x00000000007487e8
- (CDStruct_e79446ac)_calculateStatisticsOfEdge:(_Bool)arg1;	// IMP=0x0000000000747cc1
- (CDStruct_e79446ac)_calculateEdgeStatistics;	// IMP=0x0000000000747c9d
- (CDStruct_e79446ac)_calculateStatistics;	// IMP=0x0000000000747c7c
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets)arg1 resizeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000747a45
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000007479eb
- (_Bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;	// IMP=0x000000000074786c
- (struct __IOSurface *)_copyIOSurface;	// IMP=0x0000000000747068
- (struct __IOSurface *)ioSurface;	// IMP=0x0000000000747052
- (id)initWithIOSurface:(struct __IOSurface *)arg1;	// IMP=0x000000000074703e
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 imageOrientation:(long long)arg2;	// IMP=0x0000000000746fe6
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000746f66
- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2;	// IMP=0x0000000000746f4c
- (id)_initWithData:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000746f35
- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2;	// IMP=0x0000000000746f20
- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2 cache:(_Bool)arg3 scale:(double)arg4;	// IMP=0x0000000000746dc2
- (id)_initWithData:(id)arg1 preserveScale:(_Bool)arg2 cache:(_Bool)arg3;	// IMP=0x0000000000746da8
- (id)_initWithContentsOfLCRFile:(id)arg1;	// IMP=0x0000000000746d96
- (id)initWithContentsOfFile:(id)arg1 cache:(_Bool)arg2;	// IMP=0x0000000000746b7f
- (_Bool)_representsCIImageWhichSupportsIOSurfaceRendering;	// IMP=0x0000000000745a62
- (_Bool)_representsLayeredImage;	// IMP=0x00000000007459cf
- (_Bool)_isAlphaMask;	// IMP=0x0000000000745996
- (void)_setIsFlippedInRightToLeft;	// IMP=0x0000000000745965
- (id)imageFlippedForRightToLeftLayoutDirection;	// IMP=0x0000000000745904
- (id)_identityDescription;	// IMP=0x00000000007456e3
- (id)_metricsDescription;	// IMP=0x00000000007453d4
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000744c65
- (id)_imageWithImageAsset:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000007449c3
- (id)_imageWithImageAsset:(id)arg1;	// IMP=0x000000000074481f
- (id)_primitiveImageAsset;	// IMP=0x0000000000744811
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
- (void)drawAsPatternInRect:(struct CGRect)arg1;	// IMP=0x0000000000744762
- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3;	// IMP=0x0000000000744182
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x0000000000744166
- (void)drawAtPoint:(struct CGPoint)arg1 blendMode:(int)arg2 alpha:(double)arg3;	// IMP=0x00000000007440e4
- (void)drawAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000007440c8
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSArray *images;
- (id)imageByAddingPadding:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000743b95
- (id)imageByAddingContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000743b8c
- (id)imageWithPadding:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000743b83
- (id)imageWithContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000743b7a
- (_Bool)hasPadding;	// IMP=0x0000000000743b72
- (struct UIEdgeInsets)padding;	// IMP=0x0000000000743b5f
- (_Bool)hasContentInsets;	// IMP=0x0000000000743b57
- (struct UIEdgeInsets)contentInsets;	// IMP=0x0000000000743b38
- (_Bool)_hasExplicitContentInsets;	// IMP=0x0000000000743b2a
@property(readonly, nonatomic) _Bool _hasContentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets _contentInsets;
- (void)_setContentInsetsExplicitly:(struct UIEdgeInsets)arg1;	// IMP=0x00000000007439f5
- (void)_setContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000743948
- (id)_imageWithContentInsets:(struct UIEdgeInsets)arg1 withUpdatedCGImage:(_Bool)arg2;	// IMP=0x00000000007435af
- (id)_imageWithContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000074359b
- (void)_setColorForFlattening:(id)arg1;	// IMP=0x0000000000743585
- (id)_colorForFlattening;	// IMP=0x0000000000743574
- (id)_imageTintedWithColor:(id)arg1 flatten:(_Bool)arg2 renderingMode:(long long)arg3 withUpdatedCGImage:(_Bool)arg4;	// IMP=0x0000000000743180
- (id)flattenedImageWithColor:(id)arg1;	// IMP=0x0000000000743113
- (id)_flattenedImageWithTintColor:(id)arg1;	// IMP=0x00000000007430a3
- (id)imageWithTintColor:(id)arg1;	// IMP=0x0000000000743036
- (id)imageWithTintColor:(id)arg1 renderingMode:(long long)arg2;	// IMP=0x000000000074301c
- (void)_setConfiguration:(id)arg1;	// IMP=0x000000000074300b
- (id)imageWithConfiguration:(id)arg1;	// IMP=0x0000000000742bf6
@property(readonly, copy, nonatomic) UIImageConfiguration *configuration;
- (id)imageByApplyingSymbolConfiguration:(id)arg1;	// IMP=0x0000000000742b3d
- (id)imageWithSymbolConfiguration:(id)arg1;	// IMP=0x0000000000742b2b
@property(readonly, copy, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;
- (_Bool)hasMidline;	// IMP=0x0000000000742a94
- (id)imageWithoutMidline;	// IMP=0x0000000000742a8b
- (id)imageWithMidlineOffsetFromCenter:(double)arg1;	// IMP=0x0000000000742a82
- (void)_setMidlineOffsetFromCenter:(double)arg1;	// IMP=0x0000000000742a7c
- (double)midlineOffsetFromCenter;	// IMP=0x0000000000742a73
- (void)_setSymbolMetricsFromNamedVectorGlyph:(id)arg1;	// IMP=0x0000000000742738
- (id)_imageWithSymbolMetricsFromNamedVectorGlyph:(id)arg1;	// IMP=0x00000000007426ca
- (_Bool)_hasExplicitBaseline;	// IMP=0x00000000007426bc
- (_Bool)_hasBaseline;	// IMP=0x00000000007426ae
@property(readonly, nonatomic) _Bool hasBaseline;
- (void)_removeBaselineExplicitly;	// IMP=0x0000000000742682
- (void)_removeBaseline;	// IMP=0x0000000000742663
- (id)imageWithoutBaseline;	// IMP=0x0000000000742619
- (id)imageWithBaselineOffsetFromBottom:(double)arg1;	// IMP=0x00000000007425bd
- (void)_setCapHeight:(double)arg1;	// IMP=0x00000000007425ae
@property(readonly, nonatomic) double _capHeight;
- (void)_setBaselineOffsetFromBottomExplicitly:(double)arg1;	// IMP=0x0000000000742548
- (void)_setBaselineOffsetFromBottom:(double)arg1;	// IMP=0x000000000074252c
- (double)__baselineOffsetFromBottom;	// IMP=0x0000000000742521
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000000742516
@property(readonly, nonatomic) double baselineOffsetFromBottom;
- (id)_outlinePath;	// IMP=0x00000000007424bb
- (unsigned long long)_numberOfHierarchyLayers;	// IMP=0x00000000007424a5
- (_Bool)_isHierarchicalColorSymbolImage;	// IMP=0x000000000074248c
- (_Bool)_isMultiColorSymbolImage;	// IMP=0x0000000000742476
- (_Bool)_isColoredSymbolImage;	// IMP=0x000000000074243d
@property(readonly, nonatomic, getter=isSymbolImage) _Bool symbolImage;
- (_Bool)_isSymbolImage;	// IMP=0x0000000000742415
- (_Bool)_hasExplicitAlignmentRectInsets;	// IMP=0x00000000007423c1
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000074235e
- (void)_setAlignmentRectInsetsExplicitly:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000742341
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000074231e
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (struct UIEdgeInsets)_inverseAlignmentRectInsets;	// IMP=0x00000000007422db
- (void)_setSuppressesAccessibilityHairlineThickening:(_Bool)arg1;	// IMP=0x00000000007422c5
- (struct CGSize)_sizeWithHairlineThickening:(_Bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;	// IMP=0x00000000007420e8
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;	// IMP=0x000000000074185a
@property(readonly, nonatomic) UIGraphicsImageRendererFormat *imageRendererFormat;
- (long long)_effectiveRenderingModeWithSymbolConfiguration:(id)arg1;	// IMP=0x000000000074123c
@property(readonly, nonatomic) long long renderingMode;
- (void)_setRenderingMode:(long long)arg1;	// IMP=0x0000000000741214
- (id)imageWithRenderingMode:(long long)arg1;	// IMP=0x00000000007410aa
@property(readonly, nonatomic) long long resizingMode;
@property(readonly, nonatomic) struct UIEdgeInsets capInsets;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;	// IMP=0x0000000000741020
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000074100c
- (struct CGSize)_CGSVGDocumentSize;	// IMP=0x0000000000740ff6
- (_Bool)_isSVGVector;	// IMP=0x0000000000740fe0
@property(readonly, nonatomic, getter=_CGSVGDocument) struct CGSVGDocument *CGSVGDocument;
- (id)_initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000740f46
- (id)_initWithCGSVGDocument:(struct CGSVGDocument *)arg1;	// IMP=0x0000000000740f2a
- (struct CGSize)_sizeInPixelsFromPDF;	// IMP=0x0000000000740e19
- (double)_scaleFromPDF;	// IMP=0x0000000000740dd5
- (struct CGSize)_CGPDFPageSize;	// IMP=0x0000000000740dbf
- (_Bool)_isPDFVector;	// IMP=0x0000000000740da9
@property(readonly, nonatomic, getter=_CGPDFPage) struct CGPDFPage *CGPDFPage;
- (id)_initWithCGPDFPage:(struct CGPDFPage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000740d0f
- (id)_initWithCGPDFPage:(struct CGPDFPage *)arg1;	// IMP=0x0000000000740cf3
- (void)_setAlwaysStretches:(_Bool)arg1;	// IMP=0x0000000000740c78
@property(nonatomic, setter=_setSubimageInsets:) struct UIEdgeInsets _subimageInsets;
- (void)_setCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000740c59
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x0000000000740c51
- (_Bool)_isResizable;	// IMP=0x0000000000740c49
- (_Bool)_isSubimage;	// IMP=0x0000000000740c41
- (struct CGRect)_contentRectInPixels;	// IMP=0x0000000000740c23
- (struct CGRect)_contentStretchInPixels;	// IMP=0x0000000000740c05
@property(readonly, nonatomic) double scale;
- (id)imageWithHorizontallyFlippedOrientation;	// IMP=0x0000000000740ba5
- (void)_flipImageOrientationHorizontally;	// IMP=0x0000000000740b62
@property(readonly, nonatomic) long long imageOrientation;
- (_Bool)_isRTLImage;	// IMP=0x00000000007409e8
- (long long)_imageOrientationConsideringRTLForUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x000000000074095d
- (long long)_imageOrientationConsideringRTL;	// IMP=0x0000000000740922
- (void)setFlipsForRightToLeftLayoutDirection:(_Bool)arg1;	// IMP=0x00000000007408ca
@property(readonly, nonatomic) _Bool flipsForRightToLeftLayoutDirection;
- (struct CGSize)_sizeInPixels;	// IMP=0x0000000000740893
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) CIImage *CIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (_Bool)_isCGImageOnly;	// IMP=0x000000000074073e
- (void)dealloc;	// IMP=0x0000000000740629
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074061e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000073fe16
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000073f9d8
- (void)_encodePropertiesWithCoder:(id)arg1;	// IMP=0x000000000073f7c5
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;	// IMP=0x000000000073f4e4
- (_Bool)_canEncodeWithName:(id)arg1 coder:(id)arg2;	// IMP=0x000000000073f44c
- (id)_imageWithContent:(id)arg1;	// IMP=0x000000000073f3ca
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;	// IMP=0x000000000073f12c
- (id)_initWithOtherImage:(id)arg1;	// IMP=0x000000000073f023
- (id)_initWithContent:(id)arg1 orientation:(long long)arg2;	// IMP=0x000000000073ef0c
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x000000000073ee74
- (id)initWithCIImage:(id)arg1;	// IMP=0x000000000073ee5d
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x000000000073edd9
- (id)initWithCGImage:(struct CGImage *)arg1;	// IMP=0x000000000073edbd
- (id)initWithData:(id)arg1 scale:(double)arg2;	// IMP=0x000000000073eda6
- (id)initWithData:(id)arg1;	// IMP=0x000000000073ed8f
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x000000000073ed7b
- (id)init;	// IMP=0x000000000073ed65
- (id)_initWithCompositedSymbolImageLayers:(id)arg1 name:(id)arg2 alignUsingBaselines:(_Bool)arg3;	// IMP=0x000000000073d802
- (id)_initWithCompositedSymbolImageLayers:(id)arg1 name:(id)arg2;	// IMP=0x000000000073d7ea
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3 withName:(id)arg4;	// IMP=0x000000000073d47a
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3;	// IMP=0x000000000073d465
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2;	// IMP=0x000000000073d44d
- (id)_defaultConfiguration;	// IMP=0x000000000073c94c
- (_Bool)_isDecompressing;	// IMP=0x0000000000749526
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(_Bool)arg5;	// IMP=0x000000000074943e
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4;	// IMP=0x0000000000749423
@property(readonly, nonatomic) long long topCapHeight;
@property(readonly, nonatomic) long long leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;	// IMP=0x000000000074953c
- (struct CGColor *)_tiledPatternColor;	// IMP=0x000000000074ab0c
- (id)patternColor;	// IMP=0x000000000074aaf0
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2 operation:(int)arg3;	// IMP=0x000000000074a962
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(double)arg2;	// IMP=0x000000000074a94b
- (void)draw1PartImageInRect:(struct CGRect)arg1;	// IMP=0x000000000074a931
- (void)draw3PartImageWithSliceRects:(CDStruct_6b60c6e5)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;	// IMP=0x000000000074a4f1
- (void)draw3PartImageWithSliceRects:(CDStruct_6b60c6e5)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;	// IMP=0x000000000074a4da
- (void)draw3PartImageWithSliceRects:(CDStruct_6b60c6e5)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000074a4c0
- (void)draw9PartImageWithSliceRects:(CDStruct_c7d8fe75)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;	// IMP=0x0000000000749e5f
- (void)draw9PartImageWithSliceRects:(CDStruct_c7d8fe75)arg1 inRect:(struct CGRect)arg2 fraction:(double)arg3;	// IMP=0x0000000000749e48
- (void)draw9PartImageWithSliceRects:(CDStruct_c7d8fe75)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000749e2e
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2;	// IMP=0x0000000000749e14
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2 fraction:(double)arg3;	// IMP=0x0000000000749c9a
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;	// IMP=0x0000000000749a4f
- (void)compositeToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(double)arg4;	// IMP=0x000000000074967a
- (struct CGImage *)imageRef;	// IMP=0x0000000000749664
- (id)initWithData:(id)arg1 cache:(_Bool)arg2;	// IMP=0x000000000074964d
- (id)_serializedData;	// IMP=0x000000000074c1bb
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;	// IMP=0x000000000074c08a
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;	// IMP=0x000000000074bc9b
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;	// IMP=0x000000000074baa9
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x000000000074ba43
- (_Bool)_probeIsSeeThrough;	// IMP=0x000000000074b7cc
- (_Bool)_hasVisibleContentInRect:(struct CGRect)arg1 atScale:(double)arg2;	// IMP=0x000000000074b5c8
- (_Bool)_isInvisibleAndGetIsTranslucent:(_Bool *)arg1;	// IMP=0x000000000074b254
- (_Bool)_isNamed;	// IMP=0x000000000074b249
- (void)_setNamed:(_Bool)arg1;	// IMP=0x000000000074b238
- (_Bool)_isCached;	// IMP=0x000000000074b22a
- (void)_setCached:(_Bool)arg1;	// IMP=0x000000000074b1f5
- (id)_swizzleContent:(id)arg1;	// IMP=0x000000000074b19d
- (id)content;	// IMP=0x000000000074b18f
- (id)_resizableImageWithCapMask:(int)arg1;	// IMP=0x000000000074d320
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2 idiom:(long long)arg3 scale:(double)arg4;	// IMP=0x000000000074d15f
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2 scale:(double)arg3;	// IMP=0x000000000074d0ce
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(_Bool)arg2;	// IMP=0x000000000074d04a
- (void)_preheatBitmapData;	// IMP=0x000000000074cd5d
- (id)_imageByApplyingVariant:(unsigned long long)arg1 allowNone:(_Bool)arg2;	// IMP=0x000000000074da9b
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(_Bool)arg5;	// IMP=0x000000000075023f
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 graphicsQuality:(long long)arg4;	// IMP=0x00000000007501a9
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;	// IMP=0x000000000075011a
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3 allowImageResizing:(_Bool)arg4;	// IMP=0x000000000075004a
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(_Bool)arg2 includeBlur:(_Bool)arg3;	// IMP=0x0000000000750035
- (id)_applyBackdropViewSettings:(id)arg1;	// IMP=0x0000000000750021
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(_Bool)arg2;	// IMP=0x000000000074ec55
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;	// IMP=0x000000000075eedf
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize)arg3 alphaOnly:(_Bool)arg4;	// IMP=0x000000000075e6fd
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize)arg3;	// IMP=0x000000000075e6e6
- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000075e68a
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2 alphaOnly:(_Bool)arg3;	// IMP=0x000000000075e4dc
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;	// IMP=0x000000000075e4c8
- (id)_imageForLegibilityStyle:(long long)arg1;	// IMP=0x000000000075e433
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a88056
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a87f28
@property(readonly, nonatomic, getter=isFromStatusBarImageProvider) _Bool fromStatusBarImageProvider;
@property(readonly, nonatomic) NSString *_asMenuElementImageName;
@property(readonly, nonatomic) UIImage *_asMenuElementImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

