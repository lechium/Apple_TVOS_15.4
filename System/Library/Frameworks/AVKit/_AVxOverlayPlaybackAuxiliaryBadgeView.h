//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _AVxOverlayPlaybackAuxiliaryBadgeView : UIView
{
    unsigned long long _style;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007ae8b
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_updateToAdvertisement;	// IMP=0x000000000007ad71
- (void)_updateToLiveAndActive:(_Bool)arg1;	// IMP=0x000000000007ac8a
- (void)_updateStyling;	// IMP=0x000000000007ac05
- (void)layoutSubviews;	// IMP=0x000000000007ab59
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000007ab33
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007a4d3

@end

