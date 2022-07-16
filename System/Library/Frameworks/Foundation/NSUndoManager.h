//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSUndoManager : NSObject
{
    id _undoStack;	// 8 = 0x8
    id _redoStack;	// 16 = 0x10
    NSArray *_runLoopModes;	// 24 = 0x18
    unsigned long long _NSUndoManagerPrivate1;	// 32 = 0x20
    id _target;	// 40 = 0x28
    id _proxy;	// 48 = 0x30
    void *_NSUndoManagerPrivate2;	// 56 = 0x38
    void *_NSUndoManagerPrivate3;	// 64 = 0x40
}

+ (void)_endTopLevelGroupings;	// IMP=0x00000000001538df
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(_Bool)arg1;	// IMP=0x000000000015389d
- (id)redoMenuTitleForUndoActionName:(id)arg1;	// IMP=0x0000000000155394
- (id)undoMenuTitleForUndoActionName:(id)arg1;	// IMP=0x0000000000155342
@property(readonly, copy) NSString *redoMenuItemTitle;
@property(readonly, copy) NSString *undoMenuItemTitle;
@property(readonly) _Bool redoActionIsDiscardable;
@property(readonly) _Bool undoActionIsDiscardable;
- (void)setActionIsDiscardable:(_Bool)arg1;	// IMP=0x00000000001550ef
- (void)setActionName:(id)arg1;	// IMP=0x00000000001550dd
- (void)_setGroupIdentifier:(id)arg1;	// IMP=0x0000000000154fe7
@property(readonly, copy) NSString *redoActionName;
@property(readonly, copy) NSString *undoActionName;
- (void)registerUndoWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000154ecb
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x0000000000154e68
- (void)_forwardTargetInvocation:(id)arg1;	// IMP=0x0000000000154d6a
- (void)_registerUndoObject:(id)arg1;	// IMP=0x0000000000154c17
- (id)_methodSignatureForTargetSelector:(SEL)arg1;	// IMP=0x0000000000154b97
- (id)prepareWithInvocationTarget:(id)arg1;	// IMP=0x0000000000154b2a
- (void)removeAllActionsWithTarget:(id)arg1;	// IMP=0x0000000000154aea
- (void)removeAllActions;	// IMP=0x0000000000154a65
@property(readonly, getter=isRedoing) _Bool redoing;
@property(readonly, getter=isUndoing) _Bool undoing;
@property(readonly) _Bool canRedo;
@property(readonly) _Bool canUndo;
- (void)__redoCommonDoSingle:(_Bool)arg1;	// IMP=0x00000000001547cd
- (void)__redoSingle;	// IMP=0x00000000001547b6
- (void)redo;	// IMP=0x00000000001547a2
- (void)undoNestedGroup;	// IMP=0x000000000015456d
- (void)undo;	// IMP=0x000000000015446a
@property(copy) NSArray *runLoopModes;
@property unsigned long long levelsOfUndo;
@property _Bool groupsByEvent;
@property(readonly, getter=isUndoRegistrationEnabled) _Bool undoRegistrationEnabled;
- (void)enableUndoRegistration;	// IMP=0x00000000001542f8
- (void)disableUndoRegistration;	// IMP=0x00000000001542e4
- (void)endUndoGrouping;	// IMP=0x00000000001542c4
- (_Bool)_endUndoGroupRemovingIfEmpty:(_Bool)arg1;	// IMP=0x0000000000154084
@property(readonly) long long groupingLevel;
- (void)beginUndoGrouping;	// IMP=0x0000000000153f8e
- (void)_postCheckpointNotification;	// IMP=0x0000000000153f30
- (void)_prepareEventGrouping;	// IMP=0x0000000000153ebc
- (void)_cancelAutomaticTopLevelGroupEnding;	// IMP=0x0000000000153e3e
- (void)_scheduleAutomaticTopLevelGroupEnding;	// IMP=0x0000000000153d60
- (void)_delayAutomaticTermination:(double)arg1;	// IMP=0x0000000000153d5a
- (void)dealloc;	// IMP=0x0000000000153c8d
- (id)init;	// IMP=0x0000000000153b05
- (void)_rollbackUndoGrouping;	// IMP=0x0000000000153aa2
- (void)_commitUndoGrouping;	// IMP=0x0000000000153a7f
- (void)_processEndOfEventNotification:(id)arg1;	// IMP=0x00000000001538a9
- (_Bool)_shouldCoalesceTypingForText:(id)arg1:(id)arg2;	// IMP=0x00000000001537e9
- (id)_undoStack;	// IMP=0x00000000001537df

@end
