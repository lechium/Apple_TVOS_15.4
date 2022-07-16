//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStarShineGenerator
{
    CIVector *inputCenter;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputCrossScale;	// 96 = 0x60
    NSNumber *inputCrossAngle;	// 104 = 0x68
    NSNumber *inputCrossOpacity;	// 112 = 0x70
    NSNumber *inputCrossWidth;	// 120 = 0x78
    NSNumber *inputEpsilon;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x0000000000164b65
@property(retain, nonatomic) NSNumber *inputCrossOpacity; // @synthesize inputCrossOpacity;
@property(retain, nonatomic) NSNumber *inputCrossWidth; // @synthesize inputCrossWidth;
@property(retain, nonatomic) NSNumber *inputCrossScale; // @synthesize inputCrossScale;
@property(retain, nonatomic) NSNumber *inputCrossAngle; // @synthesize inputCrossAngle;
@property(retain, nonatomic) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;	// IMP=0x00000000001650da
- (id)_kernel;	// IMP=0x00000000001650ba

@end

