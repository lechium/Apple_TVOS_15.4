//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIBezierPath, UIColor, UIFont, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _UIActionSliderKnob, _UIBackdropView, _UIVibrantSettings;
@protocol _UIActionSliderDelegate, _UIActionSliderLabel;

@interface _UIActionSlider <UIGestureRecognizerDelegate>
{
    UIView *_contentView;	// 112 = 0x70
    UIView *_trackDodgeView;	// 120 = 0x78
    UIView *_trackBackgroundView;	// 128 = 0x80
    _UIBackdropView *_trackBlurView;	// 136 = 0x88
    UIView *_trackSolidView;	// 144 = 0x90
    _UIActionSliderKnob *_knobView;	// 152 = 0x98
    UIImageView *_knobImageView;	// 160 = 0xa0
    UIView<_UIActionSliderLabel> *_trackLabel;	// 168 = 0xa8
    UIPanGestureRecognizer *_slideGestureRecognizer;	// 176 = 0xb0
    struct CGPoint _slideGestureInitialPoint;	// 184 = 0xb8
    double _knobPosition;	// 200 = 0xc8
    double _trackWidthProportion;	// 208 = 0xd0
    _Bool _showingTrackLabel;	// 216 = 0xd8
    _Bool _animating;	// 217 = 0xd9
    long long _style;	// 224 = 0xe0
    long long _textStyle;	// 232 = 0xe8
    NSString *_trackText;	// 240 = 0xf0
    UIFont *_trackFont;	// 248 = 0xf8
    double _trackTextBaselineFromBottom;	// 256 = 0x100
    id <_UIActionSliderDelegate> _delegate;	// 264 = 0x108
    double _knobWidth;	// 272 = 0x110
    double _cachedTrackMaskWidth;	// 280 = 0x118
    _UIVibrantSettings *_vibrantSettings;	// 288 = 0x120
    struct CGSize _knobImageOffset;	// 296 = 0x128
    struct CGSize _trackSize;	// 312 = 0x138
    struct UIEdgeInsets _knobInsets;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x0000000000548d09
@property(retain, nonatomic) _UIVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic, getter=_knobView) UIView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) double cachedTrackMaskWidth; // @synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isShowingTrackLabel) _Bool showingTrackLabel; // @synthesize showingTrackLabel=_showingTrackLabel;
@property(nonatomic) double trackWidthProportion; // @synthesize trackWidthProportion=_trackWidthProportion;
@property(nonatomic) struct UIEdgeInsets knobInsets; // @synthesize knobInsets=_knobInsets;
@property(nonatomic) double knobWidth; // @synthesize knobWidth=_knobWidth;
@property(nonatomic) double knobPosition; // @synthesize knobPosition=_knobPosition;
@property(nonatomic) __weak id <_UIActionSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *slideGestureRecognizer; // @synthesize slideGestureRecognizer=_slideGestureRecognizer;
@property(nonatomic) double trackTextBaselineFromBottom; // @synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom;
@property(nonatomic) struct CGSize trackSize; // @synthesize trackSize=_trackSize;
@property(retain, nonatomic) UIFont *trackFont; // @synthesize trackFont=_trackFont;
@property(copy, nonatomic) NSString *trackText; // @synthesize trackText=_trackText;
@property(nonatomic) struct CGSize knobImageOffset; // @synthesize knobImageOffset=_knobImageOffset;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_knobPanGesture:(id)arg1;	// IMP=0x0000000000548786
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000005486d2
- (void)_slideCompleted:(_Bool)arg1;	// IMP=0x0000000000548444
- (void)_hideTrackLabel:(_Bool)arg1;	// IMP=0x0000000000548322
- (void)_showTrackLabel;	// IMP=0x000000000054821d
- (void)setMaskFromImage:(id)arg1 onView:(id)arg2;	// IMP=0x0000000000547fe5
- (void)setMaskPath:(struct CGPath *)arg1 onView:(id)arg2;	// IMP=0x0000000000547e63
- (void)updateAllTrackMasks;	// IMP=0x0000000000547c39
- (id)trackMaskPath;	// IMP=0x0000000000547adc
- (id)trackMaskImage;	// IMP=0x0000000000547834
- (void)layoutSubviews;	// IMP=0x00000000005471d5
- (void)_makeTrackLabel;	// IMP=0x0000000000546fa7
- (void)didMoveToWindow;	// IMP=0x0000000000546f4e
- (void)didMoveToSuperview;	// IMP=0x0000000000546eb9
- (_Bool)shouldHideTrackLabelForXPoint:(double)arg1;	// IMP=0x0000000000546e71
- (_Bool)xPointIsWithinTrack:(double)arg1;	// IMP=0x0000000000546e29
- (double)_knobAvailableX;	// IMP=0x0000000000546dda
- (double)_knobRightMostX;	// IMP=0x0000000000546d53
- (double)_knobLeftMostX;	// IMP=0x0000000000546cf3
- (double)_knobMaxX;	// IMP=0x0000000000546cc6
- (double)_knobMinX;	// IMP=0x0000000000546c99
- (double)_knobHorizontalPosition;	// IMP=0x0000000000546c37
- (double)_knobVerticalInset;	// IMP=0x0000000000546c09
- (double)_knobMaxXInset;	// IMP=0x0000000000546bde
- (double)_knobMinXInset;	// IMP=0x0000000000546bb3
- (double)_knobWidth;	// IMP=0x0000000000546ba1
- (struct CGRect)_trackFrame;	// IMP=0x0000000000546b00
- (id)backgroundColor;	// IMP=0x0000000000546ae3
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000546ac6
- (void)closeTrackAnimated:(_Bool)arg1;	// IMP=0x00000000005468d4
- (void)openTrackAnimated:(_Bool)arg1;	// IMP=0x00000000005465c6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000005464be
@property(readonly, nonatomic) struct CGRect trackTextRect;
@property(readonly, nonatomic) struct CGRect knobRect;
@property(readonly, retain, nonatomic) UILabel *trackLabel;
@property(retain, nonatomic) UIColor *knobColor;
@property(retain, nonatomic) UIImage *knobImage;
@property(readonly, nonatomic) UIBezierPath *knobMaskPath;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000545956
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000545942
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;	// IMP=0x0000000000545378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

