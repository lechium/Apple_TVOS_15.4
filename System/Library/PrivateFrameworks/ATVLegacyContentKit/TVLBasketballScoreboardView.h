//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/TVColumnRowViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/TVColumnRowViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, TVImageView, TVLColumnRowView, UILabel;

@interface TVLBasketballScoreboardView : UIView <TVColumnRowViewDataSource, TVColumnRowViewDelegate>
{
    UILabel *_clockLabel;	// 8 = 0x8
    UILabel *_gameStateLabel;	// 16 = 0x10
    UILabel *_homeNameLabel;	// 24 = 0x18
    UILabel *_awayNameLabel;	// 32 = 0x20
    UILabel *_homeScoreLabel;	// 40 = 0x28
    UILabel *_awayScoreLabel;	// 48 = 0x30
    TVImageView *_homeLogoView;	// 56 = 0x38
    TVImageView *_awayLogoView;	// 64 = 0x40
    UILabel *_homeScoreboardLabel;	// 72 = 0x48
    UILabel *_awayScoreboardLabel;	// 80 = 0x50
    TVLColumnRowView *_scoreboardTableView;	// 88 = 0x58
    NSMutableDictionary *_scoreboardHeaderTitles;	// 96 = 0x60
    NSMutableDictionary *_scoreboardHomeRowValues;	// 104 = 0x68
    NSMutableDictionary *_scoreboardAwayRowValues;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000c0185
@property(retain, nonatomic) NSMutableDictionary *scoreboardAwayRowValues; // @synthesize scoreboardAwayRowValues=_scoreboardAwayRowValues;
@property(retain, nonatomic) NSMutableDictionary *scoreboardHomeRowValues; // @synthesize scoreboardHomeRowValues=_scoreboardHomeRowValues;
@property(retain, nonatomic) NSMutableDictionary *scoreboardHeaderTitles; // @synthesize scoreboardHeaderTitles=_scoreboardHeaderTitles;
@property(retain, nonatomic) TVLColumnRowView *scoreboardTableView; // @synthesize scoreboardTableView=_scoreboardTableView;
@property(retain, nonatomic) UILabel *awayScoreboardLabel; // @synthesize awayScoreboardLabel=_awayScoreboardLabel;
@property(retain, nonatomic) UILabel *homeScoreboardLabel; // @synthesize homeScoreboardLabel=_homeScoreboardLabel;
@property(retain, nonatomic) TVImageView *awayLogoView; // @synthesize awayLogoView=_awayLogoView;
@property(retain, nonatomic) TVImageView *homeLogoView; // @synthesize homeLogoView=_homeLogoView;
@property(retain, nonatomic) UILabel *awayScoreLabel; // @synthesize awayScoreLabel=_awayScoreLabel;
@property(retain, nonatomic) UILabel *homeScoreLabel; // @synthesize homeScoreLabel=_homeScoreLabel;
@property(retain, nonatomic) UILabel *awayNameLabel; // @synthesize awayNameLabel=_awayNameLabel;
@property(retain, nonatomic) UILabel *homeNameLabel; // @synthesize homeNameLabel=_homeNameLabel;
@property(retain, nonatomic) UILabel *gameStateLabel; // @synthesize gameStateLabel=_gameStateLabel;
@property(retain, nonatomic) UILabel *clockLabel; // @synthesize clockLabel=_clockLabel;
- (double)columnRowView:(id)arg1 heightForRow:(long long)arg2;	// IMP=0x00000000000bff71
- (double)columnRowView:(id)arg1 widthForColumn:(long long)arg2;	// IMP=0x00000000000bff63
- (double)headerHeightForColumnRowView:(id)arg1;	// IMP=0x00000000000bff55
- (id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3;	// IMP=0x00000000000bfe79
- (id)columnRowView:(id)arg1 headerForColumn:(long long)arg2;	// IMP=0x00000000000bfdcb
- (long long)numberOfColumnsInColumnRowView:(id)arg1;	// IMP=0x00000000000bfdc0
- (long long)numberOfRowsInColumnRowView:(id)arg1;	// IMP=0x00000000000bfdb5
- (void)setValue:(id)arg1 forRow:(long long)arg2 column:(long long)arg3;	// IMP=0x00000000000bfcfe
- (void)setHeaderTitle:(id)arg1 forColumn:(long long)arg2;	// IMP=0x00000000000bfc6b
- (id)defaultValueLabel;	// IMP=0x00000000000bfb8b
- (id)defaultHeaderLabel;	// IMP=0x00000000000bfaab
- (id)defaultScoreLabel;	// IMP=0x00000000000bf9cb
- (id)defaultNameLabel;	// IMP=0x00000000000bf8eb
- (id)defaultClockLabel;	// IMP=0x00000000000bf80b
- (void)layoutSubviews;	// IMP=0x00000000000bf220
- (void)dealloc;	// IMP=0x00000000000bf1b9
- (void)commontInit;	// IMP=0x00000000000bee97
- (void)populateNameLabel:(id)arg1 scoreLabel:(id)arg2 scoreboardNameLabel:(id)arg3 row:(long long)arg4 logoView:(id)arg5 withTeamDictionary:(id)arg6;	// IMP=0x00000000000c0651
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000c0282

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

