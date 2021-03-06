//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemGestureDescriptor;
@protocol BSInvalidatable, OS_os_log, PBSystemGestureManager;

@interface PBSystemGestureHandle : NSObject
{
    PBSystemGestureDescriptor *_descriptor;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    _Atomic unsigned long long _state;	// 24 = 0x18
    id <PBSystemGestureManager> _gestureManager;	// 32 = 0x20
    CDUnknownBlockType _actionHandler;	// 40 = 0x28
    id <BSInvalidatable> _stateCaptureHandle;	// 48 = 0x30
}

+ (id)defaultLog;	// IMP=0x00200000000bdb10
- (void).cxx_destruct;	// IMP=0x00200000000bf4d0
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <PBSystemGestureManager> gestureManager; // @synthesize gestureManager=_gestureManager;
@property(readonly, nonatomic) _Atomic unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PBSystemGestureDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000bf260
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000bf1d0
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000befd0
- (id)succinctDescription;	// IMP=0x00100000000bef60
- (void)invalidate;	// IMP=0x00100000000bef30
- (unsigned long long)_atomic_load_state;	// IMP=0x00100000000bef10
- (id)_stateDump;	// IMP=0x00100000000bee80
- (long long)_invalidateWithReason:(id)arg1;	// IMP=0x00100000000be8e0
- (void)invokeActionHandlerWithGestureRecognizer:(id)arg1 descriptor:(id)arg2;	// IMP=0x00100000000be560
- (long long)invalidateWithReason:(id)arg1;	// IMP=0x00100000000be500
- (void)relinquish;	// IMP=0x00100000000be320
- (void)acquire;	// IMP=0x00100000000be140
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;	// IMP=0x00100000000bdf20
- (id)initWithSystemGestureManager:(id)arg1 descriptor:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bdb30

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

