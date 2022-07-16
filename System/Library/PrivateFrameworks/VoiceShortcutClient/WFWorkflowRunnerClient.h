//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFWorkflowRunRequest, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFWorkflowRunnerClientDelegate;

@interface WFWorkflowRunnerClient : NSObject
{
    id <WFWorkflowRunnerClientDelegate> _delegate;	// 8 = 0x8
    WFWorkflowRunningContext *_context;	// 16 = 0x10
    id _progressSubscriber;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    WFWorkflowRunRequest *_runRequest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000060b2
@property(retain, nonatomic) WFWorkflowRunRequest *runRequest; // @synthesize runRequest=_runRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WFWorkflowRunnerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopObservingRunProgress;	// IMP=0x0000000000005fa9
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)arg1;	// IMP=0x0000000000005e83
- (void)handleWorkflowRunResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000584c
- (void)dispatchWorkflowResultHandlingWithResult:(id)arg1;	// IMP=0x0000000000005609
- (id)runWorkflowWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005549
- (void)stop;	// IMP=0x0000000000005496
- (void)start;	// IMP=0x000000000000511e
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithRunRequest:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x0000000000004f7f
- (id)initWithRunRequest:(id)arg1;	// IMP=0x0000000000004f6b

@end
