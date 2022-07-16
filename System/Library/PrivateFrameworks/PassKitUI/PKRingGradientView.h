//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface PKRingGradientView : UIView
{
    CAGradientLayer *_gradientLayer;	// 8 = 0x8
    CAShapeLayer *_gradientMaskLayer;	// 16 = 0x10
    CAShapeLayer *_strokeLayer;	// 24 = 0x18
    CAShapeLayer *_backgroundLayer;	// 32 = 0x20
    CAShapeLayer *_backgroundCap;	// 40 = 0x28
    CAShapeLayer *_gradientCap;	// 48 = 0x30
    struct CGColor *_effectiveFillColor;	// 56 = 0x38
    struct CGColor *_effectiveStrokeColor;	// 64 = 0x40
    _Bool _gradientCapIsFillColor;	// 72 = 0x48
    _Bool _enabled;	// 73 = 0x49
    UIColor *_fillColor;	// 80 = 0x50
    UIColor *_strokeColor;	// 88 = 0x58
    UIColor *_gradientStartColor;	// 96 = 0x60
    UIColor *_gradientEndColor;	// 104 = 0x68
    double _minimumAngle;	// 112 = 0x70
    double _currentAngle;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c00df
@property(nonatomic) double currentAngle; // @synthesize currentAngle=_currentAngle;
@property(nonatomic) double minimumAngle; // @synthesize minimumAngle=_minimumAngle;
@property(copy, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(copy, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (struct CGPoint)_centerPointForMaskViewWithAngle:(double)arg1 adjustToCover:(_Bool)arg2;	// IMP=0x00000000000bff89
- (double)_maskRadius;	// IMP=0x00000000000bff42
- (struct CGPoint)_center;	// IMP=0x00000000000bfee5
- (double)_radius;	// IMP=0x00000000000bfead
- (void)_updateGradient;	// IMP=0x00000000000bfc3b
- (void)_updateEffectiveColors;	// IMP=0x00000000000bfa32
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) double totalWidth;
- (double)strokeWidth;	// IMP=0x00000000000bf9be
- (double)ringWidth;	// IMP=0x00000000000bf99f
- (double)_offsetEndAngle;	// IMP=0x00000000000bf701
- (double)_offsetStartAngle;	// IMP=0x00000000000bf6f3
- (void)layoutSubviews;	// IMP=0x00000000000bf0bc
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000000bf07b
- (void)dealloc;	// IMP=0x00000000000bf02a
- (id)init;	// IMP=0x00000000000bec42

@end
