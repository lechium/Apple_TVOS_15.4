//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSArray, _TVAnimatedImageView;

@interface TVAnimatedLabel
{
    _Bool _marqueeNeeded;	// 8 = 0x8
    _Bool _marqueeing;	// 9 = 0x9
    CALayer *_maskLayer;	// 16 = 0x10
    _Bool _animating;	// 24 = 0x18
    _Bool _paused;	// 25 = 0x19
    float _scrollRate;	// 28 = 0x1c
    double _marqueeDelay;	// 32 = 0x20
    double _replicationPadding;	// 40 = 0x28
    double _maskCapWidth;	// 48 = 0x30
    double _crossfadeDuration;	// 56 = 0x38
    NSArray *_attributedStrings;	// 64 = 0x40
    unsigned long long _currentAttributedStringIndex;	// 72 = 0x48
    double _underPosterOutset;	// 80 = 0x50
    _TVAnimatedImageView *_currentMarqueeView;	// 88 = 0x58
    _TVAnimatedImageView *_nextMarqueeView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000034c06
@property(readonly, nonatomic) __weak _TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak _TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000034a65
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000034a13
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x0000000000034a01
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x00000000000349fb
- (void)_startMarqueeIfNeeded;	// IMP=0x0000000000033016
- (_Bool)_shouldCycle;	// IMP=0x0000000000032fcd
- (void)_clearLabelTextContents;	// IMP=0x0000000000032e11
- (void)_prepareNextMarquee;	// IMP=0x0000000000032df4
- (void)_nextAttributedString;	// IMP=0x0000000000032937
- (id)_imageForText:(_Bool)arg1;	// IMP=0x00000000000326b7
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000000003248c
- (void)stopAndResetScrollWithDuration:(double)arg1;	// IMP=0x0000000000031cd2
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;	// IMP=0x0000000000031c57
- (void)stopAnimating;	// IMP=0x0000000000031bb0
- (void)setNeedsDisplay;	// IMP=0x0000000000031840
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000031778
- (void)_clearAttributedStrings;	// IMP=0x00000000000315ee
- (void)setAttributedText:(id)arg1;	// IMP=0x000000000003154a
- (void)setText:(id)arg1;	// IMP=0x00000000000314d4
- (void)dealloc;	// IMP=0x000000000003145f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000311dd

@end

