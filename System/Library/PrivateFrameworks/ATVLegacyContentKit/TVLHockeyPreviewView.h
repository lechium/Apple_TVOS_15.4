//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TVLHeadToHeadBannerView, TVLHockeyScoreboardView, TVLItemTitleView;

@interface TVLHockeyPreviewView : UIView
{
    TVLHeadToHeadBannerView *_bannerView;	// 8 = 0x8
    TVLItemTitleView *_titleView;	// 16 = 0x10
    TVLHockeyScoreboardView *_scoreboardView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000be762
@property(retain, nonatomic) TVLHockeyScoreboardView *scoreboardView; // @synthesize scoreboardView=_scoreboardView;
@property(retain, nonatomic) TVLItemTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TVLHeadToHeadBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)layoutSubviews;	// IMP=0x00000000000be49c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000be7a4

@end

