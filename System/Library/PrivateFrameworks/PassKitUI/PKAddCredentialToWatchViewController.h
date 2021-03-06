//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialRemoteDevicePairingFlowControllerOperation-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKAppletSubcredentialSharingSession, PKPaymentAuthorizationCoordinator, PKSubcredentialPairingFlowControllerContext, PKWatchHeroCardExplainationHeaderView;
@protocol PKSubcredentialPairingFlowControllerProtocol, PKSubcredentialProvisioningViewModelProtocol;

@interface PKAddCredentialToWatchViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable>
{
    PKAppletSubcredentialSharingSession *_sharingSession;	// 8 = 0x8
    id <PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;	// 16 = 0x10
    _Bool _isAdvancing;	// 24 = 0x18
    PKWatchHeroCardExplainationHeaderView *_heroCardView;	// 32 = 0x20
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;	// 40 = 0x28
    CDUnknownBlockType _authorizationRequestCompletion;	// 48 = 0x30
    PKSubcredentialPairingFlowControllerContext *_provisioningContext;	// 56 = 0x38
    id <PKSubcredentialPairingFlowControllerProtocol> _flowController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000234b5
@property(readonly, nonatomic) id <PKSubcredentialPairingFlowControllerProtocol> flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // @synthesize provisioningContext=_provisioningContext;
@property(readonly, nonatomic) _Bool suppressFieldDetect;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023392
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002338c
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x000000000002322e
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;	// IMP=0x000000000002314f
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3;	// IMP=0x0000000000022db9
- (void)subcredentialProvisioningConfiguration:(id)arg1 requestUserAuthWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022c0a
- (void)explanationViewControllerDidSelectCancel:(id)arg1;	// IMP=0x0000000000022b8f
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x0000000000022b14
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x0000000000022a1c
- (void)showActivityIndicator:(_Bool)arg1;	// IMP=0x000000000002299f
- (void)showSuccessCheckmark:(_Bool)arg1;	// IMP=0x0000000000022999
- (void)advanceToNextState;	// IMP=0x0000000000022715
- (void)resetState;	// IMP=0x0000000000022666
- (void)presentPaymentSheetForSharingRequest:(id)arg1;	// IMP=0x00000000000225c2
- (void)startProvisioning;	// IMP=0x0000000000022482
- (void)invalidateUserAuth;	// IMP=0x000000000002247c
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000220f9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000022071
- (void)loadView;	// IMP=0x0000000000021b48
- (id)sharingSessionWithDelegate:(id)arg1;	// IMP=0x0000000000021b00
@property(readonly, nonatomic) unsigned long long operation;
- (void)dealloc;	// IMP=0x0000000000021a7a
- (id)initWithFlowController:(id)arg1 context:(id)arg2;	// IMP=0x00000000000218ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

