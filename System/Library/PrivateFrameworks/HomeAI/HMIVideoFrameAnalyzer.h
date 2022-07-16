//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIVideoFrameSamplerDelegate-Protocol.h>

@class HMIVideoFrameSampler, MovingAverage, NSString;
@protocol HMICameraVideoFrameAnalyzer, HMIVideoFrameAnalyzerDelegate;

@interface HMIVideoFrameAnalyzer <HMIVideoFrameSamplerDelegate, HMFLogging>
{
    MovingAverage *_analysisTime;	// 24 = 0x18
    id <HMIVideoFrameAnalyzerDelegate> _delegate;	// 32 = 0x20
    id <HMICameraVideoFrameAnalyzer> _cameraVideoFrameAnalyzer;	// 40 = 0x28
    HMIVideoFrameSampler *_frameSampler;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000000362a4
- (void).cxx_destruct;	// IMP=0x0000000000036e18
@property(retain) HMIVideoFrameSampler *frameSampler; // @synthesize frameSampler=_frameSampler;
@property(readonly) id <HMICameraVideoFrameAnalyzer> cameraVideoFrameAnalyzer; // @synthesize cameraVideoFrameAnalyzer=_cameraVideoFrameAnalyzer;
@property __weak id <HMIVideoFrameAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flush;	// IMP=0x0000000000036c98
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x0000000000036c86
@property(readonly) double averageAnalysisTime;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000036c42
- (_Bool)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 motionDetections:(id)arg2 motionScore:(double)arg3;	// IMP=0x00000000000365b0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000362ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

