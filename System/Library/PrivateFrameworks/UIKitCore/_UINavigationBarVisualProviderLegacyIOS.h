//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UINavigationBarGestureHandlerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIFocusContainerGuide, UIImageView, UILayoutGuide, UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy, _UINavBarPrompt, _UINavigationBarGestureHandler, _UINavigationBarLegacyContentView;
@protocol UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProviderLegacyIOS <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate>
{
    _UIBarBackground *_backgroundView;	// 40 = 0x28
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;	// 48 = 0x30
    UIView *_customBackgroundView;	// 56 = 0x38
    UIView *_currentCanvasView;	// 64 = 0x40
    UIView *_titleView;	// 72 = 0x48
    NSArray *_leftViews;	// 80 = 0x50
    NSArray *_rightViews;	// 88 = 0x58
    UIImageView *_backIndicatorView;	// 96 = 0x60
    _UINavBarPrompt *_prompt;	// 104 = 0x68
    _UINavigationBarGestureHandler *_gestureHandler;	// 112 = 0x70
    NSMutableArray *_slideTransitionClippingViews;	// 120 = 0x78
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;	// 128 = 0x80
    _UINavigationBarLegacyContentView *_layoutView;	// 136 = 0x88
    UIView *_contentView;	// 144 = 0x90
    UILayoutGuide *_userContentGuide;	// 152 = 0x98
    NSLayoutConstraint *_userContentGuideLeading;	// 160 = 0xa0
    NSLayoutConstraint *_userContentGuideTrailing;	// 168 = 0xa8
    UIFocusContainerGuide *_contentFocusContainerGuide;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000169ade
- (_Bool)_shim_34415965;	// IMP=0x0000000000169ad6
- (void)_shim_30244716;	// IMP=0x0000000000169ab0
- (void)_shim_updateBackgroundViewIgnoringFlag;	// IMP=0x0000000000169a5e
- (_Bool)_shim_throwConstraintExceptions;	// IMP=0x0000000000169a48
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;	// IMP=0x00000000001699fa
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000016986d
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001697bf
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000169626
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000169578
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000169508
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000016915c
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000168e54
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000168bad
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000168901
- (id)_navigationItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000168707
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;	// IMP=0x00000000001686f7
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;	// IMP=0x0000000000167be7
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x0000000000167b19
- (id)_shim_backIndicatorView;	// IMP=0x0000000000167b04
- (void)_shim_updateBackIndicator;	// IMP=0x0000000000167af2
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000167507
- (id)_shim_promptText;	// IMP=0x00000000001674ea
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;	// IMP=0x0000000000167379
- (id)_shim_userContentGuide;	// IMP=0x0000000000166feb
- (long long)_shim_backdropStyle;	// IMP=0x0000000000166f40
- (double)_shim_backgroundHeight;	// IMP=0x0000000000166ef8
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;	// IMP=0x0000000000166ebf
- (_Bool)_shim_disableBlurTinting;	// IMP=0x0000000000166ea2
- (void)_shim_setUseContentView:(_Bool)arg1;	// IMP=0x0000000000166dab
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x0000000000166d8e
- (double)_shim_shadowAlpha;	// IMP=0x0000000000166d71
- (id)_shim_compatibilityBackgroundView;	// IMP=0x0000000000166d49
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x0000000000166ce8
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;	// IMP=0x0000000000166b4d
- (id)_shim_layoutView;	// IMP=0x0000000000166b38
- (id)_shim_contentView;	// IMP=0x0000000000166b23
- (void)_setUpContentFocusContainerGuide;	// IMP=0x0000000000166835
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;	// IMP=0x0000000000166609
- (void)updateBackgroundGroupName;	// IMP=0x00000000001665b6
- (void)_updateBackground;	// IMP=0x0000000000165c61
- (void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6;	// IMP=0x00000000001657f1
- (void)_setViewsAnimated:(_Bool)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4;	// IMP=0x0000000000162470
- (void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000161877
- (void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000015f624
- (void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000015d2c4
- (void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(_Bool)arg3 transitionAssistant:(id)arg4;	// IMP=0x000000000015d199
- (_Bool)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x000000000015cd7b
- (_Bool)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x000000000015cb4e
- (_Bool)_supportsCanvasView;	// IMP=0x000000000015cb30
- (struct CGRect)_contentViewFrameInBounds:(struct CGRect)arg1 style:(id)arg2;	// IMP=0x000000000015ca8d
- (struct CGRect)_frameForCanvasView:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x000000000015ca2c
- (void)_updateBackIndicatorViewTintColor;	// IMP=0x000000000015c7d4
- (void)_updateBackIndicatorImage;	// IMP=0x000000000015c4ab
- (id)_effectiveBackIndicatorTransitionMaskImage;	// IMP=0x000000000015c3c8
- (id)_effectiveBackIndicatorImage;	// IMP=0x000000000015c2e5
- (_Bool)_suppressBackIndicator;	// IMP=0x000000000015c25e
- (double)_backIndicatorClippingMargin;	// IMP=0x000000000015c239
- (double)_effectiveBackIndicatorLeftMargin;	// IMP=0x000000000015c0d2
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;	// IMP=0x000000000015b97d
- (unsigned long long)_subviewIndexAboveBackground;	// IMP=0x000000000015b8c4
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;	// IMP=0x000000000015b72f
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5;	// IMP=0x000000000015b35d
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double *)arg6 availableLayoutWidthForTextContent:(double *)arg7 idealBackButtonWidth:(double *)arg8;	// IMP=0x0000000000156baf
- (void)_getLeftMargin:(double *)arg1 rightMargin:(double *)arg2 forNavigationItem:(id)arg3 showingBackButton:(_Bool)arg4 visualStyle:(id)arg5;	// IMP=0x00000000001569c8
- (id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3;	// IMP=0x0000000000156681
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;	// IMP=0x00000000001565e6
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;	// IMP=0x00000000001565de
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001561f0
- (void)setupTopNavigationItem;	// IMP=0x0000000000155f27
- (void)updateTopNavigationItemTitleView;	// IMP=0x0000000000155df2
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;	// IMP=0x0000000000155d4c
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000155884
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000155501
- (void)prepareForPop;	// IMP=0x000000000015547e
- (void)prepareForPush;	// IMP=0x000000000015525e
- (void)layoutSubviews;	// IMP=0x0000000000155143
- (void)_layoutInBounds:(struct CGRect)arg1 withVisualStyle:(id)arg2;	// IMP=0x000000000015402f
- (void)_layoutSubviewsFromContentView;	// IMP=0x0000000000153e94
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x0000000000153e49
- (void)barSizeChanged;	// IMP=0x0000000000153dfe
- (_Bool)shouldUseHeightRangeFittingWidth;	// IMP=0x0000000000153df6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000153cc9
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000153b91
- (struct CGSize)_preferredContentSizeForItem:(id)arg1;	// IMP=0x0000000000153a61
- (struct CGPoint)frameOriginForStatusBarLocatedAt:(struct CGPoint)arg1;	// IMP=0x0000000000153a34
- (_Bool)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000153a22
- (void)gestureHandler:(id)arg1 recognizedPopAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000153a10
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;	// IMP=0x000000000015393a
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x000000000015385e
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000001537c4
- (id)preferredFocusedView;	// IMP=0x0000000000153747
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001536ae
- (long long)statusBarStyle;	// IMP=0x0000000000153635
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000015334b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015326d
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x0000000000152f84
- (void)changeAppearance;	// IMP=0x0000000000152f14
- (void)teardown;	// IMP=0x0000000000152e77
- (void)prepare;	// IMP=0x0000000000152d21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
