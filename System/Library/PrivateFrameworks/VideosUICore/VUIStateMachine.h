//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface VUIStateMachine : NSObject
{
    CDUnknownBlockType _stateChangeHandler;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSMutableDictionary *_defaultHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSMutableArray *_blocksToExecuteAfterStateTransition;	// 48 = 0x30
    _Bool _handlingEvent;	// 56 = 0x38
    _Bool _shouldAcceptEvents;	// 57 = 0x39
    _Bool _callsStateChangeHandlerSynchronously;	// 58 = 0x3a
    NSString *_name;	// 64 = 0x40
    NSString *_currentState;	// 72 = 0x48
    long long _mode;	// 80 = 0x50
    NSObject<OS_os_log> *_logObject;	// 88 = 0x58
    NSArray *_ignorableEvents;	// 96 = 0x60
}

+ (id)stateMachinesOfType:(Class)arg1;	// IMP=0x00000000000191f6
+ (void)deregisterStateMachine:(id)arg1;	// IMP=0x000000000001914d
+ (id)stateMachineWithName:(id)arg1;	// IMP=0x0000000000019134
+ (void)registerStateMachine:(id)arg1;	// IMP=0x0000000000019078
+ (void)initialize;	// IMP=0x0000000000019031
- (void).cxx_destruct;	// IMP=0x000000000001af74
@property(nonatomic) _Bool callsStateChangeHandlerSynchronously; // @synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously;
@property(copy) NSArray *ignorableEvents; // @synthesize ignorableEvents=_ignorableEvents;
@property(retain, nonatomic) NSObject<OS_os_log> *logObject; // @synthesize logObject=_logObject;
@property _Bool shouldAcceptEvents; // @synthesize shouldAcceptEvents=_shouldAcceptEvents;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy) NSString *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)logUnhandledEvents;	// IMP=0x000000000001a737
- (void)deregisterHandlers;	// IMP=0x000000000001a6a4
- (void)executeBlockAfterCurrentStateTransition:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a5cc
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;	// IMP=0x000000000001a42c
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a29c
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019fde
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019e25
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019bf2
- (void)purgeEventQueue;	// IMP=0x0000000000019b9a
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000001982f
- (void)postEvent:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000001981a
- (void)postEvent:(id)arg1;	// IMP=0x0000000000019803
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019611
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;	// IMP=0x00000000000193a7
- (CDUnknownBlockType)_eventHandlerForEvent:(id)arg1;	// IMP=0x000000000001bd40
- (void)_dispatchEvent:(id)arg1;	// IMP=0x000000000001b9fa
- (void)_processEvent:(id)arg1;	// IMP=0x000000000001b640
- (void)_processNextEvent;	// IMP=0x000000000001b584
- (void)_executePostTransitionBlocks;	// IMP=0x000000000001b411
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000000001aff4

@end

