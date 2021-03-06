//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>

@class CABackdropLayer, CAGradientLayer, NSString, UIInterpolatingMotionEffect, UIScrollView, UITabBarButton, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderTVOS <UIScrollViewDelegate, _UIBarAppearanceChangeObserver>
{
    _Bool _useModernAppearance;	// 24 = 0x18
    _UIBarBackground *_backgroundView;	// 32 = 0x20
    _UIBarBackgroundLayout *_backgroundViewLayout;	// 40 = 0x28
    UIView *_customBackgroundView;	// 48 = 0x30
    UIScrollView *_itemsScrollView;	// 56 = 0x38
    UIView *_itemsScrollContainerView;	// 64 = 0x40
    CAGradientLayer *_scrollViewMask;	// 72 = 0x48
    CABackdropLayer *_maskBackdropLayer;	// 80 = 0x50
    UIView *_selectionPlatterContainerView;	// 88 = 0x58
    UIView *_selectionPlatterView;	// 96 = 0x60
    UIInterpolatingMotionEffect *_motionEffect;	// 104 = 0x68
    UITabBarButton *_prevSelectedButton;	// 112 = 0x70
    _Bool _shouldAnimateSelectionPlatterInPlace;	// 120 = 0x78
    _Bool _prevFocused;	// 121 = 0x79
    _Bool _deferViewUpdateToFocusUpdate;	// 122 = 0x7a
    _Bool _focused;	// 123 = 0x7b
    UITabBarButton *_selectedButton;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000e387f2
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) __weak UITabBarButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) _Bool deferViewUpdateToFocusUpdate; // @synthesize deferViewUpdateToFocusUpdate=_deferViewUpdateToFocusUpdate;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;	// IMP=0x0000000000e38797
- (void)_updateFocusForSnapshotDidEnd:(id)arg1;	// IMP=0x0000000000e3877a
- (struct CGRect)__getRectForPlatterForView:(id)arg1 withFocus:(_Bool)arg2 finalSize:(_Bool)arg3;	// IMP=0x0000000000e37fea
- (struct CGRect)_getRectForFocusedSelectionPlatterForView:(id)arg1 finalSize:(_Bool)arg2;	// IMP=0x0000000000e37fc2
- (struct CGRect)_getRectForUnfocusedSelectionPlatterForView:(id)arg1;	// IMP=0x0000000000e37f9d
- (void)_updatePlatterRectWithSelectedItem:(id)arg1;	// IMP=0x0000000000e37da7
- (void)_updateScrollContainerMaskIfNeeded;	// IMP=0x0000000000e37511
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000e36fef
- (void)_updateMotionEffect;	// IMP=0x0000000000e36cce
- (void)_updateColorsWithTitleAnimationDuration:(double)arg1 withDelay:(double)arg2;	// IMP=0x0000000000e36a65
- (void)_updateColors;	// IMP=0x0000000000e36a4d
- (void)_updateScrollOffset;	// IMP=0x0000000000e364ec
- (void)_updateViewsInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000e35192
- (void)_updateViews;	// IMP=0x0000000000e3517c
- (void)_updateBackground;	// IMP=0x0000000000e34f94
- (void)_updateBackgroundModern;	// IMP=0x0000000000e34e01
- (void)_updateBackgroundLegacy;	// IMP=0x0000000000e34aed
- (void)_updateAccessoryViews;	// IMP=0x0000000000e345fc
- (void)_layoutTabBarItems;	// IMP=0x0000000000e33908
- (void)_configureItems:(id)arg1;	// IMP=0x0000000000e33642
- (id)_createViewForTabBarItem:(id)arg1;	// IMP=0x0000000000e33229
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x0000000000e33109
- (void)_shim_layoutItemsOnly;	// IMP=0x0000000000e330db
- (void)_shim_updateFocusHighlightVisibility;	// IMP=0x0000000000e330d5
- (double)_shim_shadowAlpha;	// IMP=0x0000000000e330b8
- (id)_shim_accessoryView;	// IMP=0x0000000000e330b0
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x0000000000e330aa
- (id)_shim_compatibilityBackgroundView;	// IMP=0x0000000000e33082
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x0000000000e33021
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000e32f83
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000e32bce
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000e32847
- (id)preferredFocusedView;	// IMP=0x0000000000e32787
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000e324ba
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e32415
- (void)layoutSubviews;	// IMP=0x0000000000e323b3
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x0000000000e322d7
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x0000000000e3208d
- (id)appearanceObserver;	// IMP=0x0000000000e32085
- (void)setUseModernAppearance:(_Bool)arg1;	// IMP=0x0000000000e31fab
- (_Bool)useModernAppearance;	// IMP=0x0000000000e31f9b
- (void)updateBackgroundGroupName;	// IMP=0x0000000000e31f48
- (void)changeLayout;	// IMP=0x0000000000e31f32
- (void)changeAppearance;	// IMP=0x0000000000e31e59
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x0000000000e31d91
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000000e31af3
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x0000000000e31a34
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x0000000000e30ee8
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x0000000000e30915
- (void)teardown;	// IMP=0x0000000000e307fe
- (void)prepare;	// IMP=0x0000000000e304c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

