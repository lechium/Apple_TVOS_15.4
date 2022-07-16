//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSTimer, NSURL, TVImageView, TVMusicRoundProgressView;
@protocol TVPPlayback;

@interface TVMusicRadioAdView : UIView
{
    NSURL *_adImageURL;	// 8 = 0x8
    id <TVPPlayback> _player;	// 16 = 0x10
    TVImageView *_adImageView;	// 24 = 0x18
    TVMusicRoundProgressView *_progressView;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000051cc9
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TVMusicRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TVImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) id <TVPPlayback> player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSURL *adImageURL; // @synthesize adImageURL=_adImageURL;
- (void)layoutSubviews;	// IMP=0x0000000000051abc
- (void)setAdImageProxy:(id)arg1;	// IMP=0x0000000000051886
- (void)_updateProgressView;	// IMP=0x0000000000051795
- (void)progressTimerFireMethod:(id)arg1;	// IMP=0x0000000000051783
- (void)removeFromSuperview;	// IMP=0x0000000000051706
- (id)initWithAdImageURL:(id)arg1 player:(id)arg2;	// IMP=0x0000000000051469

@end
