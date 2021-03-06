//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKButton, GKChallenge, GKDashboardPlayerPhotoView, UILabel, UIView;

@interface GKChallengeDetailViewController
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    GKChallenge *_challenge;	// 24 = 0x18
    UIView *_iconView;	// 32 = 0x20
    UILabel *_categoryLabel;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_descriptionLabel;	// 56 = 0x38
    GKDashboardPlayerPhotoView *_playerAvatarView;	// 64 = 0x40
    UILabel *_challengeByNameLabel;	// 72 = 0x48
    GKButton *_playNowButton;	// 80 = 0x50
    GKButton *_declineButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000ecbf4
@property(retain, nonatomic) GKButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) GKButton *playNowButton; // @synthesize playNowButton=_playNowButton;
@property(retain, nonatomic) UILabel *challengeByNameLabel; // @synthesize challengeByNameLabel=_challengeByNameLabel;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // @synthesize playerAvatarView=_playerAvatarView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)updateIconViewWithSubView:(id)arg1;	// IMP=0x00000000000ec720
- (void)updateLeaderboardImage;	// IMP=0x00000000000ec2bc
- (void)challengeOK:(id)arg1;	// IMP=0x00000000000ec2a2
- (void)declinePressed:(id)arg1;	// IMP=0x00000000000ec204
- (void)playNowPressed:(id)arg1;	// IMP=0x00000000000ec178
- (void)donePressed:(id)arg1;	// IMP=0x00000000000ec13b
- (void)configureButtons;	// IMP=0x00000000000ebcae
- (void)configureForChallenge;	// IMP=0x00000000000eb7ff
- (id)title;	// IMP=0x00000000000eb7b7
- (void)viewDidLoad;	// IMP=0x00000000000eb536
- (id)initWithChallenge:(id)arg1;	// IMP=0x00000000000eb45a

@end

