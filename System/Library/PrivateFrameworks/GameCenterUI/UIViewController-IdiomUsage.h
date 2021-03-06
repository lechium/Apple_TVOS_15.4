//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (IdiomUsage)
- (long long)_gkDesiredUserInterfaceIdiom;	// IMP=0x000000000006dd61
- (_Bool)_gkShouldUsePadUI;	// IMP=0x000000000006dd47
- (_Bool)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;	// IMP=0x00000000000a1f78
- (id)_gkRepresentedObject;	// IMP=0x00000000000a1f70
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a1f6a
- (void)_gkDidTransitionModalPresentationForTraitCollection:(id)arg1;	// IMP=0x00000000000a1f64
- (void)_gkWillTransitionModalPresentationForTraitCollection:(id)arg1;	// IMP=0x00000000000a1f5e
- (id)_gkViewControllersForRestoringPopover;	// IMP=0x00000000000a1f56
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;	// IMP=0x00000000000a1f50
@property(retain, nonatomic, setter=_gkSetSourcePresentingViewController:) UIViewController *_gkSourcePresentingViewController;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b2209
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3;	// IMP=0x00000000000b21f4
- (void)_gkPresentChallengeVC:(id)arg1;	// IMP=0x00000000000b1cf8
- (_Bool)_gkServiceWantsCustomRightBarButtonItemInViewService;	// IMP=0x00000000000d7cec
- (void)_gkRestoreStatusBarStyle:(_Bool)arg1;	// IMP=0x00000000000dc47d
- (void)_gkSaveStatusBarStyle:(_Bool)arg1;	// IMP=0x00000000000dc469
- (void)_gkSaveStatusBarStyleAnimated:(_Bool)arg1 setToStyle:(long long)arg2;	// IMP=0x00000000000dc3ae
- (_Bool)_gkExtensionWantsCustomRightBarButtonItemInViewService;	// IMP=0x00000000000e02de
- (void)_gkPopViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000ea1db
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000ea074
- (void)_gkPushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000ea05d
- (void)_gkDismissViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e9fda
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e9e4b
- (void)_gkPresentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e9d96
- (id)_gkOriginatingViewControllerAutoDetermined;	// IMP=0x00000000000e9cdc
- (id)_gkOriginatingViewController;	// IMP=0x00000000000e9c94
- (void)_gkSetOriginatingViewController:(id)arg1;	// IMP=0x00000000000e9c81
- (void)_gkRemoveViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e9aee
- (void)_gkShowViewController:(id)arg1;	// IMP=0x00000000000e9a96
- (id)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000e9a7e
- (id)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;	// IMP=0x00000000000e99a4
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;	// IMP=0x00000000000e965c
- (id)_gkExtensionViewController;	// IMP=0x00000000000e95bc
@end

