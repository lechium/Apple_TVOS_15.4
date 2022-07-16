//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputFalloff;	// 80 = 0x50
    NSNumber *inputSharpness;	// 88 = 0x58
    NSNumber *inputEdgeScale;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x000000000015719d
- (id)outputImage;	// IMP=0x00000000001569c0
- (id)_CISharpenCombineEdges;	// IMP=0x00000000001569a0
- (id)_CIFindEdges;	// IMP=0x0000000000156980
- (id)_CIEdgesPrep;	// IMP=0x0000000000156960
- (id)_CIBlur4;	// IMP=0x0000000000156940
- (id)_CIBlur2;	// IMP=0x0000000000156920
- (id)_CIBlur1;	// IMP=0x0000000000156900
- (id)_CIConvertRGBtoY;	// IMP=0x00000000001568e0

@end
