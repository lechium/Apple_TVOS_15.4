//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/EARSyncPSRAudioProcessorDelegate-Protocol.h>
#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSpeechEmotionEstimator : NSObject <SNAnalyzing, EARSyncPSRAudioProcessorDelegate>
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000022850
- (void).cxx_destruct;	// IMP=0x0000000000022842
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002228b
- (id)sharedProcessorConfiguration;	// IMP=0x0000000000022283
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x0000000000021e7c
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
