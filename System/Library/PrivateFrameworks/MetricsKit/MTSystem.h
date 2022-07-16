//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTEnvironment, MTEventRecorder, NSObject;
@protocol MTEventFilter, OS_dispatch_queue;

@interface MTSystem
{
    MTEnvironment *_environment;	// 8 = 0x8
    MTEventRecorder *_eventRecorder;	// 16 = 0x10
    id <MTEventFilter> _eventFilter;	// 24 = 0x18
    id <MTEventFilter> _treatmentFilter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000007d58
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <MTEventFilter> treatmentFilter; // @synthesize treatmentFilter=_treatmentFilter;
@property(retain, nonatomic) id <MTEventFilter> eventFilter; // @synthesize eventFilter=_eventFilter;
@property(retain, nonatomic) MTEventRecorder *eventRecorder; // @synthesize eventRecorder=_eventRecorder;
@property(retain, nonatomic) MTEnvironment *environment; // @synthesize environment=_environment;
- (void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;	// IMP=0x0000000000007c22
- (id)initWithMetricsKit:(id)arg1;	// IMP=0x000000000000780d

@end

