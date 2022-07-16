//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution3X3
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputWeights;	// 80 = 0x50
    NSNumber *inputBias;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0000000000057562
@property(retain, nonatomic) NSNumber *inputBias; // @synthesize inputBias;
@property(retain, nonatomic) CIVector *inputWeights; // @synthesize inputWeights;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000577fb
- (_Bool)_isIdentity;	// IMP=0x0000000000057777

@end

