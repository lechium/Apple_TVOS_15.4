//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _CDPeriodicSchedulerJob : NSObject
{
    long long _period;	// 8 = 0x8
    double _interval;	// 16 = 0x10
    NSString *_jobName;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
    NSObject<OS_xpc_object> *_executionCriteria;	// 48 = 0x30
    _Bool _isHandlerAsynchronous;	// 56 = 0x38
    NSObject<OS_xpc_object> *_activity;	// 64 = 0x40
}

+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005ddef
+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005dca0
+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005db42
- (void).cxx_destruct;	// IMP=0x000000000005e1e0
@property(readonly) _Bool isHandlerAsynchronous; // @synthesize isHandlerAsynchronous=_isHandlerAsynchronous;
@property(retain) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(readonly) NSObject<OS_xpc_object> *executionCriteria; // @synthesize executionCriteria=_executionCriteria;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *jobName; // @synthesize jobName=_jobName;
@property(readonly) double interval; // @synthesize interval=_interval;
@property(readonly) long long period; // @synthesize period=_period;
- (void)setExecutionCriteria:(id)arg1;	// IMP=0x000000000005e0c2
- (id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 asynchronousHandler:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000000005dea9
- (id)init;	// IMP=0x000000000005db34

@end
