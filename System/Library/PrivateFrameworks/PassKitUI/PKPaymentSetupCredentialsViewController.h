//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentSetupCredentialsSectionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString, PKPaymentSetupCredentialsSectionController, PKPaymentSetupFlowController, PKPaymentSetupProduct;

@interface PKPaymentSetupCredentialsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol>
{
    PKPaymentSetupFlowController *_flowController;	// 8 = 0x8
    PKPaymentSetupCredentialsSectionController *_sectionController;	// 16 = 0x10
    PKPaymentSetupProduct *_product;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003a1b8b
- (void)_toggleEdit;	// IMP=0x00000000003a1a45
- (void)_requestExternalizedAuthIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a159c
- (void)_terminateSetupFlow;	// IMP=0x00000000003a14dc
- (void)_setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000000003a1314
- (void)_presentProvisioningFlowForCredentials:(id)arg1;	// IMP=0x00000000003a11d6
- (void)_requestAuthAndStartProvisioningForCredentials:(id)arg1;	// IMP=0x00000000003a1002
- (void)_presentManualAddController;	// IMP=0x00000000003a0a2d
- (void)_setupLaterTapped;	// IMP=0x00000000003a08a0
- (void)_continueButtonPressed;	// IMP=0x00000000003a0738
- (void)_presentCredentialDoubleCheckAlert:(id)arg1 continueHandler:(CDUnknownBlockType)arg2 setupLaterHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003a0245
- (void)_setupDockView;	// IMP=0x000000000039ffd2
- (id)paymentSetupMarker;	// IMP=0x000000000039ffb9
- (void)showCredentialDeletionError;	// IMP=0x000000000039fe1f
- (void)showUnableToDeleteCredentialError;	// IMP=0x000000000039fc85
- (void)showDeleteConfirmationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000039f9ba
- (void)showMaxSelectionAlertForCredential:(id)arg1;	// IMP=0x000000000039f78f
- (void)credentialSelectionDidChange:(_Bool)arg1;	// IMP=0x000000000039f720
- (void)presentUnavailableDetailsForCredential:(id)arg1;	// IMP=0x000000000039f676
- (void)presentRefundFlowForCredential:(id)arg1;	// IMP=0x000000000039f5cc
- (void)reloadAnimated:(_Bool)arg1;	// IMP=0x000000000039f528
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000039f42c
- (void)viewDidLoad;	// IMP=0x000000000039f1a7
- (void)dealloc;	// IMP=0x000000000039f178
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 product:(id)arg5 allowsManualEntry:(_Bool)arg6;	// IMP=0x000000000039eff2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

