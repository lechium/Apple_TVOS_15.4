//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertControllerContaining-Protocol.h>
#import <UIKitCore/UIAlertControllerVisualStyleProviding-Protocol.h>
#import <UIKitCore/UIPreviewInteractionControllerDelegate-Protocol.h>
#import <UIKitCore/_UIAlertControllerTextFieldViewControllerContaining-Protocol.h>

@class NSArray, NSAttributedString, NSIndexSet, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSPointerArray, NSSet, NSString, UIAlertAction, UIAlertControllerStackManager, UIAlertControllerVisualStyle, UIGestureRecognizer, UIImage, UIPopoverController, UIPreviewInteractionController, UITapGestureRecognizer, UIView, UIViewController, _UIAlertControllerShimPresenter, _UIAlertControllerTextFieldViewController, _UIAnimationCoordinator;
@protocol UIAlertControllerCoordinatedActionPerforming, UIAlertControllerSystemProvidedPresentationDelegate, UIAlertControllerVisualStyleProviding;

@interface UIAlertController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding>
{
    NSString *_message;	// 400 = 0x190
    NSAttributedString *_attributedTitle;	// 408 = 0x198
    NSAttributedString *_attributedMessage;	// 416 = 0x1a0
    NSAttributedString *_attributedDetailMessage;	// 424 = 0x1a8
    NSSet *_linkedAlertControllers;	// 432 = 0x1b0
    UIAlertAction *_cancelAction;	// 440 = 0x1b8
    NSMutableDictionary *_actionToKeyCommandsDictionary;	// 448 = 0x1c0
    NSMapTable *_keyCommandToActionMapTable;	// 456 = 0x1c8
    long long _resolvedStyle;	// 464 = 0x1d0
    long long _preferredStyle;	// 472 = 0x1d8
    UIViewController *_contentViewController;	// 480 = 0x1e0
    _UIAlertControllerTextFieldViewController *_textFieldViewController;	// 488 = 0x1e8
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;	// 496 = 0x1f0
    id _ownedTransitioningDelegate;	// 504 = 0x1f8
    _Bool _isInSupportedInterfaceOrientations;	// 512 = 0x200
    _Bool _isInRecomputePreferredContentSize;	// 513 = 0x201
    long long _batchActionChangesInProgressCount;	// 520 = 0x208
    _UIAlertControllerShimPresenter *_presenter;	// 528 = 0x210
    NSPointerArray *_actionsWithInvokedHandlers;	// 536 = 0x218
    UIAlertControllerStackManager *_alertControllerStackManager;	// 544 = 0x220
    UIImage *_image;	// 552 = 0x228
    _Bool dismissedFromShim;	// 560 = 0x230
    _Bool _hidden;	// 561 = 0x231
    _Bool __shouldFlipFrameForShimDismissal;	// 562 = 0x232
    _Bool __shouldAllowNilParameters;	// 563 = 0x233
    _Bool _hasPreservedInputViews;	// 564 = 0x234
    _Bool __shouldAlignToKeyboard;	// 565 = 0x235
    NSMutableArray *_actions;	// 568 = 0x238
    UIViewController *_headerContentViewController;	// 576 = 0x240
    UIViewController *_separatedHeaderContentViewController;	// 584 = 0x248
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;	// 592 = 0x250
    UIAlertAction *_preferredAction;	// 600 = 0x258
    _UIAnimationCoordinator *_temporaryAnimationCoordinator;	// 608 = 0x260
    UIPreviewInteractionController *_previewInteractionController;	// 616 = 0x268
    UIAlertControllerVisualStyle *__visualStyle;	// 624 = 0x270
    NSIndexSet *_indexesOfActionSectionSeparators;	// 632 = 0x278
    NSMutableArray *__actionDelimiterIndices;	// 640 = 0x280
    UIPopoverController *__compatibilityPopoverController;	// 648 = 0x288
    UIView *__systemProvidedPresentationView;	// 656 = 0x290
    id <UIAlertControllerSystemProvidedPresentationDelegate> __systemProvidedPresentationDelegate;	// 664 = 0x298
    UIGestureRecognizer *_systemProvidedGestureRecognizer;	// 672 = 0x2a0
    id <UIAlertControllerCoordinatedActionPerforming> _coordinatedActionPerformingDelegate;	// 680 = 0x2a8
    UIView *__presentationSourceRepresentationView;	// 688 = 0x2b0
    long long _titleMaximumLineCount;	// 696 = 0x2b8
    long long _titleLineBreakMode;	// 704 = 0x2c0
    UIImage *_accessoryImage;	// 712 = 0x2c8
}

+ (id)_alertControllerContainedInViewController:(id)arg1;	// IMP=0x00000000000619b6
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000000005b7b6
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;	// IMP=0x000000000005b4bc
+ (_Bool)_allowInteractiveSheetDismissal;	// IMP=0x000000000005b2a3
+ (_Bool)_shouldUsePresentationController;	// IMP=0x000000000005b299
- (void).cxx_destruct;	// IMP=0x00000000000630dd
@property(nonatomic, setter=_setShouldAlignToKeyboard:) _Bool _shouldAlignToKeyboard; // @synthesize _shouldAlignToKeyboard=__shouldAlignToKeyboard;
@property(copy, nonatomic, getter=_accessoryImage, setter=_setAccessoryImage:) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(nonatomic, getter=_titleLineBreakMode, setter=_setTitleLineBreakMode:) long long titleLineBreakMode; // @synthesize titleLineBreakMode=_titleLineBreakMode;
@property(nonatomic, getter=_titleMaximumLineCount, setter=_setTitleMaximumLineCount:) long long titleMaximumLineCount; // @synthesize titleMaximumLineCount=_titleMaximumLineCount;
@property(retain, nonatomic, setter=_setPresentationSourceRepresentationView:) UIView *_presentationSourceRepresentationView; // @synthesize _presentationSourceRepresentationView=__presentationSourceRepresentationView;
@property(nonatomic) __weak id <UIAlertControllerCoordinatedActionPerforming> coordinatedActionPerformingDelegate; // @synthesize coordinatedActionPerformingDelegate=_coordinatedActionPerformingDelegate;
@property(retain, nonatomic, getter=_systemProvidedGestureRecognizer, setter=_setSystemProvidedGestureRecognizer:) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property(retain, nonatomic, setter=_setSystemProvidedPresentationDelegate:) id <UIAlertControllerSystemProvidedPresentationDelegate> _systemProvidedPresentationDelegate; // @synthesize _systemProvidedPresentationDelegate=__systemProvidedPresentationDelegate;
@property(retain, nonatomic, setter=_setSystemProvidedPresentationView:) UIView *_systemProvidedPresentationView; // @synthesize _systemProvidedPresentationView=__systemProvidedPresentationView;
@property(nonatomic, getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:) _Bool hasPreservedInputViews; // @synthesize hasPreservedInputViews=_hasPreservedInputViews;
@property(nonatomic, setter=_setCompatibilityPopoverController:) UIPopoverController *_compatibilityPopoverController; // @synthesize _compatibilityPopoverController=__compatibilityPopoverController;
@property(setter=_setShouldAllowNilParameters:) _Bool _shouldAllowNilParameters; // @synthesize _shouldAllowNilParameters=__shouldAllowNilParameters;
@property(readonly) NSMutableArray *_actionDelimiterIndices; // @synthesize _actionDelimiterIndices=__actionDelimiterIndices;
@property(copy, nonatomic, getter=_indexesOfActionSectionSeparators, setter=_setIndexesOfActionSectionSeparators:) NSIndexSet *indexesOfActionSectionSeparators; // @synthesize indexesOfActionSectionSeparators=_indexesOfActionSectionSeparators;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle; // @synthesize _visualStyle=__visualStyle;
@property(retain, nonatomic, getter=_previewInteractionController, setter=_setPreviewInteractionController:) UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property(retain, nonatomic) _UIAnimationCoordinator *temporaryAnimationCoordinator; // @synthesize temporaryAnimationCoordinator=_temporaryAnimationCoordinator;
@property _Bool _shouldFlipFrameForShimDismissal; // @synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal;
@property(retain, nonatomic) UIAlertAction *preferredAction; // @synthesize preferredAction=_preferredAction;
@property(nonatomic, getter=_isHidden, setter=_setHidden:) _Bool _hidden; // @synthesize _hidden;
@property(nonatomic, getter=_styleProvider, setter=_setStyleProvider:) __weak NSObject<UIAlertControllerVisualStyleProviding> *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly) long long _resolvedStyle; // @synthesize _resolvedStyle;
@property(nonatomic, getter=_dismissedFromShim, setter=_setDismissedFromShim:) _Bool dismissedFromShim; // @synthesize dismissedFromShim;
@property(retain, nonatomic, setter=_setSeparatedHeaderContentViewController:) UIViewController *_separatedHeaderContentViewController; // @synthesize _separatedHeaderContentViewController;
@property(retain, nonatomic, setter=_setHeaderContentViewController:) UIViewController *_headerContentViewController; // @synthesize _headerContentViewController;
@property(readonly) UIAlertAction *_cancelAction; // @synthesize _cancelAction;
@property(readonly) NSMutableArray *_actions; // @synthesize _actions;
- (_Bool)_canBePresentedAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000062cfe
- (_Bool)_isPresented;	// IMP=0x0000000000062cae
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;	// IMP=0x0000000000062ca6
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;	// IMP=0x0000000000062ca0
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;	// IMP=0x0000000000062c2d
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;	// IMP=0x0000000000062ba3
- (id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2;	// IMP=0x0000000000062736
@property(nonatomic, getter=_effectAlpha, setter=_setEffectAlpha:) double effectAlpha;
- (void)_becomeFirstResponderIfAppropriate;	// IMP=0x000000000006257b
- (_Bool)_shouldBecomeFirstResponder;	// IMP=0x000000000006250f
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000624fd
- (void)_restoreInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000000623eb
- (void)_preserveInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000000622d6
- (_Bool)_shouldPreserveInputViews;	// IMP=0x000000000006220e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000062150
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000062054
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000061f8b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000061c52
- (void)_removeAllTextFields;	// IMP=0x0000000000061c35
- (void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1;	// IMP=0x0000000000061c18
- (_Bool)_hasContentToDisplay;	// IMP=0x0000000000061a87
- (id)_containedAlertController;	// IMP=0x00000000000619ad
- (void)_childViewController:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withAnimations:(CDUnknownBlockType)arg3;	// IMP=0x000000000006145e
- (void)_contentViewControllerWillTransitionToSize:(struct CGSize)arg1 withAnimations:(CDUnknownBlockType)arg2;	// IMP=0x00000000000613d7
- (void)_headerContentViewControllerWillTransitionToSize:(struct CGSize)arg1 withAnimations:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061350
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000061257
@property(retain, nonatomic) UIViewController *contentViewController;
- (struct UIEdgeInsets)_contentInsets;	// IMP=0x0000000000060d2c
@property(readonly) UIView *_dimmingView;
@property(readonly) UIView *_foregroundView;
@property(readonly) UIAlertAction *_focusedAction;
- (id)cancelAction;	// IMP=0x0000000000060ba9
- (void)setCancelAction:(id)arg1;	// IMP=0x0000000000060b95
- (_Bool)_shouldTreatEmptyStringsAsNil;	// IMP=0x0000000000060b7e
- (_Bool)_hasDetailMessage;	// IMP=0x0000000000060ae0
- (_Bool)_hasAttributedMessage;	// IMP=0x0000000000060a42
- (_Bool)_hasMessage;	// IMP=0x000000000006099c
- (_Bool)_hasAttributedTitle;	// IMP=0x00000000000608fe
- (_Bool)_hasTitle;	// IMP=0x0000000000060858
@property(copy, nonatomic, getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:) NSAttributedString *_attributedDetailMessage;
@property(copy, nonatomic, getter=_attributedMessage, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property(copy, nonatomic, getter=_attributedTitle, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (_Bool)_shouldFitWidthToContentViewControllerWidth;	// IMP=0x00000000000603ba
- (_Bool)_shouldSizeToFillSuperview;	// IMP=0x0000000000060331
- (id)_alertControllerContainer;	// IMP=0x00000000000602cf
- (_Bool)_viewControllerIsPresentedInModalPresentationContext:(id)arg1;	// IMP=0x000000000006026d
- (_Bool)_allowsShowingDimmingView;	// IMP=0x0000000000060265
- (_Bool)_isPresentedAsPopover;	// IMP=0x000000000006017a
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000060076
- (void)_flipFrameForShimDismissalIfNecessary;	// IMP=0x000000000005ff84
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;	// IMP=0x000000000005fbc0
- (long long)_modalPresentationStyleForResolvedStyle;	// IMP=0x000000000005fba8
- (void)setModalPresentationStyle:(long long)arg1;	// IMP=0x000000000005fb67
- (void)_updateModalPresentationStyle;	// IMP=0x000000000005fb36
- (_Bool)_requiresCustomPresentationController;	// IMP=0x000000000005fb2e
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000005f87c
- (id)linkedAlertControllers;	// IMP=0x000000000005f874
- (void)unlinkAlertController:(id)arg1;	// IMP=0x000000000005f86e
- (void)linkAlertController:(id)arg1;	// IMP=0x000000000005f868
- (void)_postDidBeginSystemProvidedDismissalOfAlertController;	// IMP=0x000000000005f80b
- (void)_postWillBeginSystemProvidedDismissalOfAlertController;	// IMP=0x000000000005f7ae
- (void)_performAction:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f70c
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(_Bool)arg3 dismissCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ef42
- (void)_endNoPresentingViewControllerPresentation;	// IMP=0x000000000005ef21
- (void)_beginNoPresentingViewControllerPresentation;	// IMP=0x000000000005eebd
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2;	// IMP=0x000000000005eea5
- (void)_dismissFromPopoverDimmingView;	// IMP=0x000000000005ee4b
- (void)_dismissWithCancelAction;	// IMP=0x000000000005edfa
- (void)_dismissFromBackButton:(id)arg1;	// IMP=0x000000000005edbe
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;	// IMP=0x000000000005ed6e
- (_Bool)_canDismissWithGestureRecognizer;	// IMP=0x000000000005ed42
- (id)_dismissGestureRecognizer;	// IMP=0x000000000005ed05
- (void)_clearActionHandlers;	// IMP=0x000000000005eb87
- (void)_invokeHandlersForAction:(id)arg1;	// IMP=0x000000000005ea8a
- (void)_dismissWithAction:(id)arg1;	// IMP=0x000000000005ea70
- (void)_dismissWithAction:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ea50
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;	// IMP=0x000000000005e819
- (_Bool)_shouldDismissOnSizeChange;	// IMP=0x000000000005e7d7
@property(readonly) _Bool _shouldProvideDimmingView;
@property(nonatomic) long long preferredStyle;
- (void)_uninstallBackGestureRecognizer;	// IMP=0x000000000005e725
- (void)_installBackGestureRecognizer;	// IMP=0x000000000005e631
- (long long)_buttonTypeForBackGestureForIdiom:(long long)arg1;	// IMP=0x000000000005e61b
- (_Bool)_idiomSupportsBackGesture:(long long)arg1;	// IMP=0x000000000005e60a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005e4d9
- (void)_resolvedStyleChanged;	// IMP=0x000000000005e4ab
- (id)_currentDescriptor;	// IMP=0x000000000005e2c7
- (void)_updateProvidedStyle;	// IMP=0x000000000005e27b
- (void)_updateProvidedStyleWithTraitCollection:(id)arg1;	// IMP=0x000000000005df88
- (void)_reevaluateResolvedStyle;	// IMP=0x000000000005df1f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000005de16
- (void)viewDidLayoutSubviews;	// IMP=0x000000000005dd65
- (void)viewWillLayoutSubviews;	// IMP=0x000000000005dc90
- (void)_recomputePreferredContentSize;	// IMP=0x000000000005dbd2
- (_Bool)_needsPreferredSizeCalculated;	// IMP=0x000000000005db99
- (id)_alertControllerView;	// IMP=0x000000000005db55
- (void)viewDidLoad;	// IMP=0x000000000005d8d9
@property(readonly) _Bool _shouldReverseActions;
- (void)_setShouldReverseActions:(_Bool)arg1;	// IMP=0x000000000005d849
@property(readonly) _Bool _alignsToKeyboard;
- (void)_updateShouldAlignToKeyboard;	// IMP=0x000000000005d665
- (void)loadView;	// IMP=0x000000000005d35d
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x000000000005d038
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;	// IMP=0x000000000005cfb8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000005cd95
- (_Bool)shouldAutorotate;	// IMP=0x000000000005cd81
- (void)dealloc;	// IMP=0x000000000005cb2b
@property(readonly, copy) NSString *description;
- (void)setTextFieldsCanBecomeFirstResponder:(_Bool)arg1;	// IMP=0x000000000005ca16
- (void)_didParentTextFieldViewController;	// IMP=0x000000000005c9d0
- (void)_willParentTextFieldViewController;	// IMP=0x000000000005c9b0
- (id)_textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;	// IMP=0x000000000005c927
- (void)_returnKeyPressedInLastTextField;	// IMP=0x000000000005c915
- (_Bool)_shouldSupportReturnKeyPresses;	// IMP=0x000000000005c8cc
@property(readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property(readonly, nonatomic) NSArray *textFields;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c75e
- (id)_actionForReturnKey;	// IMP=0x000000000005c559
@property(retain, nonatomic, setter=_setActions:) NSArray *actions;
- (void)_addReturnKeyCommandIfAppropriate;	// IMP=0x000000000005c47b
- (id)_returnKeyCommand;	// IMP=0x000000000005c452
- (void)_handleReturn;	// IMP=0x000000000005c406
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000005c38c
- (void)_handleKeyCommand:(id)arg1;	// IMP=0x000000000005c31c
- (id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3;	// IMP=0x000000000005c1f7
- (void)_removeKeyCommandForAction:(id)arg1;	// IMP=0x000000000005c13d
- (void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3;	// IMP=0x000000000005c094
- (void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3;	// IMP=0x000000000005c016
- (void)_addSectionDelimiter;	// IMP=0x000000000005beee
- (void)_removeAllActions;	// IMP=0x000000000005bd7f
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bc43
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b988
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 shouldDismissHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b8c4
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b82d
- (void)addAction:(id)arg1;	// IMP=0x000000000005b5e3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000005b2ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

