//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKZoomSliderView : UIView
{
    NSLayoutConstraint *_knobCenterYConstraint;	// 8 = 0x8
    UIView *_knob;	// 16 = 0x10
    double _zoomFraction;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    UIImageView *_shadowImageView;	// 40 = 0x28
    double _lastTrackShadowImageScale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000098f0c
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double zoomFraction; // @synthesize zoomFraction=_zoomFraction;
- (void)updateConstraints;	// IMP=0x00000000000981a4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000098152
- (void)didMoveToWindow;	// IMP=0x0000000000098009
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000971b0

@end

