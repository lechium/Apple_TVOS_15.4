//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIImage, UIView, _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView, _UIFloatingContentCornerRadiusAnimatingView, _UIFloatingContentTransformView, _UIFloatingMotionConfiguration, _UIFocusAnimationConfiguration;
@protocol _UIFloatingContentViewDelegate;

@interface _UIFloatingContentView
{
    id <_UIFloatingContentViewDelegate> _floatingContentViewDelegate;	// 112 = 0x70
    _UIFloatingContentTransformView *_transformView;	// 120 = 0x78
    _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView *_containerView;	// 128 = 0x80
    _UIFloatingContentCornerRadiusAnimatingView *_highlightView;	// 136 = 0x88
    _UIFloatingContentCornerRadiusAnimatingView *_visualEffectContainerView;	// 144 = 0x90
    UIView *_shadowView;	// 152 = 0x98
    UIView *_contentView;	// 160 = 0xa0
    UIView *_highContrastFocusIndicatorView;	// 168 = 0xa8
    double _highContrastFocusIndicatorCornerRadius;	// 176 = 0xb0
    struct CGPoint _highContrastFocusIndicatorOutset;	// 184 = 0xb8
    struct __CFDictionary *_backgroundColorsByState;	// 200 = 0xc8
    NSMutableArray *_contentMotionEffects;	// 208 = 0xd0
    double _shadowOpacityLight;	// 216 = 0xd8
    double _shadowOpacityDark;	// 224 = 0xe0
    struct CGPoint _focusDirection;	// 232 = 0xe8
    struct CGPoint _contentRotation;	// 248 = 0xf8
    struct CGPoint _contentTranslation;	// 264 = 0x108
    _Bool _customScale;	// 280 = 0x118
    _Bool _symmetricScale;	// 281 = 0x119
    _Bool _stretchableShadowImage;	// 282 = 0x11a
    _Bool _useShadowImage;	// 283 = 0x11b
    _Bool _shadowEnabled;	// 284 = 0x11c
    _Bool _contentOpaque;	// 285 = 0x11d
    _Bool _scalesBackwards;	// 286 = 0x11e
    _Bool _roundContentWhenDeselected;	// 287 = 0x11f
    _Bool __disableOutsetShadowPath;	// 288 = 0x120
    _Bool _showsHighContrastFocusIndicator;	// 289 = 0x121
    double _cornerRadius;	// 296 = 0x128
    double _visualEffectContainerViewScaleFactor;	// 304 = 0x130
    _UIFocusAnimationConfiguration *_focusAnimationConfiguration;	// 312 = 0x138
    double _shadowRadius;	// 320 = 0x140
    double _shadowVerticalOffset;	// 328 = 0x148
    double _unfocusedShadowRadius;	// 336 = 0x150
    double _unfocusedShadowOpacity;	// 344 = 0x158
    double _unfocusedShadowVerticalOffset;	// 352 = 0x160
    UIImage *_shadowImage;	// 360 = 0x168
    unsigned long long _controlState;	// 368 = 0x170
    _UIFloatingMotionConfiguration *_contentMotion;	// 376 = 0x178
    long long _highlightStyle;	// 384 = 0x180
    NSString *_cornerCurve;	// 392 = 0x188
    CDUnknownBlockType _focusAnimationConfigurationHandler;	// 400 = 0x190
    struct CGPoint _focusScaleAnchorPoint;	// 408 = 0x198
    struct CGSize _shadowSize;	// 424 = 0x1a8
    struct CGSize _unfocusedShadowExpansion;	// 440 = 0x1b8
    struct CGSize _shadowExpansion;	// 456 = 0x1c8
    struct CGSize _asymmetricScaleFactor;	// 472 = 0x1d8
    struct CGSize _asymmetricFocusedSizeIncrease;	// 488 = 0x1e8
    struct CGRect _shadowContentsCenter;	// 504 = 0x1f8
}

+ (id)_defaultFocusAnimationConfiguration;	// IMP=0x00000000000f1fb3
- (void).cxx_destruct;	// IMP=0x00000000000f5fc6
@property(copy, nonatomic) CDUnknownBlockType focusAnimationConfigurationHandler; // @synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler;
@property(nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(nonatomic) struct CGPoint highContrastFocusIndicatorOutset; // @synthesize highContrastFocusIndicatorOutset=_highContrastFocusIndicatorOutset;
@property(nonatomic) double highContrastFocusIndicatorCornerRadius; // @synthesize highContrastFocusIndicatorCornerRadius=_highContrastFocusIndicatorCornerRadius;
@property(nonatomic) _Bool showsHighContrastFocusIndicator; // @synthesize showsHighContrastFocusIndicator=_showsHighContrastFocusIndicator;
@property(nonatomic) _Bool _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) struct CGSize asymmetricFocusedSizeIncrease; // @synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease;
@property(nonatomic) struct CGSize asymmetricScaleFactor; // @synthesize asymmetricScaleFactor=_asymmetricScaleFactor;
@property(nonatomic) _Bool roundContentWhenDeselected; // @synthesize roundContentWhenDeselected=_roundContentWhenDeselected;
@property(nonatomic) _Bool scalesBackwards; // @synthesize scalesBackwards=_scalesBackwards;
@property(nonatomic, getter=isContentOpaque) _Bool contentOpaque; // @synthesize contentOpaque=_contentOpaque;
@property(nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(retain, nonatomic) _UIFloatingMotionConfiguration *contentMotion; // @synthesize contentMotion=_contentMotion;
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(nonatomic) struct CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) struct CGSize shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) struct CGSize unfocusedShadowExpansion; // @synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion;
@property(nonatomic) double unfocusedShadowVerticalOffset; // @synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset;
@property(nonatomic) double unfocusedShadowOpacity; // @synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity;
@property(nonatomic) double unfocusedShadowRadius; // @synthesize unfocusedShadowRadius=_unfocusedShadowRadius;
@property(nonatomic) double shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
@property(nonatomic) _Bool useShadowImage; // @synthesize useShadowImage=_useShadowImage;
@property(copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration; // @synthesize focusAnimationConfiguration=_focusAnimationConfiguration;
@property(nonatomic) double visualEffectContainerViewScaleFactor; // @synthesize visualEffectContainerViewScaleFactor=_visualEffectContainerViewScaleFactor;
@property(nonatomic) struct CGPoint focusScaleAnchorPoint; // @synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)_updateFocusedFrameGuideConstraintsIfApplicable;	// IMP=0x00000000000f59aa
- (id)_focusedFrameGuideCreateIfNecessary:(_Bool)arg1;	// IMP=0x00000000000f56ee
- (id)_focusedFrameGuide;	// IMP=0x00000000000f56d7
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000000f56c5
- (void)_setShadowImageIfNeeded;	// IMP=0x00000000000f5599
- (void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f5374
- (void)_updateHighContrastFocusIndicatorForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f532b
- (void)_updateTransformForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f45e8
- (void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f4594
- (void)_updateContainerLayerQualityForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f44a6
- (void)_updateScaleFactor;	// IMP=0x00000000000f4378
@property(nonatomic) double focusedSizeIncrease;
@property(nonatomic) double scaleFactor;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000f4250
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000f41fe
- (double)_currentShadowOpacity;	// IMP=0x00000000000f40b4
- (double)shadowOpacityForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000f4085
- (void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2;	// IMP=0x00000000000f3fde
@property(nonatomic) double shadowOpacity;
- (void)_updateShadowLayer;	// IMP=0x00000000000f3b52
- (void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f39df
- (double)_effectiveShadowOpacity;	// IMP=0x00000000000f397b
- (double)_effectiveShadowRadius;	// IMP=0x00000000000f390e
- (void)_updateHighContrastFocusIndicatorView;	// IMP=0x00000000000f368a
@property(nonatomic) _Bool clipsContentToBounds;
- (void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000f30b2
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000f30a0
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f2fe8
- (void)_layoutHighContrastFocusIndicator;	// IMP=0x00000000000f2e5a
- (void)_layoutShadow;	// IMP=0x00000000000f291b
- (void)layoutSubviews;	// IMP=0x00000000000f26a3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000f25fa
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;	// IMP=0x00000000000f2312
- (void)setShadowImage:(id)arg1 stretchable:(_Bool)arg2;	// IMP=0x00000000000f21d3
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000f20c8
- (id)backgroundColorForState:(unsigned long long)arg1;	// IMP=0x00000000000f2023
- (void)_updateCornerRadiusLayers;	// IMP=0x00000000000f1cf6
@property(nonatomic, getter=isContinuousCornerEnabled) _Bool continuousCornerEnabled;
- (id)transformView;	// IMP=0x00000000000f1c48
- (id)highlightView;	// IMP=0x00000000000f1c33
@property(readonly, nonatomic) UIView *visualEffectContainerView;
@property(readonly, nonatomic) UIView *contentView;
- (_Bool)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f1969
- (_Bool)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1;	// IMP=0x00000000000f1949
- (unsigned long long)_primaryStateForState:(unsigned long long)arg1;	// IMP=0x00000000000f1930
- (void)_uninstallContentMotionEffects;	// IMP=0x00000000000f1772
- (void)_installContentMotionEffects;	// IMP=0x00000000000f15b4
- (void)removeContentMotionEffect:(id)arg1;	// IMP=0x00000000000f1597
- (void)addContentMotionEffect:(id)arg1;	// IMP=0x00000000000f152d
- (void)setContentMotionRotation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x00000000000f14af
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x00000000000f116e
@property(nonatomic) __weak id <_UIFloatingContentViewDelegate> floatingContentDelegate;
- (void)dealloc;	// IMP=0x00000000000f10aa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f0a84

@end

