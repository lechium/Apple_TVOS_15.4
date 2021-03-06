//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITabBar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UITabBarVisualProvider : NSObject
{
    UITabBar *_tabBar;	// 8 = 0x8
    NSString *_backdropGroupName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ebb7a
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(readonly, nonatomic) UITabBar *tabBar; // @synthesize tabBar=_tabBar;
- (double)defaultAnimationDuration;	// IMP=0x00000000001ebb58
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001ebb52
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000001ebb4a
- (id)preferredFocusedView;	// IMP=0x00000000001ebb42
- (_Bool)wantsFocus;	// IMP=0x00000000001ebb3a
- (id)defaultTintColor;	// IMP=0x00000000001ebb32
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000001ebb2c
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;	// IMP=0x00000000001ebb16
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001ebb10
- (void)tabBarSizeChanged:(struct CGSize)arg1;	// IMP=0x00000000001ebb0a
- (void)layoutSubviews;	// IMP=0x00000000001ebb04
- (void)updateConstraints;	// IMP=0x00000000001ebafe
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x00000000001ebaf8
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000001ebaf2
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x00000000001ebaea
@property(nonatomic) double minimumWidthForHorizontalLayout;
@property(readonly, nonatomic) id <_UIBarAppearanceChangeObserver> appearanceObserver;
@property(nonatomic) _Bool useModernAppearance;
@property(nonatomic) double backgroundTransitionProgress; // @dynamic backgroundTransitionProgress;
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000001ebab0
- (void)updateBackgroundGroupName;	// IMP=0x00000000001ebaaa
- (void)changeLayout;	// IMP=0x00000000001eb9cb
- (void)changeAppearance;	// IMP=0x00000000001eb9c5
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x00000000001eb9bf
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000001eb9a9
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(_Bool)arg4;	// IMP=0x00000000001eb9a3
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x00000000001eb98c
- (void)teardown;	// IMP=0x00000000001eb97e
- (void)prepare;	// IMP=0x00000000001eb978
- (id)initWithTabBar:(id)arg1;	// IMP=0x00000000001eb93b
- (double)_shim_heightForCustomizingItems;	// IMP=0x00000000001ebbe2
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x00000000001ebbdc
- (void)_shim_layoutItemsOnly;	// IMP=0x00000000001ebbd6
- (void)_shim_updateFocusHighlightVisibility;	// IMP=0x00000000001ebbd0
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x00000000001ebbca
- (_Bool)_shim_shadowHidden;	// IMP=0x00000000001ebbc2
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x00000000001ebbbc
- (double)_shim_shadowAlpha;	// IMP=0x00000000001ebbae
- (id)_shim_shadowView;	// IMP=0x00000000001ebba6
- (id)_shim_accessoryView;	// IMP=0x00000000001ebb9e
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x00000000001ebb98
- (id)_shim_compatibilityBackgroundView;	// IMP=0x00000000001ebb90
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x00000000001ebb8a

@end

