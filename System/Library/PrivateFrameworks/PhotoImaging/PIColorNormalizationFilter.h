//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, PFStoryRecipeDisplayAssetNormalization;

@interface PIColorNormalizationFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    PFStoryRecipeDisplayAssetNormalization *inputNormalization;	// 80 = 0x50
}

+ (id)colorCubeForNormalization:(id)arg1 dimension:(long long)arg2 targetColorSpace:(struct CGColorSpace *)arg3;	// IMP=0x0000000000001c3c
+ (_Bool)isAnalysisAvailable;	// IMP=0x0000000000001c34
+ (id)logger;	// IMP=0x0000000000001c04
- (void).cxx_destruct;	// IMP=0x0000000000001bd3
@property(retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *inputNormalization; // @synthesize inputNormalization;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *outputNormalization;
- (id)outputImage;	// IMP=0x000000000000144e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000137c
- (unsigned long long)hash;	// IMP=0x0000000000001338

@end
