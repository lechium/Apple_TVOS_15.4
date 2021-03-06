//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <C2/C2SessionTaskDelegate-Protocol.h>

@class C2RequestOptions, NSMutableSet, NSString, NSURLSessionDataTask, NSURLSessionTaskMetrics;
@protocol C2RequestDelegate, C2SessionTaskDelegate, OS_os_activity;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate>
{
    _Bool _isComplete;	// 8 = 0x8
    unsigned int _attemptCount;	// 12 = 0xc
    C2RequestOptions *_options;	// 16 = 0x10
    id <C2RequestDelegate> _delegate;	// 24 = 0x18
    NSURLSessionDataTask *_task;	// 32 = 0x20
    NSURLSessionTaskMetrics *_taskMetrics;	// 40 = 0x28
    id <C2SessionTaskDelegate> _sessionTaskDelegate;	// 48 = 0x30
    double _initTime;	// 56 = 0x38
    double _resetTime;	// 64 = 0x40
    NSMutableSet *_outstandingCallbacks;	// 72 = 0x48
    NSObject<OS_os_activity> *_activity;	// 80 = 0x50
}

+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;	// IMP=0x000000000001b4e9
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000001b3e3
+ (id)callbackHealthQueue;	// IMP=0x000000000001a2bf
+ (void)initialize;	// IMP=0x000000000001a25f
- (void).cxx_destruct;	// IMP=0x000000000001e035
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSMutableSet *outstandingCallbacks; // @synthesize outstandingCallbacks=_outstandingCallbacks;
@property(nonatomic) unsigned int attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) double resetTime; // @synthesize resetTime=_resetTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) id <C2SessionTaskDelegate> sessionTaskDelegate; // @synthesize sessionTaskDelegate=_sessionTaskDelegate;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) id <C2RequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) C2RequestOptions *options; // @synthesize options=_options;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000001deb7
- (void)didFinishCollectingMetrics:(id)arg1;	// IMP=0x000000000001dea6
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;	// IMP=0x000000000001b521
- (void)testBehavior_triggerCallbackHang;	// IMP=0x000000000001b180
- (void)dealloc;	// IMP=0x000000000001b0dc
@property(readonly, nonatomic) _Bool callbackHung;
- (void)invalidate;	// IMP=0x000000000001adf7
- (id)taskDescription;	// IMP=0x000000000001acb4
- (void)handleCallbackForTask:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a687
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;	// IMP=0x000000000001a2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

