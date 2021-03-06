//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PITempTintFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    double _temperature;	// 80 = 0x50
    double _tint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000002a7a
@property(nonatomic) double tint; // @synthesize tint=_tint;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void)setInputVectorsForFilter:(id)arg1;	// IMP=0x00000000000021ee
- (id)outputImage;	// IMP=0x000000000000212a

@end

