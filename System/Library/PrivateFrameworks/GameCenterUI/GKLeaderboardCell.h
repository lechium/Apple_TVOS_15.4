//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class GKLeaderboard, GKLeaderboardSet, NSArray, NSLayoutConstraint, NSString, UIColor, UIImageView, UILabel, UIView, UIVisualEffectView, _UIFloatingContentView;

@interface GKLeaderboardCell : UICollectionViewCell
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_imageName;	// 16 = 0x10
    GKLeaderboardSet *_leaderboardSet;	// 24 = 0x18
    GKLeaderboard *_leaderboard;	// 32 = 0x20
    UIImageView *_iconView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_countLabel;	// 56 = 0x38
    UIView *_overlayView;	// 64 = 0x40
    NSLayoutConstraint *_iconContainerHeight;	// 72 = 0x48
    NSLayoutConstraint *_minimumIconHeight;	// 80 = 0x50
    UIImageView *_fallbackIconView;	// 88 = 0x58
    UIView *_containerView;	// 96 = 0x60
    NSLayoutConstraint *_stackViewToCountLabelConstraint;	// 104 = 0x68
    double _stackViewToCountConstant;	// 112 = 0x70
    _UIFloatingContentView *_floatingView;	// 120 = 0x78
    UIColor *_titleLabelColor;	// 128 = 0x80
    UIVisualEffectView *_effectView;	// 136 = 0x88
    NSArray *_customBackgroundBlur;	// 144 = 0x90
    NSString *_dataToken;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000cacf2
@property(retain, nonatomic) NSString *dataToken; // @synthesize dataToken=_dataToken;
@property(retain, nonatomic) NSArray *customBackgroundBlur; // @synthesize customBackgroundBlur=_customBackgroundBlur;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) double stackViewToCountConstant; // @synthesize stackViewToCountConstant=_stackViewToCountConstant;
@property(retain, nonatomic) NSLayoutConstraint *stackViewToCountLabelConstraint; // @synthesize stackViewToCountLabelConstraint=_stackViewToCountLabelConstraint;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *fallbackIconView; // @synthesize fallbackIconView=_fallbackIconView;
@property(retain, nonatomic) NSLayoutConstraint *minimumIconHeight; // @synthesize minimumIconHeight=_minimumIconHeight;
@property(retain, nonatomic) NSLayoutConstraint *iconContainerHeight; // @synthesize iconContainerHeight=_iconContainerHeight;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ca78b
- (_Bool)canBecomeFocused;	// IMP=0x00000000000ca783
- (void)updateOverlay;	// IMP=0x00000000000ca6c6
- (void)updateImage;	// IMP=0x00000000000ca146
- (void)updateRank;	// IMP=0x00000000000c9855
- (void)updateSummary;	// IMP=0x00000000000c95dd
- (void)updateLayout;	// IMP=0x00000000000c9557
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)setupFallbackIcon;	// IMP=0x00000000000c9109
- (void)addVisualEffect;	// IMP=0x00000000000c8fc1
- (void)configureFloatingContentView;	// IMP=0x00000000000c8e40
- (void)awakeFromNib;	// IMP=0x00000000000c89e1

@end

