//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDroste
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputInsetPoint0;	// 80 = 0x50
    CIVector *inputInsetPoint1;	// 88 = 0x58
    NSNumber *inputStrands;	// 96 = 0x60
    NSNumber *inputPeriodicity;	// 104 = 0x68
    NSNumber *inputRotation;	// 112 = 0x70
    NSNumber *inputZoom;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x0000000000075be8
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000754f2
- (id)_CIDroste;	// IMP=0x00000000000754d2

@end
