//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKDataReleaseHeaderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSObject, NSString, PKAuthenticator, PKDataReleaseEntityResolver, PKDataReleaseHeader, PKISO18013DataReleaseRequest, PKIdleTimerAssertion, PKMerchant, PKPaymentAuthorizationFooterView, PKPaymentTransactionIconGenerator, PKTransactionReleasedData, UIImage, UITableView, UIView;
@protocol OS_dispatch_source, PKDataReleaseContentViewControllerDelegate;

@interface PKDataReleaseContentViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate>
{
    PKISO18013DataReleaseRequest *_request;	// 8 = 0x8
    id <PKDataReleaseContentViewControllerDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableViewReleaseData;	// 24 = 0x18
    PKDataReleaseHeader *_header;	// 32 = 0x20
    PKPaymentAuthorizationFooterView *_footerView;	// 40 = 0x28
    _Bool _lastFailureWasUnboundBiometric;	// 48 = 0x30
    UIView *_topSeparator;	// 56 = 0x38
    UIView *_bottomSeparator;	// 64 = 0x40
    _Bool _isTemplateLayout;	// 72 = 0x48
    long long _layoutRecursionCounter;	// 80 = 0x50
    PKAuthenticator *_authenticator;	// 88 = 0x58
    UIViewController *_passcodeViewController;	// 96 = 0x60
    NSArray *_intentRetainElements;	// 104 = 0x68
    NSArray *_intentDoNotRetainElements;	// 112 = 0x70
    PKTransactionReleasedData *_dataToRelease;	// 120 = 0x78
    PKPaymentTransactionIconGenerator *_iconGenerator;	// 128 = 0x80
    PKDataReleaseEntityResolver *_entityResolver;	// 136 = 0x88
    UIImage *_merchantIcon;	// 144 = 0x90
    PKMerchant *_merchant;	// 152 = 0x98
    _Bool _authenticating;	// 160 = 0xa0
    _Bool _hasFailedBiometrics;	// 161 = 0xa1
    _Bool _isInBioLockout;	// 162 = 0xa2
    PKIdleTimerAssertion *_idleTimerAssertion;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_idleTimer;	// 176 = 0xb0
    _Bool _hasPlayedHaptics;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000003179ff
- (void)dismissPasscodeViewController;	// IMP=0x0000000000317984
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000031785b
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;	// IMP=0x0000000000317823
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(CDStruct_2a40740a)arg2;	// IMP=0x00000000003175d1
- (void)dataReleaseHeaderDidTapDismiss;	// IMP=0x000000000031741f
- (void)presentPasscodeToExitLockout;	// IMP=0x0000000000317419
- (void)_updateMerchantHeaderView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003172b2
- (void)_reloadMerchantHeader;	// IMP=0x00000000003171f3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000003171eb
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x00000000003171d9
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000003171c0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000317162
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000317157
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000031714c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000316f78
- (void)_updateSeparators;	// IMP=0x0000000000316d80
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000316d6e
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000316d66
- (void)dataReleaseCompletedWithError:(id)arg1;	// IMP=0x000000000031683d
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000003164e0
- (void)_updatePreferredContentSize;	// IMP=0x0000000000316412
- (id)_compactNavigationController;	// IMP=0x00000000003163c2
- (void)_updatePhysicalButtonState;	// IMP=0x00000000003163bc
- (_Bool)shouldShowPhysicalButton;	// IMP=0x00000000003163b4
- (void)_startEvaluationWithExternalizedContext:(id)arg1;	// IMP=0x0000000000315767
- (void)_startInitialEvaluation;	// IMP=0x0000000000315753
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000315705
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000315581
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000031553e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000031539d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000031535c
- (void)viewDidLoad;	// IMP=0x0000000000314d98
- (void)setIdleTimerDisabled:(_Bool)arg1;	// IMP=0x0000000000314c22
- (void)dealloc;	// IMP=0x0000000000314b7c
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000003144a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
