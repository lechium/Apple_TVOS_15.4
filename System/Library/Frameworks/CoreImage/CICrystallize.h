//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICrystallize
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    CIVector *inputCenter;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x000000000005ea1d
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000005e5be
- (id)_CICrystallize;	// IMP=0x000000000005e59e

@end

