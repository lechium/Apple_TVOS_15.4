//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/NSObject-Protocol.h>

@class HMIAnalysisStateUpdate, HMICameraVideoFrame, HMICameraVideoFrameResult, HMIVideoAnalyzerConfiguration, NSDictionary, NSSet, NSUUID;

@protocol HMICameraVideoFrameAnalyzer <NSObject>
+ (NSDictionary *)classHierarchyMap;
- (HMIAnalysisStateUpdate *)flushAndGetAnalysisStateUpdateForHome:(NSUUID *)arg1 enableFaceClassification:(_Bool)arg2;
- (NSSet *)analyzePixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (HMICameraVideoFrameResult *)analyze:(HMICameraVideoFrame *)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(_Bool)arg3 homeUUID:(NSUUID *)arg4 error:(id *)arg5;
- (void)preAnalyze:(HMICameraVideoFrame *)arg1;
- (id)initWithMediumConfidenceThresholds:(NSDictionary *)arg1 highConfidenceThresholds:(NSDictionary *)arg2 analyzerConfiguration:(HMIVideoAnalyzerConfiguration *)arg3 error:(id *)arg4;
- (id)init;
@end

