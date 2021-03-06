//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXCuratedLibraryOverlayButtonConfiguration, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface PXCuratedLibraryOverlayButton : UIButton <PXGReusableView>
{
    _Bool _isSizeCalculationButton;	// 8 = 0x8
    PXCuratedLibraryOverlayButtonConfiguration *_userData;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UIView *_customSolidBackgroundView;	// 40 = 0x28
    UIImageView *_customIconImageView;	// 48 = 0x30
    UILabel *_customTitleLabel;	// 56 = 0x38
    UILabel *_customCaptionLabel;	// 64 = 0x40
    NSString *_axLabel;	// 72 = 0x48
    struct CGRect _clippingRect;	// 80 = 0x50
}

+ (id)defaultTitleColor;	// IMP=0x00000000005086c7
+ (id)defaultTitleFont;	// IMP=0x00000000005083a5
+ (void)_getSize:(out struct CGSize *)arg1 titleFrame:(out struct CGRect *)arg2 captionFrame:(out struct CGRect *)arg3 iconFrame:(out struct CGRect *)arg4 forConfiguration:(id)arg5 title:(id)arg6;	// IMP=0x0000000000507226
+ (struct CGSize)sizeWithConfiguration:(id)arg1;	// IMP=0x0000000000506f11
+ (struct CGSize)_sizeOfTitle:(id)arg1 withFont:(id)arg2;	// IMP=0x0000000000506d1d
+ (id)roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;	// IMP=0x000000000050694c
+ (id)buttonSizeCache;	// IMP=0x000000000050691c
+ (id)titleSizeCache;	// IMP=0x00000000005068ec
+ (_Bool)usesButtonSystem;	// IMP=0x00000000005068e4
- (void).cxx_destruct;	// IMP=0x00000000005066b3
@property(retain, nonatomic) NSString *axLabel; // @synthesize axLabel=_axLabel;
@property(retain, nonatomic) UILabel *customCaptionLabel; // @synthesize customCaptionLabel=_customCaptionLabel;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) UIImageView *customIconImageView; // @synthesize customIconImageView=_customIconImageView;
@property(retain, nonatomic) UIView *customSolidBackgroundView; // @synthesize customSolidBackgroundView=_customSolidBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool isSizeCalculationButton; // @synthesize isSizeCalculationButton=_isSizeCalculationButton;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData; // @synthesize userData=_userData;
- (void)_updateEffectView;	// IMP=0x000000000050654f
- (void)_updateEffectViewBackgroundStyle;	// IMP=0x0000000000506549
- (void)_platformSpecificViewSetup;	// IMP=0x0000000000506543
- (void)_updateBackgroundView;	// IMP=0x000000000050653d
- (void)_accessibilitySettingsChanged:(id)arg1;	// IMP=0x00000000005064f8
- (void)_performMenuAction:(id)arg1;	// IMP=0x0000000000506103
- (void)_performAction:(id)arg1;	// IMP=0x0000000000505fcc
- (void)_updateButtonWithConfiguration:(id)arg1;	// IMP=0x0000000000504f13
- (void)_updateButtonSystemWithConfiguration:(id)arg1;	// IMP=0x0000000000504e0f
- (void)_setupViews;	// IMP=0x0000000000504bf1
- (void)prepareForReuse;	// IMP=0x0000000000504beb
- (void)becomeReusable;	// IMP=0x0000000000504be5
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000504aaa
- (void)layoutSubviews;	// IMP=0x00000000005047aa
- (id)description;	// IMP=0x000000000050458c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005044d5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005043e6

// Remaining properties
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;

@end

