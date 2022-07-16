//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, CIVector, NSArray, VNFaceLandmarks2D, VNFaceObservation;

__attribute__((visibility("hidden")))
@interface RedEyeFace : NSObject
{
    int _imageOrientation;	// 8 = 0x8
    float _faceOrientation;	// 12 = 0xc
    float _junkiness;	// 16 = 0x10
    float _areaMax;	// 20 = 0x14
    VNFaceObservation *_observation;	// 24 = 0x18
    VNFaceLandmarks2D *_landmarks;	// 32 = 0x20
    CIImage *_segmentationSkin;	// 40 = 0x28
    CIImage *_segmentationSclera;	// 48 = 0x30
    CIImage *_segmentationIris;	// 56 = 0x38
    NSArray *_uvLeft;	// 64 = 0x40
    NSArray *_uvRight;	// 72 = 0x48
    CIVector *_faceRect;	// 80 = 0x50
    CIVector *_roiRenderOriginLeft;	// 88 = 0x58
    CIVector *_roiRenderOriginRight;	// 96 = 0x60
    CIVector *_roiRenderSize;	// 104 = 0x68
    CIVector *_pupilLeft;	// 112 = 0x70
    CIVector *_pupilRight;	// 120 = 0x78
}

@property(retain, nonatomic) CIVector *pupilRight; // @synthesize pupilRight=_pupilRight;
@property(retain, nonatomic) CIVector *pupilLeft; // @synthesize pupilLeft=_pupilLeft;
@property(retain, nonatomic) CIVector *roiRenderSize; // @synthesize roiRenderSize=_roiRenderSize;
@property(retain, nonatomic) CIVector *roiRenderOriginRight; // @synthesize roiRenderOriginRight=_roiRenderOriginRight;
@property(retain, nonatomic) CIVector *roiRenderOriginLeft; // @synthesize roiRenderOriginLeft=_roiRenderOriginLeft;
@property(retain, nonatomic) CIVector *faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) NSArray *uvRight; // @synthesize uvRight=_uvRight;
@property(retain, nonatomic) NSArray *uvLeft; // @synthesize uvLeft=_uvLeft;
@property(retain, nonatomic) CIImage *segmentationIris; // @synthesize segmentationIris=_segmentationIris;
@property(retain, nonatomic) CIImage *segmentationSclera; // @synthesize segmentationSclera=_segmentationSclera;
@property(retain, nonatomic) CIImage *segmentationSkin; // @synthesize segmentationSkin=_segmentationSkin;
@property(retain, nonatomic) VNFaceLandmarks2D *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) VNFaceObservation *observation; // @synthesize observation=_observation;
@property(nonatomic) float areaMax; // @synthesize areaMax=_areaMax;
@property(nonatomic) float junkiness; // @synthesize junkiness=_junkiness;
@property(nonatomic) float faceOrientation; // @synthesize faceOrientation=_faceOrientation;
@property(nonatomic) int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void)dealloc;	// IMP=0x000000000007aa4e
- (id)init;	// IMP=0x000000000007aa1f

@end

