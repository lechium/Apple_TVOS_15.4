//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSLayoutYAxisAnchor;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI10IndexLabel : UIView
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *label;	// 32 = 0x20
    MISSING_TYPE *background;	// 40 = 0x28
    MISSING_TYPE *textStyle;	// 48 = 0x30
    MISSING_TYPE *labelCenterYConstraint;	// 56 = 0x38
    MISSING_TYPE *index;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e57a0
- (void)textSizeUpdated:(id)arg1;	// IMP=0x00000000001e53b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e5230
- (void)layoutSubviews;	// IMP=0x00000000001e5200
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e5000
@property(nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end
