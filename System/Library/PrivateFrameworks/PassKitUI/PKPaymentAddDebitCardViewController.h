//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentSetupFlowControllerDataSource-Protocol.h>

@class NSString, PKPeerPaymentSetupFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentAddDebitCardViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource>
{
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;	// 8 = 0x8
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 16 = 0x10
    _Bool _showDebitCardHeroView;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_bodyText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000081d4e
@property(nonatomic) _Bool showDebitCardHeroView; // @synthesize showDebitCardHeroView=_showDebitCardHeroView;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)_terminateSetupFlow;	// IMP=0x0000000000081c94
- (void)_handleNextStep;	// IMP=0x0000000000081af4
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;	// IMP=0x0000000000081a47
- (void)_handleProvisioningError:(id)arg1;	// IMP=0x00000000000819ec
- (void)_presentPaymentSetupController;	// IMP=0x00000000000815c3
- (void)_setupLater;	// IMP=0x00000000000815b1
- (void)paymentSetupDidFinish:(id)arg1;	// IMP=0x000000000008159f
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000008158d
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000008157b
- (_Bool)shouldPushTerms;	// IMP=0x0000000000081573
- (void)viewDidLoad;	// IMP=0x000000000008113e
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;	// IMP=0x0000000000080ddd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

