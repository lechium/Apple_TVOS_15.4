//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaperWash
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSaturation;	// 80 = 0x50
    NSNumber *inputGreyscale;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0000000000070561
@property(copy, nonatomic) NSNumber *inputGreyscale; // @synthesize inputGreyscale;
@property(copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;
- (id)outputImage;	// IMP=0x0000000000070777

@end

