//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFusionDelta
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputAddBlur;	// 80 = 0x50
    CIVector *inputRemoveBlur;	// 88 = 0x58
    NSNumber *inputApertureScaling;	// 96 = 0x60
    NSNumber *inputMaxBlur;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00000000000470c5
- (id)outputImage;	// IMP=0x00000000000471f1
- (_Bool)_isIdentity;	// IMP=0x0000000000047197
- (id)kernel;	// IMP=0x00000000000470a5

@end

