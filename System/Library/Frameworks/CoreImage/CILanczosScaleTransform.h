//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputAspectRatio;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00000000000e13d0
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e105e
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000e06b3
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x00000000000deacb
- (_Bool)_isIdentity;	// IMP=0x00000000000dea6c

@end
