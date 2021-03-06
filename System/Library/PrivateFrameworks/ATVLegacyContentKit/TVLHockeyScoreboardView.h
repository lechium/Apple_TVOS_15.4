//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/TVColumnRowViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/TVColumnRowViewDelegate-Protocol.h>

@class NSArray, NSString, TVLColumnRowView, UILabel;

@interface TVLHockeyScoreboardView : UIView <TVColumnRowViewDataSource, TVColumnRowViewDelegate>
{
    UILabel *_homeScoreboardLabel;	// 8 = 0x8
    UILabel *_awayScoreboardLabel;	// 16 = 0x10
    TVLColumnRowView *_scoreboardTableView;	// 24 = 0x18
    NSArray *_scoreboardHeaderTitles;	// 32 = 0x20
    NSArray *_scoreboardHomeRowValues;	// 40 = 0x28
    NSArray *_scoreboardAwayRowValues;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000178e4
@property(retain, nonatomic) NSArray *scoreboardAwayRowValues; // @synthesize scoreboardAwayRowValues=_scoreboardAwayRowValues;
@property(retain, nonatomic) NSArray *scoreboardHomeRowValues; // @synthesize scoreboardHomeRowValues=_scoreboardHomeRowValues;
@property(retain, nonatomic) NSArray *scoreboardHeaderTitles; // @synthesize scoreboardHeaderTitles=_scoreboardHeaderTitles;
@property(retain, nonatomic) TVLColumnRowView *scoreboardTableView; // @synthesize scoreboardTableView=_scoreboardTableView;
@property(retain, nonatomic) UILabel *awayScoreboardLabel; // @synthesize awayScoreboardLabel=_awayScoreboardLabel;
@property(retain, nonatomic) UILabel *homeScoreboardLabel; // @synthesize homeScoreboardLabel=_homeScoreboardLabel;
- (double)columnRowView:(id)arg1 heightForRow:(long long)arg2;	// IMP=0x00000000000177f8
- (double)columnRowView:(id)arg1 widthForColumn:(long long)arg2;	// IMP=0x00000000000177ea
- (double)headerHeightForColumnRowView:(id)arg1;	// IMP=0x00000000000177dc
- (id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3;	// IMP=0x000000000001772c
- (id)columnRowView:(id)arg1 headerForColumn:(long long)arg2;	// IMP=0x00000000000176a5
- (long long)numberOfColumnsInColumnRowView:(id)arg1;	// IMP=0x0000000000017688
- (long long)numberOfRowsInColumnRowView:(id)arg1;	// IMP=0x000000000001767d
- (id)defaultValueLabel;	// IMP=0x000000000001759d
- (id)defaultHeaderLabel;	// IMP=0x00000000000174bd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000174a0
- (void)layoutSubviews;	// IMP=0x00000000000172f5
- (void)dealloc;	// IMP=0x000000000001728e
- (void)commontInit;	// IMP=0x0000000000017194
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000017959

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

