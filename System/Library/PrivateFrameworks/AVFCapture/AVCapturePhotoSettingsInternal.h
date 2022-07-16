//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSemanticStyle, NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoSettingsInternal : NSObject
{
    NSDictionary *format;	// 8 = 0x8
    NSString *processedFileType;	// 16 = 0x10
    unsigned int rawPhotoPixelFormatType;	// 24 = 0x18
    NSString *rawFileType;	// 32 = 0x20
    long long uniqueID;	// 40 = 0x28
    long long flashMode;	// 48 = 0x30
    _Bool autoRedEyeReductionEnabled;	// 56 = 0x38
    long long digitalFlashMode;	// 64 = 0x40
    long long HDRMode;	// 72 = 0x48
    _Bool EV0PhotoDeliveryEnabled;	// 80 = 0x50
    long long photoQualityPrioritization;	// 88 = 0x58
    _Bool photoQualityPrioritizationIsSetByClient;	// 96 = 0x60
    _Bool autoVirtualDeviceFusionEnabled;	// 97 = 0x61
    NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;	// 104 = 0x68
    _Bool highResolutionPhotoEnabled;	// 112 = 0x70
    _Bool depthDataDeliveryEnabled;	// 113 = 0x71
    _Bool embedsDepthDataInPhoto;	// 114 = 0x72
    _Bool depthDataFiltered;	// 115 = 0x73
    _Bool cameraCalibrationDataDeliveryEnabled;	// 116 = 0x74
    _Bool portraitEffectsMatteDeliveryEnabled;	// 117 = 0x75
    _Bool embedsPortraitEffectsMatteInPhoto;	// 118 = 0x76
    NSArray *enabledSemanticSegmentationMatteTypes;	// 120 = 0x78
    _Bool embedsSemanticSegmentationMattesInPhoto;	// 128 = 0x80
    NSDictionary *metadata;	// 136 = 0x88
    NSURL *livePhotoMovieFileURL;	// 144 = 0x90
    NSURL *livePhotoMovieFileURLForOriginalPhoto;	// 152 = 0x98
    NSString *livePhotoVideoCodecType;	// 160 = 0xa0
    NSArray *livePhotoMovieMetadata;	// 168 = 0xa8
    NSArray *livePhotoMovieMetadataForOriginalPhoto;	// 176 = 0xb0
    NSDictionary *previewPhotoFormat;	// 184 = 0xb8
    NSDictionary *embeddedThumbnailPhotoFormat;	// 192 = 0xc0
    NSDictionary *rawEmbeddedThumbnailPhotoFormat;	// 200 = 0xc8
    _Bool squareCropEnabled;	// 208 = 0xd0
    _Bool turboModeEnabled;	// 209 = 0xd1
    _Bool burstQualityCaptureEnabled;	// 210 = 0xd2
    NSArray *photoFilters;	// 216 = 0xd8
    NSArray *adjustedPhotoFilters;	// 224 = 0xe0
    unsigned int shutterSound;	// 232 = 0xe8
    unsigned long long userInitiatedPhotoRequestTime;	// 240 = 0xf0
    _Bool autoDeferredProcessingEnabled;	// 248 = 0xf8
    _Bool autoSpatialOverCaptureEnabled;	// 249 = 0xf9
    NSDictionary *spatialOverCaptureMetadata;	// 256 = 0x100
    NSURL *spatialOverCaptureLivePhotoMovieFileURL;	// 264 = 0x108
    NSArray *spatialOverCaptureLivePhotoMovieMetadata;	// 272 = 0x110
    NSString *spatialOverCaptureLivePhotoContentIdentifier;	// 280 = 0x118
    NSString *spatialOverCaptureGroupIdentifier;	// 288 = 0x120
    NSDictionary *spatialOverCaptureMetadataForOriginalPhoto;	// 296 = 0x128
    NSURL *spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;	// 304 = 0x130
    NSArray *spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;	// 312 = 0x138
    NSString *spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;	// 320 = 0x140
    NSString *spatialOverCaptureGroupIdentifierForOriginalPhoto;	// 328 = 0x148
    _Bool processedPhotoZoomWithoutUpscalingEnabled;	// 336 = 0x150
    _Bool autoContentAwareDistortionCorrectionEnabled;	// 337 = 0x151
    AVSemanticStyle *semanticStyle;	// 344 = 0x158
    _Bool previewPhotoFormatDimensionsLimitedToDisplayDimensions;	// 352 = 0x160
    _Bool prefersStillImageShiftedToMatchSpatialOverCapturePreview;	// 353 = 0x161
    NSString *livePhotoContentIdentifier;	// 360 = 0x168
    NSString *livePhotoContentIdentifierForOriginalPhoto;	// 368 = 0x170
}

@end

