//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    id <AFAnalyticsService> _service;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x00400000001a5976
- (void).cxx_destruct;	// IMP=0x00100000001a7400
- (id)_service:(_Bool)arg1;	// IMP=0x00100000001a73aa
- (void)_stageEvents:(id)arg1;	// IMP=0x00100000001a732a
- (void)_stageEvent:(id)arg1;	// IMP=0x00100000001a7259
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a71ba
- (void)logEvents:(id)arg1;	// IMP=0x00100000001a7112
- (void)logEvent:(id)arg1;	// IMP=0x00100000001a706a
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a6eac
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;	// IMP=0x00100000001a6a79
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x00100000001a6773
- (void)setService:(id)arg1;	// IMP=0x00100000001a66cf
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a64ff
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001a63e6
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;	// IMP=0x00100000001a6399
- (void)endEventsGrouping;	// IMP=0x00100000001a6308
- (void)beginEventsGrouping;	// IMP=0x00100000001a6277
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;	// IMP=0x00100000001a5ed1
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001a5e19
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;	// IMP=0x00100000001a5db6
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5d48
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;	// IMP=0x00100000001a5cb1
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5c41
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x00100000001a5bc5
- (void)logEventWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00100000001a5b55
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00100000001a5ad5
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000001a5a1c
- (id)init;	// IMP=0x00100000001a58ec
- (void)configureForDaemon;	// IMP=0x001000000006e4ba
- (CDUnknownBlockType)_ad_contextLoggerWithEventType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3d48

@end

