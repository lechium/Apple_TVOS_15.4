//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGaussianBlurXY
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSigmaX;	// 80 = 0x50
    NSNumber *inputSigmaY;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000000ace38
@property(retain, nonatomic) NSNumber *inputSigmaY; // @synthesize inputSigmaY;
@property(retain, nonatomic) NSNumber *inputSigmaX; // @synthesize inputSigmaX;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000ad118
- (_Bool)_isIdentity;	// IMP=0x00000000000ad0b9

@end

