//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;	// 8 = 0x8
    _Bool _dualCameraFusionEnabled;	// 16 = 0x10
}

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;	// IMP=0x000000000002233d
+ (void)initialize;	// IMP=0x000000000002232c
@property(readonly, getter=isDualCameraFusionEnabled) _Bool dualCameraFusionEnabled; // @synthesize dualCameraFusionEnabled=_dualCameraFusionEnabled;
- (id)digitalFlashUserInterfaceRGBEstimate;	// IMP=0x0000000000022ffa
- (unsigned long long)digitalFlashUserInterfaceHints;	// IMP=0x0000000000022fe9
- (_Bool)isCaptureBeforeResolvingSettingsEnabled;	// IMP=0x0000000000022fd9
@property(readonly, getter=isContentAwareDistortionCorrectionEnabled) _Bool contentAwareDistortionCorrectionEnabled;
@property(readonly) CDStruct_e83c9415 photoProcessingTimeRange;
- (CDStruct_79c71658)deferredPhotoProxyDimensions;	// IMP=0x0000000000022f8b
- (id)photoManifest;	// IMP=0x0000000000022f6d
@property(readonly) unsigned long long expectedPhotoCount;
@property(readonly, getter=isVirtualDeviceFusionEnabled) _Bool virtualDeviceFusionEnabled;
- (_Bool)livePhotoMovieEnabled;	// IMP=0x0000000000022f36
- (_Bool)isSquareCropEnabled;	// IMP=0x0000000000022f29
@property(readonly, getter=isStillImageStabilizationEnabled) _Bool stillImageStabilizationEnabled;
- (_Bool)isEV0PhotoDeliveryEnabled;	// IMP=0x0000000000022f0f
- (_Bool)isAdjustedPhotoFilterRenderingEnabled;	// IMP=0x0000000000022f02
- (_Bool)isHDREnabled;	// IMP=0x0000000000022ef5
@property(readonly, getter=isRedEyeReductionEnabled) _Bool redEyeReductionEnabled;
@property(readonly, getter=isFlashEnabled) _Bool flashEnabled;
- (_Bool)isTurboModeEnabled;	// IMP=0x0000000000022ece
- (CDStruct_79c71658)spatialOverCapturePhotoDimensions;	// IMP=0x0000000000022ec0
- (CDStruct_79c71658)dimensionsForSemanticSegmentationMatteOfType:(id)arg1;	// IMP=0x0000000000022def
@property(readonly) CDStruct_79c71658 portraitEffectsMatteDimensions;
@property(readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property(readonly) CDStruct_79c71658 rawPhotoDimensions;
@property(readonly) CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 previewDimensions;
@property(readonly) CDStruct_79c71658 photoDimensions;
@property(readonly) long long uniqueID;
- (id)description;	// IMP=0x0000000000022cea
- (id)debugDescription;	// IMP=0x000000000002277f
- (void)dealloc;	// IMP=0x000000000002273f
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;	// IMP=0x0000000000022533

@end
