//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CVNLPCommSafetyImageAnalyzer, CVNLPCommSafetyTextAnalyzer, CVNLPPerformance, NSDictionary;
@protocol OS_dispatch_queue;

@interface CVNLPCommSafetyHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;	// 8 = 0x8
    CVNLPCommSafetyImageAnalyzer *_imageAnalyzer;	// 16 = 0x10
    CVNLPCommSafetyTextAnalyzer *_textAnalyzer;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    CVNLPPerformance *_perfResults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004a90
@property(readonly, nonatomic) CVNLPPerformance *perfResults; // @synthesize perfResults=_perfResults;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) CVNLPCommSafetyTextAnalyzer *textAnalyzer; // @synthesize textAnalyzer=_textAnalyzer;
@property(readonly) CVNLPCommSafetyImageAnalyzer *imageAnalyzer; // @synthesize imageAnalyzer=_imageAnalyzer;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (id)performanceStatistics;	// IMP=0x0000000000004800
- (id)classifyPixelBuffer:(struct __CVBuffer *)arg1 startDate:(id)arg2 endDate:(id)arg3 stagedText:(id)arg4 inConversationWithIdentifier:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000045e0
- (id)classifyPixelBuffer:(struct __CVBuffer *)arg1 stagedText:(id)arg2 inConversationWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000045a0
- (void)processConversationsWithStartDate:(id)arg1 endDate:(id)arg2 previousClassifications:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000042a0
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 date:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003f20
- (id)getOperatingPointDataForClassName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003b60
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000038b0
- (long long)classifyPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000035d0
- (id)generateClassificationScoresForImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000003320
- (long long)classifyImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000002fb0
- (id)getOperatingPointDataForClassName:(id)arg1;	// IMP=0x0000000000002f80
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000002f60
- (long long)classifyPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000002f40
- (id)generateClassificationScoresForImage:(struct CGImage *)arg1;	// IMP=0x0000000000002f20
- (long long)classifyImage:(struct CGImage *)arg1;	// IMP=0x0000000000002f00
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000026b0
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000023a0
- (id)init;	// IMP=0x0000000000002380

@end
