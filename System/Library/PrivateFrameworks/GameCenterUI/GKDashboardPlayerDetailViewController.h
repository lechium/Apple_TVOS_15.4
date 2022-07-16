//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GKDashboardPlayerPhotoView, GKGameRecord, GKPlayer, NSDate, UIButton, UILabel;

@interface GKDashboardPlayerDetailViewController : UIViewController
{
    GKGameRecord *_gameRecord;	// 8 = 0x8
    GKPlayer *_player;	// 16 = 0x10
    NSDate *_lastPlayedDate;	// 24 = 0x18
    GKDashboardPlayerPhotoView *_playerView;	// 32 = 0x20
    UILabel *_nameLabel;	// 40 = 0x28
    UILabel *_lastPlayedLabel;	// 48 = 0x30
    UIButton *_firstButton;	// 56 = 0x38
    UIButton *_secondButton;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a17e0
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *lastPlayedLabel; // @synthesize lastPlayedLabel=_lastPlayedLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
- (void)friendRequest:(id)arg1;	// IMP=0x00000000000a16c1
- (void)challenge:(id)arg1;	// IMP=0x00000000000a16bb
- (void)play:(id)arg1;	// IMP=0x00000000000a16b5
- (id)preferredFocusEnvironments;	// IMP=0x00000000000a163c
- (void)viewDidLoad;	// IMP=0x00000000000a1298
- (id)initWithGameRecord:(id)arg1 player:(id)arg2 lastPlayedDate:(id)arg3;	// IMP=0x00000000000a11a5

@end
