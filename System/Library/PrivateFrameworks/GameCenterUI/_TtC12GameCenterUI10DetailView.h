//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI10DetailView : UIView
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *subtitleLabel;	// 24 = 0x18
    MISSING_TYPE *imageView;	// 32 = 0x20
    MISSING_TYPE *separator;	// 40 = 0x28
    MISSING_TYPE *chevronView;	// 48 = 0x30
    MISSING_TYPE *accessoryView;	// 56 = 0x38
    MISSING_TYPE *accessory;	// 64 = 0x40
    MISSING_TYPE *accessoryAction;	// 136 = 0x88
    MISSING_TYPE *disabled;	// 152 = 0x98
    MISSING_TYPE *selectionHandler;	// 160 = 0xa0
    MISSING_TYPE *tapGestureRecognizer;	// 176 = 0xb0
    MISSING_TYPE *style;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000001a0ed0
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x00000000001a05d0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001a0520
- (void)layoutSubviews;	// IMP=0x00000000001a00f0
- (void)wasTapped;	// IMP=0x000000000019fc50
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019f7c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019f790

@end

