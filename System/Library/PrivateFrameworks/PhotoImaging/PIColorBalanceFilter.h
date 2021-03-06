//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    NSNumber *_inputWarmTemp;	// 80 = 0x50
    NSNumber *_inputWarmTint;	// 88 = 0x58
    NSNumber *_inputStrength;	// 96 = 0x60
    NSNumber *_inputHasFace;	// 104 = 0x68
    NSNumber *_inputIsRaw;	// 112 = 0x70
}

+ (id)colorBalanceKernel;	// IMP=0x000000000000c7e4
+ (id)PPtogHDRKernel;	// IMP=0x000000000000c78d
+ (id)gHDRtoPPKernel;	// IMP=0x000000000000c736
+ (id)colorBalanceKernels;	// IMP=0x000000000000c706
+ (id)customAttributes;	// IMP=0x000000000000c5b4
- (void).cxx_destruct;	// IMP=0x000000000000d0cf
@property(retain, nonatomic) NSNumber *inputIsRaw; // @synthesize inputIsRaw=_inputIsRaw;
@property(retain, nonatomic) NSNumber *inputHasFace; // @synthesize inputHasFace=_inputHasFace;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property(retain, nonatomic) NSNumber *inputWarmTint; // @synthesize inputWarmTint=_inputWarmTint;
@property(retain, nonatomic) NSNumber *inputWarmTemp; // @synthesize inputWarmTemp=_inputWarmTemp;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x000000000000cac9
- (id)applyOutputConversion:(id)arg1;	// IMP=0x000000000000c9a0
- (id)applyInputConversion:(id)arg1;	// IMP=0x000000000000c877

@end

