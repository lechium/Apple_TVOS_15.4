//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel, UIStackView, UIVisualEffectView;

@interface GKLeaderboardMetadataView : UIView
{
    UILabel *_rank;	// 8 = 0x8
    UILabel *_title;	// 16 = 0x10
    UILabel *_footnote;	// 24 = 0x18
    UIStackView *_container;	// 32 = 0x20
    NSLayoutConstraint *_containerRightMargin;	// 40 = 0x28
    UIStackView *_header;	// 48 = 0x30
    NSLayoutConstraint *_headerHeight;	// 56 = 0x38
    UIView *_avatarContainer1;	// 64 = 0x40
    UIView *_avatarContainer2;	// 72 = 0x48
    UIView *_avatarContainer3;	// 80 = 0x50
    UIStackView *_body;	// 88 = 0x58
    UIVisualEffectView *_vibrancyView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000027775
@property(retain, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(retain, nonatomic) UIStackView *body; // @synthesize body=_body;
@property(retain, nonatomic) UIView *avatarContainer3; // @synthesize avatarContainer3=_avatarContainer3;
@property(retain, nonatomic) UIView *avatarContainer2; // @synthesize avatarContainer2=_avatarContainer2;
@property(retain, nonatomic) UIView *avatarContainer1; // @synthesize avatarContainer1=_avatarContainer1;
@property(retain, nonatomic) NSLayoutConstraint *headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIStackView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSLayoutConstraint *containerRightMargin; // @synthesize containerRightMargin=_containerRightMargin;
@property(retain, nonatomic) UIStackView *container; // @synthesize container=_container;
@property(retain, nonatomic) UILabel *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *rank; // @synthesize rank=_rank;
- (void)layoutSubviews;	// IMP=0x00000000000273ca
- (void)stackVertically:(_Bool)arg1;	// IMP=0x000000000002729c
- (void)updateAvatarContainer:(id)arg1 withPlayer:(id)arg2;	// IMP=0x0000000000026f9d
- (void)configureFootnote:(id)arg1 altFootnote:(id)arg2;	// IMP=0x0000000000026cc7
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4;	// IMP=0x000000000002696f
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3;	// IMP=0x000000000002695a
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4 vibrant:(_Bool)arg5;	// IMP=0x0000000000026769
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 vibrant:(_Bool)arg4;	// IMP=0x0000000000026747
- (void)configureVibrancy:(_Bool)arg1;	// IMP=0x00000000000266b8
- (void)awakeFromNib;	// IMP=0x0000000000025f94

@end

