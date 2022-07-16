//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVAssetWriterInputMediaDataRequesterDelegate-Protocol.h>
#import <AVFCore/AVKeyPathDependencyHost-Protocol.h>
#import <AVFCore/AVWeakObservable-Protocol.h>

@class AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVFigAssetWriterTrack, AVKeyPathDependencyManager, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputWritingHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost>
{
    AVFigAssetWriterTrack *_assetWriterTrack;	// 24 = 0x18
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;	// 32 = 0x20
    _Bool _observingSelf;	// 40 = 0x28
    struct __CVPixelBufferPool *_pixelBufferPool;	// 48 = 0x30
    AVAssetWriterInputPassDescription *_currentPassDescription;	// 56 = 0x38
    AVKeyPathDependencyManager *_keyPathDependencyManager;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;	// 80 = 0x50
}

@property(retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription; // @synthesize currentPassDescription=_currentPassDescription;
@property(readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack; // @synthesize assetWriterTrack=_assetWriterTrack;
- (struct __CVPixelBufferPool *)pixelBufferPool;	// IMP=0x00000000000a45f7
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;	// IMP=0x00000000000a4563
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;	// IMP=0x00000000000a44f2
- (void)markAsFinished;	// IMP=0x00000000000a44dd
- (void)markCurrentPassAsFinished;	// IMP=0x00000000000a4386
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;	// IMP=0x00000000000a4355
- (void)prepareToEndSession;	// IMP=0x00000000000a432a
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000a423c
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000a4118
- (void)beginPassIfAppropriate;	// IMP=0x00000000000a40a8
- (void)didStartInitialSession;	// IMP=0x00000000000a4096
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a3f4e
- (void)_stopObservingReadyForMoreMediaDataKeyPath;	// IMP=0x00000000000a3eb4
- (void)_startObservingReadyForMoreMediaDataKeyPath;	// IMP=0x00000000000a3e17
- (_Bool)mediaDataRequesterShouldRequestMediaData;	// IMP=0x00000000000a3cf9
- (void)_nudgeMediaDataRequesterIfAppropriate:(id)arg1;	// IMP=0x00000000000a3c76
- (void)stopRequestingMediaData;	// IMP=0x00000000000a3b6b
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a383a
- (_Bool)isReadyForMoreMediaData;	// IMP=0x00000000000a380f
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;	// IMP=0x00000000000a37d3
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000a378a
- (long long)status;	// IMP=0x00000000000a377f
- (void)dealloc;	// IMP=0x00000000000a3692
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;	// IMP=0x00000000000a3675
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a2f42
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a2f2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

