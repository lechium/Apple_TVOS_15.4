//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject
{
    AVCaptureOutputInternal *_outputInternal;	// 8 = 0x8
}

+ (id)allOutputSubclasses;	// IMP=0x000000000001ad04
+ (long long)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000001ac78
+ (id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(CDStruct_79c71658)arg3 fileType:(id)arg4 videoCodecTypesAllowList:(id)arg5;	// IMP=0x000000000001a970
+ (void)initialize;	// IMP=0x0000000000017296
- (void)handleBackgroundBlurActiveChangedForDevice:(id)arg1;	// IMP=0x000000000001adfc
- (void)handleCenterStageActiveChangedForDevice:(id)arg1;	// IMP=0x000000000001adf6
- (_Bool)updateVideoSettingsForConnection:(id)arg1;	// IMP=0x000000000001acfc
- (id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(_Bool)arg5;	// IMP=0x000000000001a882
- (id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3;	// IMP=0x000000000001a0d1
- (id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(_Bool)arg4;	// IMP=0x0000000000018934
- (void)bumpChangeSeed;	// IMP=0x00000000000188e9
- (int)changeSeed;	// IMP=0x00000000000188dc
- (id)liveConnections;	// IMP=0x000000000001875b
- (id)firstEnabledConnectionForMediaType:(id)arg1;	// IMP=0x00000000000184b9
- (void)removeConnection:(id)arg1;	// IMP=0x0000000000018419
- (id)addConnection:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000180d7
- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;	// IMP=0x00000000000180cf
- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;	// IMP=0x00000000000180c7
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;	// IMP=0x000000000001808e
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000001807c
- (void)updateMetadataTransformForSourceFormat:(id)arg1;	// IMP=0x0000000000017e42
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;	// IMP=0x0000000000017db7
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;	// IMP=0x0000000000017cef
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000017b58
- (id)_inputForConnection:(id)arg1;	// IMP=0x0000000000017ab1
- (id)connectionWithMediaType:(id)arg1;	// IMP=0x0000000000017814
@property(readonly, nonatomic) NSArray *connections;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x00000000000177b4
- (id)connectionMediaTypes;	// IMP=0x00000000000177a7
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;	// IMP=0x000000000001775e
- (_Bool)hasRequiredOutputFormatForConnection:(id)arg1;	// IMP=0x0000000000017756
- (void)setSinkID:(id)arg1;	// IMP=0x000000000001771e
- (id)sinkID;	// IMP=0x0000000000017703
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x00000000000176fd
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000001768d
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x0000000000017687
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x00000000000175d8
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x00000000000175d2
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000001751b
- (void)performBlockOnSessionNotifyingThread:(CDUnknownBlockType)arg1;	// IMP=0x000000000001744d
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017379
- (void)setSession:(id)arg1;	// IMP=0x000000000001736b
- (id)session;	// IMP=0x000000000001735d
- (void)dealloc;	// IMP=0x0000000000017322
- (id)initSubclass;	// IMP=0x00000000000172a7

@end

