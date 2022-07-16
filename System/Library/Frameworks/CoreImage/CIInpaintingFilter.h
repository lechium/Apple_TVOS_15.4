//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, InpaintingExecutionContext, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIInpaintingFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMaskImage;	// 80 = 0x50
    CIVector *inputMaskBoundingBox;	// 88 = 0x58
    NSArray *inputFaceBoundingBoxes;	// 96 = 0x60
    NSArray *inputInpaintingProcessingResolutions;	// 104 = 0x68
    NSNumber *inputInpaintingBlendingRadius;	// 112 = 0x70
    NSNumber *inputInpaintingMode;	// 120 = 0x78
    InpaintingExecutionContext *_executionContext;	// 128 = 0x80
}

+ (id)getEspressoResources;	// IMP=0x000000000006a3a0
+ (id)customAttributes;	// IMP=0x00000000000691de
@property(readonly) InpaintingExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) NSNumber *inputInpaintingMode; // @synthesize inputInpaintingMode;
@property(retain, nonatomic) NSNumber *inputInpaintingBlendingRadius; // @synthesize inputInpaintingBlendingRadius;
@property(retain, nonatomic) NSArray *inputInpaintingProcessingResolutions; // @synthesize inputInpaintingProcessingResolutions;
@property(retain, nonatomic) NSArray *inputFaceBoundingBoxes; // @synthesize inputFaceBoundingBoxes;
@property(retain, nonatomic) CIVector *inputMaskBoundingBox; // @synthesize inputMaskBoundingBox;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(readonly, getter=getLastExecutionTime) double lastExecutionTime;
@property(readonly, getter=getLastProcessingResolution) int lastProcessingResolution;
- (id)performFullPipelineInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006a2c9
- (id)performMultiresolutionInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006a22c
- (id)performTilingPipelineInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006a18f
- (id)performSinglePassInpaintingWithParameters:(id)arg1;	// IMP=0x000000000006a0f2
- (struct CGRect)inputMaskBoundingBoxAsValidCGRect;	// IMP=0x000000000006a00c
- (id)outputImage;	// IMP=0x0000000000069a31
- (id)getSelectedFacesInpaintingModelDescriptor;	// IMP=0x0000000000069a24
- (id)getSelectedGeneralInpaintingModelDescriptor;	// IMP=0x0000000000069a17
- (_Bool)shouldFaceSpecificModelBeUsed;	// IMP=0x00000000000694b6
- (void)dealloc;	// IMP=0x000000000006916f
- (id)init;	// IMP=0x00000000000690d0

@end
