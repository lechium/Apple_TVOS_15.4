//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <UIKitCore/CALayerDelegate-Protocol.h>

@class CATransformLayer, NSArray, NSString, UIView, _UIStackedImageConfiguration, _UIStackedImageLayerDelegate;
@protocol UINamedLayerStack;

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate>
{
    _Bool _animatingToNormalState;	// 8 = 0x8
    _Bool _animatingStateChange;	// 9 = 0x9
    double _selectionStartTime;	// 16 = 0x10
    double _selectionDuration;	// 24 = 0x18
    long long _selectionStyle;	// 32 = 0x20
    double _idleModeFocusSizeOffset;	// 40 = 0x28
    struct CGSize _radiosityImageScale;	// 48 = 0x30
    _Bool _radiosityNeedsLayout;	// 64 = 0x40
    double _scale;	// 72 = 0x48
    NSString *_imageStackContentsGravity;	// 80 = 0x50
    double _radiosityRequestTime;	// 88 = 0x58
    double _rotationAmount;	// 96 = 0x60
    struct CGPoint _translationOffset;	// 104 = 0x68
    double _maximumParallaxDepth;	// 120 = 0x78
    _Bool _nonOpaqueShadow;	// 128 = 0x80
    _Bool _singleLayerNoMask;	// 129 = 0x81
    _Bool _layerStackSupportsInflation;	// 130 = 0x82
    _Bool _layerStackInflated;	// 131 = 0x83
    unsigned long long _layerStackInflationSeed;	// 136 = 0x88
    _Bool _deferredInflationPending;	// 144 = 0x90
    id _flatImage;	// 152 = 0x98
    NSArray *_parallaxImages;	// 160 = 0xa0
    NSArray *_parallaxLayerDepths;	// 168 = 0xa8
    CALayer *_imageLayersContainer;	// 176 = 0xb0
    NSArray *_imageLayers;	// 184 = 0xb8
    CALayer *_flatLayer;	// 192 = 0xc0
    CALayer *_maskLayer;	// 200 = 0xc8
    CALayer *_radiosityLayer;	// 208 = 0xd0
    CALayer *_selectedPlaceholderLayer;	// 216 = 0xd8
    CALayer *_shadowLayer;	// 224 = 0xe0
    CALayer *_unfocusedShadowLayer;	// 232 = 0xe8
    CALayer *_specularLayer;	// 240 = 0xf0
    CALayer *_cursorLayer;	// 248 = 0xf8
    CALayer *_cursorLayerContainer;	// 256 = 0x100
    CALayer *_focusKeylineStrokeLayer;	// 264 = 0x108
    CALayer *_overlayLayer;	// 272 = 0x110
    CALayer *_overlayContainerLayer;	// 280 = 0x118
    CALayer *_unmaskedOverlayLayer;	// 288 = 0x120
    CALayer *_unmaskedOverlayContainerLayer;	// 296 = 0x128
    CATransformLayer *_imagePerspectiveTransformLayer;	// 304 = 0x130
    CATransformLayer *_imageRotationTransformLayer;	// 312 = 0x138
    CATransformLayer *_maskPerspectiveTransformLayer;	// 320 = 0x140
    CATransformLayer *_maskRotationTransformLayer;	// 328 = 0x148
    CATransformLayer *_unmaskedOverlayPerspectiveTransformLayer;	// 336 = 0x150
    CATransformLayer *_unmaskedOverlayRotationTransformLayer;	// 344 = 0x158
    CATransformLayer *_cursorRotationTransformLayer;	// 352 = 0x160
    CALayer *_frontmostPerspectiveTransformLayer;	// 360 = 0x168
    CATransformLayer *_frontmostRotationTransformLayer;	// 368 = 0x170
    _UIStackedImageLayerDelegate *_layoutDelegate;	// 376 = 0x178
    UIView *_animationView;	// 384 = 0x180
    _UIStackedImageConfiguration *_configuration;	// 392 = 0x188
    id <UINamedLayerStack> _layerStack;	// 400 = 0x190
    unsigned long long _controlState;	// 408 = 0x198
    struct CGPoint _focusDirection;	// 416 = 0x1a0
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x000000000109fb27
+ (id)_layerStackObservingKeys;	// IMP=0x000000000109c53b
- (void).cxx_destruct;	// IMP=0x00000000010a9f47
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;	// IMP=0x00000000010a9448
- (void)_updateShadowPositionWithOffset:(struct CGPoint)arg1;	// IMP=0x00000000010a9373
- (void)_updateShadowBounds;	// IMP=0x00000000010a88d4
- (double)_getShadowOpacity;	// IMP=0x00000000010a85d4
- (double)_unfocusedShadowRadius;	// IMP=0x00000000010a8502
- (double)_focusedShadowRadius;	// IMP=0x00000000010a8412
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;	// IMP=0x00000000010a8033
- (struct CATransform3D)_specularTransformForCurrentState;	// IMP=0x00000000010a7e96
- (void)_updateLayerForSelection;	// IMP=0x00000000010a7e82
- (void)_updateImageLayerFilterValues;	// IMP=0x00000000010a7d02
- (void)_updateImageLayerFilterChains;	// IMP=0x00000000010a7b65
- (void)_updateContentProviderLayerFocusDirection;	// IMP=0x00000000010a77fd
- (void)_updateSpecularLayerContentsRect;	// IMP=0x00000000010a7619
- (void)_updateFullBleedImageLayers;	// IMP=0x00000000010a6bf2
- (void)_updateNormalImageLayers;	// IMP=0x00000000010a5786
- (struct CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2;	// IMP=0x00000000010a5615
- (void)_updateFocusKeylineStrokeScale;	// IMP=0x00000000010a5542
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint)arg1;	// IMP=0x00000000010a5470
- (void)_updateRotationAndTranslation:(id)arg1;	// IMP=0x00000000010a4d10
- (void)_updatePerspective;	// IMP=0x00000000010a4ae7
- (struct CATransform3D)_perspectiveTransformForCurrentState;	// IMP=0x00000000010a49ff
- (struct CATransform3D)_rotationTransformForCurrentFocusDirection;	// IMP=0x00000000010a478f
- (struct CATransform3D)_scaleTransformForCurrentState;	// IMP=0x00000000010a448b
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x00000000010a4349
- (void)_setParallaxImages:(id)arg1;	// IMP=0x00000000010a3a13
- (id)_randomImage;	// IMP=0x00000000010a36d8
- (void)_setIdleModeFocusSizeOffset:(double)arg1;	// IMP=0x00000000010a36b9
- (void)_setFlatImage:(id)arg1;	// IMP=0x00000000010a307f
- (void)_resetAnimatingToNormalState;	// IMP=0x00000000010a2ed5
- (unsigned long long)_primaryControlStateForState:(unsigned long long)arg1;	// IMP=0x00000000010a2ea9
- (_Bool)_isSelected;	// IMP=0x00000000010a2e84
- (_Bool)_isNormal;	// IMP=0x00000000010a2e60
- (_Bool)_isHighlighted;	// IMP=0x00000000010a2e3b
- (_Bool)_isFocusedOrFocusedIdle;	// IMP=0x00000000010a2e02
- (_Bool)_isFocusedIdle;	// IMP=0x00000000010a2ddb
- (_Bool)_isFocused;	// IMP=0x00000000010a2db6
- (double)_idleModeFocusSizeOffset;	// IMP=0x00000000010a2da4
- (void)_deselect;	// IMP=0x00000000010a2d8b
- (void)_showImageLayers;	// IMP=0x00000000010a2c98
- (void)_updateOverlayContainerLayerHierarchy:(_Bool)arg1;	// IMP=0x00000000010a2a3d
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;	// IMP=0x00000000010a2157
- (void)_applyFocusDirectionTransform;	// IMP=0x00000000010a2143
- (struct CGRect)_positionAndSizeForLayerImage:(id)arg1;	// IMP=0x00000000010a1e32
- (struct CGRect)_displayFrameForModelFrame:(struct CGRect)arg1;	// IMP=0x00000000010a1d91
- (struct CGPoint)_layerStackToDisplayScaleFactor;	// IMP=0x00000000010a1d06
- (_Bool)_radiosityEnabled;	// IMP=0x00000000010a1cd1
- (double)_focusedScaleFactorForCurrentBounds;	// IMP=0x00000000010a1c32
- (void)_updateSpecularLayerContents;	// IMP=0x00000000010a18a2
- (id)_contentLayers;	// IMP=0x00000000010a17b1
- (void)_setLayerStackInflated:(_Bool)arg1 seed:(unsigned long long)arg2;	// IMP=0x00000000010a113d
- (struct CGImage *)_cgImageForLayeredImage:(id)arg1;	// IMP=0x00000000010a10ee
- (void)_setDefaultParallaxLayerDepths;	// IMP=0x00000000010a0f78
- (void)_setParallaxLayerDepths:(id)arg1;	// IMP=0x00000000010a0eff
- (id)_parallaxLayerDepths;	// IMP=0x00000000010a0eea
- (void)_wrapLayerInView:(id)arg1;	// IMP=0x00000000010a0aff
- (void)_removeLayerFromSuperlayer:(id)arg1;	// IMP=0x00000000010a0a7f
- (void)_setUnmaskedOverlayLayer:(id)arg1;	// IMP=0x00000000010a058f
- (id)_unmaskedOverlayLayer;	// IMP=0x00000000010a057a
- (void)_setOverlayLayer:(id)arg1;	// IMP=0x00000000010a0132
- (id)_overlayLayer;	// IMP=0x00000000010a011d
- (void)_setImageStackContentsGravity:(id)arg1;	// IMP=0x000000000109ff7a
- (id)_imageStackContentsGravity;	// IMP=0x000000000109ff65
- (void)_setSelectionStyle:(long long)arg1;	// IMP=0x000000000109fea4
- (long long)_selectionStyle;	// IMP=0x000000000109fe93
- (id)_shadowLayer;	// IMP=0x000000000109fe7e
- (id)_flatLayer;	// IMP=0x000000000109fe69
- (id)_layerBelowTitles;	// IMP=0x000000000109fe41
- (id)_imageLayersContainer;	// IMP=0x000000000109fe2c
- (struct CGSize)_roundedBoundsSize;	// IMP=0x000000000109fddb
- (struct CGSize)_scaledSizeForCurrentState;	// IMP=0x000000000109fd15
- (struct CGSize)_focusCursorInsetSizeForSize:(struct CGSize)arg1;	// IMP=0x000000000109fbf4
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000109fb0d
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000109fab9
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000109faa4
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000109fa4b
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000109fa36
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)_setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000109eff9
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000109efe4
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000109efcc
- (void)_updateRadiosityFromLayerStack;	// IMP=0x000000000109eab5
- (void)_updateNonOpaqueShadowStateFromLayerStack;	// IMP=0x000000000109e2af
- (_Bool)_configuredForNonOpaqueShadow;	// IMP=0x000000000109e29f
- (void)_updateSingleLayerNoMaskFromLayerStack;	// IMP=0x000000000109e108
- (_Bool)_aspectMatchesLayerStack;	// IMP=0x000000000109e06e
- (void)_setLayerStack:(id)arg1;	// IMP=0x000000000109de05
- (void)_updateCornerRadiusFromConfig;	// IMP=0x000000000109c58b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000109c33d
- (id)_preferredLayoutDelegateForLayer:(id)arg1;	// IMP=0x000000000109c24c
- (struct CGRect)_cursorBounds;	// IMP=0x000000000109c0be
- (void)_setupFrontmostTransformLayers;	// IMP=0x000000000109bf73
- (void)_layoutRadiosityLayer;	// IMP=0x000000000109bde6
- (void)_updateOverlayLayout;	// IMP=0x000000000109ba82
- (void)layoutSublayers;	// IMP=0x000000000109b05a
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000109aed9
- (void)setRasterizationScale:(double)arg1;	// IMP=0x000000000109ad40
- (void)setContentsScale:(double)arg1;	// IMP=0x000000000109abc1
- (void)removeAllAnimations;	// IMP=0x000000000109a8d0
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000109a5e7
- (void)dealloc;	// IMP=0x000000000109a455
- (id)init;	// IMP=0x000000000109a406

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
