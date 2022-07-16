//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPhysicalCardActionControllerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, NSString, PKBusinessChatController, PKOrderPhysicalCardHeroView, PKPaymentPass, PKPhysicalCard, PKPhysicalCardActionController, SFClient;

@interface PKPhysicalCardManualActivationViewController <PKPhysicalCardActionControllerDelegate>
{
    PKPhysicalCard *_physicalCard;	// 8 = 0x8
    PKPhysicalCardActionController *_actionController;	// 16 = 0x10
    PKPaymentPass *_paymentPass;	// 24 = 0x18
    unsigned long long _feature;	// 32 = 0x20
    NSString *_activationCode;	// 40 = 0x28
    PKOrderPhysicalCardHeroView *_hero;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    CLInUseAssertion *_inUseAssertion;	// 64 = 0x40
    CLLocationManager *_locationManager;	// 72 = 0x48
    PKBusinessChatController *_businessChatController;	// 80 = 0x50
    SFClient *_sharingClient;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000451965
- (void)_presentDisplayableError:(id)arg1;	// IMP=0x0000000000451919
- (void)_showSpinner:(_Bool)arg1;	// IMP=0x000000000045187d
- (void)_setupForCurrentState;	// IMP=0x000000000045149c
- (void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3;	// IMP=0x00000000004512cf
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000004511cb
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x0000000000450fea
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000450f57
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000450ee2
- (void)viewDidLoad;	// IMP=0x0000000000450d9b
- (void)dealloc;	// IMP=0x0000000000450d37
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5 activationCode:(id)arg6;	// IMP=0x0000000000450ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
