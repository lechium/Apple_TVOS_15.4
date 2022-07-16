//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISingleChannelColorMap
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputChannelIndex;	// 80 = 0x50
    NSNumber *inputShouldNormalize;	// 88 = 0x58
    NSNumber *inputColorMapIndex;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0000000000043a4b
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputColorMapIndex; // @synthesize inputColorMapIndex;
@property(retain, nonatomic) NSNumber *inputShouldNormalize; // @synthesize inputShouldNormalize;
@property(retain, nonatomic) NSNumber *inputChannelIndex; // @synthesize inputChannelIndex;
- (id)outputImage;	// IMP=0x0000000000043cf3

@end

