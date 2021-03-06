//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSSet, TVSliderContentView, UIColor;

@interface TVPlaybackProgressBarBackgroundMask : UIView
{
    UIColor *_fillColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    double _minBufferingProgress;	// 24 = 0x18
    double _maxBufferingProgress;	// 32 = 0x20
    double _minPlayheadProgress;	// 40 = 0x28
    double _maxPlayheadProgress;	// 48 = 0x30
    NSArray *_adMarkers;	// 56 = 0x38
    NSSet *_progressBarShapeViews;	// 64 = 0x40
    TVSliderContentView *_bufferingSliderContentView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000006318
@property(retain, nonatomic) TVSliderContentView *bufferingSliderContentView; // @synthesize bufferingSliderContentView=_bufferingSliderContentView;
@property(copy, nonatomic) NSSet *progressBarShapeViews; // @synthesize progressBarShapeViews=_progressBarShapeViews;
@property(copy, nonatomic) NSArray *adMarkers; // @synthesize adMarkers=_adMarkers;
@property(nonatomic) double maxPlayheadProgress; // @synthesize maxPlayheadProgress=_maxPlayheadProgress;
@property(nonatomic) double minPlayheadProgress; // @synthesize minPlayheadProgress=_minPlayheadProgress;
@property(nonatomic) double maxBufferingProgress; // @synthesize maxBufferingProgress=_maxBufferingProgress;
@property(nonatomic) double minBufferingProgress; // @synthesize minBufferingProgress=_minBufferingProgress;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)layoutSubviews;	// IMP=0x0000000000005f02
- (void)setMinPlayheadProgress:(double)arg1 maxPlayheadProgress:(double)arg2;	// IMP=0x0000000000005b5c
- (void)setMinBufferingProgress:(double)arg1 maxBufferingProgress:(double)arg2;	// IMP=0x0000000000005a4b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000595d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000056a1

@end

