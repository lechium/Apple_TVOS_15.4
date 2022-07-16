//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class StockGraphImageSet, TintedView, UIImage;

@interface VolumeGraphView : UIView
{
    _Bool _showingTintedRegion;	// 8 = 0x8
    TintedView *_tintedVolumeView;	// 16 = 0x10
    UIView *_tintedRegionClipView;	// 24 = 0x18
    UIImage *_volumeImage;	// 32 = 0x20
    StockGraphImageSet *_graphImageSet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004845f
@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;	// IMP=0x00000000000482e7
- (void)setShowingSelectedRegion:(_Bool)arg1;	// IMP=0x000000000004811f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000047fc8

@end
