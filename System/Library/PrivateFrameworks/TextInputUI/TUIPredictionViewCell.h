//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/UIScrollViewDelegate-Protocol.h>

@class NSString, TIKeyboardCandidate, UIColor, UIFont, UIImage, UIImageView, UIKBRenderConfig, UILabel, UIMorphingLabel, UIScrollView;

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate>
{
    _Bool _highlighted;	// 8 = 0x8
    _Bool _useContinuousCornerInHighlight;	// 9 = 0x9
    _Bool _labelTruncated;	// 10 = 0xa
    double _highlightMargin;	// 16 = 0x10
    double _highlightCornerRadius;	// 24 = 0x18
    unsigned long long _roundedHighlightEdges;	// 32 = 0x20
    unsigned long long _visibleSeparatorEdges;	// 40 = 0x28
    double _separatorMargin;	// 48 = 0x30
    TIKeyboardCandidate *_candidate;	// 56 = 0x38
    UIKBRenderConfig *_renderConfig;	// 64 = 0x40
    UIScrollView *_maskingScrollView;	// 72 = 0x48
    UIColor *_textColor;	// 80 = 0x50
    UIColor *_imageTintColor;	// 88 = 0x58
    UIColor *_separatorColor;	// 96 = 0x60
    UIColor *_highlightColor;	// 104 = 0x68
    UIView *_backgroundView;	// 112 = 0x70
    UIColor *_backgroundViewHighlightColor;	// 120 = 0x78
    UIView *_leftSeparatorView;	// 128 = 0x80
    UIView *_rightSeparatorView;	// 136 = 0x88
    UIImageView *_imageView;	// 144 = 0x90
    UILabel *_normalLabel;	// 152 = 0x98
    UIMorphingLabel *_morphingLabel;	// 160 = 0xa0
    UIView *_secureCandidateLabel;	// 168 = 0xa8
}

+ (id)cellHighlightColorForDarkStyle:(_Bool)arg1;	// IMP=0x0000000000041700
- (void).cxx_destruct;	// IMP=0x0000000000041517
@property(retain, nonatomic) UIView *secureCandidateLabel; // @synthesize secureCandidateLabel=_secureCandidateLabel;
@property(retain, nonatomic) UIMorphingLabel *morphingLabel; // @synthesize morphingLabel=_morphingLabel;
@property(retain, nonatomic) UILabel *normalLabel; // @synthesize normalLabel=_normalLabel;
@property(nonatomic, getter=isLabelTruncated) _Bool labelTruncated; // @synthesize labelTruncated=_labelTruncated;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *rightSeparatorView; // @synthesize rightSeparatorView=_rightSeparatorView;
@property(retain, nonatomic) UIView *leftSeparatorView; // @synthesize leftSeparatorView=_leftSeparatorView;
@property(retain, nonatomic) UIColor *backgroundViewHighlightColor; // @synthesize backgroundViewHighlightColor=_backgroundViewHighlightColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIScrollView *maskingScrollView; // @synthesize maskingScrollView=_maskingScrollView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property(nonatomic) double separatorMargin; // @synthesize separatorMargin=_separatorMargin;
@property(nonatomic) unsigned long long visibleSeparatorEdges; // @synthesize visibleSeparatorEdges=_visibleSeparatorEdges;
@property(nonatomic) unsigned long long roundedHighlightEdges; // @synthesize roundedHighlightEdges=_roundedHighlightEdges;
@property(nonatomic) _Bool useContinuousCornerInHighlight; // @synthesize useContinuousCornerInHighlight=_useContinuousCornerInHighlight;
@property(nonatomic) double highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property(nonatomic) double highlightMargin; // @synthesize highlightMargin=_highlightMargin;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000410c4
- (void)_updateCornerRadius;	// IMP=0x0000000000041043
- (void)_updateColorsForRenderConfig:(id)arg1 highlighted:(_Bool)arg2;	// IMP=0x0000000000040d3d
- (_Bool)_renderConfigUsesDarkStyle:(id)arg1;	// IMP=0x0000000000040d1d
- (id)labelView;	// IMP=0x0000000000040cbe
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)setCandidate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000040786
@property(retain, nonatomic) UIFont *labelFont;
@property(readonly, nonatomic) long long layoutType;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000040154
- (void)layoutSubviews;	// IMP=0x000000000003ed76
- (id)attributedStringRepresentationOfCandidate:(id)arg1;	// IMP=0x000000000003eab1
- (id)centerTruncatedStringForString:(id)arg1 withAttributes:(id)arg2 fittingWidth:(double)arg3;	// IMP=0x000000000003ea2a
- (_Bool)candidateRequiresTruncationForBoundingWidth:(double)arg1;	// IMP=0x000000000003e7bd
- (struct CGSize)labelTextSizeForCandidate:(id)arg1;	// IMP=0x000000000003e5c5
- (id)headerTextAttributes;	// IMP=0x000000000003e4b6
- (id)displayTextAttributesForMultiline:(_Bool)arg1 header:(_Bool)arg2;	// IMP=0x000000000003e31c
- (_Bool)useAutofillStyle;	// IMP=0x000000000003e24c
- (id)currentTextSuggestion;	// IMP=0x000000000003e1ac
- (id)labelViewForCandidate:(id)arg1;	// IMP=0x000000000003e0ff
- (id)_displayLabelForCandidate:(id)arg1;	// IMP=0x000000000003dfe1
- (_Bool)_isEmojiCandidate:(id)arg1;	// IMP=0x000000000003df9a
- (_Bool)_isSecureCandidate:(id)arg1;	// IMP=0x000000000003df7f
- (_Bool)_usesMorphingLabelForCandidate:(id)arg1;	// IMP=0x000000000003df28
- (_Bool)_isPad;	// IMP=0x000000000003df20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003d6b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
