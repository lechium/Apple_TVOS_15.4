//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIExposureAdjust
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputEV;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x000000000008e05c
@property(retain, nonatomic) NSNumber *inputEV; // @synthesize inputEV;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000008e26f
- (_Bool)_isIdentity;	// IMP=0x000000000008e23a

@end

