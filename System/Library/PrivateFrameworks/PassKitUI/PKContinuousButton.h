//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, NSMutableSet, UIActivityIndicatorView, UIColor, UIImage, _UIBackdropView;

@interface PKContinuousButton : UIButton
{
    CDStruct_e6a35582 _configuration;	// 8 = 0x8
    UIImage *_image;	// 48 = 0x30
    NSMutableSet *_disabledImageStates;	// 56 = 0x38
    UIColor *_overrideTitleColor;	// 64 = 0x40
    CAFilter *_highlightFilter;	// 72 = 0x48
    UIColor *_normalInputColor;	// 80 = 0x50
    UIColor *_highlightInputColor;	// 88 = 0x58
    UIColor *_selectedInputColor;	// 96 = 0x60
    UIColor *_disabledInputColor;	// 104 = 0x68
    UIColor *_appliedInputColor;	// 112 = 0x70
    CAShapeLayer *_layer;	// 120 = 0x78
    _UIBackdropView *_backdropView;	// 128 = 0x80
    long long _backdropStyle;	// 136 = 0x88
    _Bool _updatingBackdropSettings;	// 144 = 0x90
    _Bool _highlighted;	// 145 = 0x91
    _Bool _selected;	// 146 = 0x92
    _Bool _enabled;	// 147 = 0x93
    struct CGSize _boundsSize;	// 152 = 0x98
    UIActivityIndicatorView *_activityIndicatorView;	// 168 = 0xa8
    UIColor *_activityIndicatorColor;	// 176 = 0xb0
    _Bool _showSpinner;	// 184 = 0xb8
    _Bool _blurDisabled;	// 185 = 0xb9
}

+ (id)_filterInputColorForEffect:(long long)arg1;	// IMP=0x0000000000389355
+ (Class)layerClass;	// IMP=0x0000000000389344
- (void).cxx_destruct;	// IMP=0x000000000038afda
@property(nonatomic) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
- (void)_updateFilter;	// IMP=0x000000000038ab0b
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000038aab2
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000038aa59
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000038aa00
- (void)_createHighlightFilterIfNecessary;	// IMP=0x000000000038a8c8
- (void)_updateTitleColor;	// IMP=0x000000000038a690
- (void)_updateColor;	// IMP=0x000000000038a3c9
- (void)_accessibilitySettingsDidChange:(id)arg1;	// IMP=0x000000000038a3b7
- (void)_updateBackdropSettings;	// IMP=0x000000000038a31e
- (void)updateImageView;	// IMP=0x000000000038a028
- (void)setImageEnabled:(_Bool)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000389f35
- (void)updateWithImage:(id)arg1;	// IMP=0x0000000000389eed
- (void)updateActivityIndicatorColorWithColor:(id)arg1;	// IMP=0x0000000000389e7b
- (void)updateTitleColorWithColor:(id)arg1;	// IMP=0x0000000000389e35
- (void)layoutSubviews;	// IMP=0x00000000003899a0
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000038995f
- (void)tintColorDidChange;	// IMP=0x000000000038991e
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000003898ac
- (void)dealloc;	// IMP=0x0000000000389837
- (id)initWithConfiguration:(CDStruct_e6a35582)arg1;	// IMP=0x00000000003894e6
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;	// IMP=0x0000000000389499
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000389445
- (id)init;	// IMP=0x000000000038942b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038941d
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x000000000000c8a1
- (id)pk_childrenForAppearance;	// IMP=0x000000000000c894

@end
