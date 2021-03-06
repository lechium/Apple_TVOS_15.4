//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKEditPassesDetailsResponder-Protocol.h>
#import <PassKitUI/PKEditPassesPerformanceTestResponder-Protocol.h>
#import <PassKitUI/PKPassDeleteHandler-Protocol.h>
#import <PassKitUI/WLCardViewDelegate-Protocol.h>

@class NSString, PKGroup, PKPass, PKPassView, UIBarButtonItem;

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder>
{
    PKGroup *_group;	// 8 = 0x8
    PKPass *_pass;	// 16 = 0x10
    PKPassView *_passView;	// 24 = 0x18
    UIBarButtonItem *_deleteBarButton;	// 32 = 0x20
    UIBarButtonItem *_flexibleSpace;	// 40 = 0x28
    UIBarButtonItem *_infoButton;	// 48 = 0x30
    long long _performanceTest;	// 56 = 0x38
    NSString *_performanceTestName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000013466d
- (id)pass;	// IMP=0x0000000000134658
- (id)group;	// IMP=0x0000000000134643
- (void)_didPresentDetailViewController;	// IMP=0x000000000013458e
- (void)disableDeleteButton;	// IMP=0x00000000001344c9
- (void)enableDeleteButton;	// IMP=0x0000000000134401
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;	// IMP=0x000000000013437a
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;	// IMP=0x0000000000134238
- (void)_doneButtonPressed;	// IMP=0x000000000013421f
- (void)_moreButtonPressed;	// IMP=0x00000000001340bc
- (void)_deletePassConfirmed;	// IMP=0x0000000000134043
- (void)_deletePassPressed;	// IMP=0x0000000000133ec7
- (_Bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;	// IMP=0x0000000000133e6e
- (void)passWasUpdated:(id)arg1;	// IMP=0x0000000000133e26
- (void)passViewSetup;	// IMP=0x0000000000133cf2
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000133aea
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000133a86
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000133a08
- (void)viewDidLoad;	// IMP=0x000000000013395c
- (void)setPerformanceTestName:(id)arg1;	// IMP=0x0000000000133948
- (void)setPerformanceTest:(long long)arg1;	// IMP=0x0000000000133937
- (id)initWithGroup:(id)arg1 pass:(id)arg2;	// IMP=0x000000000013368a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

