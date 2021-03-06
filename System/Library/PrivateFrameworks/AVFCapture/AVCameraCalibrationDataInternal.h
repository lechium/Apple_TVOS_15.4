//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVCameraCalibrationDataInternal : NSObject
{
    CDStruct_8e0628e6 intrinsicMatrix;	// 16 = 0x10
    struct CGSize intrinsicMatrixReferenceDimensions;	// 64 = 0x40
    CDStruct_14d5dc5e extrinsicMatrix;	// 80 = 0x50
    float pixelSize;	// 144 = 0x90
    NSData *lensDistortionCoefficients;	// 152 = 0x98
    NSData *inverseLensDistortionCoefficients;	// 160 = 0xa0
    struct CGPoint lensDistortionCenter;	// 168 = 0xa8
    NSData *lensDistortionLookupTable;	// 184 = 0xb8
    NSData *inverseLensDistortionLookupTable;	// 192 = 0xc0
    NSDictionary *cameraCalibrationDataDictionary;	// 200 = 0xc8
}

@end

