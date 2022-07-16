//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoFrameAnalyzerDelegate-Protocol.h>

@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate>
{
    CDUnknownBlockType _frameAnalyzerDidAnalyzeFrame;	// 8 = 0x8
    CDUnknownBlockType _frameAnalyzerDidProduceAnalysisStateUpdate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003701d
@property(copy) CDUnknownBlockType frameAnalyzerDidProduceAnalysisStateUpdate; // @synthesize frameAnalyzerDidProduceAnalysisStateUpdate=_frameAnalyzerDidProduceAnalysisStateUpdate;
@property(copy) CDUnknownBlockType frameAnalyzerDidAnalyzeFrame; // @synthesize frameAnalyzerDidAnalyzeFrame=_frameAnalyzerDidAnalyzeFrame;
- (void)frameAnalyzer:(id)arg1 didProduceAnalysisStateUpdate:(id)arg2;	// IMP=0x0000000000036f28
- (void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2 error:(id)arg3;	// IMP=0x0000000000036e69

@end
