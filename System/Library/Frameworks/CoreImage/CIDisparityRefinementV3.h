//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementV3
{
    NSNumber *inputScale;	// 72 = 0x48
    CIImage *inputImage;	// 80 = 0x50
    CIImage *inputMainImage;	// 88 = 0x58
    CIImage *inputMatteImage;	// 96 = 0x60
    NSDictionary *inputTuningParameters;	// 104 = 0x68
    NSNumber *inputDraftMode;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x00000000001a9776
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputMainImage; // @synthesize inputMainImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
- (id)outputImage;	// IMP=0x00000000001a9bef
- (id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2;	// IMP=0x00000000001a98e7

@end

