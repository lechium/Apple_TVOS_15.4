//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI24GKMultiplayerStepperView : UIView
{
    MISSING_TYPE *downButton;	// 8 = 0x8
    MISSING_TYPE *upButton;	// 16 = 0x10
    MISSING_TYPE *label;	// 24 = 0x18
    MISSING_TYPE *model;	// 32 = 0x20
    MISSING_TYPE *isStepperHidden;	// 40 = 0x28
}

+ (id)makeWithMinValue:(long long)arg1 maxValue:(long long)arg2 initialValue:(long long)arg3 titleChangedHandler:(CDUnknownBlockType)arg4 valueChangedHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001eeb50
- (void).cxx_destruct;	// IMP=0x00000000001efa20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ef9c0
- (void)didTapUp:(id)arg1;	// IMP=0x00000000001ef860
- (void)didTapDown:(id)arg1;	// IMP=0x00000000001ef7b0
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)layoutSubviews;	// IMP=0x00000000001ef670
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001ef3b0
@property(nonatomic) long long maximumValue;
@property(nonatomic) long long minimumValue;
@property(nonatomic) _Bool isStepperHidden; // @synthesize isStepperHidden;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eeeb0

@end

