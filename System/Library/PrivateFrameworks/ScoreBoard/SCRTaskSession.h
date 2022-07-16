//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScoreBoard/SCRSchedulable-Protocol.h>
#import <ScoreBoard/SCRStateTransitionable-Protocol.h>

@class NSError, NSString, SCRApprovalCoordinator, SCRSchedulingConfiguration, SCRStateMachine, SCRTask;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable>
{
    id _context;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    SCRTask *_task;	// 24 = 0x18
    SCRStateMachine *_stateMachine;	// 32 = 0x20
    SCRApprovalCoordinator *_approvalCoordinator;	// 40 = 0x28
}

+ (id)descriptionForState:(unsigned long long)arg1;	// IMP=0x0000000000006444
+ (id)validStateTransitions;	// IMP=0x0000000000006360
- (void).cxx_destruct;	// IMP=0x0000000000006572
@property(readonly, nonatomic) SCRApprovalCoordinator *approvalCoordinator; // @synthesize approvalCoordinator=_approvalCoordinator;
@property(readonly, nonatomic) SCRStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) SCRTask *task; // @synthesize task=_task;
- (void)handleStateTransition:(id)arg1;	// IMP=0x000000000000621e
- (void)_complete;	// IMP=0x0000000000006218
- (void)_teardownSharedContext;	// IMP=0x0000000000005deb
- (void)_completeTask;	// IMP=0x0000000000005ccf
- (void)_performTask;	// IMP=0x000000000000587f
- (void)_setupSharedContext;	// IMP=0x00000000000053be
- (void)_requestApproval;	// IMP=0x0000000000005099
- (void)_start;	// IMP=0x0000000000004fb7
- (void)perform;	// IMP=0x0000000000004f75
@property(readonly, copy) SCRSchedulingConfiguration *schedulingConfiguration;
- (id)initWithTask:(id)arg1 approvalCoordinator:(id)arg2;	// IMP=0x0000000000004d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
