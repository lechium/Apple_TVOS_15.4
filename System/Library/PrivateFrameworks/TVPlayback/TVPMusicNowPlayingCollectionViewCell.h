//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSOperation, NSString, NSUUID, TVPMusicBarsView, UIImage, UILabel, UIMotionEffectGroup, UIStackView, UIView, _UIStackedImageContainerView;
@protocol TVPMusicNowPlayingImage;

@interface TVPMusicNowPlayingCollectionViewCell : UICollectionViewCell
{
    UIView *_videoContainerView;	// 8 = 0x8
    id <TVPMusicNowPlayingImage> _image;	// 16 = 0x10
    UIStackView *_headerStackView;	// 24 = 0x18
    UILabel *_songTitleLabel;	// 32 = 0x20
    UILabel *_artistNameLabel;	// 40 = 0x28
    UILabel *_detailDescriptionLabel;	// 48 = 0x30
    UIView *_bottomAccessoryContainerView;	// 56 = 0x38
    UIMotionEffectGroup *_stackMotionEffects;	// 64 = 0x40
    _Bool _singleCoverMode;	// 72 = 0x48
    UIView *_videoView;	// 80 = 0x50
    UILabel *_explicitIndicatorLabel;	// 88 = 0x58
    TVPMusicBarsView *_bottomAccessoryView;	// 96 = 0x60
    CDUnknownBlockType _controlItemProvider;	// 104 = 0x68
    long long _musicBarStyle;	// 112 = 0x70
    _UIStackedImageContainerView *_imageView;	// 120 = 0x78
    UIImage *_placeholderImage;	// 128 = 0x80
    UIView *_footerView;	// 136 = 0x88
    UIStackView *_controlsStackView;	// 144 = 0x90
    NSLayoutConstraint *_footerViewTopConstraint;	// 152 = 0x98
    NSLayoutConstraint *_headerFirstBaselineConstraint;	// 160 = 0xa0
    NSArray *_controlItems;	// 168 = 0xa8
    NSUUID *_controlItemRequestToken;	// 176 = 0xb0
    NSOperation *_reloadControlsOperation;	// 184 = 0xb8
    struct TVPMusicNowPlayingCollectionViewCellPlaceholder _placeholder;	// 192 = 0xc0
}

+ (id)_textShadowColor;	// IMP=0x00000000000de4d6
- (void).cxx_destruct;	// IMP=0x00000000000e2a9b
@property(retain, nonatomic) NSUUID *controlItemRequestToken; // @synthesize controlItemRequestToken=_controlItemRequestToken;
@property(copy, nonatomic) NSArray *controlItems; // @synthesize controlItems=_controlItems;
@property(nonatomic, getter=isSingleCoverMode) _Bool singleCoverMode; // @synthesize singleCoverMode=_singleCoverMode;
@property(retain, nonatomic) NSLayoutConstraint *headerFirstBaselineConstraint; // @synthesize headerFirstBaselineConstraint=_headerFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footerViewTopConstraint; // @synthesize footerViewTopConstraint=_footerViewTopConstraint;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) _UIStackedImageContainerView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long musicBarStyle; // @synthesize musicBarStyle=_musicBarStyle;
@property(copy, nonatomic) CDUnknownBlockType controlItemProvider; // @synthesize controlItemProvider=_controlItemProvider;
@property(retain, nonatomic) TVPMusicBarsView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(readonly, nonatomic) UILabel *explicitIndicatorLabel; // @synthesize explicitIndicatorLabel=_explicitIndicatorLabel;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) struct TVPMusicNowPlayingCollectionViewCellPlaceholder placeholder; // @synthesize placeholder=_placeholder;
- (void)_applyShadowStyleToLabel:(id)arg1;	// IMP=0x00000000000e2869
- (id)_addSubheadLabelWithFont:(id)arg1;	// IMP=0x00000000000e27dc
- (void)_updateInterfaceForTraitCollection:(id)arg1;	// IMP=0x00000000000e2291
- (id)_placeholderImageForPlaceholder:(struct TVPMusicNowPlayingCollectionViewCellPlaceholder)arg1;	// IMP=0x00000000000e226c
- (_Bool)hideArtwork;	// IMP=0x00000000000e2178
- (void)setHideArtwork:(_Bool)arg1;	// IMP=0x00000000000e215b
- (_Bool)canBecomeFocused;	// IMP=0x00000000000e2153
- (void)_updateSubtitleLabel;	// IMP=0x00000000000e1c77
- (void)_updateTitleLabel;	// IMP=0x00000000000e1b08
@property(copy, nonatomic) NSString *detailDescription;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
- (void)setVideoView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e187f
- (void)setImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e14f0
- (void)setImage:(id)arg1;	// IMP=0x00000000000e14dc
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000e1369
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000e127d
- (void)_reduceTransparencyStatusDidChange;	// IMP=0x00000000000e1231
- (void)_updateLabelPositionWithAnimationCoordinator:(id)arg1;	// IMP=0x00000000000e0dd0
- (void)_uninstallMotionEffects;	// IMP=0x00000000000e0d58
- (void)_installMotionEffects;	// IMP=0x00000000000e0b9f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000e06ba
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000000e02d4
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000000e00b7
- (void)_updateStackPressedAnimated:(_Bool)arg1 withFocusAnimationCoordinator:(id)arg2;	// IMP=0x00000000000dffdc
- (void)_updateStackFocusAnimated:(_Bool)arg1 withFocusAnimationCoordinator:(id)arg2;	// IMP=0x00000000000dff1b
- (void)_replaceControlItems:(id)arg1;	// IMP=0x00000000000dfc0d
- (void)_reloadControlItems;	// IMP=0x00000000000df9f6
- (void)reloadControlItems;	// IMP=0x00000000000df9e4
@property(readonly, nonatomic) _Bool showsFocusEffects;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000de546

@end

