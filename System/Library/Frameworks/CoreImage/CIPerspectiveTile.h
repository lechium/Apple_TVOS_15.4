//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIPerspectiveTile
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputTopLeft;	// 80 = 0x50
    CIVector *inputTopRight;	// 88 = 0x58
    CIVector *inputBottomRight;	// 96 = 0x60
    CIVector *inputBottomLeft;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00000000000ff71f
@property(retain, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(retain, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(retain, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(retain, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000ffa29
- (id)_kernel;	// IMP=0x00000000000ffa09

@end

