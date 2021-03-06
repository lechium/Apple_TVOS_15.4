//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSString, PBSystemOverlayDismissalTransaction, PBSystemOverlayPreparationTransaction, PBSystemOverlayPresentationTransaction, TVSStateMachine, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemOverlaySessionDelegate, PBSystemUIPresenting;

@interface PBSystemOverlaySession : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    PBSystemOverlayPreparationTransaction *_preparationTransaction;	// 16 = 0x10
    PBSystemOverlayPresentationTransaction *_presentationTransaction;	// 24 = 0x18
    PBSystemOverlayDismissalTransaction *_dismissalTransaction;	// 32 = 0x20
    NSMutableArray *_pendingPresentationRequests;	// 40 = 0x28
    NSMutableArray *_pendingDismissalRequests;	// 48 = 0x30
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    id <PBSystemUIPresenting> _presentationHandler;	// 88 = 0x58
    long long _layoutLevel;	// 96 = 0x60
    id <PBSystemOverlaySessionDelegate> _delegate;	// 104 = 0x68
    unsigned long long _sceneDeactivationReasons;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000025a60
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons; // @synthesize sceneDeactivationReasons=_sceneDeactivationReasons;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak id <PBSystemOverlaySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) id <PBSystemUIPresenting> presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_machineNotifyDidInvalidate;	// IMP=0x0010000000025910
- (void)_machineNotifyDidCancelWithContext:(id)arg1;	// IMP=0x0010000000025890
- (void)_machineNotifyDidDismiss;	// IMP=0x0010000000025830
- (void)_machineNotifyWillDismissWithContext:(id)arg1;	// IMP=0x00100000000257b0
- (void)_machineNotifyDidPresent;	// IMP=0x0010000000025750
- (void)_machineNotifyWillPresent;	// IMP=0x00100000000256f0
- (void)_machineCleanup;	// IMP=0x0010000000025660
- (MISSING_TYPE *)_machineAddPendingPresentationRequest: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000025600
- (void)_machineDismissUIWithRequest:(id)arg1;	// IMP=0x0010000000024f30
- (void)_machinePresentUIWithRequest:(id)arg1;	// IMP=0x00100000000248a0
- (void)_machinePrepareUIWithProvider:(id)arg1;	// IMP=0x0010000000024280
- (void)_initializeStateMachine;	// IMP=0x001000000001e7c0
- (void)contentPresentingDidDismissContent:(id)arg1;	// IMP=0x001000000001e6d0
- (void)contentPresenting:(id)arg1 willDismissContentWithResult:(id)arg2 error:(id)arg3;	// IMP=0x001000000001e440
- (void)makeActive;	// IMP=0x001000000001e3f0
- (void)dismissWithRequest:(id)arg1;	// IMP=0x001000000001e280
- (void)presentWithRequest:(id)arg1;	// IMP=0x001000000001e150
- (id)initWithIdentifier:(id)arg1 layoutLevel:(long long)arg2 sceneDeactivationReasons:(unsigned long long)arg3 presentationHandler:(id)arg4 delegate:(id)arg5;	// IMP=0x001000000001df70
- (id)init;	// IMP=0x001000000001df40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

