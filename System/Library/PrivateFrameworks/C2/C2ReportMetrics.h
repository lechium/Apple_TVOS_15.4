//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <C2/C2RequestDelegate-Protocol.h>

@class C2MetricOptions, C2RequestOptions, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface C2ReportMetrics : NSObject <C2RequestDelegate>
{
    _Bool _ignoreRequestThrottle;	// 8 = 0x8
    NSString *_requestThrottleIdentifier;	// 16 = 0x10
    unsigned long long _requestThrottleLimit;	// 24 = 0x18
    NSMutableURLRequest *_metricRequest;	// 32 = 0x20
    C2RequestOptions *_metricsTransportRequestOptions;	// 40 = 0x28
    NSURLSessionTask *_metricTask;	// 48 = 0x30
    C2MetricOptions *_metricOptions;	// 56 = 0x38
    CDUnknownBlockType _testBehavior_tooManyTasksRunning;	// 64 = 0x40
    CDUnknownBlockType _testBehavior_didCompleteWithError;	// 72 = 0x48
}

+ (void)_reportWithOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4 eventName:(id)arg5 startTime:(id)arg6 endTime:(id)arg7 attributes:(id)arg8;	// IMP=0x000000000000f1bd
+ (void)_c2FormatValueForRTC:(id)arg1 keyPrefix:(id)arg2 targetDictionary:(id)arg3 multipleOperationGroups:(_Bool)arg4;	// IMP=0x000000000000e8fc
+ (void)reportMetricWithOptions:(id)arg1 genericMetricType:(long long)arg2 eventName:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 attributes:(id)arg6;	// IMP=0x000000000000e793
+ (void)reportNetworkEvent:(id)arg1 triggers:(int)arg2 originalSessionTask:(id)arg3;	// IMP=0x000000000000e6b3
+ (id)gzipDecode:(id)arg1;	// IMP=0x000000000000e503
+ (id)gzipEncode:(id)arg1;	// IMP=0x000000000000e33e
+ (id)requestForMetricRequestOptions:(id)arg1 metrics:(id)arg2;	// IMP=0x000000000000e0c7
+ (id)metricsForMetricRequestOptions:(id)arg1 networkEvent:(id)arg2 genericEvent:(id)arg3 triggers:(int)arg4;	// IMP=0x000000000000dd16
- (void).cxx_destruct;	// IMP=0x00000000000108b7
@property(copy, nonatomic) CDUnknownBlockType testBehavior_didCompleteWithError; // @synthesize testBehavior_didCompleteWithError=_testBehavior_didCompleteWithError;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_tooManyTasksRunning; // @synthesize testBehavior_tooManyTasksRunning=_testBehavior_tooManyTasksRunning;
@property(retain, nonatomic) C2MetricOptions *metricOptions; // @synthesize metricOptions=_metricOptions;
@property(retain, nonatomic) NSURLSessionTask *metricTask; // @synthesize metricTask=_metricTask;
@property(retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions; // @synthesize metricsTransportRequestOptions=_metricsTransportRequestOptions;
@property(retain, nonatomic) NSMutableURLRequest *metricRequest; // @synthesize metricRequest=_metricRequest;
@property(nonatomic) unsigned long long requestThrottleLimit; // @synthesize requestThrottleLimit=_requestThrottleLimit;
@property(retain, nonatomic) NSString *requestThrottleIdentifier; // @synthesize requestThrottleIdentifier=_requestThrottleIdentifier;
@property(nonatomic) _Bool ignoreRequestThrottle; // @synthesize ignoreRequestThrottle=_ignoreRequestThrottle;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000107c6
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x000000000001074c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000010746
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000010611
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010600
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x00000000000105fa
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000105e7
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000105e1
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000010567
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x0000000000010561
- (void)send;	// IMP=0x0000000000010215
- (id)initWithMetricRequest:(id)arg1 metricRequestOptions:(id)arg2 ignoreRequestThrottle:(_Bool)arg3 requestThrottleIdentifier:(id)arg4 requestThrottleLimit:(unsigned long long)arg5;	// IMP=0x000000000000ffd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

