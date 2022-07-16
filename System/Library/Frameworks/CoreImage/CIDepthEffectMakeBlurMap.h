//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCameraCalibrationData, CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthEffectMakeBlurMap
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputShiftmapImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    CIImage *inputHairImage;	// 96 = 0x60
    CIImage *inputGlassesImage;	// 104 = 0x68
    CIImage *inputGainMap;	// 112 = 0x70
    NSNumber *inputAperture;	// 120 = 0x78
    CIVector *inputLeftEyePosition;	// 128 = 0x80
    CIVector *inputRightEyePosition;	// 136 = 0x88
    CIVector *inputChinPosition;	// 144 = 0x90
    CIVector *inputFaceMidPoint;	// 152 = 0x98
    CIVector *inputFocusRect;	// 160 = 0xa0
    NSNumber *inputScale;	// 168 = 0xa8
    AVCameraCalibrationData *inputCalibrationData;	// 176 = 0xb0
    id inputAuxDataMetadata;	// 184 = 0xb8
    NSDictionary *tuningParameters;	// 192 = 0xc0
    float simulatedAperture;	// 200 = 0xc8
    NSNumber *inputDraftMode;	// 208 = 0xd0
}

+ (id)customAttributes;	// IMP=0x00000000001aa0ca
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIVector *inputFaceMidPoint; // @synthesize inputFaceMidPoint;
@property(retain) CIVector *inputChinPosition; // @synthesize inputChinPosition;
@property(retain) CIVector *inputRightEyePosition; // @synthesize inputRightEyePosition;
@property(retain) CIVector *inputLeftEyePosition; // @synthesize inputLeftEyePosition;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputGainMap; // @synthesize inputGainMap;
@property(retain) CIImage *inputGlassesImage; // @synthesize inputGlassesImage;
@property(retain) CIImage *inputHairImage; // @synthesize inputHairImage;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputShiftmapImage; // @synthesize inputShiftmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001aeace
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata *)arg1;	// IMP=0x00000000001adf68
- (id)blurMapV4:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3 hairImage:(id)arg4;	// IMP=0x00000000001ac9f1
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;	// IMP=0x00000000001ac67b
- (id)refineShiftMapV3WithMainImage:(id)arg1 shiftmap:(id)arg2 lensModel:(id)arg3;	// IMP=0x00000000001abe8c
- (id)blurMapV2:(id)arg1;	// IMP=0x00000000001abdc6
- (id)smoothShiftMapV2:(id)arg1;	// IMP=0x00000000001abd06
- (id)faceMaskDelta:(id)arg1 extent:(struct CGRect)arg2 parameters:(id)arg3 distanceToAdd:(float *)arg4;	// IMP=0x00000000001ab90a
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;	// IMP=0x00000000001ab71a
- (id)faceMaskParams:(id)arg1 useNormalizedCoords:(_Bool)arg2;	// IMP=0x00000000001ab14b
- (_Bool)needToRunFaceMask;	// IMP=0x00000000001ab03e
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;	// IMP=0x00000000001aaed0
- (id)lensModelParams:(id)arg1;	// IMP=0x00000000001aac9c
- (id)upsampledShiftMap:(id)arg1;	// IMP=0x00000000001aaa1f
- (float)intrinsicMatrixFocalLength;	// IMP=0x00000000001aa9e0
- (struct CGSize)originalShiftMapSize;	// IMP=0x00000000001aa907
- (id)calibrationData;	// IMP=0x00000000001aa8d0
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001aa870

@end
