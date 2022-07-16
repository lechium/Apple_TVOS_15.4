//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIContrastEnhancer
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputIntensity;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
    NSNumber *inputLocal;	// 96 = 0x60
    NSNumber *inputPerceptual;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0000000000070a15
@property(retain, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputLocal; // @synthesize inputLocal;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)outputImage;	// IMP=0x0000000000070d59

@end

