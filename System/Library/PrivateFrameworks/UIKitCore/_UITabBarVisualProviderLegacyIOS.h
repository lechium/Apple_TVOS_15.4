//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>

@class NSString, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS <_UIBarAppearanceChangeObserver>
{
    _UIBarBackground *_backgroundView;	// 24 = 0x18
    _UIBarBackgroundLayout *_backgroundViewLayout;	// 32 = 0x20
    UIView *_customBackgroundView;	// 40 = 0x28
    UIView *_accessoryView;	// 48 = 0x30
    double _minimumWidthForHorizontalLayout;	// 56 = 0x38
    _Bool _useModernAppearance;	// 64 = 0x40
    long long _style;	// 72 = 0x48
    double _backgroundTransitionProgress;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001f0bc9
- (double)backgroundTransitionProgress;	// IMP=0x00000000001f0bb7
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000001f082d
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;	// IMP=0x00000000001f081b
- (id)_focusedItemHighlightView;	// IMP=0x00000000001f0813
- (double)_shim_heightForCustomizingItems;	// IMP=0x00000000001f07e8
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x00000000001f06cf
- (void)_shim_layoutItemsOnly;	// IMP=0x00000000001f06bd
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x00000000001f064b
- (_Bool)_shim_shadowHidden;	// IMP=0x00000000001f062e
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x00000000001f05b5
- (double)_shim_shadowAlpha;	// IMP=0x00000000001f0598
- (id)_shim_accessoryView;	// IMP=0x00000000001f0583
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x00000000001f04f3
- (id)_shim_compatibilityBackgroundView;	// IMP=0x00000000001f04cb
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x00000000001f046a
- (id)preferredFocusedView;	// IMP=0x00000000001f03ec
- (id)_preferredFocusedViewiOS;	// IMP=0x00000000001f036e
- (id)_preferredFocusedViewCarplay;	// IMP=0x00000000001f014b
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000001efe7e
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;	// IMP=0x00000000001efc97
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001efc06
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000001efb94
- (void)setBackgroundTransitionProgress:(double)arg1;	// IMP=0x00000000001efb80
- (void)layoutSubviews;	// IMP=0x00000000001efafc
- (void)updateBackgroundGroupName;	// IMP=0x00000000001efaa9
- (void)_updateBackground;	// IMP=0x00000000001ef78c
- (void)_updateBackgroundModern;	// IMP=0x00000000001ef608
- (void)_updateBackgroundLegacy;	// IMP=0x00000000001ef2ad
- (void)_layoutTabBarItems;	// IMP=0x00000000001ee4c9
- (long long)_styleForTraitCollection:(id)arg1;	// IMP=0x00000000001ee2d5
- (void)_configureItems:(id)arg1;	// IMP=0x00000000001ee000
- (void)_updateAccessoryView;	// IMP=0x00000000001edf29
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;	// IMP=0x00000000001eded8
- (struct CGRect)_layoutRegion;	// IMP=0x00000000001eddf8
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x00000000001edd20
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000001edaf6
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x00000000001ed623
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;	// IMP=0x00000000001ed5f2
- (double)minimumWidthForHorizontalLayout;	// IMP=0x00000000001ed5e0
- (id)appearanceObserver;	// IMP=0x00000000001ed5d7
- (void)setUseModernAppearance:(_Bool)arg1;	// IMP=0x00000000001ed4fd
- (_Bool)useModernAppearance;	// IMP=0x00000000001ed4ed
- (void)changeLayout;	// IMP=0x00000000001ed4d7
- (void)changeAppearance;	// IMP=0x00000000001ed4c1
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x00000000001ed42f
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000001ed1a6
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x00000000001ed0e7
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x00000000001ec696
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x00000000001ebf43
- (void)teardown;	// IMP=0x00000000001ebe61
- (void)prepare;	// IMP=0x00000000001ebc23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

