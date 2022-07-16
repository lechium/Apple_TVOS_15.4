//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, PSSoftwareUpdateAnimatedIcon, PSWebContainerView, UIImage, UIImageView, UILabel, UIProgressView;

@interface PSSoftwareUpdateTitleCell
{
    int _progressStyle;	// 120 = 0x78
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;	// 128 = 0x80
    _Bool _animatingGearView;	// 136 = 0x88
    UIImageView *_gearBackgroundImageView;	// 144 = 0x90
    UIProgressView *_progressBar;	// 152 = 0x98
    UILabel *_updateStatusLabel;	// 160 = 0xa0
    PSWebContainerView *_releaseNotesSummaryView;	// 168 = 0xa8
    NSLayoutConstraint *_updateStatusLabelVerticalConstraint;	// 176 = 0xb0
}

+ (long long)cellStyle;	// IMP=0x00000000000a411b
- (void).cxx_destruct;	// IMP=0x00000000000a6da2
@property(retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint; // @synthesize updateStatusLabelVerticalConstraint=_updateStatusLabelVerticalConstraint;
@property(readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property(readonly, nonatomic) UILabel *updateStatusLabel; // @synthesize updateStatusLabel=_updateStatusLabel;
@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *gearBackgroundImageView; // @synthesize gearBackgroundImageView=_gearBackgroundImageView;
- (id)newUpdateStatusLabel;	// IMP=0x00000000000a6c61
- (id)newProgressBar;	// IMP=0x00000000000a6ad3
- (id)newGearBackgroundImageView;	// IMP=0x00000000000a6a2e
@property(readonly, nonatomic) UIImage *gearBackgroundImage;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000a6907
- (void)setAnimatingGearView:(_Bool)arg1;	// IMP=0x00000000000a68ea
- (void)setStatusMessage:(id)arg1;	// IMP=0x00000000000a68cd
- (void)setPublisherText:(id)arg1;	// IMP=0x00000000000a685b
- (void)setUpdateName:(id)arg1;	// IMP=0x00000000000a651d
- (void)setReleaseNotesSummary:(id)arg1;	// IMP=0x00000000000a6500
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a64df
- (void)setProgress:(float)arg1;	// IMP=0x00000000000a64c0
@property(nonatomic) int progressDisplayStyle;
- (void)updateProgressTintColor;	// IMP=0x00000000000a61c7
- (void)configureProgressBar:(_Bool)arg1;	// IMP=0x00000000000a5ec0
- (void)configureReleaseNotesSummaryView:(_Bool)arg1;	// IMP=0x00000000000a5b80
- (void)configureUpdateStatusLabel:(_Bool)arg1;	// IMP=0x00000000000a58df
- (void)configurePublisherLabel:(_Bool)arg1;	// IMP=0x00000000000a54e9
- (void)configureUpdateNameLabel:(_Bool)arg1;	// IMP=0x00000000000a50fe
- (void)createGearIconConstraints;	// IMP=0x00000000000a4e6e
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize)arg1;	// IMP=0x00000000000a4d0c
- (void)configureImageView;	// IMP=0x00000000000a4c99
- (void)setupViews;	// IMP=0x00000000000a4af5
- (void)layoutSubviews;	// IMP=0x00000000000a4a34
- (double)preferredHeightWithTable:(id)arg1;	// IMP=0x00000000000a4322
- (void)updateConstraints;	// IMP=0x00000000000a4189
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000a4126

@end

