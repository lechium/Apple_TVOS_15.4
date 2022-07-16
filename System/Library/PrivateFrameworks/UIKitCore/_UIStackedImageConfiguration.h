//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <NSCopying>
{
    _Bool _overlayFixedFrame;	// 8 = 0x8
    _Bool _adjustMotionForSize;	// 9 = 0x9
    _Bool _flatImageContainsCornerRadius;	// 10 = 0xa
    _Bool _useSeparateUnfocusedShadowImage;	// 11 = 0xb
    _Bool _allowsNonOpaqueShadow;	// 12 = 0xc
    _Bool _boostBrightness;	// 13 = 0xd
    _Bool _hueShift;	// 14 = 0xe
    _Bool _disableMask;	// 15 = 0xf
    _Bool _focusCursorEnabled;	// 16 = 0x10
    _Bool _fullBleedCenteredGrowth;	// 17 = 0x11
    unsigned long long _maximumParallaxImages;	// 24 = 0x18
    double _maximumParallaxDepth;	// 32 = 0x20
    double _overlayDepth;	// 40 = 0x28
    double _zDepth;	// 48 = 0x30
    double _rotationAmount;	// 56 = 0x38
    double _scaleSizeIncrease;	// 64 = 0x40
    double _pressedScaleAdjustment;	// 72 = 0x48
    double _unmaskedOverlayScaleFactor;	// 80 = 0x50
    double _cornerRadius;	// 88 = 0x58
    double _continuousCornerRadiusEnabled;	// 96 = 0x60
    double _specularHighlightHorizontalPositionSensitivity;	// 104 = 0x68
    double _specularHighlightVerticalPosition;	// 112 = 0x70
    double _specularHighlightVerticalPositionSensitivity;	// 120 = 0x78
    double _specularOpacity;	// 128 = 0x80
    double _defaultFocusedShadowOpacity;	// 136 = 0x88
    double _defaultHighlightedShadowOpacity;	// 144 = 0x90
    double _defaultUnfocusedShadowOpacity;	// 152 = 0x98
    double _fullBleedFocusedShadowOpacity;	// 160 = 0xa0
    double _fullBleedUnfocusedShadowOpacity;	// 168 = 0xa8
    double _focusCursorShadowOpacityAdjustment;	// 176 = 0xb0
    double _defaultFocusedShadowRadius;	// 184 = 0xb8
    double _defaultHighlightedShadowRadius;	// 192 = 0xc0
    double _defaultUnfocusedShadowRadius;	// 200 = 0xc8
    double _fullBleedFocusedShadowRadius;	// 208 = 0xd0
    double _fullBleedUnfocusedShadowRadius;	// 216 = 0xd8
    double _defaultFocusedShadowVerticalOffset;	// 224 = 0xe0
    double _defaultHighlightedShadowVerticalOffset;	// 232 = 0xe8
    double _defaultUnfocusedShadowVerticalOffset;	// 240 = 0xf0
    double _defaultSelectedShadowVerticalOffset;	// 248 = 0xf8
    UIImage *_placeholderImage;	// 256 = 0x100
    double _focusCursorBorderWidth;	// 264 = 0x108
    double _radiosityOffset;	// 272 = 0x110
    double _radiosityStrength;	// 280 = 0x118
    double _shadowSelectionDuration;	// 288 = 0x120
    double _shadowUnselectionDuration;	// 296 = 0x128
    double _repositionUnselectionDuration;	// 304 = 0x130
    double _layerSelectionDuration;	// 312 = 0x138
    double _layerUnselectionDuration;	// 320 = 0x140
    double _minimumFocusDuration;	// 328 = 0x148
    double _pressedDuration;	// 336 = 0x150
    double _unpressedDuration;	// 344 = 0x158
    double _fullBleedOffset;	// 352 = 0x160
    struct CGPoint _translationOffset;	// 360 = 0x168
}

+ (id)newAppIconConfiguration;	// IMP=0x000000000109865c
+ (id)newStandardConfiguration;	// IMP=0x00000000010981cc
- (void).cxx_destruct;	// IMP=0x000000000109a228
@property(nonatomic) double fullBleedOffset; // @synthesize fullBleedOffset=_fullBleedOffset;
@property(nonatomic) _Bool fullBleedCenteredGrowth; // @synthesize fullBleedCenteredGrowth=_fullBleedCenteredGrowth;
@property(nonatomic) double unpressedDuration; // @synthesize unpressedDuration=_unpressedDuration;
@property(nonatomic) double pressedDuration; // @synthesize pressedDuration=_pressedDuration;
@property(nonatomic) double minimumFocusDuration; // @synthesize minimumFocusDuration=_minimumFocusDuration;
@property(nonatomic) double layerUnselectionDuration; // @synthesize layerUnselectionDuration=_layerUnselectionDuration;
@property(nonatomic) double layerSelectionDuration; // @synthesize layerSelectionDuration=_layerSelectionDuration;
@property(nonatomic) double repositionUnselectionDuration; // @synthesize repositionUnselectionDuration=_repositionUnselectionDuration;
@property(nonatomic) double shadowUnselectionDuration; // @synthesize shadowUnselectionDuration=_shadowUnselectionDuration;
@property(nonatomic) double shadowSelectionDuration; // @synthesize shadowSelectionDuration=_shadowSelectionDuration;
@property(nonatomic) double radiosityStrength; // @synthesize radiosityStrength=_radiosityStrength;
@property(nonatomic) double radiosityOffset; // @synthesize radiosityOffset=_radiosityOffset;
@property(nonatomic) double focusCursorBorderWidth; // @synthesize focusCursorBorderWidth=_focusCursorBorderWidth;
@property(nonatomic) _Bool focusCursorEnabled; // @synthesize focusCursorEnabled=_focusCursorEnabled;
@property(nonatomic) _Bool disableMask; // @synthesize disableMask=_disableMask;
@property(nonatomic) _Bool hueShift; // @synthesize hueShift=_hueShift;
@property(nonatomic) _Bool boostBrightness; // @synthesize boostBrightness=_boostBrightness;
@property(nonatomic) _Bool allowsNonOpaqueShadow; // @synthesize allowsNonOpaqueShadow=_allowsNonOpaqueShadow;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool useSeparateUnfocusedShadowImage; // @synthesize useSeparateUnfocusedShadowImage=_useSeparateUnfocusedShadowImage;
@property(nonatomic) double defaultSelectedShadowVerticalOffset; // @synthesize defaultSelectedShadowVerticalOffset=_defaultSelectedShadowVerticalOffset;
@property(nonatomic) double defaultUnfocusedShadowVerticalOffset; // @synthesize defaultUnfocusedShadowVerticalOffset=_defaultUnfocusedShadowVerticalOffset;
@property(nonatomic) double defaultHighlightedShadowVerticalOffset; // @synthesize defaultHighlightedShadowVerticalOffset=_defaultHighlightedShadowVerticalOffset;
@property(nonatomic) double defaultFocusedShadowVerticalOffset; // @synthesize defaultFocusedShadowVerticalOffset=_defaultFocusedShadowVerticalOffset;
@property(nonatomic) double fullBleedUnfocusedShadowRadius; // @synthesize fullBleedUnfocusedShadowRadius=_fullBleedUnfocusedShadowRadius;
@property(nonatomic) double fullBleedFocusedShadowRadius; // @synthesize fullBleedFocusedShadowRadius=_fullBleedFocusedShadowRadius;
@property(nonatomic) double defaultUnfocusedShadowRadius; // @synthesize defaultUnfocusedShadowRadius=_defaultUnfocusedShadowRadius;
@property(nonatomic) double defaultHighlightedShadowRadius; // @synthesize defaultHighlightedShadowRadius=_defaultHighlightedShadowRadius;
@property(nonatomic) double defaultFocusedShadowRadius; // @synthesize defaultFocusedShadowRadius=_defaultFocusedShadowRadius;
@property(nonatomic) double focusCursorShadowOpacityAdjustment; // @synthesize focusCursorShadowOpacityAdjustment=_focusCursorShadowOpacityAdjustment;
@property(nonatomic) double fullBleedUnfocusedShadowOpacity; // @synthesize fullBleedUnfocusedShadowOpacity=_fullBleedUnfocusedShadowOpacity;
@property(nonatomic) double fullBleedFocusedShadowOpacity; // @synthesize fullBleedFocusedShadowOpacity=_fullBleedFocusedShadowOpacity;
@property(nonatomic) double defaultUnfocusedShadowOpacity; // @synthesize defaultUnfocusedShadowOpacity=_defaultUnfocusedShadowOpacity;
@property(nonatomic) double defaultHighlightedShadowOpacity; // @synthesize defaultHighlightedShadowOpacity=_defaultHighlightedShadowOpacity;
@property(nonatomic) double defaultFocusedShadowOpacity; // @synthesize defaultFocusedShadowOpacity=_defaultFocusedShadowOpacity;
@property(nonatomic) double specularOpacity; // @synthesize specularOpacity=_specularOpacity;
@property(nonatomic) double specularHighlightVerticalPositionSensitivity; // @synthesize specularHighlightVerticalPositionSensitivity=_specularHighlightVerticalPositionSensitivity;
@property(nonatomic) double specularHighlightVerticalPosition; // @synthesize specularHighlightVerticalPosition=_specularHighlightVerticalPosition;
@property(nonatomic) double specularHighlightHorizontalPositionSensitivity; // @synthesize specularHighlightHorizontalPositionSensitivity=_specularHighlightHorizontalPositionSensitivity;
@property(nonatomic) _Bool flatImageContainsCornerRadius; // @synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius;
@property(nonatomic, getter=isContinuousCornerRadiusEnabled) double continuousCornerRadiusEnabled; // @synthesize continuousCornerRadiusEnabled=_continuousCornerRadiusEnabled;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double unmaskedOverlayScaleFactor; // @synthesize unmaskedOverlayScaleFactor=_unmaskedOverlayScaleFactor;
@property(nonatomic) struct CGPoint translationOffset; // @synthesize translationOffset=_translationOffset;
@property(nonatomic) double pressedScaleAdjustment; // @synthesize pressedScaleAdjustment=_pressedScaleAdjustment;
@property(nonatomic) double scaleSizeIncrease; // @synthesize scaleSizeIncrease=_scaleSizeIncrease;
@property(nonatomic) double rotationAmount; // @synthesize rotationAmount=_rotationAmount;
@property(nonatomic) _Bool adjustMotionForSize; // @synthesize adjustMotionForSize=_adjustMotionForSize;
@property(nonatomic) double zDepth; // @synthesize zDepth=_zDepth;
@property(nonatomic) _Bool overlayFixedFrame; // @synthesize overlayFixedFrame=_overlayFixedFrame;
@property(nonatomic) double overlayDepth; // @synthesize overlayDepth=_overlayDepth;
@property(nonatomic) double maximumParallaxDepth; // @synthesize maximumParallaxDepth=_maximumParallaxDepth;
@property(nonatomic) unsigned long long maximumParallaxImages; // @synthesize maximumParallaxImages=_maximumParallaxImages;
- (void)_highContrastFocusIndicatorChanged:(id)arg1;	// IMP=0x0000000001099cd0
@property(readonly, copy, nonatomic) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001098e8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010988f8
- (void)dealloc;	// IMP=0x0000000001098876
- (id)init;	// IMP=0x00000000010987e2

@end

