//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSString, NSURL;
@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState *_configurationState;	// 8 = 0x8
    AVWeakReference *_weakReferenceToAssetWriter;	// 16 = 0x10
}

@property(retain) AVWeakReference *weakReferenceToAssetWriter; // @synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter;
@property(readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
- (void)flushSegment;	// IMP=0x0000000000096927
- (void)flush;	// IMP=0x00000000000968a5
- (void)transitionToFailedStatusWithError:(id)arg1;	// IMP=0x00000000000966be
- (_Bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;	// IMP=0x00000000000964b9
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096437
- (void)finishWriting;	// IMP=0x00000000000963b5
- (void)cancelWriting;	// IMP=0x00000000000963af
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009632d
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000962ab
- (void)startWriting;	// IMP=0x0000000000096229
- (void)addInputGroup:(id)arg1;	// IMP=0x00000000000961a7
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x000000000009619f
- (void)addInput:(id)arg1;	// IMP=0x000000000009611d
- (_Bool)canAddInput:(id)arg1;	// IMP=0x0000000000096115
- (_Bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000095fd8
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;	// IMP=0x0000000000095f61
- (_Bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;	// IMP=0x0000000000095939
@property(readonly, nonatomic) NSArray *inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
@property(nonatomic) long long singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize;
@property(nonatomic) _Bool producesCombinableFragments;
@property(nonatomic) long long initialMovieFragmentSequenceNumber;
@property(copy, nonatomic) NSString *outputFileTypeProfile;
@property(nonatomic) CDStruct_1b6d18a9 initialSegmentStartTime;
@property(nonatomic) CDStruct_1b6d18a9 preferredOutputSegmentInterval;
@property(nonatomic) float preferredRate;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property __weak id <AVAssetWriterDelegate> delegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType;
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;	// IMP=0x0000000000094baf
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x0000000000094ac2
- (id)init;	// IMP=0x0000000000094aae

@end

