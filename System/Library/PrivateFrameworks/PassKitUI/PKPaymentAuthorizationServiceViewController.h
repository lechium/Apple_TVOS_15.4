//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/AKAppleIDAuthenticationInAppContextDelegate-Protocol.h>
#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class CNContact, NSLayoutConstraint, NSMutableSet, NSString, PKAuthenticator, PKContactFormatValidator, PKPaymentAuthorizationCouponCodeEntryViewController, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationPasswordButtonView, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, PKPeerPaymentAccount, UIBarButtonItem, UITableView, UIView;
@protocol PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate, AKAppleIDAuthenticationInAppContextDelegate, PKPaymentAuthorizationServiceProtocol>
{
    PKPaymentAuthorizationLayout *_layout;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UITableView *_detailTableView;	// 24 = 0x18
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;	// 32 = 0x20
    NSLayoutConstraint *_summaryHeightConstraint;	// 40 = 0x28
    PKPaymentAuthorizationTotalView *_totalView;	// 48 = 0x30
    PKPaymentAuthorizationFooterView *_footerView;	// 56 = 0x38
    PKPaymentAuthorizationPasswordButtonView *_passwordButtonView;	// 64 = 0x40
    NSLayoutConstraint *_passphraseBottomConstraint;	// 72 = 0x48
    _Bool _needsToAccommodateKeyboard;	// 80 = 0x50
    UIBarButtonItem *_cancelBarButtonItem;	// 88 = 0x58
    _Bool _cancelButtonDisabled;	// 96 = 0x60
    _Bool _scrollIndicatorShown;	// 97 = 0x61
    UIView *_passphraseSeparatorView;	// 104 = 0x68
    NSLayoutConstraint *_contentViewRightConstraint;	// 112 = 0x70
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;	// 120 = 0x78
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;	// 128 = 0x80
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;	// 136 = 0x88
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;	// 144 = 0x90
    PKPaymentPreferencesViewController *_bankAccountPreferencesController;	// 152 = 0x98
    PKPaymentAuthorizationCouponCodeEntryViewController *_couponCodeEntryViewController;	// 160 = 0xa0
    _Bool _viewAppeared;	// 168 = 0xa8
    _Bool _visible;	// 169 = 0xa9
    _Bool _authenticating;	// 170 = 0xaa
    _Bool _allowCompactProcessing;	// 171 = 0xab
    _Bool _allowBiometricPhysicalButtonInstruction;	// 172 = 0xac
    _Bool _useBiometricPhysicalButtonInstruction;	// 173 = 0xad
    _Bool _physicalButtonVisibleOnce;	// 174 = 0xae
    unsigned char _visibility;	// 175 = 0xaf
    _Bool _keyboardVisible;	// 176 = 0xb0
    struct CGRect _keyboardFrame;	// 184 = 0xb8
    struct CGRect _lastKeyboardFrame;	// 216 = 0xd8
    unsigned short _layoutRecursionCounter;	// 248 = 0xf8
    long long _userIntentStyle;	// 256 = 0x100
    long long _internalAuthenticationEvaluationState;	// 264 = 0x108
    _Bool _idleStateIsPasscode;	// 272 = 0x110
    unsigned int _faceIDCameraEdge;	// 276 = 0x114
    _Bool _showPoseOutOfRangeDownCoaching;	// 280 = 0x118
    long long _internalCoachingState;	// 288 = 0x120
    UIViewController *_passcodeViewController;	// 296 = 0x128
    UIViewController *_passphraseViewController;	// 304 = 0x130
    _Bool _hostApplicationResignedActive;	// 312 = 0x138
    _Bool _hostApplicationEnteredBackground;	// 313 = 0x139
    _Bool _treatingHostAsBackgrounded;	// 314 = 0x13a
    _Bool _bypassAuthenticator;	// 315 = 0x13b
    _Bool _isPad;	// 316 = 0x13c
    _Bool _isAMPPayment;	// 317 = 0x13d
    _Bool _isInstallment;	// 318 = 0x13e
    _Bool _isPaymentSummaryPinned;	// 319 = 0x13f
    _Bool _needsFinalCallback;	// 320 = 0x140
    long long _preferencesStyle;	// 328 = 0x148
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 336 = 0x150
    unsigned long long _biometryAttempts;	// 344 = 0x158
    PKPeerPaymentAccount *_peerPaymentAccount;	// 352 = 0x160
    _Bool _peerPaymentBalanceIsInsufficient;	// 360 = 0x168
    NSMutableSet *_completionHandlers;	// 368 = 0x170
    CNContact *_lastUnserviceableAddress;	// 376 = 0x178
    double _authenticatorFingerOnTime;	// 384 = 0x180
    PKContactFormatValidator *_contactFormatValidator;	// 392 = 0x188
    _Bool _blockingHardwareCancels;	// 400 = 0x190
    PKPaymentAuthorizationStateMachine *_stateMachine;	// 408 = 0x198
    PKAuthenticator *_authenticator;	// 416 = 0x1a0
    long long _physicalButtonState;	// 424 = 0x1a8
    NSString *_physicalButtonInstruction;	// 432 = 0x1b0
    long long _coachingState;	// 440 = 0x1b8
    id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> _delegate;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x00000000002f1557
@property(readonly, nonatomic) _Bool blockingHardwareCancels; // @synthesize blockingHardwareCancels=_blockingHardwareCancels;
@property(nonatomic) __weak id <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic) NSString *physicalButtonInstruction; // @synthesize physicalButtonInstruction=_physicalButtonInstruction;
@property(readonly, nonatomic) long long physicalButtonState; // @synthesize physicalButtonState=_physicalButtonState;
@property(retain, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;	// IMP=0x00000000002f1486
- (void)_removeSimulatorHIDListener;	// IMP=0x00000000002f144b
- (void)_startSimulatorHIDListener;	// IMP=0x00000000002f1240
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1;	// IMP=0x00000000002f11a2
- (_Bool)_passwordRequired;	// IMP=0x00000000002f1096
- (_Bool)_passcodeAllowed;	// IMP=0x00000000002f1007
- (void)_updateFooterStateIfAuthenticatingWithBiometricFailure:(_Bool)arg1;	// IMP=0x00000000002f0f76
- (void)_updateCoachingState;	// IMP=0x00000000002f0e64
- (void)_updatePhysicalButtonInstructionAndNotify:(_Bool)arg1;	// IMP=0x00000000002f0c27
- (void)_updatePhysicalButtonState;	// IMP=0x00000000002f0a70
- (void)_updateUserIntentStyle;	// IMP=0x00000000002f0a6a
- (void)_setPassphraseViewController:(id)arg1;	// IMP=0x00000000002f09fa
- (void)_setPasscodeViewController:(id)arg1;	// IMP=0x00000000002f098a
- (void)_setAuthenticating:(_Bool)arg1;	// IMP=0x00000000002f0948
- (void)_setVisible:(_Bool)arg1;	// IMP=0x00000000002f08f4
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;	// IMP=0x00000000002f04f1
- (long long)_authenticatorPolicy;	// IMP=0x00000000002f0431
- (id)_compactNavigationController;	// IMP=0x00000000002f03e1
- (long long)_totalViewStyle;	// IMP=0x00000000002f0295
- (void)_updatePreferredContentSize;	// IMP=0x00000000002efd2c
- (void)_updateCouponCodeEntry;	// IMP=0x00000000002efd0f
- (void)_setupCouponCodeEntry;	// IMP=0x00000000002efc4d
- (void)_showUnserviceableAddressAlertForErrors:(id)arg1;	// IMP=0x00000000002ef80b
- (void)_updatePreferencesWithErrors:(id)arg1;	// IMP=0x00000000002ef309
- (void)_updateShippingMethods;	// IMP=0x00000000002eec7c
- (id)_availabilityStringForPass:(id)arg1;	// IMP=0x00000000002ee94d
- (void)_setupPaymentPassAndBillingAddress;	// IMP=0x00000000002ed205
- (void)_updateAvailableCardsPreferences;	// IMP=0x00000000002ecfb1
- (id)_unavailablePasses;	// IMP=0x00000000002ecce6
- (long long)selectedPaymentApplicationIndexFromCardEntries:(id)arg1;	// IMP=0x00000000002eca6c
- (id)_addCardEntry;	// IMP=0x00000000002ec8f3
- (id)_availablePasses;	// IMP=0x00000000002eb930
- (void)_updateBankAccounts;	// IMP=0x00000000002ea79b
- (void)_setupBankAccounts;	// IMP=0x00000000002ea67c
- (_Bool)_shouldShowUsePeerPaymentBalanceToggle;	// IMP=0x00000000002ea5d2
- (void)_setupShippingContact;	// IMP=0x00000000002e8b1f
- (void)_setupShippingAddress;	// IMP=0x00000000002e7c4c
- (void)_setupShippingMethods;	// IMP=0x00000000002e7a75
- (void)_setupWithPaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;	// IMP=0x00000000002e6c7e
- (void)_handleModelUpdate;	// IMP=0x00000000002e6658
- (Class)_viewPresenterClassForDataItem:(id)arg1;	// IMP=0x00000000002e657d
- (Class)_tableViewClassForDataItem:(id)arg1;	// IMP=0x00000000002e653a
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e62bb
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e5d1f
- (void)resumeAndUpdateContentSize;	// IMP=0x00000000002e5ce4
- (void)cancelPressed:(id)arg1;	// IMP=0x00000000002e5aed
- (void)_payWithPasswordPressed:(id)arg1;	// IMP=0x00000000002e5914
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e54ec
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e5491
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e5474
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002e50b4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002e4eee
- (_Bool)_shouldShowSeparatorForRowAtIndexPath:(id)arg1;	// IMP=0x00000000002e4e24
- (_Bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;	// IMP=0x00000000002e4e1c
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;	// IMP=0x00000000002e4ac6
- (void)paymentAuthorizationCouponCodeEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000000002e49a2
- (void)paymentAuthorizationCouponCodeEntryViewController:(id)arg1 didChangeCouponCode:(id)arg2;	// IMP=0x00000000002e4982
- (id)dataItemForPaymentAuthorizationCouponCodeEntryViewController:(id)arg1;	// IMP=0x00000000002e4922
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;	// IMP=0x00000000002e4829
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;	// IMP=0x00000000002e47da
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;	// IMP=0x00000000002e472f
- (void)dismissPassphraseViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e46d5
- (void)dismissPassphraseViewController;	// IMP=0x00000000002e46c1
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e46af
- (void)dismissPasscodeViewController;	// IMP=0x00000000002e4633
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e4490
- (void)biometricAttemptFailed;	// IMP=0x00000000002e4366
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;	// IMP=0x00000000002e4341
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(CDStruct_2a40740a)arg2;	// IMP=0x00000000002e4285
- (long long)_progressStateForAuthenticationWithBiometricFailure:(_Bool)arg1;	// IMP=0x00000000002e422f
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;	// IMP=0x00000000002e4062
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;	// IMP=0x00000000002e3d92
- (void)_didFailWithFatalError:(id)arg1;	// IMP=0x00000000002e320d
- (void)_didFailWithError:(id)arg1;	// IMP=0x00000000002e2b5a
- (void)_didCancel:(_Bool)arg1;	// IMP=0x00000000002e2add
- (void)_executeCompletionHandlers;	// IMP=0x00000000002e299f
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)arg1;	// IMP=0x00000000002e2982
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;	// IMP=0x00000000002e2965
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;	// IMP=0x00000000002e292c
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;	// IMP=0x00000000002e290f
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1;	// IMP=0x00000000002e28f2
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;	// IMP=0x00000000002e28d5
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;	// IMP=0x00000000002e28b8
- (void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg1;	// IMP=0x00000000002e289b
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;	// IMP=0x00000000002e287e
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;	// IMP=0x00000000002e281e
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;	// IMP=0x00000000002e2801
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1;	// IMP=0x00000000002e27e4
- (void)_updateBackgroundedState:(_Bool)arg1;	// IMP=0x00000000002e2779
- (void)_hostApplicationDidEnterBackground;	// IMP=0x00000000002e275a
- (void)_hostApplicationWillEnterForeground;	// IMP=0x00000000002e273b
- (void)handleHostApplicationDidBecomeActive;	// IMP=0x00000000002e271c
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;	// IMP=0x00000000002e26ff
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e26c1
- (void)handleHostApplicationDidCancel;	// IMP=0x00000000002e25cd
- (void)_showScrollIndicatorIfNeeded;	// IMP=0x00000000002e2570
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e24b5
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002e24a0
- (void)_selectOptionsForDataItem:(id)arg1;	// IMP=0x00000000002e21f5
- (void)_startEvaluationWithHasInitialAuthenticatorState:(_Bool)arg1 initialAuthenticatorState:(unsigned long long)arg2;	// IMP=0x00000000002e2182
- (void)_suspendAuthenticationAndForceReset:(_Bool)arg1;	// IMP=0x00000000002e212b
- (void)_suspendAuthentication;	// IMP=0x00000000002e2114
- (void)_abandonPSD2StyleAMPBuy;	// IMP=0x00000000002e1ff0
- (_Bool)_abandonActiveEnrollmentAttempts;	// IMP=0x00000000002e1f3d
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e1f1e
- (void)_invalidPaymentDataWithParam:(id)arg1;	// IMP=0x00000000002e1db8
- (void)_processClientCallback:(id)arg1;	// IMP=0x00000000002e1993
- (void)_updateCancelButtonEnabledForState:(unsigned long long)arg1 param:(id)arg2;	// IMP=0x00000000002e1840
- (_Bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;	// IMP=0x00000000002e1704
- (void)invalidate;	// IMP=0x00000000002e16cc
- (id)handlePaymentRequest:(id)arg1 relevantPassUniqueID:(id)arg2 fromAppWithLocalizedName:(id)arg3 applicationIdentifier:(id)arg4 bundleIdentifier:(id)arg5 teamIdentifier:(id)arg6;	// IMP=0x00000000002e14cf
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;	// IMP=0x00000000002e14a5
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e1353
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000002e127b
- (void)keyboardWillChange:(id)arg1;	// IMP=0x00000000002e10e7
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000002e0f4e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002e0ebf
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002e0e90
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000002e0e1b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002e0dcd
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002e0a94
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002e0991
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002e0921
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002e07f2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002e076a
- (void)_setVisibility:(unsigned char)arg1;	// IMP=0x00000000002e06fb
- (void)_setNavigationItemLeftItemForAMP;	// IMP=0x00000000002e064e
- (_Bool)_setNavigationItemLeftItemFromNavigationTitle;	// IMP=0x00000000002e043c
- (void)viewDidLoad;	// IMP=0x00000000002df181
- (void)_createSubviews;	// IMP=0x00000000002ded2e
- (void)dealloc;	// IMP=0x00000000002debec
- (id)initWithLayout:(id)arg1;	// IMP=0x00000000002de7e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
