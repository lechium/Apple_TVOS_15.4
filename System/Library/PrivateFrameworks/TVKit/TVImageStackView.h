//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, TVImageStack, TVUINamedLayerStack, UIColor, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

@interface TVImageStackView : UIView
{
    _UIStackedImageContainerLayer *_imageStackLayer;	// 8 = 0x8
    _UIStackedImageConfiguration *_imageStackConfig;	// 16 = 0x10
    TVImageStack *_imageStack;	// 24 = 0x18
    struct CGSize _imageStackSize;	// 32 = 0x20
    TVUINamedLayerStack *_uiLayerStack;	// 48 = 0x30
    double _layerSelectionDuration;	// 56 = 0x38
    double _layerUnselectionDuration;	// 64 = 0x40
    double _shadowSelectionDuration;	// 72 = 0x48
    double _shadowUnselectionDuration;	// 80 = 0x50
    double _repositionUnselectionDuration;	// 88 = 0x58
    _Bool _imageLoaded;	// 96 = 0x60
    UIView *_overlayView;	// 104 = 0x68
    UIView *_unmaskedOverlayView;	// 112 = 0x70
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x000000000003067e
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 selectionStyle:(long long)arg2;	// IMP=0x00000000000305f0
+ (id)imageStackViewWithSize:(struct CGSize)arg1;	// IMP=0x000000000002e08a
+ (id)imageStackViewWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000002e019
- (void).cxx_destruct;	// IMP=0x00000000000306f6
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000030697
- (void)_updateStackedImageConfiguration;	// IMP=0x0000000000030403
- (double)_unpressedDuration;	// IMP=0x00000000000303e6
- (void)_setUnpressedDuration:(double)arg1;	// IMP=0x00000000000303c9
- (void)_setSelectionStyle:(long long)arg1;	// IMP=0x00000000000303ac
- (void)_setPressedScaleAdjustment:(double)arg1;	// IMP=0x000000000003038f
- (void)_setPressedDuration:(double)arg1;	// IMP=0x0000000000030372
- (void)_setImageStackContentsGravity:(id)arg1;	// IMP=0x0000000000030355
- (void)_setIdleModeFocusSizeOffset:(double)arg1;	// IMP=0x0000000000030338
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000000003031b
- (long long)_selectionStyle;	// IMP=0x00000000000302fe
- (id)_layeredImageContainerLayer;	// IMP=0x00000000000302e9
- (id)_shadowLayer;	// IMP=0x00000000000302cc
- (double)_pressedScaleAdjustment;	// IMP=0x00000000000302af
- (double)_pressedDuration;	// IMP=0x0000000000030292
- (void)_resetShadowSettings;	// IMP=0x0000000000030141
- (void)_setShadowVerticalOffset:(double)arg1;	// IMP=0x00000000000300e1
- (void)_setShadowRadius:(double)arg1;	// IMP=0x0000000000030081
- (void)_setShadowOpacity:(double)arg1;	// IMP=0x0000000000030021
- (id)_newImageConfiguration;	// IMP=0x000000000002ffe5
- (id)_flatLayer;	// IMP=0x000000000002ffc8
- (id)_layerBelowTitles;	// IMP=0x000000000002ffab
- (id)_imageStackContentsGravity;	// IMP=0x000000000002ff8e
- (id)_imageConfiguration;	// IMP=0x000000000002ff71
- (double)_idleModeFocusSizeOffset;	// IMP=0x000000000002ff54
@property(nonatomic) double focusSizeIncrease;
@property(readonly, nonatomic) unsigned long long primaryControlState;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000002fec4
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002fea7
@property(nonatomic) unsigned long long controlState;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002fd10
@property(nonatomic) struct CGPoint focusDirection;
- (void)setPressed:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002faf9
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fadc
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002fabf
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000002fa06
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000002f987
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002f92a
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic) double layerUnselectionDuration;
@property(nonatomic) double layerSelectionDuration;
@property(nonatomic, getter=isHueShiftEnabled) _Bool hueShiftEnabled;
@property(nonatomic, getter=isBrightnessBoostEnabled) _Bool brightnessBoostEnabled;
@property(nonatomic) double radiosityAmount;
@property(nonatomic) double specularHighlightVerticalPositionSensitivity;
@property(nonatomic) double specularHighlightVerticalPosition;
@property(nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property(retain, nonatomic) UIColor *specularHighlightColor;
@property(nonatomic) double rotationAmount;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double perspectiveZDepth;
@property(copy, nonatomic) NSArray *parallaxImageDepths;
@property(nonatomic) double maxParallaxImageDepth;
- (void)_loadImage;	// IMP=0x000000000002e81b
@property(retain, nonatomic) TVImageStack *imageStack;
- (void)setImageStack:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000002e60e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000002e581
- (void)layoutSubviews;	// IMP=0x000000000002e505
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002e4a4
- (void)dealloc;	// IMP=0x000000000002e418
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000002e317
- (id)initWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000002e10f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002e0d0

@end

