//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMCHangDetectionQueue, NSMutableArray;

@interface DMCEnrollmentFlowControllerBase : NSObject
{
    DMCHangDetectionQueue *_workerQueue;	// 8 = 0x8
    unsigned long long _currentStep;	// 16 = 0x10
    unsigned long long _nextStepIndex;	// 24 = 0x18
    NSMutableArray *_stepQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000509c
@property(retain, nonatomic) NSMutableArray *stepQueue; // @synthesize stepQueue=_stepQueue;
@property(nonatomic) unsigned long long nextStepIndex; // @synthesize nextStepIndex=_nextStepIndex;
@property(nonatomic) unsigned long long currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) DMCHangDetectionQueue *workerQueue; // @synthesize workerQueue=_workerQueue;
- (void)_workerQueue_performFlowStep:(unsigned long long)arg1;	// IMP=0x0000000000005038
- (void)_workerQueue_flowCompleted;	// IMP=0x0000000000005032
- (void)_resetToInitialSteps;	// IMP=0x0000000000004f55
- (void)_pollNextStep;	// IMP=0x0000000000004d99
- (void)_appendSteps:(id)arg1;	// IMP=0x0000000000004c89
- (id)init;	// IMP=0x0000000000004ba1

@end

