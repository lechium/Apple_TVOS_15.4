//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, VSOptional;
@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject
{
    int _mode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    VSOptional *_currentState;	// 24 = 0x18
    id <VSStateMachineDelegate> _delegate;	// 32 = 0x20
    NSOperationQueue *_transitionQueue;	// 40 = 0x28
    NSMutableArray *_enqueuedTransitions;	// 48 = 0x30
    NSMutableDictionary *_transitionTable;	// 56 = 0x38
    NSMutableDictionary *_ignoredEventsByState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016ff6
@property(retain, nonatomic) NSMutableDictionary *ignoredEventsByState; // @synthesize ignoredEventsByState=_ignoredEventsByState;
@property(retain, nonatomic) NSMutableDictionary *transitionTable; // @synthesize transitionTable=_transitionTable;
@property(retain, nonatomic) NSMutableArray *enqueuedTransitions; // @synthesize enqueuedTransitions=_enqueuedTransitions;
@property(retain, nonatomic) NSOperationQueue *transitionQueue; // @synthesize transitionQueue=_transitionQueue;
@property(nonatomic) __weak id <VSStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VSOptional *currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000016e8f
- (void)enqueueEvent:(id)arg1;	// IMP=0x000000000001692b
- (void)activateWithState:(id)arg1;	// IMP=0x00000000000160cf
- (void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;	// IMP=0x00000000000160ba
- (void)ignoreEvent:(id)arg1 inState:(id)arg2;	// IMP=0x0000000000016099
- (void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(_Bool)arg4;	// IMP=0x0000000000015b5d
- (void)_handleEnqueuedTransitions;	// IMP=0x0000000000015667
- (void)_exitingState:(id)arg1;	// IMP=0x0000000000015268
- (void)_enteringState:(id)arg1;	// IMP=0x0000000000014e7e
- (id)init;	// IMP=0x0000000000014d7b

@end

