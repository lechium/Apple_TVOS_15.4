//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFile, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioFileAnalyzer : NSObject
{
    AVAudioFile *_audioFile;	// 8 = 0x8
    SNAudioStreamAnalyzer *_streamAnalyzer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _wasCancelled;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025e5c
- (id)detailedDescription;	// IMP=0x0000000000025e46
- (void)removeAllRequests;	// IMP=0x0000000000025e30
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000025e19
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025e02
- (void)cancelAnalysis;	// IMP=0x0000000000025df8
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025d35
- (void)analyze;	// IMP=0x0000000000025cdf
- (void)analyzeInRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000259e5
- (CDStruct_e83c9415)fullFileTimeRange;	// IMP=0x000000000002590d
- (unsigned int)advanceSamples:(unsigned int)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002569b
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025486

@end

