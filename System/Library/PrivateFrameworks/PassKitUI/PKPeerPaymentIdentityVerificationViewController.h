//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPeerPaymentIdentityVerificationController;

@interface PKPeerPaymentIdentityVerificationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;	// 8 = 0x8
    NSArray *_visibleFieldIdentifiers;	// 16 = 0x10
    unsigned long long _identityVerificaionError;	// 24 = 0x18
    NSString *_headerTitle;	// 32 = 0x20
    NSString *_headerSubtitle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000450127
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)_terminateFlow;	// IMP=0x000000000045004f
- (void)_handleCancelButtonTapped:(id)arg1;	// IMP=0x000000000044ffcc
- (void)_showNavigationBarSpinner:(_Bool)arg1;	// IMP=0x000000000044fe94
- (id)defaultHeaderViewSubTitle;	// IMP=0x000000000044fe7f
- (id)defaultHeaderViewTitle;	// IMP=0x000000000044fe6a
- (void)handleNextButtonTapped:(id)arg1;	// IMP=0x000000000044f8f5
- (id)visibleFieldIdentifiers;	// IMP=0x000000000044f8e0
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000044f8cc
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000044f431
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x000000000044f418
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000044f3fd
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 visibleFieldIdentifiers:(id)arg3;	// IMP=0x000000000044f223
- (id)initWithController:(id)arg1 visibleFieldIdentifiers:(id)arg2;	// IMP=0x000000000044f20c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

