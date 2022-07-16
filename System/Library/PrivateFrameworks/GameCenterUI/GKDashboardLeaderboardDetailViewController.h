//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKDashboardPlayerPhotoView, GKLeaderboard, GKScore, UIButton, UILabel;

@interface GKDashboardLeaderboardDetailViewController
{
    GKDashboardPlayerPhotoView *_playerView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UILabel *_earnedOnLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIButton *_firstButton;	// 48 = 0x30
    UIButton *_secondButton;	// 56 = 0x38
    UIButton *_reportProblemButton;	// 64 = 0x40
    GKLeaderboard *_leaderboard;	// 72 = 0x48
    GKScore *_score;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000028a13
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(nonatomic) UIButton *reportProblemButton; // @synthesize reportProblemButton=_reportProblemButton;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) UILabel *earnedOnLabel; // @synthesize earnedOnLabel=_earnedOnLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
- (void)report:(id)arg1;	// IMP=0x0000000000028862
- (void)share:(id)arg1;	// IMP=0x00000000000285c8
- (void)challenge:(id)arg1;	// IMP=0x0000000000028325
- (void)configureForScore;	// IMP=0x0000000000027cb1
- (id)preferredFocusEnvironments;	// IMP=0x0000000000027c38
- (void)viewDidLoad;	// IMP=0x000000000002795b
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;	// IMP=0x0000000000027850

@end
