//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TVPPlaybackProgressBarBackgroundMask;

__attribute__((visibility("hidden")))
@interface TVPProgressBarView : UIView
{
    UIView *_backgroundFillView;	// 8 = 0x8
    TVPPlaybackProgressBarBackgroundMask *_fillMask;	// 16 = 0x10
    UIView *_barView;	// 24 = 0x18
    double _minProgress;	// 32 = 0x20
    double _maxProgress;	// 40 = 0x28
    double _playheadStart;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006b62c
@property(readonly, nonatomic) UIView *barView; // @synthesize barView=_barView;
- (void)layoutSubviews;	// IMP=0x000000000006b4b6
- (_Bool)canBecomeFocused;	// IMP=0x000000000006b4a4
- (void)setPlayheadStart:(double)arg1;	// IMP=0x000000000006b477
- (void)_updatePlayheadRange;	// IMP=0x000000000006b448
- (void)setMinProgress:(double)arg1 maxProgress:(double)arg2 animated:(_Bool)arg3;	// IMP=0x000000000006b303
- (id)_initWithFrame:(struct CGRect)arg1 barView:(id)arg2;	// IMP=0x000000000006b099
- (id)initWithBarView:(id)arg1;	// IMP=0x000000000006b067
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006b053

@end

