//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIBilateralFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    NSNumber *_inputRadius;	// 80 = 0x50
    NSNumber *_inputEdgeDetail;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x000000000000705b
- (void).cxx_destruct;	// IMP=0x0000000000008a8b
@property(retain) NSNumber *inputEdgeDetail; // @synthesize inputEdgeDetail=_inputEdgeDetail;
@property(retain) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x00000000000071e1

@end

