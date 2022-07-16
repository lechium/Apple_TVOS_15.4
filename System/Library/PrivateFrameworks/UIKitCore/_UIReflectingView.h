//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface _UIReflectingView
{
    UIView *_containerView;	// 8 = 0x8
    UIView *_gradientView;	// 16 = 0x10
    double _reflectionAlpha;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000102d71f
@property(readonly, retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000102d5a1
- (void)layoutSubviews;	// IMP=0x000000000102d36a
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000102d303
@property(nonatomic) double reflectionFraction;
@property(nonatomic) double reflectionAlpha;
- (void)_updateGradientColors;	// IMP=0x000000000102cf61
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000102cd59
- (id)_gradientLayer;	// IMP=0x000000000102cd3c

@end

