//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputDisparityImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    CIImage *inputHairImage;	// 96 = 0x60
    CIImage *inputGlassesImage;	// 104 = 0x68
    CIImage *inputGainMap;	// 112 = 0x70
    NSNumber *inputAperture;	// 120 = 0x78
    CIVector *inputLeftEyePositions;	// 128 = 0x80
    CIVector *inputRightEyePositions;	// 136 = 0x88
    CIVector *inputChinPositions;	// 144 = 0x90
    CIVector *inputNosePositions;	// 152 = 0x98
    CIVector *inputFocusRect;	// 160 = 0xa0
    NSNumber *inputLumaNoiseScale;	// 168 = 0xa8
    NSNumber *inputScaleFactor;	// 176 = 0xb0
    AVCameraCalibrationData *inputCalibrationData;	// 184 = 0xb8
    id inputAuxDataMetadata;	// 192 = 0xc0
    NSString *inputShape;	// 200 = 0xc8
}

+ (id)customAttributes;	// IMP=0x00000000001b3a1b
+ (int)getDraftMode:(id)arg1;	// IMP=0x00000000001b8343
+ (struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;	// IMP=0x00000000001b826c
+ (struct CGImageMetadata *)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata *)arg2;	// IMP=0x00000000001b81a3
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg1;	// IMP=0x00000000001b8196
+ (struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg1 tuningParameters:(id)arg2;	// IMP=0x00000000001b818e
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property(retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIVector *inputNosePositions; // @synthesize inputNosePositions;
@property(retain) CIVector *inputChinPositions; // @synthesize inputChinPositions;
@property(retain) CIVector *inputRightEyePositions; // @synthesize inputRightEyePositions;
@property(retain) CIVector *inputLeftEyePositions; // @synthesize inputLeftEyePositions;
@property(retain, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(retain) CIImage *inputGainMap; // @synthesize inputGainMap;
@property(retain) CIImage *inputGlassesImage; // @synthesize inputGlassesImage;
@property(retain) CIImage *inputHairImage; // @synthesize inputHairImage;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001b453e
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;	// IMP=0x00000000001b4261
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001b4079
- (void)prewarm:(id)arg1;	// IMP=0x00000000001b39ad

@end

