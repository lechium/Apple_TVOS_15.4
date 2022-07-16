//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorClamp
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputMinComponents;	// 80 = 0x50
    CIVector *inputMaxComponents;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x000000000003e9b8
@property(retain, nonatomic) CIVector *inputMaxComponents; // @synthesize inputMaxComponents;
@property(retain, nonatomic) CIVector *inputMinComponents; // @synthesize inputMinComponents;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000003eba4
- (id)_kernelAlphaPreserving;	// IMP=0x000000000003e975
- (id)_kernel;	// IMP=0x000000000003e955

@end
