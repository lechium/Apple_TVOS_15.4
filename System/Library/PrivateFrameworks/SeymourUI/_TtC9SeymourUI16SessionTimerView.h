//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI16SessionTimerView : UIView
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *metricBuilder;	// 16 = 0x10
    MISSING_TYPE *circle;	// 32 = 0x20
    MISSING_TYPE *label;	// 40 = 0x28
    MISSING_TYPE *animator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003f16d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003f1740
- (void)dealloc;	// IMP=0x00000000003f1650
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f15e0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003f15c0
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;	// IMP=0x00000000003f1530
- (void)updateDuration:(double)arg1;	// IMP=0x00000000003f1430

@end
