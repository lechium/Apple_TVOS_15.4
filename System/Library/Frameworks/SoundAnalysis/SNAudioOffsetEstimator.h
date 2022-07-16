//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    double _offset;	// 24 = 0x18
    double _minimumObservableOffset;	// 32 = 0x20
    double _maximumObservableOffset;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000000659ed
- (void).cxx_destruct;	// IMP=0x00000000000659df
@property(nonatomic) double maximumObservableOffset; // @synthesize maximumObservableOffset=_maximumObservableOffset;
@property(nonatomic) double minimumObservableOffset; // @synthesize minimumObservableOffset=_minimumObservableOffset;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006593b
- (id)sharedProcessorConfiguration;	// IMP=0x0000000000065933
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x00000000000655f7
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4;	// IMP=0x000000000006552d
- (id)init;	// IMP=0x00000000000651df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
