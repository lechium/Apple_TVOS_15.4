//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, NSMutableDictionary, NSString, UIImageView, UILabel, UIStackView, _UIFloatingContentView;

@interface TVSMExpanseAlertButton : UIControl
{
    NSString *_title;	// 8 = 0x8
    NSString *_systemImageName;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_accessoryText;	// 32 = 0x20
    _UIFloatingContentView *_platterView;	// 40 = 0x28
    UIStackView *_rootStackView;	// 48 = 0x30
    UIImageView *_iconView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UILabel *_subtitleLabel;	// 72 = 0x48
    UILabel *_accessoryTextLabel;	// 80 = 0x50
    NSLayoutConstraint *_platterViewTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_platterViewBottomConstraint;	// 96 = 0x60
    NSLayoutConstraint *_platterViewLeadingConstraint;	// 104 = 0x68
    NSLayoutConstraint *_platterViewTrailingConstraint;	// 112 = 0x70
    NSMutableDictionary *_primaryContentColorMap;	// 120 = 0x78
    NSMutableDictionary *_secondaryContentColorMap;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000008150
@property(retain, nonatomic) NSMutableDictionary *secondaryContentColorMap; // @synthesize secondaryContentColorMap=_secondaryContentColorMap;
@property(retain, nonatomic) NSMutableDictionary *primaryContentColorMap; // @synthesize primaryContentColorMap=_primaryContentColorMap;
@property(retain, nonatomic) NSLayoutConstraint *platterViewTrailingConstraint; // @synthesize platterViewTrailingConstraint=_platterViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterViewLeadingConstraint; // @synthesize platterViewLeadingConstraint=_platterViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterViewBottomConstraint; // @synthesize platterViewBottomConstraint=_platterViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterViewTopConstraint; // @synthesize platterViewTopConstraint=_platterViewTopConstraint;
@property(retain, nonatomic) UILabel *accessoryTextLabel; // @synthesize accessoryTextLabel=_accessoryTextLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIStackView *rootStackView; // @synthesize rootStackView=_rootStackView;
@property(retain, nonatomic) _UIFloatingContentView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setPlatterColor:(id)arg1 forControlState:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000007b10
- (void)setSecondaryContentColor:(id)arg1 forControlState:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000007990
- (void)setPrimaryContentColor:(id)arg1 forControlState:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000007810
- (void)setAccessoryText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007740
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007610
- (void)setSystemImageName:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000074e0
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000073b0
- (void)updateStateAnimated:(_Bool)arg1;	// IMP=0x0000000000006ba0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000006a20
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000006950
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000068c0
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000006820
- (_Bool)canBecomeFocused;	// IMP=0x0000000000006800
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 systemImageName:(id)arg3 subtitle:(id)arg4 accessoryText:(id)arg5;	// IMP=0x00000000000052e0
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 systemImageName:(id)arg3;	// IMP=0x00000000000051f0

@end

