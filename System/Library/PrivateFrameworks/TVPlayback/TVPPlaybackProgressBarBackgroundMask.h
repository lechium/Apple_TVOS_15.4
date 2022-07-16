//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, TVPProgressBarShapeView, UIColor;

__attribute__((visibility("hidden")))
@interface TVPPlaybackProgressBarBackgroundMask : UIView
{
    UIColor *_fillColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    double _minBufferingProgress;	// 24 = 0x18
    double _maxBufferingProgress;	// 32 = 0x20
    double _minPlayheadProgress;	// 40 = 0x28
    double _maxPlayheadProgress;	// 48 = 0x30
    NSArray *_adMarkers;	// 56 = 0x38
    TVPProgressBarShapeView *_pillView;	// 64 = 0x40
    TVPProgressBarShapeView *_rectangleView;	// 72 = 0x48
    CAShapeLayer *_pillMask;	// 80 = 0x50
    CAShapeLayer *_rectangleMask;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000006105
@property(readonly, nonatomic) CAShapeLayer *rectangleMask; // @synthesize rectangleMask=_rectangleMask;
@property(readonly, nonatomic) CAShapeLayer *pillMask; // @synthesize pillMask=_pillMask;
@property(readonly, nonatomic) TVPProgressBarShapeView *rectangleView; // @synthesize rectangleView=_rectangleView;
@property(readonly, nonatomic) TVPProgressBarShapeView *pillView; // @synthesize pillView=_pillView;
@property(copy, nonatomic) NSArray *adMarkers; // @synthesize adMarkers=_adMarkers;
@property(nonatomic) double maxPlayheadProgress; // @synthesize maxPlayheadProgress=_maxPlayheadProgress;
@property(nonatomic) double minPlayheadProgress; // @synthesize minPlayheadProgress=_minPlayheadProgress;
@property(nonatomic) double maxBufferingProgress; // @synthesize maxBufferingProgress=_maxBufferingProgress;
@property(nonatomic) double minBufferingProgress; // @synthesize minBufferingProgress=_minBufferingProgress;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)_updateMasks;	// IMP=0x0000000000005cfd
- (void)layoutSubviews;	// IMP=0x0000000000005cbc
- (void)setMinPlayheadProgress:(double)arg1 maxPlayheadProgress:(double)arg2;	// IMP=0x0000000000005b14
- (void)setMinBufferingProgress:(double)arg1 maxBufferingProgress:(double)arg2;	// IMP=0x000000000000599b
- (void)_commonInit;	// IMP=0x0000000000005699
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000564d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000055f0

@end
