//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIButtonArchivingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonDeprecatedAPISupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonDeprecatedSPISupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonVisualEffectSupportingVisualProvider-Protocol.h>
#import <UIKitCore/UIButtonVisualProvider-Protocol.h>
#import <UIKitCore/_UIButtonMaskAnimationViewDelegate-Protocol.h>
#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView, _UIButtonMaskAnimationView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIButtonLegacyVisualProvider : NSObject <_UIFloatingContentViewDelegate, _UIButtonMaskAnimationViewDelegate, UIButtonVisualProvider, UIButtonArchivingVisualProvider, UIButtonVisualEffectSupportingVisualProvider, UIButtonDeprecatedAPISupportingVisualProvider, UIButtonDeprecatedSPISupportingVisualProvider>
{
    UIButton *_button;	// 8 = 0x8
    UIImageView *_backgroundView;	// 16 = 0x10
    _UIFloatingContentView *_floatingContentView;	// 24 = 0x18
    UIVisualEffectView *_contentBackdropView;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_titleView;	// 48 = 0x30
    UIView *_selectionView;	// 56 = 0x38
    _UIButtonMaskAnimationView *_maskAnimationView;	// 64 = 0x40
    UIView *_effectiveContentView;	// 72 = 0x48
    NSArray *_contentConstraints;	// 80 = 0x50
}

+ (id)_selectedIndicatorImage;	// IMP=0x00000000006f3bba
+ (id)visualProviderForButton:(id)arg1;	// IMP=0x00000000006ed098
+ (_Bool)requiresNewVisualProviderForChanges;	// IMP=0x00000000006ed090
- (void).cxx_destruct;	// IMP=0x00000000006f6b00
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
@property(nonatomic) UIButton *button; // @synthesize button=_button;
- (void)_setupTitleView;	// IMP=0x00000000006f6abc
- (void)_setupImageView;	// IMP=0x00000000006f67e6
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006f678d
- (id)_setupBackgroundView;	// IMP=0x00000000006f6661
- (id)_newImageViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006f65c1
- (void)_updateEffectsForImageView:(id)arg1 background:(_Bool)arg2;	// IMP=0x00000000006f655d
- (_Bool)_shouldDefaultToTemplatesForImageViewBackground:(_Bool)arg1;	// IMP=0x00000000006f651b
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000006f6509
- (void)setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006f64b7
- (void)setExternalFlatEdge:(unsigned long long)arg1;	// IMP=0x00000000006f6479
- (id)selectionIndicatorView;	// IMP=0x00000000006f643f
- (id)effectiveContentView;	// IMP=0x00000000006f6399
- (id)_floatingContentView;	// IMP=0x00000000006f61fd
- (id)preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000006f6149
- (_Bool)canBecomeFocused;	// IMP=0x00000000006f6130
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000006f5f6e
- (void)_setupTitleViewRequestingLayout:(_Bool)arg1;	// IMP=0x00000000006f5c78
- (id)_newLabelWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006f5b4f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000006f5b00
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;	// IMP=0x00000000006f4ec0
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000006f4e6f
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;	// IMP=0x00000000006f4d42
- (id)_transitionAnimationWithKeyPath:(id)arg1;	// IMP=0x00000000006f4c70
- (struct CGRect)_highlightBoundsForDrawingStyle;	// IMP=0x00000000006f4b92
- (void)_prepareMaskAnimationViewIfNecessary;	// IMP=0x00000000006f4ad4
- (void)_updateMaskState;	// IMP=0x00000000006f48b5
- (void)layoutSubviews;	// IMP=0x00000000006f478f
- (void)_updateSelectionViewForState:(unsigned long long)arg1;	// IMP=0x00000000006f4353
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x00000000006f4096
- (void)_setupPressednessForState:(unsigned long long)arg1;	// IMP=0x00000000006f3e59
- (_Bool)_highlightsBackgroundImage;	// IMP=0x00000000006f3e37
- (_Bool)_textNeedsCompositingModeWhenSelected;	// IMP=0x00000000006f3dbf
- (_Bool)_imageNeedsCompositingModeWhenSelected;	// IMP=0x00000000006f3d6b
- (void)_applyAppropriateTouchInsetsForButton;	// IMP=0x00000000006f3b08
- (void)_updateTitleView;	// IMP=0x00000000006f37e0
- (void)_updateTitleViewStyleEffectConfiguration;	// IMP=0x00000000006f37da
- (void)_beginTitleAnimation;	// IMP=0x00000000006f34f9
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000006f34e7
- (void)_layoutImageAndTitleViews;	// IMP=0x00000000006f327d
- (void)_updateImageView;	// IMP=0x00000000006f2df1
- (void)_layoutContentBackdropView;	// IMP=0x00000000006f2d1e
- (void)_updateContentBackdropView;	// IMP=0x00000000006f2a16
- (void)setVisualEffectViewEnabled:(_Bool)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000006f2938
- (void)setBlurEnabled:(_Bool)arg1;	// IMP=0x00000000006f28f4
- (_Bool)_wantsContentBackdropView;	// IMP=0x00000000006f28b7
- (id)contentBackdropView;	// IMP=0x00000000006f2707
- (void)_layoutBackgroundImageView;	// IMP=0x00000000006f2653
- (void)_updateBackgroundImageView;	// IMP=0x00000000006f2402
- (_Bool)_shouldUpdatePressedness;	// IMP=0x00000000006f23af
- (_Bool)_isExternalRoundedRectButtonWithPressednessState;	// IMP=0x00000000006f235c
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000006f218f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000006f2179
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000006f1f7a
- (struct CGSize)_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets *)arg5;	// IMP=0x00000000006f128b
- (double)_intrinsicWidthForAttributedTitle:(id)arg1;	// IMP=0x00000000006f125d
- (id)currentImageWithResolvedConfiguration;	// IMP=0x00000000006f1247
- (void)didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x00000000006f1202
- (void)tintColorDidChange;	// IMP=0x00000000006f1098
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000006f0f6c
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x00000000006f0e19
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;	// IMP=0x00000000006f0cdc
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;	// IMP=0x00000000006f0c21
- (CDStruct_c3b9c2ee)baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x00000000006f094e
- (id)_viewForBaselineLayout;	// IMP=0x00000000006f08d9
- (id)viewForLastBaselineLayout;	// IMP=0x00000000006f08c7
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000006f08b5
- (void)updateConstraints;	// IMP=0x00000000006ef998
- (void)_invalidateContentConstraints;	// IMP=0x00000000006ef95d
- (id)_titleOrImageViewForBaselineLayout;	// IMP=0x00000000006ef783
- (void)setContentHuggingPriorities:(struct CGSize)arg1;	// IMP=0x00000000006ef768
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x00000000006ef746
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x00000000006ef724
- (void)_deriveTitleRect:(struct CGRect *)arg1 imageRect:(struct CGRect *)arg2 fromContentRect:(struct CGRect)arg3 calculatePositionForEmptyTitle:(_Bool)arg4;	// IMP=0x00000000006ee356
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000006ee2ff
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000006ee2ca
- (_Bool)useTitleForSelectedIndicatorBounds;	// IMP=0x00000000006ee2a8
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(_Bool)arg2;	// IMP=0x00000000006ee153
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000006edff7
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000006edfc1
- (void)setContentVerticalAlignment:(long long)arg1;	// IMP=0x00000000006edfaf
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000006edf55
- (id)imageViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000006edeb2
- (id)titleViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000006ede34
- (id)backgroundViewCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000006ede26
- (void)setRole:(long long)arg1;	// IMP=0x00000000006ede20
- (void)setImageContentMode:(long long)arg1;	// IMP=0x00000000006ede0a
- (void)setShowsTouchWhenHighlighted:(_Bool)arg1;	// IMP=0x00000000006ede04
- (void)setContextMenuIsPrimary:(_Bool)arg1;	// IMP=0x00000000006eddfe
- (void)setOn:(_Bool)arg1;	// IMP=0x00000000006eddf8
- (_Bool)isOn;	// IMP=0x00000000006eddf0
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006edd0e
- (struct CGRect)highlightBounds;	// IMP=0x00000000006edab8
- (void)setTitleShadowOffset:(struct CGSize)arg1;	// IMP=0x00000000006ed9d7
- (struct CGSize)titleShadowOffset;	// IMP=0x00000000006ed9a9
- (void)setLineBreakMode:(long long)arg1;	// IMP=0x00000000006ed90f
- (long long)lineBreakMode;	// IMP=0x00000000006ed8ed
- (void)setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x00000000006ed756
- (id)font;	// IMP=0x00000000006ed740
- (_Bool)fontIsDefaultForIdiom;	// IMP=0x00000000006ed72a
- (_Bool)deferToLazyTitleFont;	// IMP=0x00000000006ed71c
- (void)cleanupForVisualProvider:(id)arg1;	// IMP=0x00000000006ed425
- (void)dealloc;	// IMP=0x00000000006ed3e1
- (id)encodableSubviews;	// IMP=0x00000000006ed391
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x00000000006ed27d
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000006ed277
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000006ed206
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000006ed176
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;	// IMP=0x00000000006ed170
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006ed16a
- (_Bool)adjustsFontForContentSizeCategory;	// IMP=0x00000000006ed154
- (void)setReversesTitleShadowWhenHighlighted:(_Bool)arg1;	// IMP=0x00000000006ed118
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006ed112
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006ed10c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

