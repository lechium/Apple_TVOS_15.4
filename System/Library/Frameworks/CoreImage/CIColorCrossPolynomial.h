//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorCrossPolynomial
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputRedCoefficients;	// 80 = 0x50
    CIVector *inputGreenCoefficients;	// 88 = 0x58
    CIVector *inputBlueCoefficients;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00000000000461bf
@property(retain, nonatomic) CIVector *inputBlueCoefficients; // @synthesize inputBlueCoefficients;
@property(retain, nonatomic) CIVector *inputGreenCoefficients; // @synthesize inputGreenCoefficients;
@property(retain, nonatomic) CIVector *inputRedCoefficients; // @synthesize inputRedCoefficients;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000046545
- (_Bool)_isIdentity;	// IMP=0x000000000004653d
- (id)_kernel;	// IMP=0x000000000004619f

@end

