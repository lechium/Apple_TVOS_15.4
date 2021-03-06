//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIEdgePreserveUpsampleFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputSmallImage;	// 80 = 0x50
    NSNumber *inputSpatialSigma;	// 88 = 0x58
    NSNumber *inputLumaSigma;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0000000000089708
@property(retain, nonatomic) NSNumber *inputLumaSigma; // @synthesize inputLumaSigma;
@property(retain, nonatomic) NSNumber *inputSpatialSigma; // @synthesize inputSpatialSigma;
@property(retain, nonatomic) CIImage *inputSmallImage; // @synthesize inputSmallImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000089a41
- (id)_kernelGuideMono;	// IMP=0x0000000000089a21
- (id)_kernelGuideCombine4;	// IMP=0x0000000000089a01
- (id)_kernelGuideCombine;	// IMP=0x00000000000899e1
- (id)_kernelJointUpsampRG;	// IMP=0x00000000000899c1
- (id)_kernelJointUpsamp;	// IMP=0x00000000000899a1

@end

