//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKDeviceSharingCapabilitiesManagerObserver-Protocol.h>

@class NSObject, NSString, PKDeviceSharingCapabilities, PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentIconEducationView, PKPeerPaymentSetupFlowController;
@protocol OS_dispatch_source, PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentAssociatedAccountActivationViewController <PKDeviceSharingCapabilitiesManagerObserver>
{
    PKPeerPaymentSetupFlowController *_controller;	// 8 = 0x8
    PKFamilyMember *_familyMember;	// 16 = 0x10
    id <PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    long long _setupType;	// 40 = 0x28
    PKPeerPaymentIconEducationView *_iconEducationView;	// 48 = 0x30
    PKPeerPaymentAccount *_account;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timer;	// 64 = 0x40
    _Bool _timerHasFired;	// 72 = 0x48
    PKDeviceSharingCapabilities *_childAppleCashCapabilities;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000307065
- (void)_showSpinner:(_Bool)arg1;	// IMP=0x0000000000306fdf
- (void)_terminateAddAssociatedAccountFlowWithSucces:(_Bool)arg1 updatedAccount:(id)arg2;	// IMP=0x0000000000306ef8
- (void)_presentDisplayableError:(id)arg1;	// IMP=0x0000000000306e13
- (void)_sendMoneyInMessages;	// IMP=0x0000000000306cc7
- (void)_handlePeerPaymentAccountDidChangeNotification;	// IMP=0x0000000000306b68
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;	// IMP=0x00000000003069eb
- (void)deviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;	// IMP=0x000000000030686e
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000003067d6
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(_Bool *)arg1;	// IMP=0x0000000000305dda
- (void)_checkFamilyMemberAppleCashCapabilities;	// IMP=0x0000000000305983
- (void)_startTimerIfNeccessary;	// IMP=0x0000000000305726
- (void)_cancelTimer;	// IMP=0x000000000030570a
- (_Bool)_isAssociatedAccountPending;	// IMP=0x0000000000305643
- (void)_setState:(unsigned long long)arg1;	// IMP=0x000000000030462a
- (void)viewDidLoad;	// IMP=0x00000000003043ee
- (void)dealloc;	// IMP=0x0000000000304375
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;	// IMP=0x0000000000304128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
