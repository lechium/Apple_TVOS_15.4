//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class CLInUseAssertion, CNPostalAddress, NSString, PKBusinessChatController, PKOrderPhysicalCardController, PKOrderPhysicalCardHeroView, PKPaymentAuthorizationCoordinator, PKPhysicalCardArtworkOption;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKOrderPhysicalCardAddressConfirmationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable>
{
    PKOrderPhysicalCardController *_controller;	// 8 = 0x8
    unsigned long long _featureIdentifier;	// 16 = 0x10
    CNPostalAddress *_shippingAddress;	// 24 = 0x18
    PKPhysicalCardArtworkOption *_artworkOption;	// 32 = 0x20
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;	// 40 = 0x28
    CLInUseAssertion *_inUseAssertion;	// 48 = 0x30
    _Bool _authorized;	// 56 = 0x38
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;	// 64 = 0x40
    PKBusinessChatController *_businessChatController;	// 72 = 0x48
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000018580
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001841f
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018205
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000181ff
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x0000000000017fdc
- (void)explanationViewControllerDidSelectCancel:(id)arg1;	// IMP=0x0000000000017fca
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x0000000000017d46
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x0000000000017a4e
- (void)_showDisplayableError:(id)arg1;	// IMP=0x0000000000017a02
- (void)_showSpinner:(_Bool)arg1;	// IMP=0x0000000000017908
- (void)_terminateFlow;	// IMP=0x00000000000178ae
- (void)_presentViewController:(id)arg1;	// IMP=0x00000000000177b4
- (void)_presentNextViewControllerOrTerminate;	// IMP=0x00000000000176cb
- (id)_addressBodyStringWithPostalAddress:(id)arg1;	// IMP=0x0000000000017503
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001749f
- (void)viewDidLoad;	// IMP=0x0000000000017126
- (void)dealloc;	// IMP=0x00000000000170c2
- (id)initWithOrderPhysicalCardController:(id)arg1;	// IMP=0x0000000000016f5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

