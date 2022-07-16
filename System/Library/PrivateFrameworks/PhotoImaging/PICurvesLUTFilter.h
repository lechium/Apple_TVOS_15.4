//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class NSArray;

@interface PICurvesLUTFilter : CIFilter
{
    NSArray *_inputPointsR;	// 72 = 0x48
    NSArray *_inputPointsG;	// 80 = 0x50
    NSArray *_inputPointsB;	// 88 = 0x58
    NSArray *_inputPointsL;	// 96 = 0x60
}

+ (id)tableImageFromRed:(const float *)arg1 green:(const float *)arg2 blue:(const float *)arg3 luminance:(const float *)arg4;	// IMP=0x000000000000bb54
+ (id)curvePointsFromDictionaries:(id)arg1;	// IMP=0x000000000000b92e
+ (vector_fef9a72d)calculateCurveTable:(id)arg1;	// IMP=0x000000000000aea1
- (void).cxx_destruct;	// IMP=0x000000000000ae4e
@property(retain) NSArray *inputPointsL; // @synthesize inputPointsL=_inputPointsL;
@property(retain) NSArray *inputPointsB; // @synthesize inputPointsB=_inputPointsB;
@property(retain) NSArray *inputPointsG; // @synthesize inputPointsG=_inputPointsG;
@property(retain) NSArray *inputPointsR; // @synthesize inputPointsR=_inputPointsR;
- (id)outputImage;	// IMP=0x000000000000aaaa

@end

