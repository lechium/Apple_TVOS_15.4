//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    CIImage *_inputBlurImage;	// 80 = 0x50
    NSNumber *_inputIntensity;	// 88 = 0x58
}

+ (id)definitionKernel;	// IMP=0x0000000000003059
- (void).cxx_destruct;	// IMP=0x00000000000032cc
@property(retain) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
@property(retain) CIImage *inputBlurImage; // @synthesize inputBlurImage=_inputBlurImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x00000000000030c5

@end

