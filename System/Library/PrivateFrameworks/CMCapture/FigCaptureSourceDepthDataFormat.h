//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FigCaptureSourceDepthDataFormat
{
}

@property(readonly) _Bool gainMapSupported;
@property(readonly) _Bool RGBIRStereoFusionSupported;
@property(readonly) NSArray *supportedSemanticSegmentationMatteURNs;
@property(readonly) float portraitEffectsMatteMainImageDownscalingFactor;
- (CDStruct_79c71658)depthEngineOutputDimensions;	// IMP=0x000000000002cae9
@property(readonly, getter=isStillImageOnlyDepthData) _Bool stillImageOnlyDepthData;
@property(readonly) CDStruct_79c71658 highResStillImageDimensions;
@property(readonly) float fieldOfView;
@property(readonly) float maxSupportedFrameRate;
@property(readonly) float minSupportedFrameRate;
@property(readonly) CDStruct_79c71658 dimensions;
- (struct opaqueCMFormatDescription *)formatDescription;	// IMP=0x000000000002c884
- (unsigned int)mediaType;	// IMP=0x000000000002c879
- (id)copyWithNewPixelFormat:(unsigned int)arg1;	// IMP=0x000000000002c7e7

@end

