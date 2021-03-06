//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKAchievement, GKAchievementIconView, UIButton, UILabel;

@interface GKDashboardAchievementDetailViewController
{
    GKAchievementIconView *_iconView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UILabel *_progressLabel;	// 32 = 0x20
    UILabel *_disabledLabel;	// 40 = 0x28
    UIButton *_firstButton;	// 48 = 0x30
    UIButton *_secondButton;	// 56 = 0x38
    GKAchievement *_achievement;	// 64 = 0x40
    GKAchievement *_localAchievement;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000768b0
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *disabledLabel; // @synthesize disabledLabel=_disabledLabel;
@property(nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
- (void)share:(id)arg1;	// IMP=0x00000000000766d3
- (void)challenge:(id)arg1;	// IMP=0x000000000007658c
- (void)configureForAchievements;	// IMP=0x0000000000075a09
- (id)preferredFocusEnvironments;	// IMP=0x0000000000075990
- (void)viewDidLoad;	// IMP=0x00000000000758e5
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2;	// IMP=0x00000000000757dd

@end

