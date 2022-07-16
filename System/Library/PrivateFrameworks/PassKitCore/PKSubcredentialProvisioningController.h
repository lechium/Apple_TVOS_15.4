//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKAppletSubcredentialPairingSessionDelegate-Protocol.h>
#import <PassKitCore/PKSubcredentialProvisioningOperationDelegate-Protocol.h>

@class NSString, PKAppletSubcredential, PKAssertion, PKPaymentPass, PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningOperation, PKSubcredentialProvisioningOperationContext, PKSubcredentialProvisioningTransitionTable;
@protocol OS_dispatch_queue, PKSubcredentialProvisioningControllerDelegate;

@interface PKSubcredentialProvisioningController : NSObject <PKSubcredentialProvisioningOperationDelegate, PKAppletSubcredentialPairingSessionDelegate>
{
    PKSubcredentialProvisioningConfiguration *_configuration;	// 8 = 0x8
    PKSubcredentialProvisioningOperationContext *_context;	// 16 = 0x10
    PKSubcredentialProvisioningTransitionTable *_transitionTable;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_operationSerialQueue;	// 32 = 0x20
    struct os_unfair_lock_s _stateLock;	// 40 = 0x28
    _Bool _hasStarted;	// 44 = 0x2c
    _Bool _hasBeenCanceled;	// 45 = 0x2d
    PKAssertion *_userNotificationAssertion;	// 48 = 0x30
    PKAssertion *_fieldDetectSuppressionAssertion;	// 56 = 0x38
    PKAssertion *_contactlessInterfaceSuppressionAssertion;	// 64 = 0x40
    PKSubcredentialProvisioningOperation *_currentOperation;	// 72 = 0x48
    long long _currentState;	// 80 = 0x50
    PKPaymentPass *_provisionedPass;	// 88 = 0x58
    PKAppletSubcredential *_addedCredential;	// 96 = 0x60
    CDUnknownBlockType _cancelCompletion;	// 104 = 0x68
    id <PKSubcredentialProvisioningControllerDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000027692c
@property(nonatomic) __weak id <PKSubcredentialProvisioningControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(_Bool)arg2;	// IMP=0x00000000002768a4
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;	// IMP=0x00000000002765d3
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000276302
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;	// IMP=0x0000000000276031
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;	// IMP=0x0000000000275d1c
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;	// IMP=0x0000000000275a9a
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0000000000275865
- (void)operation:(id)arg1 addedPass:(id)arg2;	// IMP=0x0000000000275820
- (void)operationWasCanceled:(id)arg1;	// IMP=0x0000000000275803
- (void)operation:(id)arg1 addedCredential:(id)arg2;	// IMP=0x00000000002756da
- (void)operation:(id)arg1 failWithError:(id)arg2;	// IMP=0x00000000002755f7
- (void)operation:(id)arg1 advanceToState:(long long)arg2;	// IMP=0x00000000002755d9
- (void)releaseProvisioningAssertions;	// IMP=0x0000000000275561
- (void)acquireProvisioningAssertionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000274a6c
- (id)webServiceFromConfiguration:(id)arg1;	// IMP=0x0000000000274998
@property(readonly, nonatomic) long long currentState;
@property(readonly, nonatomic) PKPaymentPass *provisionedPass;
@property(readonly, nonatomic) PKAppletSubcredential *addedCredential;
- (void)transitionToState:(long long)arg1 withOperation:(id)arg2 error:(id)arg3;	// IMP=0x0000000000273c01
- (void)declineRelatedInvitationsIfNecessary;	// IMP=0x0000000000273937
- (void)cleanUpProvisioningAfterError:(_Bool)arg1;	// IMP=0x00000000002735e5
- (void)finishProvisioningWithError:(id)arg1 state:(long long)arg2;	// IMP=0x00000000002734d5
- (void)cancelProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000273228
- (void)_canBeginProvisioning:(CDUnknownBlockType)arg1;	// IMP=0x0000000000272b1a
- (void)startProvisioningWithConfiguration:(id)arg1;	// IMP=0x000000000027256f
- (id)init;	// IMP=0x0000000000272510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
