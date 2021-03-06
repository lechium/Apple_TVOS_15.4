//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance <_CIFilterProperties>
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputAmount;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x000000000017794d
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x0000000000177f3f
- (id)_outputProperties;	// IMP=0x0000000000177e27
- (id)outputImage;	// IMP=0x0000000000177bb3
- (id)_kernelPos;	// IMP=0x0000000000177b93
- (id)_kernelNeg;	// IMP=0x0000000000177b73
- (_Bool)_isIdentity;	// IMP=0x0000000000177b3e

@end

