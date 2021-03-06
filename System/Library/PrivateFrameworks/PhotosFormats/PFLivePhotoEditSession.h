//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, CIContext, CIImage, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface PFLivePhotoEditSession : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_renderQueue;	// 16 = 0x10
    AVAsset *_videoAsset;	// 24 = 0x18
    CDStruct_1b6d18a9 _inputVideoDuration;	// 32 = 0x20
    CDStruct_1b6d18a9 _photoTime;	// 56 = 0x38
    struct CGImageSource *_inputImageSource;	// 80 = 0x50
    unsigned int _inputOrientation;	// 88 = 0x58
    NSDictionary *_inputImageProperties;	// 96 = 0x60
    CIContext *_renderContext;	// 104 = 0x68
    AVAssetExportSession *_exportSession;	// 112 = 0x70
    CIImage *_inputImage;	// 120 = 0x78
    CIImage *_subsampledInputImage;	// 128 = 0x80
    long long _subsampleFactor;	// 136 = 0x88
    CIImage *_outputImage;	// 144 = 0x90
    CIImage *_scaledOutputImage;	// 152 = 0x98
    double _inputVideoScale;	// 160 = 0xa0
    struct CGSize _inputVideoScaleRoundingError;	// 168 = 0xa8
    CDUnknownBlockType _frameProcessor;	// 184 = 0xb8
    NSString *_temporaryDirectory;	// 192 = 0xc0
    NSURL *_lastTemporaryVideoURL;	// 200 = 0xc8
    NSString *_uniqueIdentifier;	// 208 = 0xd0
    _Bool _isExporting;	// 216 = 0xd8
    float _audioVolume;	// 220 = 0xdc
}

+ (id)_createTemporaryDirectory;	// IMP=0x000000000003bac5
+ (id)temporaryDirectory;	// IMP=0x000000000003ba62
- (void).cxx_destruct;	// IMP=0x0000000000039f6a
@property float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(readonly) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
- (void)cancel;	// IMP=0x0000000000039eda
- (void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039a5e
- (void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039979
- (id)_temporaryURLOfType:(id)arg1;	// IMP=0x0000000000039830
- (id)_outputVideoMetadata;	// IMP=0x0000000000039743
- (void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 volume:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000038f96
- (id)_outputImageProperties;	// IMP=0x0000000000038e22
- (double)_targetScaleForTargetSize:(struct CGSize)arg1;	// IMP=0x0000000000038da4
- (void)_renderImageWithTargetSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038c33
- (void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038af1
- (_Bool)_canRenderAtPlaybackTime;	// IMP=0x0000000000038ae9
- (void)_prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003862c
- (void)_cancelCurrentExportIfNeeded;	// IMP=0x000000000003850d
- (void)prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038437
- (id)_processImage:(id)arg1 scale:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000382f9
- (struct CGSize)_outputVideoSizeForScale:(double)arg1;	// IMP=0x0000000000038266
- (id)_videoCompositionForTargetSize:(struct CGSize)arg1;	// IMP=0x0000000000037ff9
- (struct CGSize)_outputVideoSize;	// IMP=0x0000000000037f01
@property(readonly) struct CGSize outputVideoSize;
- (struct CGSize)_outputImageSize;	// IMP=0x0000000000037dd4
@property(readonly) struct CGSize outputImageSize;
- (id)_outputImage;	// IMP=0x0000000000037c51
- (id)outputImage;	// IMP=0x0000000000037b98
- (double)_inputVideoScale;	// IMP=0x0000000000037ad8
- (struct CGAffineTransform)_inputVideoTransform;	// IMP=0x0000000000037a75
- (struct CGSize)_inputVideoSize;	// IMP=0x0000000000037a1b
- (id)_inputVideoTrack;	// IMP=0x00000000000379bd
- (struct CGSize)_inputImageSize;	// IMP=0x000000000003793b
- (id)inputImageForRenderScale:(double)arg1;	// IMP=0x000000000003787d
- (id)_scaledInputImageForTargetScale:(double)arg1;	// IMP=0x0000000000037730
- (id)_loadInputImageWithSubsampleFactor:(long long)arg1;	// IMP=0x0000000000037665
- (id)_loadInputImage;	// IMP=0x000000000003764e
- (id)_inputImage;	// IMP=0x0000000000037607
@property(readonly) CIImage *inputImage;
- (id)_loadInputImageProperties;	// IMP=0x0000000000037526
- (id)_inputImageProperties;	// IMP=0x00000000000374df
- (id)imageProperties;	// IMP=0x0000000000037426
@property(copy) CDUnknownBlockType frameProcessor;
- (unsigned int)_loadInputImageOrientation;	// IMP=0x000000000003725b
- (unsigned int)_inputOrientation;	// IMP=0x0000000000037234
@property(readonly) unsigned int orientation;
- (CDStruct_1b6d18a9)_loadInputVideoDuration;	// IMP=0x000000000003716f
- (CDStruct_1b6d18a9)_inputVideoDuration;	// IMP=0x0000000000037116
@property(readonly) CDStruct_1b6d18a9 duration;
- (void)dealloc;	// IMP=0x0000000000037033
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(CDStruct_1b6d18a9)arg3 photoOrientation:(unsigned int)arg4;	// IMP=0x0000000000036ecc
- (id)init;	// IMP=0x0000000000036ebe

@end

