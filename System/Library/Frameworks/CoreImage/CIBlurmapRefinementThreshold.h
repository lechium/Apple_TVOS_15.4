//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementThreshold
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputThreshold;	// 80 = 0x50
}

@property(retain) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000243061
- (id)kernel;	// IMP=0x0000000000243041

@end

