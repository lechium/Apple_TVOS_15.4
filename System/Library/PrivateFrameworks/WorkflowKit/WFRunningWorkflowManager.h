//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableOrderedSet;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver>
{
    CDUnknownBlockType _demoResetBlock;	// 8 = 0x8
    NSMutableOrderedSet *_runningWorkflowControllerSet;	// 16 = 0x10
    NSHashTable *_workflowControllerAssertionTable;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000001f8708
- (void).cxx_destruct;	// IMP=0x00000000001f8400
@property(readonly, nonatomic) NSHashTable *workflowControllerAssertionTable; // @synthesize workflowControllerAssertionTable=_workflowControllerAssertionTable;
@property(readonly, nonatomic) NSMutableOrderedSet *runningWorkflowControllerSet; // @synthesize runningWorkflowControllerSet=_runningWorkflowControllerSet;
@property(copy, nonatomic) CDUnknownBlockType demoResetBlock; // @synthesize demoResetBlock=_demoResetBlock;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;	// IMP=0x00000000001f8353
@property(readonly, nonatomic) NSArray *runningWorkflows;
@property(readonly, nonatomic) NSArray *runningWorkflowControllers;
- (void)updateAssertions;	// IMP=0x00000000001f7e1b
- (void)updateRunningWorkflowCount;	// IMP=0x00000000001f7d92
- (void)workflowControllerDidStop:(id)arg1;	// IMP=0x00000000001f7c98
- (void)workflowControllerDidStart:(id)arg1;	// IMP=0x00000000001f7b9e
- (void)dealloc;	// IMP=0x00000000001f7ac3
- (id)init;	// IMP=0x00000000001f797e

@end

