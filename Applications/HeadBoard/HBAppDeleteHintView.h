//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

@interface HBAppDeleteHintView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UIImageView *_playPauseGlyphView;	// 16 = 0x10
    UILabel *_leftLabel;	// 24 = 0x18
    UILabel *_rightLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000037b9c
- (void)_updateWithUserInterfaceStyle:(long long)arg1;	// IMP=0x0010000000037aa0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000037a22
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000378e6
- (void)layoutSubviews;	// IMP=0x0010000000037624
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000371dc

@end

