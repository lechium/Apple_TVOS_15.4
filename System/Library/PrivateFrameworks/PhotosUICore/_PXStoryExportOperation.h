//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <PhotosUICore/PXGEngineDelegate-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDDataSource-Protocol.h>
#import <PhotosUICore/PXStoryExportRequest_Internal-Protocol.h>
#import <PhotosUICore/PXStoryPacingCueSource-Protocol.h>

@class AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSError, NSObject, NSProgress, NSString, NSURL, PXGEngine, PXGPixelBufferMetalRenderDestination, PXMediaProvider, PXObservable, PXStoryExportConfiguration, PXStoryExportVideoOptions, PXStoryModel, PXStoryPacingController, PXStoryRelatedController, PXStorySongController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log, PXAudioCueSource, PXStoryStyle;

@interface _PXStoryExportOperation : NSOperation <PXGEngineDelegate, PXStoryDiagnosticHUDDataSource, PXStoryPacingCueSource, PXStoryExportRequest_Internal>
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    long long _stateQueue_status;	// 16 = 0x10
    NSError *_stateQueue_error;	// 24 = 0x18
    _Bool _stateQueue_hasAudioForExport;	// 32 = 0x20
    CDStruct_1b6d18a9 _stateQueue_exportDuration;	// 36 = 0x24
    CDStruct_1b6d18a9 _stateQueue_outroDuration;	// 60 = 0x3c
    id <PXStoryStyle> _stateQueue_exportedStyle;	// 88 = 0x58
    NSObject<OS_os_log> *_signpostLog;	// 96 = 0x60
    unsigned long long _signpostID;	// 104 = 0x68
    NSObject<OS_os_log> *_frequentSignpostLog;	// 112 = 0x70
    unsigned long long _frequentSignpostID;	// 120 = 0x78
    _Bool _storyQueue_isWaitingForResources;	// 128 = 0x80
    NSString *_uniqueIdentifier;	// 136 = 0x88
    PXStoryExportConfiguration *_configuration;	// 144 = 0x90
    NSURL *_destinationURL;	// 152 = 0x98
    NSProgress *_progress;	// 160 = 0xa0
    PXStoryExportVideoOptions *_videoOptions;	// 168 = 0xa8
    CDUnknownBlockType _progressHandler;	// 176 = 0xb0
    NSObject<OS_dispatch_semaphore> *_layoutCompleteSemaphore;	// 184 = 0xb8
    NSObject<OS_dispatch_semaphore> *_completedWritingVideoFrameSemaphore;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_storyQueue;	// 200 = 0xc8
    PXGEngine *_storyQueue_engine;	// 208 = 0xd0
    PXStoryModel *_storyQueue_storyModel;	// 216 = 0xd8
    PXMediaProvider *_storyQueue_mediaProvider;	// 224 = 0xe0
    PXStoryPacingController *_storyQueue_pacingController;	// 232 = 0xe8
    PXStorySongController *_storyQueue_songController;	// 240 = 0xf0
    PXGPixelBufferMetalRenderDestination *_storyQueue_pixelBufferRenderDestination;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_audioQueue;	// 256 = 0x100
    AVAssetReader *_audioQueue_assetReader;	// 264 = 0x108
    AVAssetWriterInput *_audioQueue_audioWriter;	// 272 = 0x110
    AVAssetReaderAudioMixOutput *_audioQueue_audioMixOutput;	// 280 = 0x118
    AVAssetWriter *_assetWriter;	// 288 = 0x120
    NSObject<OS_dispatch_queue> *_videoWriterQueue;	// 296 = 0x128
    AVAssetWriterInputPixelBufferAdaptor *_videoWriterQueue_pixelBufferWriter;	// 304 = 0x130
    CDStruct_1b6d18a9 _videoQueue_firstWrittenStoryTime;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000006cbb74
@property(nonatomic) CDStruct_1b6d18a9 videoQueue_firstWrittenStoryTime; // @synthesize videoQueue_firstWrittenStoryTime=_videoQueue_firstWrittenStoryTime;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoWriterQueue_pixelBufferWriter; // @synthesize videoWriterQueue_pixelBufferWriter=_videoWriterQueue_pixelBufferWriter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *videoWriterQueue; // @synthesize videoWriterQueue=_videoWriterQueue;
@property(retain) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioQueue_audioMixOutput; // @synthesize audioQueue_audioMixOutput=_audioQueue_audioMixOutput;
@property(retain, nonatomic) AVAssetWriterInput *audioQueue_audioWriter; // @synthesize audioQueue_audioWriter=_audioQueue_audioWriter;
@property(retain, nonatomic) AVAssetReader *audioQueue_assetReader; // @synthesize audioQueue_assetReader=_audioQueue_assetReader;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) PXGPixelBufferMetalRenderDestination *storyQueue_pixelBufferRenderDestination; // @synthesize storyQueue_pixelBufferRenderDestination=_storyQueue_pixelBufferRenderDestination;
@property(retain, nonatomic) PXStorySongController *storyQueue_songController; // @synthesize storyQueue_songController=_storyQueue_songController;
@property(retain, nonatomic) PXStoryPacingController *storyQueue_pacingController; // @synthesize storyQueue_pacingController=_storyQueue_pacingController;
@property(retain, nonatomic) PXMediaProvider *storyQueue_mediaProvider; // @synthesize storyQueue_mediaProvider=_storyQueue_mediaProvider;
@property(retain, nonatomic) PXStoryModel *storyQueue_storyModel; // @synthesize storyQueue_storyModel=_storyQueue_storyModel;
@property(retain, nonatomic) PXGEngine *storyQueue_engine; // @synthesize storyQueue_engine=_storyQueue_engine;
@property(readonly, nonatomic) _Bool storyQueue_isWaitingForResources; // @synthesize storyQueue_isWaitingForResources=_storyQueue_isWaitingForResources;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completedWritingVideoFrameSemaphore; // @synthesize completedWritingVideoFrameSemaphore=_completedWritingVideoFrameSemaphore;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *layoutCompleteSemaphore; // @synthesize layoutCompleteSemaphore=_layoutCompleteSemaphore;
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) PXStoryExportVideoOptions *videoOptions; // @synthesize videoOptions=_videoOptions;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) PXStoryExportConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)_waitWhileExportingCanContinueForSemaphore:(id)arg1 timeout:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000006cb7bf
@property(readonly, nonatomic) unsigned long long HUDStoryModelChangeDescriptor;
@property(readonly, nonatomic) unsigned long long HUDContentChangeDescriptor;
@property(readonly, nonatomic) unsigned long long HUDVisibiltyChangeDescriptor;
@property(readonly, nonatomic) PXObservable *HUDObservable;
- (id)diagnosticHUDContentProviderForType:(long long)arg1;	// IMP=0x00000000006cb740
@property(readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;
@property(readonly, nonatomic) long long diagnosticHUDType;
@property(readonly, nonatomic) _Bool isHUDVisible;
@property(readonly, nonatomic) PXStoryModel *HUDStoryModel;
- (void)collectAnalyticsForExportEnd:(id)arg1;	// IMP=0x00000000006cb5da
- (id)collectAnalyticsForExportBegin;	// IMP=0x00000000006cb577
- (id)diagnosticCueStringForSize:(struct CGSize)arg1 withIndicatorTime:(CDStruct_1b6d18a9)arg2 rangeIndicatorTimeRange:(CDStruct_e83c9415)arg3;	// IMP=0x00000000006cb433
@property(readonly, nonatomic) long long cuesVersion;
@property(readonly, nonatomic) id <PXAudioCueSource> audioCueSource;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)engineSetNeedsUpdate:(id)arg1;	// IMP=0x00000000006cb22a
- (_Bool)engine:(id)arg1 shouldRenderLayout:(id)arg2 sprites:(id)arg3;	// IMP=0x00000000006caf43
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000006caeaa
- (void)_initializeProgress;	// IMP=0x00000000006cad92
- (void)_audioWriteQueue_cancelAudioExport;	// IMP=0x00000000006cacf3
- (void)_audioWriteQueue_exportAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ca7ab
- (void)_exportAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ca510
- (void)_addAudioInputToAssetWriter:(id)arg1;	// IMP=0x00000000006ca301
- (void)_audioWriteQueue_setupAudioReaderWithAudioExportComposition:(id)arg1 audioMix:(id)arg2;	// IMP=0x00000000006c9e59
- (id)_audibleVideoHilightsInStory;	// IMP=0x00000000006c9d8e
- (void)_addAudioAssetsForVideoHilightsToAudioCompositionBuilder:(id)arg1;	// IMP=0x00000000006c9748
- (void)_handleMediaRequestCompletedForSongAsset:(id)arg1 avAsset:(id)arg2 audioMix:(id)arg3 info:(id)arg4 audioCompositionBuilder:(id)arg5;	// IMP=0x00000000006c95c2
- (void)_addSongAssetToAudioCompositionBuilder:(id)arg1;	// IMP=0x00000000006c9248
- (void)_setupAudioExporting;	// IMP=0x00000000006c90df
- (void)_exportVideo;	// IMP=0x00000000006c8a9d
- (void)_videoWriterQueue_writeVideoWithPixelBuffer:(struct __CVBuffer *)arg1 forStoryTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000006c8693
- (void)_writeVideoWithPixelBuffer:(struct __CVBuffer *)arg1 forStoryTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000006c85af
- (id)pixelBufferAttributes;	// IMP=0x00000000006c844e
- (id)_videoOutputSettings;	// IMP=0x00000000006c81be
- (void)_addVideoInputToAssetWriter:(id)arg1;	// IMP=0x00000000006c7fd7
- (void)_storyQueue_processRenderedLayoutPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000006c7e57
- (void)_storyQueue_advanceLayoutToStoryTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000006c7a56
- (void)_advanceLayoutToStoryTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000006c7880
- (id)_storyQueue_createStoryModel;	// IMP=0x00000000006c756e
- (void)_setupStoryLayout;	// IMP=0x00000000006c747b
- (_Bool)_waitForStoryStateWhileExportingCanContinueByWatchingChanges:(unsigned long long)arg1 timeout:(CDStruct_1b6d18a9)arg2 verificationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c7012
- (void)_preloadStoryResourcesAndWaitForBuffering;	// IMP=0x00000000006c6b0c
- (void)_setupStoryModel;	// IMP=0x00000000006c6a90
- (void)_finishWriting;	// IMP=0x00000000006c6898
- (void)_addMetadataToAssetWriter:(id)arg1;	// IMP=0x00000000006c67a1
- (void)_setupWriter;	// IMP=0x00000000006c6323
- (void)main;	// IMP=0x00000000006c5db4
- (void)_signalSemaphoresForFailedExport;	// IMP=0x00000000006c5d45
@property(retain, nonatomic, setter=_setExportedStyle:) id <PXStoryStyle> exportedStyle;
@property(nonatomic, setter=_setOutroDuration:) CDStruct_1b6d18a9 outroDuration;
@property(nonatomic, setter=_setExportDuration:) CDStruct_1b6d18a9 exportDuration;
@property(nonatomic, setter=_setHasAudioForExport:) _Bool hasAudioForExport;
@property(nonatomic, setter=_setStatus:) long long status;
@property(retain, nonatomic, setter=_setError:) NSError *error;
- (_Bool)shouldContinueExporting;	// IMP=0x00000000006c5640
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cancel;	// IMP=0x00000000006c555e
- (void)dealloc;	// IMP=0x00000000006c5506
- (id)initWithURL:(id)arg1 configuration:(id)arg2 qualityOfService:(long long)arg3 progressHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006c5184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
