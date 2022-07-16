//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVExpandingTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIVisualEffectView *_vibrantEffectView;	// 8 = 0x8
    _Bool _textTruncating;	// 16 = 0x10
    _Bool _moreLabelOnNewLine;	// 17 = 0x11
    _Bool _trackHorizontal;	// 18 = 0x12
    _Bool _needsTextSizeComputation;	// 19 = 0x13
    UIColor *_descriptionTextColor;	// 24 = 0x18
    UIColor *_descriptionTextHighlightColor;	// 32 = 0x20
    UIColor *_highlightBackgroundColor;	// 40 = 0x28
    double _moreHighlightPadding;	// 48 = 0x30
    CDUnknownBlockType _selectionHandler;	// 56 = 0x38
    CDUnknownBlockType _playHandler;	// 64 = 0x40
    UITextView *_descriptionTextView;	// 72 = 0x48
    _UIFloatingContentView *_floatingView;	// 80 = 0x50
    UIVisualEffectView *_backgroundView;	// 88 = 0x58
    UITapGestureRecognizer *_selectRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_playRecognizer;	// 104 = 0x68
    UILabel *_moreLabel;	// 112 = 0x70
}

+ (double)cornerRadius;	// IMP=0x000000000000c547
- (void).cxx_destruct;	// IMP=0x000000000000d25d
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000000000cfe3
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000000000cf6a
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000cf3c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000000ceb5
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000cdc9
- (struct CGRect)_moreLabelFrame;	// IMP=0x000000000000cb46
- (id)_moreLabelExclusionPath;	// IMP=0x000000000000ca86
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x000000000000c948
- (void)_setNeedsTextSizeComputation;	// IMP=0x000000000000c937
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000c4f8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000c3ad
- (_Bool)canBecomeFocused;	// IMP=0x000000000000c39b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000c2c7
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c247
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000000c1af
- (void)layoutSubviews;	// IMP=0x000000000000be1c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b6f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

