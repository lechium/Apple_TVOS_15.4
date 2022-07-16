//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentSetupFieldPicker, PKPeerPaymentIdentityVerificationController, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationPickerViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;	// 8 = 0x8
    PKPaymentSetupFieldPicker *_pickerField;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
    PKTableHeaderView *_headerView;	// 32 = 0x20
    unsigned long long _identityVerificaionError;	// 40 = 0x28
    NSArray *_leftBarButtonItems;	// 48 = 0x30
    NSArray *_rightBarButtonItems;	// 56 = 0x38
    _Bool _navigationEnabled;	// 64 = 0x40
    _Bool _rightBarButtonItemsEnabled;	// 65 = 0x41
    NSString *_headerTitle;	// 72 = 0x48
    NSString *_headerSubtitle;	// 80 = 0x50
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000ef9a
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)_setIdleTimerDisabled:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x000000000000eddd
- (void)_updateRightBarButtonState;	// IMP=0x000000000000ec90
- (void)_updateNavigationItemAnimated:(_Bool)arg1;	// IMP=0x000000000000eaf3
- (void)_setRightBarButtonItemsEnabled:(_Bool)arg1;	// IMP=0x000000000000ead0
- (void)_setNavigationBarEnabled:(_Bool)arg1;	// IMP=0x000000000000e9ea
- (void)_handleCancelButtonTapped:(id)arg1;	// IMP=0x000000000000e970
- (void)_terminateFlow;	// IMP=0x000000000000e8e8
- (void)_handleError:(id)arg1;	// IMP=0x000000000000e7fa
- (void)_handleNextButtonTapped:(id)arg1;	// IMP=0x000000000000e60a
- (void)_showNavigationBarSpinner:(_Bool)arg1;	// IMP=0x000000000000e604
- (void)_processNextViewController;	// IMP=0x000000000000e018
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000000e004
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000000db6e
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x000000000000db55
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000db3a
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000000d8cb
- (id)headerView;	// IMP=0x000000000000d704
- (void)_setTableViewHeaderActivitySpinnerAnimated:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x000000000000d59d
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000000d583
- (void)hideActivitySpinner;	// IMP=0x000000000000d564
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000000d547
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000000d532
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d524
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d337
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000d1b6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000d167
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000d15c
- (_Bool)isComplete;	// IMP=0x000000000000d129
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000d026
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000cfcd
- (void)viewDidLoad;	// IMP=0x000000000000cef1
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 pickerField:(id)arg3 footerText:(id)arg4;	// IMP=0x000000000000cc1a
- (id)initWithController:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3;	// IMP=0x000000000000cc00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

