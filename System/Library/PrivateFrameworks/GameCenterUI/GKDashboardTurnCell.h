//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface GKDashboardTurnCell
{
    long long _displayIndex;	// 8 = 0x8
    UILabel *_dateLabel;	// 16 = 0x10
    UILabel *_turnLabel;	// 24 = 0x18
    UIImageView *_actionIndicatorView;	// 32 = 0x20
    NSLayoutConstraint *_dateToNameConstraint;	// 40 = 0x28
    NSLayoutConstraint *_turnToNameConstraint;	// 48 = 0x30
    UIColor *_dateColor;	// 56 = 0x38
    UIColor *_turnColor;	// 64 = 0x40
    double _dateToNameConstant;	// 72 = 0x48
    double _turnToNameConstant;	// 80 = 0x50
}

+ (struct CGSize)defaultSizeForTurnDetail;	// IMP=0x00000000000b2caa
+ (struct CGSize)defaultSize;	// IMP=0x00000000000b2c94
- (void).cxx_destruct;	// IMP=0x00000000000b3b73
@property(nonatomic) double turnToNameConstant; // @synthesize turnToNameConstant=_turnToNameConstant;
@property(nonatomic) double dateToNameConstant; // @synthesize dateToNameConstant=_dateToNameConstant;
@property(retain, nonatomic) UIColor *turnColor; // @synthesize turnColor=_turnColor;
@property(retain, nonatomic) UIColor *dateColor; // @synthesize dateColor=_dateColor;
@property(nonatomic) NSLayoutConstraint *turnToNameConstraint; // @synthesize turnToNameConstraint=_turnToNameConstraint;
@property(nonatomic) NSLayoutConstraint *dateToNameConstraint; // @synthesize dateToNameConstraint=_dateToNameConstraint;
@property(nonatomic) UIImageView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(nonatomic) UILabel *turnLabel; // @synthesize turnLabel=_turnLabel;
@property(nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) long long displayIndex; // @synthesize displayIndex=_displayIndex;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000b37e9
- (void)setOnDarkBackground:(_Bool)arg1;	// IMP=0x00000000000b36fb
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;	// IMP=0x00000000000b32ec
- (void)configureForMatch:(id)arg1;	// IMP=0x00000000000b2ce9
- (_Bool)wantsLocalPlayerAction:(id)arg1;	// IMP=0x00000000000b2cc0
- (void)awakeFromNib;	// IMP=0x00000000000b2acc

@end

