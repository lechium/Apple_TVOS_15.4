//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVibrancyEffect, UIView, UIVisualEffectView, _UIBadgeView, _UITabBarItemData;

__attribute__((visibility("hidden")))
@interface UITabBarButton
{
    struct CGRect _hitRect;	// 112 = 0x70
    UITabBarSwappableImageView *_imageView;	// 144 = 0x90
    UIVisualEffectView *_vibrancyEffectView;	// 152 = 0x98
    UITabBarButtonLabel *_label;	// 160 = 0xa0
    _UIBadgeView *_badge;	// 168 = 0xa8
    UIImageView *_selectedIndicator;	// 176 = 0xb0
    struct UIEdgeInsets _imageInsets;	// 184 = 0xb8
    struct UIEdgeInsets _imageLandscapeInsets;	// 216 = 0xd8
    UIImage *_customSelectedIndicatorImage;	// 248 = 0xf8
    struct UIOffset _labelOffset;	// 256 = 0x100
    NSMutableDictionary *_buttonTintColorsForState;	// 272 = 0x110
    NSMutableDictionary *_contentTintColorsForState;	// 280 = 0x118
    UIColor *_defaultUnselectedLabelTintColor;	// 288 = 0x120
    UIColor *_badgeColor;	// 296 = 0x128
    NSMutableDictionary *_badgeTextAttributesForState;	// 304 = 0x130
    struct UIOffset _badgeOffset;	// 312 = 0x138
    UIView *_highContrastFocusIndicator;	// 328 = 0x148
    _Bool _selected;	// 336 = 0x150
    _Bool _showsHighlightedState;	// 337 = 0x151
    UIView *_focusView;	// 344 = 0x158
    Class _appearanceGuideClass;	// 352 = 0x160
    long long _layoutStyle;	// 360 = 0x168
    _UITabBarItemData *_itemAppearanceData;	// 368 = 0x170
    UIVibrancyEffect *_itemVibrantEffect;	// 376 = 0x178
    UITabBar *_tabBar;	// 384 = 0x180
    NSArray *_carplayConstraints;	// 392 = 0x188
}

+ (id)_defaultLabelColor;	// IMP=0x00000000001f3b99
- (void).cxx_destruct;	// IMP=0x00000000001fa430
@property(retain, nonatomic) NSArray *carplayConstraints; // @synthesize carplayConstraints=_carplayConstraints;
@property(readonly, nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) UIVibrancyEffect *itemVibrantEffect; // @synthesize itemVibrantEffect=_itemVibrantEffect;
@property(retain, nonatomic) _UITabBarItemData *itemAppearanceData; // @synthesize itemAppearanceData=_itemAppearanceData;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
- (void)set_info:(id)arg1;	// IMP=0x00000000001fa381
- (id)_info;	// IMP=0x00000000001fa361
@property(readonly, nonatomic) UIColor *_defaultUnselectedLabelTintColor;
- (id)_contentTintColorForState:(unsigned long long)arg1;	// IMP=0x00000000001fa2bb
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001fa126
- (id)_buttonTintColorForState:(unsigned long long)arg1;	// IMP=0x00000000001fa0b8
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f9f48
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x00000000001f9e0d
- (struct UIOffset)_titlePositionAdjustment;	// IMP=0x00000000001f9df5
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000001f9de3
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000001f9da2
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f9d9c
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f9d96
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f9d84
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f9c21
- (void)_setBadgeColor:(id)arg1;	// IMP=0x00000000001f9c0f
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x00000000001f9bac
- (_Bool)labelShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000001f9aa2
- (_Bool)iconShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000001f995b
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000001f9930
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x00000000001f97a2
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x00000000001f975a
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000001f9678
- (_Bool)isDefaultColor:(id)arg1 forState:(long long)arg2;	// IMP=0x00000000001f95cf
- (id)iconColorForState:(long long)arg1;	// IMP=0x00000000001f9405
- (long long)defaultCompositingModeForState:(long long)arg1;	// IMP=0x00000000001f935d
- (double)defaultAlphaForState:(long long)arg1;	// IMP=0x00000000001f928f
- (id)defaultColorForState:(long long)arg1;	// IMP=0x00000000001f91b9
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x00000000001f917f
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x00000000001f9097
- (long long)_currentItemState;	// IMP=0x00000000001f9020
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f8f30
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f8e40
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f8d50
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f8c27
- (long long)_focusTouchSensitivityStyle;	// IMP=0x00000000001f8c1c
- (struct CGRect)_responderSelectionRect;	// IMP=0x00000000001f8b71
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;	// IMP=0x00000000001f8ae9
- (id)_tabBar;	// IMP=0x00000000001f8a56
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x00000000001f8a37
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000001f897d
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001f87cf
- (void)_sendFocusAction;	// IMP=0x00000000001f8753
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x00000000001f874b
- (_Bool)canBecomeFocused;	// IMP=0x00000000001f86ec
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000001f86e4
- (void)_setCustomSelectedIndicatorImage:(id)arg1;	// IMP=0x00000000001f8634
- (void)layoutSubviews;	// IMP=0x00000000001f82f9
- (void)_ios_layoutSubviews;	// IMP=0x00000000001f7a50
- (void)_showBoundsViewAt:(struct CGRect)arg1 alignmentViewAt:(double)arg2 forSymbolImage:(_Bool)arg3;	// IMP=0x00000000001f75e6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f75d4
- (struct CGSize)_horizontalLayout_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f753e
- (void)_appleTV_layoutSubviews;	// IMP=0x00000000001f717a
@property(readonly, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
- (void)_removeCarplayConstraints;	// IMP=0x00000000001f6f80
- (void)_setupCarplayConstraints;	// IMP=0x00000000001f6582
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f6418
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;	// IMP=0x00000000001f62ec
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x00000000001f6258
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001f622c
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x00000000001f6200
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001f6175
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;	// IMP=0x00000000001f600f
- (void)_setBadgeValue:(id)arg1;	// IMP=0x00000000001f5ed4
- (void)_setBadgeOffset:(struct UIOffset)arg1;	// IMP=0x00000000001f5eb0
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f5df8
- (void)_positionBadge;	// IMP=0x00000000001f5a49
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
- (void)_updateToMatchCurrentState;	// IMP=0x00000000001f55d6
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001f5595
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;	// IMP=0x00000000001f53cc
- (void)_updateSelectedIndicatorFrame;	// IMP=0x00000000001f4e3b
- (void)_updateSelectedIndicatorView;	// IMP=0x00000000001f49d1
- (id)_selectedIndicatorImage;	// IMP=0x00000000001f481f
- (struct CGRect)_tabBarHitRect;	// IMP=0x00000000001f47ff
- (void)_setTabBarHitRect:(struct CGRect)arg1;	// IMP=0x00000000001f47e1
- (void)setImage:(id)arg1;	// IMP=0x00000000001f47cc
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000001f47ba
- (void)_updateVibrancyEffectView;	// IMP=0x00000000001f4615
- (void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;	// IMP=0x00000000001f4465
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001f4306
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000001f4294
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;	// IMP=0x00000000001f423b
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets)arg6 landscapeInsets:(struct UIEdgeInsets)arg7 tabBar:(id)arg8;	// IMP=0x00000000001f3bf6
- (id)_selectedIndicatorView;	// IMP=0x00000000001f3b84
@property(readonly, nonatomic, getter=isDefaultTVLayout) _Bool _defaultTVLayout;
@property(readonly, nonatomic) struct CGRect _contentRect;

@end
