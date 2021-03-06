//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingImageHelpers : NSObject
{
}

+ (void)saveVImageWrapper:(id)arg1 asPNGAt:(id)arg2;	// IMP=0x00000000001602dc
+ (void)saveCIImage:(id)arg1 asTIFFAt:(id)arg2;	// IMP=0x00000000001601fb
+ (void)saveCIImage:(id)arg1 asPNGAt:(id)arg2;	// IMP=0x000000000016011a
+ (id)createBGRAVImageWrapperFromCIImage:(id)arg1;	// IMP=0x000000000015ff32
+ (id)findEquidistantPointsOnMaskDiagonal:(id)arg1 tileSize:(int)arg2 maxDistanceBetweenPoints:(int)arg3 diagonalityDirection:(int)arg4;	// IMP=0x000000000015fc32
+ (id)computePerChannelSumsOfPixelsInImage:(id)arg1 onArea:(struct CGRect)arg2;	// IMP=0x000000000015fab1
+ (id)computePerChannelAvgPixelValueInImage:(id)arg1 onArea:(struct CGRect)arg2;	// IMP=0x000000000015f828
+ (id)padMask:(id)arg1 toImageSize:(id)arg2;	// IMP=0x000000000015f723
+ (id)padImage:(id)arg1 toExtent:(struct CGRect)arg2 usingColor:(id)arg3;	// IMP=0x000000000015f6bd
+ (id)erodeMask:(id)arg1 usingRadius:(int)arg2;	// IMP=0x000000000015f66d
+ (id)erodeMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2;	// IMP=0x000000000015f547
+ (id)dilateMask:(id)arg1 usingRadius:(int)arg2;	// IMP=0x000000000015f4f7
+ (id)dilateMaskUsingClampingAndCropping:(id)arg1 usingRadius:(int)arg2;	// IMP=0x000000000015f3d1
+ (id)thresholdMask:(id)arg1;	// IMP=0x000000000015f306
+ (id)invertMask:(id)arg1;	// IMP=0x000000000015f2ea
+ (struct CGRect)expandBoundingBoxToRectangle:(struct CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(struct CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5;	// IMP=0x000000000015f20c
+ (struct CGRect)expandBoundingBoxToSquare:(struct CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(struct CGSize)arg4 roundUpSidesToClosestResolution:(id)arg5;	// IMP=0x000000000015f138
+ (double)expandDimension:(double)arg1 toOneOfTheResolutions:(id)arg2;	// IMP=0x000000000015f003
+ (struct CGRect)expandBoundingBox:(struct CGRect)arg1 withSideExtraPercentage:(float)arg2 maxExtraSidePixels:(int)arg3 withinArea:(struct CGSize)arg4;	// IMP=0x000000000015eee1
+ (struct CGRect)expandBoundingBox:(struct CGRect)arg1 toWidth:(int)arg2 andHeight:(int)arg3 withinArea:(struct CGSize)arg4;	// IMP=0x000000000015ed50
+ (id)extractTileFromImage:(id)arg1 aroundCenterPoint:(struct CGPoint)arg2 tileSize:(int)arg3;	// IMP=0x000000000015ecf7
+ (struct CGRect)computeTileRectForImage:(id)arg1 aroundCenterPoint:(struct CGPoint)arg2 tileSize:(int)arg3;	// IMP=0x000000000015ebf1
+ (int)findTile1DOffsetForCenter:(int)arg1 maxBound:(int)arg2 tileSize:(int)arg3;	// IMP=0x000000000015ebcc
+ (id)moveOriginForImage:(id)arg1 to:(struct CGPoint)arg2;	// IMP=0x000000000015eb04
+ (id)multiplyImage:(id)arg1 withMask:(id)arg2;	// IMP=0x000000000015e973
+ (id)absoluteDiffBetweenImage:(id)arg1 andImage:(id)arg2;	// IMP=0x000000000015e859
+ (id)blurImage:(id)arg1 withSigma:(double)arg2;	// IMP=0x000000000015e7d4
+ (id)compositeImage:(id)arg1 overImage:(id)arg2;	// IMP=0x000000000015e7bb
+ (id)compositeImageWithReclamping:(id)arg1 overImage:(id)arg2;	// IMP=0x000000000015e75e
+ (id)reclampImageWith1PixBoundary:(id)arg1;	// IMP=0x000000000015e6a7
+ (id)compositeImageNoReclamping:(id)arg1 overImage:(id)arg2;	// IMP=0x000000000015e60a
+ (id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3 andGaussianBlendRadius:(int)arg4;	// IMP=0x000000000015e48d
+ (id)blendImage:(id)arg1 withBackgroundImage:(id)arg2 usingMask:(id)arg3;	// IMP=0x000000000015e3b2
+ (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x000000000015e399
+ (id)scaleImage:(id)arg1 toShorterEdgeSize:(double)arg2;	// IMP=0x000000000015e297
+ (id)scaleImage:(id)arg1 toWidth:(double)arg2 andHeight:(double)arg3;	// IMP=0x000000000015e0a5

@end

