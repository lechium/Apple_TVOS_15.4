//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNUtils : NSObject
{
}

+ (id)loadModelAtURL:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;	// IMP=0x0000000000042b38
+ (id)createMultiArrayContainingPreciseTimeRangeOfAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 numDimensions:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x00000000000426cb
+ (_Bool)flushBytesFromPreciseTimeRangeInAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 intoSink:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x000000000004235c
+ (_Bool)flushBytesFromStreamSource:(CDUnknownBlockType)arg1 toBuffer:(void *)arg2 ofSizeInBytes:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000042223
+ (_Bool)flushAudioBuffer:(id)arg1 channelIndex:(unsigned long long)arg2 intoSink:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000004212f
+ (CDUnknownBlockType)zeroBufferPopulator;	// IMP=0x00000000000420cd
+ (_Bool)readApproximateTimeRangeFromAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 preferShrinkingWhenRounding:(_Bool)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 prefixBufferPopulator:(CDUnknownBlockType)arg6 suffixBufferPopulator:(CDUnknownBlockType)arg7 handler:(CDUnknownBlockType)arg8 error:(id *)arg9;	// IMP=0x0000000000041f01
+ (_Bool)readPreciseTimeRangeFromAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 handler:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x00000000000415d6
+ (CDStruct_1b6d18a9)readApproximateTimeDurationFromAudioFile:(id)arg1 timeDuration:(CDStruct_1b6d18a9)arg2 roundingMethod:(unsigned int)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 handler:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x000000000004148e
+ (CDStruct_1b6d18a9)readPreciseTimeDurationFromAudioFile:(id)arg1 timeDuration:(CDStruct_1b6d18a9)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000041342
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 atSampleRate:(double)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 handler:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x00000000000410ae
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000040b76
+ (void)processFrameCount:(unsigned int)arg1 bufferFactory:(CDUnknownBlockType)arg2 populator:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004097f
+ (id)toFloatScalarConvertFromMLMultiArray:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000408c9
+ (id)toMLMultiArrayConvertFromFloatScalar:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000407e2
+ (CDStruct_e83c9415)getTimeRangeEncompassingEntireAudioFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040726
+ (CDStruct_e83c9415)getTimeRangeEncompassingEntireAudioFile:(id)arg1;	// IMP=0x0000000000040639
+ (CDStruct_e83c9415)addOffset:(CDStruct_1b6d18a9)arg1 toTimeRange:(CDStruct_e83c9415)arg2;	// IMP=0x00000000000405c5
+ (CDStruct_e83c9415)clipTimeRange:(CDStruct_e83c9415)arg1 toBounds:(CDStruct_e83c9415)arg2;	// IMP=0x000000000004040d
+ (void)clipTimeRange:(CDStruct_e83c9415)arg1 toBounds:(CDStruct_e83c9415)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004004f
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 directionShouldBePositive:(_Bool)arg2 negativeShouldResideInTimescale:(_Bool)arg3;	// IMP=0x000000000003ffcc
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 negativeShouldResideInTimescale:(_Bool)arg2;	// IMP=0x000000000003ff24
+ (CDStruct_1b6d18a9)standardizeTime:(CDStruct_1b6d18a9)arg1 negativeShouldResideInTimescale:(_Bool)arg2;	// IMP=0x000000000003fed2
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 directionShouldBePositive:(_Bool)arg2;	// IMP=0x000000000003fe08
+ (CDStruct_e83c9415)convertScaleForTimeRange:(CDStruct_e83c9415)arg1 toValue:(int)arg2 preferShrinkingWhenRounding:(_Bool)arg3;	// IMP=0x000000000003fd97
+ (CDStruct_e83c9415)convertScaleForTimeRange:(CDStruct_e83c9415)arg1 toValue:(int)arg2 startRoundingMethod:(unsigned int)arg3 durationRoundingMethod:(unsigned int)arg4;	// IMP=0x000000000003fcfa
+ (_Bool)checkTimeRange:(CDStruct_e83c9415)arg1 isIdenticalToOther:(CDStruct_e83c9415)arg2;	// IMP=0x000000000003fcc1
+ (CDStruct_e83c9415)makeInvalidTimeRange;	// IMP=0x000000000003fc65
+ (long long)detectionCountInResults:(id)arg1;	// IMP=0x000000000003faef
+ (id)valueForEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003fa20
+ (id)valueForEntitlement:(id)arg1 fromTask:(struct __SecTask *)arg2 error:(id *)arg3;	// IMP=0x000000000003f958
+ (long long)audioFileFrameCount:(id)arg1;	// IMP=0x000000000003f7d2
+ (id)diskSpaceRemainingBytesContainingDirectory:(id)arg1;	// IMP=0x000000000003f6f5
+ (id)fileSizeBytes:(id)arg1;	// IMP=0x000000000003f618
+ (id)fileCreationDate:(id)arg1;	// IMP=0x000000000003f53b
+ (void)_deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3;	// IMP=0x000000000003e7fc
+ (void)deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3;	// IMP=0x000000000003e763
+ (id)loggingPrefixForRequest:(id)arg1;	// IMP=0x000000000003e649
+ (_Bool)isInternalBuild;	// IMP=0x000000000003e5ca
+ (_Bool)isRunningInDaemon;	// IMP=0x000000000003e52b
+ (_Bool)isFormatPCM:(id)arg1;	// IMP=0x000000000003e50b
+ (id)parseFeedbackConnectionsString:(id)arg1;	// IMP=0x000000000003e039
+ (id)subtractSet:(id)arg1 from:(id)arg2;	// IMP=0x000000000003df4c
+ (id)userSuppliedFeatureNames:(id)arg1 direction:(long long)arg2;	// IMP=0x000000000003dbc0
+ (id)userSuppliedOutputFeatureNames:(id)arg1;	// IMP=0x000000000003db99
+ (id)userSuppliedInputFeatureNames:(id)arg1;	// IMP=0x000000000003db75
+ (id)feedbackConnections:(id)arg1;	// IMP=0x000000000003d450
+ (id)anyOutputMultiArrayShape:(id)arg1;	// IMP=0x000000000003d341
+ (id)anyInputMultiArrayShape:(id)arg1;	// IMP=0x000000000003d232
+ (struct _NSRange)lastDimensionSizeRange:(id)arg1;	// IMP=0x000000000003d0d0
+ (_Bool)multiArrayConstraintLastDimensionIsFlexible:(id)arg1;	// IMP=0x000000000003cf98
+ (int)shapeNonUnitaryDimensionCount:(id)arg1;	// IMP=0x000000000003ce1f
+ (unsigned int)modelChannelCount:(id)arg1;	// IMP=0x000000000003cceb
+ (unsigned int)modelBlockSize:(id)arg1 channelCount:(unsigned int)arg2;	// IMP=0x000000000003cb41
+ (unsigned int)modelBlockSize:(id)arg1;	// IMP=0x000000000003cae5
+ (unsigned int)modelSampleRate:(id)arg1 orDefaultRate:(unsigned int)arg2;	// IMP=0x000000000003c940
+ (id)vggishFrontEndProcessingModelDescription;	// IMP=0x000000000003c59a
+ (id)vggishFeatureEmbeddingOutputShape;	// IMP=0x000000000003c58d
+ (id)vggishFeatureEmbeddingInputShape;	// IMP=0x000000000003c580
+ (id)vggishFrontEndProcessingOutputShape;	// IMP=0x000000000003c573
+ (id)vggishFrontEndProcessingInputShape;	// IMP=0x000000000003c566
+ (CDStruct_1b6d18a9)roundTime:(CDStruct_1b6d18a9)arg1 toAllowableTime:(id)arg2;	// IMP=0x000000000003c14b
+ (id)windowDurationConstraintFromMultiArrayShapeConstraint:(id)arg1 sampleRate:(unsigned int)arg2;	// IMP=0x000000000003bb84
+ (id)filteredClassLabelsFromModelDescription:(id)arg1;	// IMP=0x000000000003baa6
+ (id)filterClassLabelsInDictionary:(id)arg1 usingDenylist:(id)arg2;	// IMP=0x000000000003ba2a
+ (id)denylistFromModelDescription:(id)arg1;	// IMP=0x000000000003b93b
+ (int)numberOfElements:(id)arg1;	// IMP=0x000000000003b797
+ (void)copyAudioBufferList:(struct AudioBufferList *)arg1 to:(struct AudioBufferList *)arg2 frameCount:(unsigned int)arg3 bytesPerFrame:(unsigned int)arg4;	// IMP=0x000000000003b706
+ (void)silenceUnfilledFramesInBuffer:(id)arg1;	// IMP=0x000000000003b551
+ (id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned int)arg2;	// IMP=0x000000000003b276

@end
