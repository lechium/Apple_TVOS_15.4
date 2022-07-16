//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMattingSolverInternal
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMainImage;	// 80 = 0x50
    CIImage *inputPredicateImage;	// 88 = 0x58
    NSNumber *inputRadius;	// 96 = 0x60
    NSNumber *inputSubsampling;	// 104 = 0x68
    NSNumber *inputEPS;	// 112 = 0x70
    NSNumber *inputNumIterations;	// 120 = 0x78
    NSNumber *inputErosionKernelSize;	// 128 = 0x80
    NSNumber *inputUseDepthFilter;	// 136 = 0x88
    NSNumber *inputFGThresholdValue;	// 144 = 0x90
    NSNumber *inputBGThresholdValue;	// 152 = 0x98
}

+ (id)customAttributes;	// IMP=0x00000000000ea744
- (id)outputImage;	// IMP=0x00000000000ead75

@end

