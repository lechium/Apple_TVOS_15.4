//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSLayoutConstraint, NSString, PXDisplayAssetUIView, PXStoryModel, PXStoryRecipeManager, PXStoryTVInfoPanelButton, PXStoryTVInfoPanelViewConfiguration, PXStoryViewModel, PXUpdater, UIFocusGuide, UIImageView, UILabel, UIVisualEffectView;

@interface PXStoryTVInfoPanelView : UIView <PXChangeObserver, PXGReusableView>
{
    UIFocusGuide *_focusGuide;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
    PXDisplayAssetUIView *_assetView;	// 24 = 0x18
    PXStoryTVInfoPanelButton *_infoButton;	// 32 = 0x20
    UIView *_assetContainerView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_musicSymbolView;	// 56 = 0x38
    UILabel *_musicLabel;	// 64 = 0x40
    UIImageView *_colorGradeSymbolView;	// 72 = 0x48
    UILabel *_colorGradeLabel;	// 80 = 0x50
    UILabel *_footerLabel;	// 88 = 0x58
    NSLayoutConstraint *_panelMarginConstraintLeading;	// 96 = 0x60
    NSLayoutConstraint *_panelMarginConstraintTrailing;	// 104 = 0x68
    NSLayoutConstraint *_panelMarginConstraintBottom;	// 112 = 0x70
    NSLayoutConstraint *_panelHeightConstraint;	// 120 = 0x78
    NSLayoutConstraint *_infoButtonLeadingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_infoButtonBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_infoButtonHeightConstraint;	// 144 = 0x90
    NSLayoutConstraint *_assetContainerConstraintTop;	// 152 = 0x98
    NSLayoutConstraint *_assetContainerConstraintBottom;	// 160 = 0xa0
    NSLayoutConstraint *_assetContainerConstraintLeading;	// 168 = 0xa8
    NSLayoutConstraint *_assetContainerConstraintAspectRatio;	// 176 = 0xb0
    NSLayoutConstraint *_titleLabelBaselineConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_musicSymbolCenterConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_colorGradeSymbolCenterConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_musicLabelLeadingConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_musicLabelTrailingConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_titleToMetadataBaselineConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_musicToColorGradeBaselineConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_colorGradeLabelLeadingConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_colorGradeLabelTrailingConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_footerLabelBaselineConstraint;	// 256 = 0x100
    NSLayoutConstraint *_titleLabelLeadingConstraint;	// 264 = 0x108
    NSLayoutConstraint *_footerLabelLeadingConstraint;	// 272 = 0x110
    NSLayoutConstraint *_titleLabelTrailingConstraint;	// 280 = 0x118
    NSLayoutConstraint *_footerLabelTrailingConstraint;	// 288 = 0x120
    PXStoryTVInfoPanelViewConfiguration *_userData;	// 296 = 0x128
    PXUpdater *_updater;	// 304 = 0x130
    PXStoryViewModel *_viewModel;	// 312 = 0x138
    PXStoryModel *_mainModel;	// 320 = 0x140
    PXStoryRecipeManager *_recipeManager;	// 328 = 0x148
    struct CGRect _clippingRect;	// 336 = 0x150
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005d4ead
- (void).cxx_destruct;	// IMP=0x00000000005d4930
@property(retain, nonatomic) PXStoryRecipeManager *recipeManager; // @synthesize recipeManager=_recipeManager;
@property(retain, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(retain, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(copy, nonatomic) PXStoryTVInfoPanelViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (struct CGPoint)convertHostedChildCenter:(struct CGPoint)arg1 fromGlobalLayer:(id)arg2;	// IMP=0x00000000005d4801
- (void)addHostedLayer:(id)arg1;	// IMP=0x00000000005d478f
- (void)addHostedView:(id)arg1;	// IMP=0x00000000005d477d
- (void)prepareForReuse;	// IMP=0x00000000005d474d
- (void)becomeReusable;	// IMP=0x00000000005d4747
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005d450e
- (void)_updateAutolayoutConstraints;	// IMP=0x00000000005d3d35
- (void)_invalidateAutolayoutConstraints;	// IMP=0x00000000005d3cf1
- (void)_updateCompositingFilters;	// IMP=0x00000000005d3b7b
- (void)_invalidateCompositingFilters;	// IMP=0x00000000005d3b37
- (void)_updateContentAlpha;	// IMP=0x00000000005d3a30
- (void)_invalidateContentAlpha;	// IMP=0x00000000005d39ec
- (void)_updateFooterLabel;	// IMP=0x00000000005d3830
- (void)_invalidateFooterLabel;	// IMP=0x00000000005d37ec
- (void)_updateColorGradeLabel;	// IMP=0x00000000005d35ad
- (void)_invalidateColorGradeLabel;	// IMP=0x00000000005d3569
- (void)_updateMusicLabel;	// IMP=0x00000000005d3307
- (void)_invalidateMusicLabel;	// IMP=0x00000000005d32c3
- (void)_updateTitleLabel;	// IMP=0x00000000005d3076
- (void)_invalidateTitleLabel;	// IMP=0x00000000005d3032
- (void)_updateKeyAsset;	// IMP=0x00000000005d2e7d
- (void)_invalidateKeyAsset;	// IMP=0x00000000005d2e39
- (void)_updateRecipeManager;	// IMP=0x00000000005d2dca
- (void)_invalidateRecipeManager;	// IMP=0x00000000005d2d86
- (void)_updateMainModel;	// IMP=0x00000000005d2cf0
- (void)_invalidateMainModel;	// IMP=0x00000000005d2cac
- (void)_setNeedsUpdate;	// IMP=0x00000000005d2c9a
- (void)_dismiss;	// IMP=0x00000000005d2c56
- (void)_handleSwipeUp:(id)arg1;	// IMP=0x00000000005d2c1a
- (void)_handleUpArrow:(id)arg1;	// IMP=0x00000000005d2bde
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00000000005d2ba2
- (void)_reuseAssetView;	// IMP=0x00000000005d2b38
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000005d2af7
- (void)layoutSubviews;	// IMP=0x00000000005d2a8c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000005d2961
- (void)dealloc;	// IMP=0x00000000005d2923
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005d0db5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
@property(readonly) Class superclass;

@end

