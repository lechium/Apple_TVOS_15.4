//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGradientView, PXStoryTVWatchNextCellConfiguration, UIImageView, UILabel, _PXStoryShapeView;

@interface PXStoryTVWatchNextCellView
{
    PXGradientView *_gradientView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_countdownImage;	// 32 = 0x20
    _PXStoryShapeView *_countdownRing;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004c89e5
- (void)layoutSubviews;	// IMP=0x00000000004c8115
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004c7a56

// Remaining properties
@property(copy, nonatomic) PXStoryTVWatchNextCellConfiguration *userData; // @dynamic userData;

@end
