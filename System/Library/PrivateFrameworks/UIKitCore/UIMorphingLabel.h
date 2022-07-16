//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, UIView, _UIViewAnimationAttributes;

@interface UIMorphingLabel
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;	// 112 = 0x70
    UIMorphingLabelGlyphSet *_dstGlyphSet;	// 120 = 0x78
    NSMutableArray *_hiddenGlyphViews;	// 128 = 0x80
    UIView *_colorView;	// 136 = 0x88
    unsigned long long _alignmentSrc[100];	// 144 = 0x90
    unsigned long long _alignmentDst[100];	// 944 = 0x3b0
    _Bool _alignmentIsEqual[100];	// 1744 = 0x6d0
    unsigned long long _alignmentSize;	// 1848 = 0x738
    double _alignmentDelays[100];	// 1856 = 0x740
    _UIViewAnimationAttributes *_textAnimationAttributes;	// 2656 = 0xa60
    double _lastUpdateTime;	// 2664 = 0xa68
    double _slowdown;	// 2672 = 0xa70
    double _rippleFactor;	// 2680 = 0xa78
    double _scaleFactor;	// 2688 = 0xa80
    _Bool _isDoingFastAnimation;	// 2696 = 0xa88
    _Bool _textDidChange;	// 2697 = 0xa89
    _Bool _textColorDidChange;	// 2698 = 0xa8a
    _Bool _suppressLayoutSubviews;	// 2699 = 0xa8b
    _Bool _enableAnimation;	// 2700 = 0xa8c
    NSString *_text;	// 2704 = 0xa90
    UIFont *_font;	// 2712 = 0xa98
    UIColor *_textColor;	// 2720 = 0xaa0
    long long _textAlignment;	// 2728 = 0xaa8
    double _initialScale;	// 2736 = 0xab0
    double _glyphScaleAnimationSpeed;	// 2744 = 0xab8
    double _rippleDuration;	// 2752 = 0xac0
    struct CGRect _visibleRect;	// 2760 = 0xac8
}

+ (id)preferredFontWithSize:(double)arg1;	// IMP=0x0000000000a4e77b
@property(nonatomic) double rippleDuration; // @synthesize rippleDuration=_rippleDuration;
@property(nonatomic) double glyphScaleAnimationSpeed; // @synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool suppressLayoutSubviews; // @synthesize suppressLayoutSubviews=_suppressLayoutSubviews;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)contentSizeDidChange:(id)arg1;	// IMP=0x0000000000a52e2f
- (double)requiredWidthForText:(id)arg1;	// IMP=0x0000000000a52e04
- (double)flushAmount;	// IMP=0x0000000000a52dd2
- (_Bool)canFitText:(id)arg1;	// IMP=0x0000000000a52d68
- (void)layoutSubviews;	// IMP=0x0000000000a529b5
- (id)attributedString;	// IMP=0x0000000000a5278f
- (id)attributedStringForText:(id)arg1;	// IMP=0x0000000000a526bb
- (void)animateGlyphs;	// IMP=0x0000000000a524e8
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a52461
- (void)initAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a523c8
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a5221f
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a52104
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;	// IMP=0x0000000000a51dba
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a51732
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a51436
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a51055
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a5104f
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a50c7c
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a50afb
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a50911
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4;	// IMP=0x0000000000a50831
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a507e3
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a5066c
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a5055d
- (void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;	// IMP=0x0000000000a504fa
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4;	// IMP=0x0000000000a503da
- (void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;	// IMP=0x0000000000a503ba
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;	// IMP=0x0000000000a50063
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4;	// IMP=0x0000000000a4fc8a
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(double)arg3;	// IMP=0x0000000000a4f876
- (double)currentMediaTime;	// IMP=0x0000000000a4f841
- (id)uniqueString;	// IMP=0x0000000000a4f79f
- (void)hideGlyph:(id)arg1;	// IMP=0x0000000000a4f6f2
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(_Bool)arg2;	// IMP=0x0000000000a4f587
- (struct _NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a4f531
- (struct _NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a4f4db
- (void)calculateGlyphAlignment;	// IMP=0x0000000000a4f2c1
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(struct _NSRange)arg2 toGlyphsInRange:(struct _NSRange)arg3;	// IMP=0x0000000000a4ef5b
- (_Bool)_isRTL;	// IMP=0x0000000000a4ef41
- (double)_rippleDurationForEndInsertion:(_Bool)arg1;	// IMP=0x0000000000a4ef03
- (double)alphaForFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4ec5d
- (void)dealloc;	// IMP=0x0000000000a4eb89
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a4eb3d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4eae0
- (void)baseInit;	// IMP=0x0000000000a4e875

@end
