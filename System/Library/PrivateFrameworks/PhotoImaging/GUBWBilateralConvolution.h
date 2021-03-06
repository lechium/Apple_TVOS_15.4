//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    NSArray *_inputPoints;	// 80 = 0x50
    NSArray *_inputWeights;	// 88 = 0x58
    NSNumber *_inputEdgeDetail;	// 96 = 0x60
    NSNumber *_inputBorder;	// 104 = 0x68
}

+ (id)bilateralLoop11Kernel;	// IMP=0x0000000000006492
+ (id)bilateralLoop5Kernel;	// IMP=0x000000000000643b
+ (id)bilateralLoop2Kernel;	// IMP=0x00000000000063e4
+ (id)BWBilateralKernels;	// IMP=0x00000000000063b4
- (void).cxx_destruct;	// IMP=0x0000000000006f82
@property(retain) NSNumber *inputBorder; // @synthesize inputBorder=_inputBorder;
@property(retain) NSNumber *inputEdgeDetail; // @synthesize inputEdgeDetail=_inputEdgeDetail;
@property(retain) NSArray *inputWeights; // @synthesize inputWeights=_inputWeights;
@property(retain) NSArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x0000000000006d9c
- (id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4;	// IMP=0x000000000000655c
- (struct CGRect)bilateralROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;	// IMP=0x0000000000006525

@end

