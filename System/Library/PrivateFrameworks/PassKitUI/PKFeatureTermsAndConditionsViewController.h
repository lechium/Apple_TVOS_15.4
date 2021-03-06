//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSData, NSString, UINavigationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKFeatureTermsAndConditionsViewController <PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable>
{
    _Bool _isIpad;	// 8 = 0x8
    NSData *_pdfData;	// 16 = 0x10
    NSData *_htmlData;	// 24 = 0x18
    _Bool _performedInitialLoad;	// 32 = 0x20
    _Bool _useModalPresentation;	// 33 = 0x21
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 40 = 0x28
    long long _context;	// 48 = 0x30
    UINavigationController *_containerNavigationController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000033af8e
@property(readonly, nonatomic) UINavigationController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(nonatomic) _Bool useModalPresentation; // @synthesize useModalPresentation=_useModalPresentation;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
- (id)displayTitle;	// IMP=0x000000000033af06
- (void)presentErrorAlert;	// IMP=0x000000000033af00
- (void)termsAccepted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000033aefa
- (void)termsShown;	// IMP=0x000000000033aef4
- (void)reportAnalyticsForTermsLink:(id)arg1;	// IMP=0x000000000033aeee
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000033aee8
- (void)htmlTermsDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033aee2
- (void)initalTermsDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033aedc
- (void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000033aeca
- (void)popViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033ae9d
- (void)dismissViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033ae76
- (void)presentWithNavigationController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000033adc3
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033ac30
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000033abee
- (void)viewDidLoad;	// IMP=0x000000000033ab4c
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2;	// IMP=0x000000000033aa96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

