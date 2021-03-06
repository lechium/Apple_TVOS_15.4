//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TVImageProxy, TVImageView, UILabel;

@interface TVLItemTitleView : UIView
{
    _Bool _ratingSnapsToTitle;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_rightTitleLabel;	// 32 = 0x20
    TVImageProxy *_imageProxy;	// 40 = 0x28
    TVImageProxy *_ratingImageProxy;	// 48 = 0x30
    TVImageView *_ratingImageView;	// 56 = 0x38
    TVImageView *_rightImageView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000020c01
@property(retain, nonatomic) TVImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) TVImageView *ratingImageView; // @synthesize ratingImageView=_ratingImageView;
@property(nonatomic) _Bool ratingSnapsToTitle; // @synthesize ratingSnapsToTitle=_ratingSnapsToTitle;
@property(retain, nonatomic) TVImageProxy *ratingImageProxy; // @synthesize ratingImageProxy=_ratingImageProxy;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000000020162
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000200f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001fd50

@end

