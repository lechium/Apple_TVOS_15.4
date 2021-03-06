//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKWatchHeroImageView, UIImage, UIImageView;

@interface PKWatchDeviceAppCarouselView : UIView
{
    PKWatchHeroImageView *_watchDeviceImageView;	// 8 = 0x8
    UIImageView *_carouselImageView;	// 16 = 0x10
    UIImageView *_appIconImageView;	// 24 = 0x18
    UIImage *_appIconImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000025da10
@property(retain, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
- (struct CGSize)_appIconSize;	// IMP=0x000000000025d964
- (id)_carouselViewImage;	// IMP=0x000000000025d8e5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000025d8c8
- (void)layoutSubviews;	// IMP=0x000000000025d7ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000025d5e4

@end

