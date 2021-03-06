//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerPhotoView, GKLeaderboardEntry, NSLayoutConstraint, UILabel, UIView;
@protocol GKLeaderboardScoreActionDelegate;

@interface GKLeaderboardScoreCell : UICollectionViewCell
{
    _Bool _shouldShowContextMenu;	// 8 = 0x8
    _Bool _isLocalPlayerScore;	// 9 = 0x9
    GKLeaderboardEntry *_entry;	// 16 = 0x10
    id <GKLeaderboardScoreActionDelegate> _delegate;	// 24 = 0x18
    GKDashboardPlayerPhotoView *_playerView;	// 32 = 0x20
    NSLayoutConstraint *_playerViewHeightConstraint;	// 40 = 0x28
    UILabel *_rankLabel;	// 48 = 0x30
    UILabel *_nameLabel;	// 56 = 0x38
    UILabel *_scoreLabel;	// 64 = 0x40
    UIView *_topLine;	// 72 = 0x48
    UIView *_monogramColorView;	// 80 = 0x50
    UIView *_backView;	// 88 = 0x58
}

+ (id)highRankNib;	// IMP=0x0000000000015c82
+ (id)lowRankNib;	// IMP=0x0000000000015c61
+ (struct CGSize)defaultSize;	// IMP=0x0000000000015c4b
- (void).cxx_destruct;	// IMP=0x000000000001757b
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *monogramColorView; // @synthesize monogramColorView=_monogramColorView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) _Bool isLocalPlayerScore; // @synthesize isLocalPlayerScore=_isLocalPlayerScore;
@property(retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // @synthesize playerViewHeightConstraint=_playerViewHeightConstraint;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool shouldShowContextMenu; // @synthesize shouldShowContextMenu=_shouldShowContextMenu;
@property(nonatomic) __weak id <GKLeaderboardScoreActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKLeaderboardEntry *entry; // @synthesize entry=_entry;
- (void)handleLongPress:(id)arg1;	// IMP=0x0000000000017323
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000016acd
- (_Bool)canBecomeFocused;	// IMP=0x0000000000016ac5
@property(nonatomic) _Bool lineVisible; // @dynamic lineVisible;
- (void)updateLayerMask:(id)arg1;	// IMP=0x00000000000168f2
- (void)setupForLeaderboardEntry:(id)arg1;	// IMP=0x0000000000016488
- (void)awakeFromNib;	// IMP=0x0000000000015ca3

@end

