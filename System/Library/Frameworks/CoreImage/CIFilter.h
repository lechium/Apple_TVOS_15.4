//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class CIImage, NSArray, NSDictionary, NSString;

@interface CIFilter : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv[8];	// 8 = 0x8
    _Bool _enabled;	// 72 = 0x48
}

+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect)arg2 error:(id *)arg3;	// IMP=0x0000000000097c9d
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x0000000000097c08
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009696b
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x000000000009605d
+ (id)_filterArrayFromProperties:(id)arg1;	// IMP=0x000000000009aa16
+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata *)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009a9b5
+ (const struct CGImageMetadata *)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009a96e
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009a0c5
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x0000000000099484
+ (id)filterWithString:(id)arg1;	// IMP=0x0000000000098d6e
+ (id)customAttributes;	// IMP=0x0000000000098af8
+ (void)clearCache;	// IMP=0x0000000000098adf
+ (id)filterName:(id)arg1 replacement:(id)arg2;	// IMP=0x000000000009c44d
+ (id)filterName:(id)arg1 replacement:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000009c328
+ (void)addFilterToSkip:(id)arg1;	// IMP=0x000000000009c259
+ (id)filterName:(id)arg1 prepend:(id)arg2 imageName:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000009b919
+ (id)filterName:(id)arg1 append:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000009b7f5
+ (_Bool)wrapClassIfNeeded:(Class)arg1;	// IMP=0x000000000009ac42
+ (_Bool)exchangeImplementationsForClass;	// IMP=0x000000000009aa51
+ (unsigned int)indexForWrapperNumber:(unsigned int)arg1;	// IMP=0x000000000009aa48
+ (id)localizedReferenceDocumentationForFilterName:(id)arg1;	// IMP=0x000000000009d4d0
+ (id)localizedDescriptionForFilterName:(id)arg1;	// IMP=0x000000000009d2d8
+ (id)localizedNameForCategory:(id)arg1;	// IMP=0x000000000009d21f
+ (id)localizedNameForFilterName:(id)arg1;	// IMP=0x000000000009d1e3
+ (void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3;	// IMP=0x000000000009cf6a
+ (id)filterNamesInCategories:(id)arg1;	// IMP=0x000000000009c84f
+ (id)filterNamesInCategory:(id)arg1;	// IMP=0x000000000009c7da
+ (id)filterWithName:(id)arg1 withInputParameters:(id)arg2;	// IMP=0x000000000009c618
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;	// IMP=0x000000000009c4a7
+ (id)filterWithName:(id)arg1;	// IMP=0x000000000009c490
+ (void)unregisterFilterName:(id)arg1;	// IMP=0x000000000009dbdc
+ (id)allCategories:(_Bool)arg1;	// IMP=0x000000000009d9d4
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3;	// IMP=0x000000000009d863
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2;	// IMP=0x000000000009d800
+ (id)filterWithName:(id)arg1 setDefaults:(_Bool)arg2;	// IMP=0x000000000009d50c
+ (id)supportedRawCameraModels;	// IMP=0x00000000001131a6
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;	// IMP=0x000000000011318d
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000113174
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000001130c0
+ (id)rowAverageFilter;	// IMP=0x00000000001a2eaa
+ (id)KMeansFilter;	// IMP=0x00000000001a2aeb
+ (id)histogramDisplayFilter;	// IMP=0x00000000001a2869
+ (id)columnAverageFilter;	// IMP=0x00000000001a2683
+ (id)areaMinMaxRedFilter;	// IMP=0x00000000001a249d
+ (id)areaMinMaxFilter;	// IMP=0x00000000001a22b7
+ (id)areaMinimumAlphaFilter;	// IMP=0x00000000001a20d1
+ (id)areaMinimumFilter;	// IMP=0x00000000001a1eeb
+ (id)areaMaximumAlphaFilter;	// IMP=0x00000000001a1d05
+ (id)areaMaximumFilter;	// IMP=0x00000000001a1b1f
+ (id)areaHistogramFilter;	// IMP=0x00000000001a189d
+ (id)areaAverageFilter;	// IMP=0x00000000001a16b7
+ (id)zoomBlurFilter;	// IMP=0x00000000001a1483
+ (id)noiseReductionFilter;	// IMP=0x00000000001a124f
+ (id)motionBlurFilter;	// IMP=0x00000000001a101b
+ (id)morphologyRectangleMinimumFilter;	// IMP=0x00000000001a0de7
+ (id)morphologyRectangleMaximumFilter;	// IMP=0x00000000001a0bb3
+ (id)morphologyMinimumFilter;	// IMP=0x00000000001a09cd
+ (id)morphologyMaximumFilter;	// IMP=0x00000000001a07e7
+ (id)morphologyGradientFilter;	// IMP=0x00000000001a0601
+ (id)medianFilter;	// IMP=0x00000000001a05e1
+ (id)maskedVariableBlurFilter;	// IMP=0x00000000001a030c
+ (id)gaussianBlurFilter;	// IMP=0x00000000001a0126
+ (id)discBlurFilter;	// IMP=0x000000000019ff40
+ (id)boxBlurFilter;	// IMP=0x000000000019fd5a
+ (id)bokehBlurFilter;	// IMP=0x000000000019fa8a
+ (id)spotLightFilter;	// IMP=0x000000000019f590
+ (id)spotColorFilter;	// IMP=0x000000000019ec8a
+ (id)shadedMaterialFilter;	// IMP=0x000000000019e9b5
+ (id)saliencyMapFilter;	// IMP=0x000000000019e995
+ (id)pointillizeFilter;	// IMP=0x000000000019e761
+ (id)pixellateFilter;	// IMP=0x000000000019e52d
+ (id)personSegmentationFilter;	// IMP=0x000000000019e347
+ (id)mixFilter;	// IMP=0x000000000019e072
+ (id)lineOverlayFilter;	// IMP=0x000000000019dd54
+ (id)highlightShadowAdjustFilter;	// IMP=0x000000000019dad2
+ (id)hexagonalPixellateFilter;	// IMP=0x000000000019d89e
+ (id)heightFieldFromMaskFilter;	// IMP=0x000000000019d6b8
+ (id)gloomFilter;	// IMP=0x000000000019d484
+ (id)gaborGradientsFilter;	// IMP=0x000000000019d464
+ (id)edgeWorkFilter;	// IMP=0x000000000019d27e
+ (id)edgesFilter;	// IMP=0x000000000019d098
+ (id)depthOfFieldFilter;	// IMP=0x000000000019cd2c
+ (id)crystallizeFilter;	// IMP=0x000000000019caf8
+ (id)coreMLModelFilter;	// IMP=0x000000000019c7d5
+ (id)convolutionRGB9VerticalFilter;	// IMP=0x000000000019c500
+ (id)convolutionRGB9HorizontalFilter;	// IMP=0x000000000019c22b
+ (id)convolutionRGB7X7Filter;	// IMP=0x000000000019bf56
+ (id)convolutionRGB5X5Filter;	// IMP=0x000000000019bc81
+ (id)convolutionRGB3X3Filter;	// IMP=0x000000000019b9ac
+ (id)convolution9VerticalFilter;	// IMP=0x000000000019b6d7
+ (id)convolution9HorizontalFilter;	// IMP=0x000000000019b402
+ (id)convolution7X7Filter;	// IMP=0x000000000019b12d
+ (id)convolution5X5Filter;	// IMP=0x000000000019ae58
+ (id)convolution3X3Filter;	// IMP=0x000000000019ab83
+ (id)comicEffectFilter;	// IMP=0x000000000019ab63
+ (id)bloomFilter;	// IMP=0x000000000019a92f
+ (id)blendWithRedMaskFilter;	// IMP=0x000000000019a5c0
+ (id)blendWithMaskFilter;	// IMP=0x000000000019a251
+ (id)blendWithBlueMaskFilter;	// IMP=0x0000000000199ee2
+ (id)blendWithAlphaMaskFilter;	// IMP=0x0000000000199b73
+ (id)textImageGeneratorFilter;	// IMP=0x0000000000199850
+ (id)sunbeamsGeneratorFilter;	// IMP=0x00000000001994e4
+ (id)stripesGeneratorFilter;	// IMP=0x0000000000199173
+ (id)starShineGeneratorFilter;	// IMP=0x0000000000198db9
+ (id)roundedRectangleGeneratorFilter;	// IMP=0x0000000000198b8c
+ (id)randomGeneratorFilter;	// IMP=0x0000000000198b6c
+ (id)QRCodeGenerator;	// IMP=0x00000000001988ec
+ (id)PDF417BarcodeGenerator;	// IMP=0x00000000001983fa
+ (id)meshGeneratorFilter;	// IMP=0x000000000019812c
+ (id)lenticularHaloGeneratorFilter;	// IMP=0x0000000000197d72
+ (id)code128BarcodeGeneratorFilter;	// IMP=0x0000000000197b3e
+ (id)checkerboardGeneratorFilter;	// IMP=0x00000000001977cd
+ (id)barcodeGeneratorFilter;	// IMP=0x000000000019763f
+ (id)aztecCodeGeneratorFilter;	// IMP=0x00000000001973bd
+ (id)attributedTextImageGeneratorFilter;	// IMP=0x00000000001971d7
+ (id)twelvefoldReflectedTileFilter;	// IMP=0x0000000000196f55
+ (id)triangleTileFilter;	// IMP=0x0000000000196cd3
+ (id)triangleKaleidoscopeFilter;	// IMP=0x0000000000196a03
+ (id)sixfoldRotatedTileFilter;	// IMP=0x0000000000196781
+ (id)sixfoldReflectedTileFilter;	// IMP=0x00000000001964ff
+ (id)perspectiveTileFilter;	// IMP=0x000000000019622f
+ (id)parallelogramTileFilter;	// IMP=0x0000000000195f5f
+ (id)opTileFilter;	// IMP=0x0000000000195c8f
+ (id)kaleidoscopeFilter;	// IMP=0x0000000000195a0d
+ (id)glideReflectedTileFilter;	// IMP=0x000000000019578b
+ (id)fourfoldTranslatedTileFilter;	// IMP=0x00000000001954bb
+ (id)fourfoldRotatedTileFilter;	// IMP=0x0000000000195239
+ (id)fourfoldReflectedTileFilter;	// IMP=0x0000000000194f69
+ (id)eightfoldReflectedTileFilter;	// IMP=0x0000000000194ce7
+ (id)affineTileFilter;	// IMP=0x0000000000194b01
+ (id)affineClampFilter;	// IMP=0x000000000019491b
+ (id)vortexDistortionFilter;	// IMP=0x0000000000194699
+ (id)twirlDistortionFilter;	// IMP=0x0000000000194417
+ (id)torusLensDistortionFilter;	// IMP=0x0000000000194147
+ (id)stretchCropFilter;	// IMP=0x0000000000193ec5
+ (id)pinchDistortionFilter;	// IMP=0x0000000000193c43
+ (id)ninePartTiledFilter;	// IMP=0x0000000000193973
+ (id)ninePartStretchedFilter;	// IMP=0x00000000001936f1
+ (id)lightTunnelFilter;	// IMP=0x000000000019346f
+ (id)holeDistortionFilter;	// IMP=0x000000000019323b
+ (id)glassLozengeFilter;	// IMP=0x0000000000192f6b
+ (id)glassDistortionFilter;	// IMP=0x0000000000192c48
+ (id)drosteFilter;	// IMP=0x00000000001928dc
+ (id)displacementDistortionFilter;	// IMP=0x0000000000192607
+ (id)circularWrapFilter;	// IMP=0x0000000000192385
+ (id)circleSplashDistortionFilter;	// IMP=0x0000000000192151
+ (id)bumpDistortionLinearFilter;	// IMP=0x0000000000191e81
+ (id)bumpDistortionFilter;	// IMP=0x0000000000191bff
+ (id)xRayFilter;	// IMP=0x0000000000191bdf
+ (id)vignetteEffectFilter;	// IMP=0x000000000019190f
+ (id)vignetteFilter;	// IMP=0x00000000001916db
+ (id)thermalFilter;	// IMP=0x00000000001916bb
+ (id)sepiaToneFilter;	// IMP=0x00000000001914d5
+ (id)photoEffectTransferFilter;	// IMP=0x00000000001914b5
+ (id)photoEffectTonalFilter;	// IMP=0x0000000000191495
+ (id)photoEffectProcessFilter;	// IMP=0x0000000000191475
+ (id)photoEffectNoirFilter;	// IMP=0x0000000000191455
+ (id)photoEffectMonoFilter;	// IMP=0x0000000000191435
+ (id)photoEffectInstantFilter;	// IMP=0x0000000000191415
+ (id)photoEffectFadeFilter;	// IMP=0x00000000001913f5
+ (id)photoEffectChromeFilter;	// IMP=0x00000000001913d5
+ (id)palettizeFilter;	// IMP=0x0000000000191100
+ (id)paletteCentroidFilter;	// IMP=0x0000000000190e2b
+ (id)minimumComponentFilter;	// IMP=0x0000000000190e0b
+ (id)maximumComponentFilter;	// IMP=0x0000000000190deb
+ (id)maskToAlphaFilter;	// IMP=0x0000000000190dcb
+ (id)LabDeltaE;	// IMP=0x0000000000190b4b
+ (id)falseColorFilter;	// IMP=0x00000000001907dc
+ (id)documentEnhancerFilter;	// IMP=0x00000000001905f6
+ (id)ditherFilter;	// IMP=0x0000000000190410
+ (id)colorPosterizeFilter;	// IMP=0x000000000019022a
+ (id)colorMonochromeFilter;	// IMP=0x000000000018ff55
+ (id)colorMapFilter;	// IMP=0x000000000018fcd5
+ (id)colorInvertFilter;	// IMP=0x000000000018fcb5
+ (id)colorCurvesFilter;	// IMP=0x000000000018f857
+ (id)colorCubeWithColorSpaceFilter;	// IMP=0x000000000018f49a
+ (id)colorCubesMixedWithMaskFilter;	// IMP=0x000000000018eeff
+ (id)colorCubeFilter;	// IMP=0x000000000018ec31
+ (id)colorCrossPolynomialFilter;	// IMP=0x000000000018e7d3
+ (id)whitePointAdjustFilter;	// IMP=0x000000000018e553
+ (id)vibranceFilter;	// IMP=0x000000000018e36d
+ (id)toneCurveFilter;	// IMP=0x000000000018e04f
+ (id)temperatureAndTintFilter;	// IMP=0x000000000018dce0
+ (id)sRGBToneCurveToLinearFilter;	// IMP=0x000000000018dcc0
+ (id)linearToSRGBToneCurveFilter;	// IMP=0x000000000018dca0
+ (id)hueAdjustFilter;	// IMP=0x000000000018daba
+ (id)gammaAdjustFilter;	// IMP=0x000000000018d8d4
+ (id)exposureAdjustFilter;	// IMP=0x000000000018d6ee
+ (id)disparityToDepthFilter;	// IMP=0x000000000018d6ce
+ (id)depthToDisparityFilter;	// IMP=0x000000000018d6ae
+ (id)colorThresholdOtsuFilter;	// IMP=0x000000000018d68e
+ (id)colorThresholdFilter;	// IMP=0x000000000018d4a8
+ (id)colorPolynomialFilter;	// IMP=0x000000000018cf5b
+ (id)colorMatrixFilter;	// IMP=0x000000000018c923
+ (id)colorControlsFilter;	// IMP=0x000000000018c6a1
+ (id)colorClampFilter;	// IMP=0x000000000018c332
+ (id)colorAbsoluteDifferenceFilter;	// IMP=0x000000000018c0b2
+ (id)vividLightBlendModeFilter;	// IMP=0x000000000018be32
+ (id)subtractBlendModeFilter;	// IMP=0x000000000018bbb2
+ (id)sourceOverCompositingFilter;	// IMP=0x000000000018b932
+ (id)sourceOutCompositingFilter;	// IMP=0x000000000018b6b2
+ (id)sourceInCompositingFilter;	// IMP=0x000000000018b432
+ (id)sourceAtopCompositingFilter;	// IMP=0x000000000018b1b2
+ (id)softLightBlendModeFilter;	// IMP=0x000000000018af32
+ (id)screenBlendModeFilter;	// IMP=0x000000000018acb2
+ (id)saturationBlendModeFilter;	// IMP=0x000000000018aa32
+ (id)pinLightBlendModeFilter;	// IMP=0x000000000018a7b2
+ (id)overlayBlendModeFilter;	// IMP=0x000000000018a532
+ (id)multiplyCompositingFilter;	// IMP=0x000000000018a2b2
+ (id)multiplyBlendModeFilter;	// IMP=0x000000000018a032
+ (id)minimumCompositingFilter;	// IMP=0x0000000000189db2
+ (id)maximumCompositingFilter;	// IMP=0x0000000000189b32
+ (id)luminosityBlendModeFilter;	// IMP=0x00000000001898b2
+ (id)linearLightBlendModeFilter;	// IMP=0x0000000000189632
+ (id)linearDodgeBlendModeFilter;	// IMP=0x00000000001893b2
+ (id)linearBurnBlendModeFilter;	// IMP=0x0000000000189132
+ (id)lightenBlendModeFilter;	// IMP=0x0000000000188eb2
+ (id)hueBlendModeFilter;	// IMP=0x0000000000188c32
+ (id)hardLightBlendModeFilter;	// IMP=0x00000000001889b2
+ (id)exclusionBlendModeFilter;	// IMP=0x0000000000188732
+ (id)divideBlendModeFilter;	// IMP=0x00000000001884b2
+ (id)differenceBlendModeFilter;	// IMP=0x0000000000188232
+ (id)darkenBlendModeFilter;	// IMP=0x0000000000187fb2
+ (id)colorDodgeBlendModeFilter;	// IMP=0x0000000000187d32
+ (id)colorBurnBlendModeFilter;	// IMP=0x0000000000187ab2
+ (id)colorBlendModeFilter;	// IMP=0x0000000000187832
+ (id)additionCompositingFilter;	// IMP=0x00000000001875b2
+ (id)swipeTransitionFilter;	// IMP=0x00000000001870b6
+ (id)rippleTransitionFilter;	// IMP=0x0000000000186bba
+ (id)pageCurlWithShadowTransitionFilter;	// IMP=0x0000000000186588
+ (id)pageCurlTransitionFilter;	// IMP=0x0000000000185feb
+ (id)modTransitionFilter;	// IMP=0x0000000000185bde
+ (id)flashTransitionFilter;	// IMP=0x0000000000185646
+ (id)dissolveTransitionFilter;	// IMP=0x0000000000185371
+ (id)disintegrateWithMaskTransitionFilter;	// IMP=0x0000000000184ec3
+ (id)copyMachineTransitionFilter;	// IMP=0x00000000001849c7
+ (id)barsSwipeTransitionFilter;	// IMP=0x0000000000184608
+ (id)accordionFoldTransitionFilter;	// IMP=0x0000000000184249
+ (id)straightenFilter;	// IMP=0x0000000000184063
+ (id)perspectiveTransformWithExtentFilter;	// IMP=0x0000000000183d45
+ (id)perspectiveTransformFilter;	// IMP=0x0000000000183a75
+ (id)perspectiveRotateFilter;	// IMP=0x00000000001837a5
+ (id)perspectiveCorrectionFilter;	// IMP=0x0000000000183487
+ (id)lanczosScaleTransformFilter;	// IMP=0x0000000000183253
+ (id)keystoneCorrectionVerticalFilter;	// IMP=0x0000000000182f35
+ (id)keystoneCorrectionHorizontalFilter;	// IMP=0x0000000000182c17
+ (id)keystoneCorrectionCombinedFilter;	// IMP=0x00000000001828f9
+ (id)edgePreserveUpsampleFilter;	// IMP=0x00000000001825d6
+ (id)bicubicScaleTransformFilter;	// IMP=0x0000000000182306
+ (id)lineScreenFilter;	// IMP=0x0000000000182036
+ (id)hatchedScreenFilter;	// IMP=0x0000000000181d66
+ (id)dotScreenFilter;	// IMP=0x0000000000181a96
+ (id)CMYKHalftone;	// IMP=0x000000000018172a
+ (id)circularScreenFilter;	// IMP=0x00000000001814a8
+ (id)unsharpMaskFilter;	// IMP=0x0000000000181274
+ (id)sharpenLuminanceFilter;	// IMP=0x0000000000181040
+ (id)smoothLinearGradientFilter;	// IMP=0x0000000000180d24
+ (id)radialGradientFilter;	// IMP=0x00000000001809ba
+ (id)linearGradientFilter;	// IMP=0x000000000018069e
+ (id)hueSaturationValueGradientFilter;	// IMP=0x00000000001803d5
+ (id)gaussianGradientFilter;	// IMP=0x00000000001800b2
+ (id)metalFilterWithName:(id)arg1;	// IMP=0x00000000001a6820
+ (id)metalFilterWithName:(id)arg1 withInputParameters:(id)arg2;	// IMP=0x00000000001a67ab
+ (int)getMinMaxSimulatedApertureFrom:(struct __CFData *)arg1 minValue:(float *)arg2 maxValue:(float *)arg3 version:(int *)arg4;	// IMP=0x00000000001b323b
+ (int)maxSDOFRenderingVersionSupported;	// IMP=0x00000000001b3118
+ (id)prewarmedFilterFromString:(id)arg1;	// IMP=0x00000000001c5654
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name;
- (id)apply:(id)arg1;	// IMP=0x0000000000098675
- (id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3;	// IMP=0x0000000000097d2b
- (id)debugDescription;	// IMP=0x0000000000097a24
- (id)description;	// IMP=0x0000000000097823
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097811
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009760e
- (id)_copyFilterWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000975d5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096973
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009610d
- (void)setDefaults;	// IMP=0x0000000000095ebc
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) CIImage *outputImage; // @dynamic outputImage;
@property(readonly, nonatomic) NSArray *outputKeys;
@property(readonly, nonatomic) NSArray *inputKeys;
- (void)finalize;	// IMP=0x0000000000095dbe
- (void)dealloc;	// IMP=0x0000000000095bd6
- (void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1 className:(const char *)arg2 overridesDealloc:(_Bool)arg3;	// IMP=0x0000000000095ad1
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000095a75
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000959f0
- (unsigned long long)hash;	// IMP=0x0000000000095870
- (id)_serializedXMPString;	// IMP=0x0000000000099044
- (void)setOption:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000098d68
- (id)userInfo;	// IMP=0x0000000000098d5e
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000098d31
- (void)setIdentity;	// IMP=0x0000000000098b5c
- (_Bool)_isIdentity;	// IMP=0x0000000000098b54
- (_Bool)_filterClassInCategory:(id)arg1;	// IMP=0x0000000000098b08
- (id)customAttributes;	// IMP=0x0000000000098b00
- (id)wrappedOutputImage99;	// IMP=0x000000000009c242
- (id)wrappedOutputImage98;	// IMP=0x000000000009c22b
- (id)wrappedOutputImage97;	// IMP=0x000000000009c214
- (id)wrappedOutputImage96;	// IMP=0x000000000009c1fd
- (id)wrappedOutputImage95;	// IMP=0x000000000009c1e6
- (id)wrappedOutputImage94;	// IMP=0x000000000009c1cf
- (id)wrappedOutputImage93;	// IMP=0x000000000009c1b8
- (id)wrappedOutputImage92;	// IMP=0x000000000009c1a1
- (id)wrappedOutputImage91;	// IMP=0x000000000009c18a
- (id)wrappedOutputImage90;	// IMP=0x000000000009c173
- (id)wrappedOutputImage89;	// IMP=0x000000000009c15c
- (id)wrappedOutputImage88;	// IMP=0x000000000009c145
- (id)wrappedOutputImage87;	// IMP=0x000000000009c12e
- (id)wrappedOutputImage86;	// IMP=0x000000000009c117
- (id)wrappedOutputImage85;	// IMP=0x000000000009c100
- (id)wrappedOutputImage84;	// IMP=0x000000000009c0e9
- (id)wrappedOutputImage83;	// IMP=0x000000000009c0d2
- (id)wrappedOutputImage82;	// IMP=0x000000000009c0bb
- (id)wrappedOutputImage81;	// IMP=0x000000000009c0a4
- (id)wrappedOutputImage80;	// IMP=0x000000000009c08d
- (id)wrappedOutputImage79;	// IMP=0x000000000009c076
- (id)wrappedOutputImage78;	// IMP=0x000000000009c05f
- (id)wrappedOutputImage77;	// IMP=0x000000000009c048
- (id)wrappedOutputImage76;	// IMP=0x000000000009c031
- (id)wrappedOutputImage75;	// IMP=0x000000000009c01a
- (id)wrappedOutputImage74;	// IMP=0x000000000009c003
- (id)wrappedOutputImage73;	// IMP=0x000000000009bfec
- (id)wrappedOutputImage72;	// IMP=0x000000000009bfd5
- (id)wrappedOutputImage71;	// IMP=0x000000000009bfbe
- (id)wrappedOutputImage70;	// IMP=0x000000000009bfa7
- (id)wrappedOutputImage69;	// IMP=0x000000000009bf90
- (id)wrappedOutputImage68;	// IMP=0x000000000009bf79
- (id)wrappedOutputImage67;	// IMP=0x000000000009bf62
- (id)wrappedOutputImage66;	// IMP=0x000000000009bf4b
- (id)wrappedOutputImage65;	// IMP=0x000000000009bf34
- (id)wrappedOutputImage64;	// IMP=0x000000000009bf1d
- (id)wrappedOutputImage63;	// IMP=0x000000000009bf06
- (id)wrappedOutputImage62;	// IMP=0x000000000009beef
- (id)wrappedOutputImage61;	// IMP=0x000000000009bed8
- (id)wrappedOutputImage60;	// IMP=0x000000000009bec1
- (id)wrappedOutputImage59;	// IMP=0x000000000009beaa
- (id)wrappedOutputImage58;	// IMP=0x000000000009be93
- (id)wrappedOutputImage57;	// IMP=0x000000000009be7c
- (id)wrappedOutputImage56;	// IMP=0x000000000009be65
- (id)wrappedOutputImage55;	// IMP=0x000000000009be4e
- (id)wrappedOutputImage54;	// IMP=0x000000000009be37
- (id)wrappedOutputImage53;	// IMP=0x000000000009be20
- (id)wrappedOutputImage52;	// IMP=0x000000000009be09
- (id)wrappedOutputImage51;	// IMP=0x000000000009bdf2
- (id)wrappedOutputImage50;	// IMP=0x000000000009bddb
- (id)wrappedOutputImage49;	// IMP=0x000000000009bdc4
- (id)wrappedOutputImage48;	// IMP=0x000000000009bdad
- (id)wrappedOutputImage47;	// IMP=0x000000000009bd96
- (id)wrappedOutputImage46;	// IMP=0x000000000009bd7f
- (id)wrappedOutputImage45;	// IMP=0x000000000009bd68
- (id)wrappedOutputImage44;	// IMP=0x000000000009bd51
- (id)wrappedOutputImage43;	// IMP=0x000000000009bd3a
- (id)wrappedOutputImage42;	// IMP=0x000000000009bd23
- (id)wrappedOutputImage41;	// IMP=0x000000000009bd0c
- (id)wrappedOutputImage40;	// IMP=0x000000000009bcf5
- (id)wrappedOutputImage39;	// IMP=0x000000000009bcde
- (id)wrappedOutputImage38;	// IMP=0x000000000009bcc7
- (id)wrappedOutputImage37;	// IMP=0x000000000009bcb0
- (id)wrappedOutputImage36;	// IMP=0x000000000009bc99
- (id)wrappedOutputImage35;	// IMP=0x000000000009bc82
- (id)wrappedOutputImage34;	// IMP=0x000000000009bc6b
- (id)wrappedOutputImage33;	// IMP=0x000000000009bc54
- (id)wrappedOutputImage32;	// IMP=0x000000000009bc3d
- (id)wrappedOutputImage31;	// IMP=0x000000000009bc26
- (id)wrappedOutputImage30;	// IMP=0x000000000009bc0f
- (id)wrappedOutputImage29;	// IMP=0x000000000009bbf8
- (id)wrappedOutputImage28;	// IMP=0x000000000009bbe1
- (id)wrappedOutputImage27;	// IMP=0x000000000009bbca
- (id)wrappedOutputImage26;	// IMP=0x000000000009bbb3
- (id)wrappedOutputImage25;	// IMP=0x000000000009bb9c
- (id)wrappedOutputImage24;	// IMP=0x000000000009bb85
- (id)wrappedOutputImage23;	// IMP=0x000000000009bb6e
- (id)wrappedOutputImage22;	// IMP=0x000000000009bb57
- (id)wrappedOutputImage21;	// IMP=0x000000000009bb40
- (id)wrappedOutputImage20;	// IMP=0x000000000009bb29
- (id)wrappedOutputImage19;	// IMP=0x000000000009bb12
- (id)wrappedOutputImage18;	// IMP=0x000000000009bafb
- (id)wrappedOutputImage17;	// IMP=0x000000000009bae4
- (id)wrappedOutputImage16;	// IMP=0x000000000009bacd
- (id)wrappedOutputImage15;	// IMP=0x000000000009bab6
- (id)wrappedOutputImage14;	// IMP=0x000000000009ba9f
- (id)wrappedOutputImage13;	// IMP=0x000000000009ba88
- (id)wrappedOutputImage12;	// IMP=0x000000000009ba71
- (id)wrappedOutputImage11;	// IMP=0x000000000009ba5a
- (id)wrappedOutputImage10;	// IMP=0x000000000009ba43
- (id)outputImageCatchAll:(unsigned int)arg1;	// IMP=0x000000000009b5ab
- (id)_append:(id)arg1 image:(id)arg2;	// IMP=0x000000000009b43c
- (id)_appendSingleFilterTo:(id)arg1 filterAndSettings:(id)arg2;	// IMP=0x000000000009b2db
- (void)_prepend:(id)arg1;	// IMP=0x000000000009b18b
- (void)_prependSingleFilter:(id)arg1;	// IMP=0x000000000009ae15
- (int)compatibilityVersion;	// IMP=0x000000000009d7cb
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000011f2b9
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000011f161
- (_Bool)verifyPrewarmedFilter:(id)arg1;	// IMP=0x00000000001c5f46
- (id)prewarmingString;	// IMP=0x00000000001c50f1

@end

