//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MPAVRoute, MPRouteLabel, NSString, UIColor, UIFont, UIImage, UIImageView;

@interface MPRouteButton : UIControl
{
    MPRouteLabel *_routeLabel;	// 8 = 0x8
    UIImageView *_accessoryImageView;	// 16 = 0x10
    double _alphaOverride;	// 24 = 0x18
    _Bool _routeLabelHidden;	// 32 = 0x20
    double _accessoryImageSpacing;	// 40 = 0x28
    UIFont *_font;	// 48 = 0x30
    NSString *_routeTitle;	// 56 = 0x38
    UIColor *_overrideColor;	// 64 = 0x40
    long long _routeLabelAxis;	// 72 = 0x48
    struct UIEdgeInsets _hitRectInsets;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004dc6b
@property(nonatomic) long long routeLabelAxis; // @synthesize routeLabelAxis=_routeLabelAxis;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic, getter=isRouteLabelHidden) _Bool routeLabelHidden; // @synthesize routeLabelHidden=_routeLabelHidden;
@property(readonly, copy, nonatomic) NSString *routeTitle; // @synthesize routeTitle=_routeTitle;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double accessoryImageSpacing; // @synthesize accessoryImageSpacing=_accessoryImageSpacing;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x000000000004db92
@property(nonatomic) _Bool forcesUppercaseText;
@property(retain, nonatomic) MPAVRoute *route;
@property(retain, nonatomic) UIImage *accessoryImage;
- (void)tintColorDidChange;	// IMP=0x000000000004d7c9
- (void)setAlpha:(double)arg1;	// IMP=0x000000000004d782
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000004d4ff
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004d3b0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000004d31a
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000004d2fd
- (void)layoutSubviews;	// IMP=0x000000000004cea4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004cd27

@end
