//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLInUseAssertion, NSString, PKApplyController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyTermsVerifyingViewController
{
    PKApplyController *_applyController;	// 8 = 0x8
    NSString *_termsIdentifier;	// 16 = 0x10
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 24 = 0x18
    _Bool _isProcessingTerms;	// 32 = 0x20
    unsigned long long _featureIdentifier;	// 40 = 0x28
    CLInUseAssertion *_inUseAssertion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003a3971
- (id)analyticsPageTag;	// IMP=0x00000000003a395d
- (void)_terminateSetupFlow;	// IMP=0x00000000003a3871
- (void)_showActivationSpinner:(_Bool)arg1;	// IMP=0x00000000003a36cc
- (void)_processTerms;	// IMP=0x00000000003a2f29
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003a2e0b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003a2cea
- (void)viewDidLoad;	// IMP=0x00000000003a2adf
- (void)dealloc;	// IMP=0x00000000003a2a7b
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;	// IMP=0x00000000003a296a

@end
