//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentCameraCaptureViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDisambiguationViewControllerDelegate-Protocol.h>

@class NSArray, NSString;

@interface PKPaymentCardManualEntryViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate>
{
    NSArray *_pendingCameraCaptureObjects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019bf64
- (id)defaultHeaderViewSubTitle;	// IMP=0x000000000019bf02
- (id)defaultHeaderViewTitle;	// IMP=0x000000000019bef1
- (_Bool)shouldDisplayFooterField;	// IMP=0x000000000019bee9
- (id)readonlyFieldIdentifiers;	// IMP=0x000000000019beab
- (id)visibleFieldIdentifiers;	// IMP=0x000000000019bd76
- (id)defaultFields;	// IMP=0x000000000019bd38
- (void)disambiguationViewControllerSetupLater:(id)arg1;	// IMP=0x000000000019bcec
- (void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2;	// IMP=0x000000000019ba8f
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;	// IMP=0x000000000019b849
- (void)_performInlineSecondaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019b508
- (void)_performDisambiguationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019b287
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019b0c9
- (_Bool)_shouldUseInlineSecondaryProvisioningFlow;	// IMP=0x000000000019afce
- (void)_performSecondaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019af49
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019ab6a
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a863
- (id)newPaymentEligibilityRequest;	// IMP=0x000000000019a834
- (void)_processPendingCameraCaptureObjects;	// IMP=0x000000000019a74a
- (void)updateFieldsModelWithCameraCaptureObjects:(id)arg1;	// IMP=0x000000000019a744
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;	// IMP=0x000000000019a6a6
- (void)cameraCaptureViewControllerDidFail:(id)arg1;	// IMP=0x000000000019a694
- (void)_dismissCameraCaptureViewController:(id)arg1;	// IMP=0x000000000019a5ed
- (void)_cameraCaptureCancelButtonPressed:(id)arg1;	// IMP=0x000000000019a52e
- (void)_captureFromCamera:(id)arg1;	// IMP=0x000000000019a419
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000019a0c0
- (void)handleNextButtonTapped:(id)arg1;	// IMP=0x0000000000199f2d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000199da3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000199d74
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000199bcc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000199b9d
- (void)viewDidLoad;	// IMP=0x0000000000199b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

