//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TVPVideoView, UIImage, UIImageView, UITabBar;

__attribute__((visibility("hidden")))
@interface _TVMainView : UIView
{
    _Bool _tabBarHidden;	// 8 = 0x8
    UITabBar *_tabBar;	// 16 = 0x10
    UIView *_bannerView;	// 24 = 0x18
    UIImage *_backgroundImage;	// 32 = 0x20
    TVPVideoView *_videoView;	// 40 = 0x28
    UIImageView *_bgImageView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c4173
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) _Bool tabBarHidden; // @synthesize tabBarHidden=_tabBarHidden;
@property(retain, nonatomic) TVPVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(readonly, retain, nonatomic) UITabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void)layoutSubviews;	// IMP=0x00000000000c3e80
- (id)preferredFocusEnvironments;	// IMP=0x00000000000c3db9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c363d

@end
