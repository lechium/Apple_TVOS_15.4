//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLInUseAssertion, NSString;

@interface PKApplyProgramConsentViewController
{
    CLInUseAssertion *_inUseAssertion;	// 8 = 0x8
    NSString *_pathTermsIdentifier;	// 16 = 0x10
    NSString *_pathIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014f463
- (void)_termsAccepted:(_Bool)arg1;	// IMP=0x000000000014f287
- (void)explanationViewDidSelectBodyButton:(id)arg1;	// IMP=0x000000000014f09e
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000014f021
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000014efa1
- (void)dealloc;	// IMP=0x000000000014ef3d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000014eed9
- (void)viewDidLoad;	// IMP=0x000000000014ee04
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;	// IMP=0x000000000014eceb

@end

