//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISepiaTone
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputIntensity;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x000000000014c661
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000014c7f6
- (id)_kernel;	// IMP=0x000000000014c7b3
- (_Bool)_isIdentity;	// IMP=0x000000000014c77e

@end

