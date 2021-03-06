//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKApplyFlowControllerProtocol-Protocol.h>

@class NSString, PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyCollectionViewController <PKApplyFlowControllerProtocol>
{
    PKApplyController *_controller;	// 8 = 0x8
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 16 = 0x10
    PKDynamicProvisioningPageContent *_page;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003bb2e0
@property(retain, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
@property(readonly, nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKApplyController *controller; // @synthesize controller=_controller;
- (void)didTapFooterLink:(id)arg1;	// IMP=0x00000000003bb012
- (void)terminateSetupFlow;	// IMP=0x00000000003baf35
- (void)displayDisplayableError:(id)arg1;	// IMP=0x00000000003baca1
- (void)handleNextViewController:(id)arg1 displayableError:(id)arg2;	// IMP=0x00000000003bab62
- (void)handleNextStep;	// IMP=0x00000000003baa23
- (void)_withdrawApplicationTapped;	// IMP=0x00000000003ba795
- (void)_cancelPressed;	// IMP=0x00000000003ba59e
- (void)_continueTapped;	// IMP=0x00000000003ba461
- (void)viewDidLoad;	// IMP=0x00000000003b9d02
- (id)currentPage;	// IMP=0x00000000003b9ced
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;	// IMP=0x00000000003b9c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

