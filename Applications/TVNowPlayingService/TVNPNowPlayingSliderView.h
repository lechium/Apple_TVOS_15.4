//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class TVNPNowPlayingProgressView, UIImage, UIImageView, UIView;

@interface TVNPNowPlayingSliderView : UIControl
{
    double _maxBarWidth;	// 8 = 0x8
    _Bool _continuous;	// 16 = 0x10
    float _value;	// 20 = 0x14
    float _minimumValue;	// 24 = 0x18
    float _maximumValue;	// 28 = 0x1c
    UIImage *_minimumValueImage;	// 32 = 0x20
    UIImage *_maximumValueImage;	// 40 = 0x28
    TVNPNowPlayingProgressView *_progressBarView;	// 48 = 0x30
    UIImageView *_minValueIconView;	// 56 = 0x38
    UIImageView *_maxValueIconView;	// 64 = 0x40
    UIView *_thumbView;	// 72 = 0x48
    struct CGPoint _lastThumbLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000004320
@property(readonly, nonatomic) struct CGPoint lastThumbLocation; // @synthesize lastThumbLocation=_lastThumbLocation;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIImageView *maxValueIconView; // @synthesize maxValueIconView=_maxValueIconView;
@property(readonly, nonatomic) UIImageView *minValueIconView; // @synthesize minValueIconView=_minValueIconView;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (id)_unfocusedProgressColor;	// IMP=0x0010000000004040
- (id)_focusedProgressColor;	// IMP=0x0010000000003f60
- (void)_rightPressed:(id)arg1;	// IMP=0x0010000000003e70
- (void)_leftPressed:(id)arg1;	// IMP=0x0010000000003d90
- (void)_panUpdated:(id)arg1;	// IMP=0x00100000000037f0
- (void)_menuPressed;	// IMP=0x00100000000037e0
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000003770
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000003700
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000003690
- (_Bool)shouldTrack;	// IMP=0x0010000000003670
- (double)maxBarWidth;	// IMP=0x0010000000003650
- (void)setMaxBarWidth:(double)arg1;	// IMP=0x00100000000035e0
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000003280
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000031a0
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000003160
- (void)layoutSubviews;	// IMP=0x0010000000002ae0
- (_Bool)canBecomeFocused;	// IMP=0x0010000000002ac0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000020d0

@end
