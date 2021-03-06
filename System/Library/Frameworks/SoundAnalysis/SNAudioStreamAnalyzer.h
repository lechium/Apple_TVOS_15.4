//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableArray, NSMutableDictionary, SNForwardPassAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject
{
    NSMutableArray *_requests;	// 8 = 0x8
    AVAudioFormat *_currentFormat;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_analyzerQueue;	// 24 = 0x18
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;	// 32 = 0x20
    NSMutableDictionary *_secondPassAnalyzers;	// 40 = 0x28
    struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> _ringBuffer;	// 48 = 0x30
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> _ringBufferWriteBufferList;	// 56 = 0x38
}

+ (id)secondPassRecordingPath;	// IMP=0x0000000000055d30
+ (_Bool)shouldRecordSecondPass;	// IMP=0x0000000000055ce3
+ (void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)arg1;	// IMP=0x0000000000054037
- (id).cxx_construct;	// IMP=0x0000000000055da8
- (void).cxx_destruct;	// IMP=0x0000000000055d49
- (void)sendErrorToAllRequests:(id)arg1;	// IMP=0x0000000000055c38
- (id)detailedDescription;	// IMP=0x00000000000558c8
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;	// IMP=0x00000000000556d2
- (void)completeAnalysis;	// IMP=0x000000000005566d
- (void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;	// IMP=0x00000000000553c9
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;	// IMP=0x000000000005530f
- (void)removeAllRequests;	// IMP=0x000000000005516d
- (void)_removeTwoPassRequest:(id)arg1;	// IMP=0x0000000000054f4b
- (void)_removeSinglePassRequest:(id)arg1;	// IMP=0x0000000000054ec7
- (void)removeRequestAsync:(id)arg1;	// IMP=0x0000000000054e0d
- (void)_removeRequest:(id)arg1;	// IMP=0x0000000000054d70
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000054ca0
- (void)handleEndSecondPassForRequest:(id)arg1;	// IMP=0x0000000000054b4d
- (void)handleBeginSecondPassForRequest:(id)arg1 secondPassController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005418b
- (_Bool)_addTwoPassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000053817
- (_Bool)_addSinglePassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000000535ce
- (_Bool)_addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000000533e7
- (_Bool)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000000531c0
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000052dee
- (id)initWithFormat:(id)arg1;	// IMP=0x0000000000052a8f

@end

