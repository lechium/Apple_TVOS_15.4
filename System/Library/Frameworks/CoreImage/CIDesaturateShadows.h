//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDesaturateShadows
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputIntensity;	// 80 = 0x50
    NSNumber *inputThreshold;	// 88 = 0x58
    NSNumber *inputSoftness;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00000000000431f7
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)outputImage;	// IMP=0x0000000000043540

@end

