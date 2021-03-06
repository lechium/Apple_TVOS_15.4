//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAccessibilityContentSizeCategoryImageAdjusting-Protocol.h>
#import <UIKitCore/UIAccessibilityContentSizeCategoryImageAdjustingInternal-Protocol.h>
#import <UIKitCore/_UIImageContentEffect-Protocol.h>
#import <UIKitCore/_UIImageContentLayoutTarget-Protocol.h>

@class NSArray, NSString, UIColor, UIImage, UIImageSymbolConfiguration, UILayoutGuide, UITraitCollection, UIView, _UIImageContentLayout, _UIImageLoader, _UIStackedImageContainerView;

@interface UIImageView <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentLayoutTarget, _UIImageContentEffect>
{
    id _storage;	// 112 = 0x70
    _UIImageContentLayout *_pendingImageContentLayout;	// 120 = 0x78
    struct UIEdgeInsets _cachedEdgeInsetsForEffects;	// 128 = 0x80
    UITraitCollection *_lastResolvedTraitCollection;	// 160 = 0xa0
    long long _lastResolvedLayoutDirectionTrait;	// 168 = 0xa8
    double _previousBaselineOffsetFromBottom;	// 176 = 0xb0
    double _previousFirstBaselineOffsetFromTop;	// 184 = 0xb8
    struct {
        unsigned int canDrawContentIsValid:1;
        unsigned int canDrawContent:1;
        unsigned int suppressPixelAlignment:1;
        unsigned int previousPixelAlignment:1;
        unsigned int previousEdgeAntialiasing:1;
        unsigned int actionForLayerForKeyOverridden:1;
    } _imageViewFlags;	// 192 = 0xc0
    struct {
        unsigned int adjustsImageWhenAncestorFocused:1;
        unsigned int masksFocusEffectToContents:1;
    } _focusEffectFlags;	// 196 = 0xc4
    _Bool _templateSettingsAreInvalid;	// 200 = 0xc8
    _Bool _edgeInsetsForEffectsAreValid;	// 201 = 0xc9
    _Bool __symbolImagesIgnoreAccessibilitySizes;	// 202 = 0xca
    _Bool __animatesContents;	// 203 = 0xcb
}

+ (id)_sharedDecodingQueue;	// IMP=0x0000000001028d0b
- (void).cxx_destruct;	// IMP=0x00000000010293c9
@property(nonatomic, setter=_setAnimatesContents:) _Bool _animatesContents; // @synthesize _animatesContents=__animatesContents;
@property(nonatomic, setter=_setSymbolImagesIgnoreAccessibilitySizes:) _Bool _symbolImagesIgnoreAccessibilitySizes; // @synthesize _symbolImagesIgnoreAccessibilitySizes=__symbolImagesIgnoreAccessibilitySizes;
@property(nonatomic, setter=_setEdgeInsetsForEffectsAreValid:) _Bool _edgeInsetsForEffectsAreValid; // @synthesize _edgeInsetsForEffectsAreValid;
@property(readonly, nonatomic) _Bool _templateSettingsAreInvalid; // @synthesize _templateSettingsAreInvalid;
- (void)_mainQ_resetForLoader:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000102927f
- (void)_stopLoading;	// IMP=0x0000000001029095
- (void)_mainQ_imageLoader:(id)arg1 finishedOrSkippedDecodingImage:(id)arg2 layout:(id)arg3;	// IMP=0x0000000001028f81
- (void)_decodeQ_imageLoader:(id)arg1 decodeImage:(id)arg2 layout:(id)arg3;	// IMP=0x0000000001028d15
- (void)_mainQ_imageLoader:(id)arg1 finishedWithImage:(id)arg2 error:(id)arg3;	// IMP=0x00000000010285c1
- (void)_kickoffQ_beginLoadingWithImageLoader:(id)arg1;	// IMP=0x00000000010283cf
- (void)_mainQ_beginLoadingIfApplicable;	// IMP=0x0000000001027fed
- (void)_loadImage:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000001027dcb
- (void)_loadImageWithURL:(id)arg1;	// IMP=0x0000000001027cea
@property(readonly, nonatomic) _UIImageLoader *_imageLoader;
@property(retain, nonatomic, setter=_setPlaceholderView:) UIView *_placeholderView;
- (void)_updateVisibilityAndFrameOfPlaceholderView;	// IMP=0x0000000001027ace
- (void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2;	// IMP=0x0000000001027874
@property(nonatomic, setter=_setLayeredImageCornerRadius:) double _layeredImageCornerRadius;
@property(readonly, nonatomic) UIView *overlayContentView;
- (void)_setOverlayContentView:(id)arg1;	// IMP=0x0000000001027677
- (id)_existingOverlayView;	// IMP=0x0000000001027666
@property(readonly, nonatomic) _UIStackedImageContainerView *_layeredImageContainer;
- (void)_setLayeredImageContainer:(id)arg1;	// IMP=0x00000000010275cc
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000102751e
- (void)_teardownLayeredImage;	// IMP=0x000000000102740f
- (void)_configureForLayeredImage:(id)arg1;	// IMP=0x000000000102716d
- (_Bool)_displayImageAsLayered:(id)arg1;	// IMP=0x0000000001027152
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;	// IMP=0x0000000001026c6e
- (_Bool)_resolveImageForTrait:(id)arg1 previouslyDisplayedImage:(id)arg2;	// IMP=0x00000000010265de
- (id)_resolvedImageFromImage:(id)arg1;	// IMP=0x00000000010264bd
- (id)_resolvedImageFromImage:(id)arg1 forTrait:(id)arg2;	// IMP=0x00000000010262e8
- (id)_imageResolvingTraitCollectionForTraitCollection:(id)arg1 layoutDirection:(long long)arg2;	// IMP=0x0000000001026119
- (void)_updateResolvedImage;	// IMP=0x00000000010260cb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001025fe5
- (id)_currentHighlightedImage;	// IMP=0x0000000001025eb1
- (id)_currentImage;	// IMP=0x0000000001025d7f
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(_Bool *)arg4;	// IMP=0x0000000001025c9b
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(_Bool *)arg2;	// IMP=0x0000000001025bef
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(_Bool *)arg2;	// IMP=0x0000000001025b43
- (id)_decompressingImageForType:(unsigned long long)arg1;	// IMP=0x0000000001025b24
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2;	// IMP=0x0000000001025b00
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000001025a5a
- (void)setAnimating:(_Bool)arg1;	// IMP=0x0000000001025a38
- (struct CGImage *)imageRef;	// IMP=0x0000000001025a1b
- (void)setCGImageRef:(struct CGImage *)arg1;	// IMP=0x00000000010259fe
@property(nonatomic) unsigned int drawMode;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect)arg2 effectiveTintColor:(id)arg3;	// IMP=0x000000000102576d
- (_Bool)_getDrawModeCompositeOperation:(int *)arg1 whiteComponent:(double *)arg2 drawingAlpha:(double *)arg3;	// IMP=0x00000000010255f0
- (_Bool)_needsImageEffectsForImage:(id)arg1 symbolConfiguration:(id)arg2 suppressColorizing:(_Bool)arg3;	// IMP=0x0000000001025505
- (_Bool)_needsImageEffectsForImage:(id)arg1;	// IMP=0x000000000102548e
- (void)tintColorDidChange;	// IMP=0x0000000001025030
- (id)_effectiveTintColorWithImage:(id)arg1 symbolConfiguration:(id)arg2;	// IMP=0x0000000001024e09
- (id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1;	// IMP=0x00000000010249bd
@property(nonatomic, setter=_setMasksTemplateImages:) _Bool _masksTemplateImages;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x000000000102473a
@property(nonatomic, setter=_setTemplateImageRenderingEffects:) unsigned long long _templateImageRenderingEffects;
@property(nonatomic, setter=_setDefaultRenderingMode:) long long _defaultRenderingMode;
@property(readonly, nonatomic) struct UIEdgeInsets _edgeInsetsForEffects;
- (void)_updateTemplateProperties;	// IMP=0x0000000001024213
- (void)_templateSettingsDidChange;	// IMP=0x00000000010241db
- (void)_invalidateTemplateSettings;	// IMP=0x00000000010241ca
- (void)_updateMasking;	// IMP=0x000000000102404e
- (id)_symbolConfigurationForSource:(id)arg1;	// IMP=0x000000000102403c
- (_Bool)_shouldTreatImageAsTemplate:(id)arg1;	// IMP=0x0000000001023fc2
- (long long)_effectiveRenderingModeForSource:(id)arg1 symbolConfiguration:(id)arg2;	// IMP=0x0000000001023f33
- (id)_activeImage;	// IMP=0x0000000001023ed6
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000001023e1b
- (id)_generateBackdropMaskImage;	// IMP=0x0000000001023e09
- (void)layoutSubviews;	// IMP=0x0000000001023cb2
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000001023b8e
@property(nonatomic) long long animationRepeatCount;
@property(nonatomic) double animationDuration;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (_Bool)_hasInstalledContentsAnimation;	// IMP=0x00000000010237ea
- (void)stopAnimating;	// IMP=0x0000000001023721
- (id)_currentAnimationKeyframeImage;	// IMP=0x000000000102350e
- (void)_cleanUpForStopAnimating;	// IMP=0x00000000010234c8
- (void)_removeLayerAnimations;	// IMP=0x0000000001023439
- (void)startAnimating;	// IMP=0x0000000001022dcb
@property(copy, nonatomic) NSArray *highlightedAnimationImages;
@property(copy, nonatomic) NSArray *animationImages;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000001022130
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000001022088
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001022076
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;	// IMP=0x0000000001021f76
@property(retain, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;
@property(retain, nonatomic, setter=_setOverridingSymbolConfiguration:) UIImageSymbolConfiguration *_overridingSymbolConfiguration;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
- (id)_colorSymbolConfigurationAddingTintColor:(id)arg1;	// IMP=0x0000000001021944
- (id)_symbolConfigurationForImage:(id)arg1;	// IMP=0x000000000102155e
@property(nonatomic, setter=_setSuppressPixelAlignment:) _Bool _suppressPixelAlignment;
- (id)midlineGuide;	// IMP=0x0000000001021430
- (id)_imageContentGuideAllowingCreation:(_Bool)arg1;	// IMP=0x0000000001021078
@property(readonly) UILayoutGuide *imageContentGuide;
- (void)_imageContentParametersDidChange;	// IMP=0x00000000010209eb
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x000000000102087a
- (void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(_Bool)arg1;	// IMP=0x0000000001020748
- (_Bool)_isHasBaselinePropertyChangeable;	// IMP=0x0000000001020740
- (_Bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;	// IMP=0x0000000001020738
- (_Bool)_hasBaseline;	// IMP=0x00000000010206b6
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000001020586
- (double)_firstBaselineOffsetFromTop;	// IMP=0x0000000001020458
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000001020277
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x0000000001020188
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000102013d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001020129
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000001020112
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000001020083
@property(readonly, nonatomic) _Bool _hasContentGravity;
@property(readonly, nonatomic) _Bool _layoutShouldFlipHorizontalOrientations;
@property(readonly, nonatomic) double preferredContentScaleFactor;
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x000000000101ffac
- (void)_setViewGeometry:(struct CGRect)arg1 forMetric:(int)arg2;	// IMP=0x000000000101fc0f
@property(readonly) UILayoutGuide *focusedFrameGuide;
- (id)_focusedFrameGuideCreateIfNecessary:(_Bool)arg1;	// IMP=0x000000000101f93f
- (void)_updateFocusedFrameGuideConstraintsIfApplicable;	// IMP=0x000000000101f607
@property(nonatomic) _Bool masksFocusEffectToContents;
@property(nonatomic) _Bool adjustsImageWhenAncestorFocused;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;	// IMP=0x000000000101eb6b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000101e83b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000101e092
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;	// IMP=0x000000000101de4e
- (id)initWithImage:(id)arg1;	// IMP=0x000000000101dd09
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000101dc02
- (void)_updateState;	// IMP=0x000000000101d90b
- (id)_renditionForSource:(id)arg1 size:(struct CGSize)arg2 symbolConfiguration:(id)arg3 withCGImageProvider:(CDUnknownBlockType)arg4 lazy:(_Bool)arg5;	// IMP=0x000000000101ce6e
- (id)_effectForRenderingSource:(id)arg1;	// IMP=0x000000000101cdee
- (_Bool)_setImageViewContentsForAnimatedImage:(id)arg1;	// IMP=0x000000000101c27f
- (void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg1;	// IMP=0x000000000101c168
- (void)displayLayer:(id)arg1;	// IMP=0x000000000101c156
- (void)_handlePendingImageLayout:(id)arg1;	// IMP=0x000000000101c0a1
- (_Bool)_setImageViewContents:(id)arg1;	// IMP=0x000000000101b638
- (void)_invalidateImageLayouts;	// IMP=0x000000000101b108
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize)arg2 cachePerSize:(_Bool)arg3 forBaselineOffset:(_Bool)arg4;	// IMP=0x000000000101acfa
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize)arg2;	// IMP=0x000000000101ace0
- (_Bool)_canDrawContent;	// IMP=0x000000000101ab53
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;	// IMP=0x000000000000a27c
- (unsigned long long)defaultAccessibilityTraits;	// IMP=0x000000000000a243
- (_Bool)isAccessibilityElementByDefault;	// IMP=0x000000000000a23b
- (void)_applySettingsForLegibilityStyle:(long long)arg1;	// IMP=0x000000000075f147
- (_Bool)useBlockyMagnificationInClassic;	// IMP=0x000000000102940b
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000001029563
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000001029413
@property(nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
- (double)_scaleFactorForImage;	// IMP=0x000000000102990a
- (id)_cachedPretiledImageForImage:(id)arg1;	// IMP=0x000000000102a772
- (void)_clearPretiledImageCacheForImage:(id)arg1;	// IMP=0x000000000102a5c0
- (void)_updatePretiledImageCacheForImage:(id)arg1;	// IMP=0x0000000001029cfd
- (_Bool)_recomputePretilingState;	// IMP=0x00000000010299ba

// Remaining properties
@property(readonly, nonatomic) long long contentMode; // @dynamic contentMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long semanticContentAttribute;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @dynamic userInteractionEnabled;

@end

