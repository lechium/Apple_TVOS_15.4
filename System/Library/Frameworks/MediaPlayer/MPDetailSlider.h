//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISlider.h>

#import <MediaPlayer/MPDetailScrubControllerDelegate-Protocol.h>
#import <MediaPlayer/MPDetailedScrubbing-Protocol.h>

@class AVTimeFormatter, MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>
{
    UILabel *_currentTimeInverseLabel;	// 8 = 0x8
    UILabel *_currentTimeLabel;	// 16 = 0x10
    MPDetailScrubController *_scrubController;	// 24 = 0x18
    _Bool _allowsScrubbing;	// 32 = 0x20
    _Bool _autoscrubActive;	// 33 = 0x21
    NSTimer *_autoscrubTimer;	// 40 = 0x28
    _Bool _canCommit;	// 48 = 0x30
    double _currentTime;	// 56 = 0x38
    UIView *_downloadingTrackOverlay;	// 64 = 0x40
    UIImageView *_glowDetailScrubImageView;	// 72 = 0x48
    _Bool _isTracking;	// 80 = 0x50
    double _maxTrackWidth;	// 88 = 0x58
    struct CGPoint _previousLocationInView;	// 96 = 0x60
    long long _style;	// 112 = 0x70
    UIImageView *_thumbImageView;	// 120 = 0x78
    double _trackInset;	// 128 = 0x80
    AVTimeFormatter *_formatter;	// 136 = 0x88
    id <MPDetailSliderDelegate> _delegate;	// 144 = 0x90
    double _detailScrubbingVerticalRange;	// 152 = 0x98
    double _duration;	// 160 = 0xa0
    double _availableDuration;	// 168 = 0xa8
    long long _timeLabelStyle;	// 176 = 0xb0
    double _minTimeLabelWidth;	// 184 = 0xb8
}

+ (Class)labelClass;	// IMP=0x00000000000fb1e5
- (void).cxx_destruct;	// IMP=0x00000000000fab64
@property(nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property(nonatomic) long long timeLabelStyle; // @synthesize timeLabelStyle=_timeLabelStyle;
@property(nonatomic) double availableDuration; // @synthesize availableDuration=_availableDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double detailScrubbingVerticalRange; // @synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange;
@property(nonatomic) _Bool allowsScrubbing; // @synthesize allowsScrubbing=_allowsScrubbing;
@property(nonatomic) __weak id <MPDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateForAvailableDuraton;	// IMP=0x00000000000fa2e7
- (void)_commitValue;	// IMP=0x00000000000fa26b
- (void)_resetScrubInfo;	// IMP=0x00000000000fa1d5
- (id)_stringForInverseCurrentTime:(double)arg1;	// IMP=0x00000000000fa0ce
- (id)_stringForCurrentTime:(double)arg1;	// IMP=0x00000000000f9ff5
- (id)_stringForTime:(double)arg1 elapsed:(_Bool)arg2;	// IMP=0x00000000000f9f9e
- (void)_updateTimeDisplayForTime:(double)arg1 force:(_Bool)arg2;	// IMP=0x00000000000f9e84
- (void)_updateTimeDisplayForTime:(double)arg1;	// IMP=0x00000000000f9e70
- (void)_updateTrackInset;	// IMP=0x00000000000f9bf0
- (void)_setupControlsForStyle;	// IMP=0x00000000000f96f6
- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;	// IMP=0x00000000000f956b
- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(_Bool)arg3;	// IMP=0x00000000000f92d8
- (id)timeLabelTextColorForStyle:(long long)arg1;	// IMP=0x00000000000f9273
- (id)timeLabelFontForStyle:(long long)arg1;	// IMP=0x00000000000f900a
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(readonly, nonatomic) NSString *localizedScrubSpeedText;
- (void)cancelTracking;	// IMP=0x00000000000f8b78
@property(readonly, nonatomic) _Bool detailScrubbingAvailableForCurrentDuration;
- (_Bool)isTracking;	// IMP=0x00000000000f8b2e
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x00000000000f8af5
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f89f4
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f851a
- (void)_autoscrubTick:(id)arg1;	// IMP=0x00000000000f82af
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f81a9
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x00000000000f8178
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;	// IMP=0x00000000000f811c
- (struct CGRect)thumbHitRect;	// IMP=0x00000000000f8024
- (struct UIEdgeInsets)_thumbHitEdgeInsets;	// IMP=0x00000000000f800d
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;	// IMP=0x00000000000f7e3b
- (void)setValue:(float)arg1 duration:(double)arg2;	// IMP=0x00000000000f7e1a
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f7e05
- (void)setValue:(float)arg1;	// IMP=0x00000000000f7df1
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x00000000000f7c26
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000f7b4f
- (id)currentThumbImage;	// IMP=0x00000000000f7891
- (id)createThumbView;	// IMP=0x00000000000f783e
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000f7829
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000000f7814
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000f773a
- (void)tintColorDidChange;	// IMP=0x00000000000f76eb
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000f7641
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000f7597
- (void)layoutSubviews;	// IMP=0x00000000000f6e8d
- (void)dealloc;	// IMP=0x00000000000f6e44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f6e2d
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x00000000000f6e18
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;	// IMP=0x00000000000f6c86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

