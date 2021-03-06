//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class ASCModalViewInteraction, ASCOfferButtonBackgroundImageView, ASCOfferMetadata, ASCOfferTheme, CAAnimation, UILabel, UIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

__attribute__((visibility("hidden")))
@interface ASCOfferButton : UIControl
{
    _Bool _fixedHeight;	// 8 = 0x8
    long long _subtitlePosition;	// 16 = 0x10
    ASCOfferTheme *_theme;	// 24 = 0x18
    ASCOfferMetadata *_metadata;	// 32 = 0x20
    id <ASCOfferButtonDelegate> _delegate;	// 40 = 0x28
    ASCOfferButtonBackgroundImageView *_imageView;	// 48 = 0x30
    UILabel *_titleLabelIfLoaded;	// 56 = 0x38
    UILabel *_subtitleLabelIfLoaded;	// 64 = 0x40
    ASCModalViewInteraction *_modalInteraction;	// 72 = 0x48
    UIViewPropertyAnimator *_currentTransition;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000024987
@property(retain, nonatomic) UIViewPropertyAnimator *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) ASCModalViewInteraction *modalInteraction; // @synthesize modalInteraction=_modalInteraction;
@property(readonly, nonatomic) UILabel *subtitleLabelIfLoaded; // @synthesize subtitleLabelIfLoaded=_subtitleLabelIfLoaded;
@property(readonly, nonatomic) UILabel *titleLabelIfLoaded; // @synthesize titleLabelIfLoaded=_titleLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isFixedHeight) _Bool fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) __weak id <ASCOfferButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) ASCOfferTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) long long subtitlePosition; // @synthesize subtitlePosition=_subtitlePosition;
- (id)description;	// IMP=0x00000000000247c2
- (void)layoutSubviews;	// IMP=0x00000000000246ad
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000024620
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000024559
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000024537
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000244b6
- (id)makeLayout;	// IMP=0x0000000000024176
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000024085
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000023e56
- (void)transitionToMetadata:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023d66
- (void)transitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000235e6
- (id)transitionColorForMetadata:(id)arg1;	// IMP=0x00000000000234b2
- (id)transitionImageForMetadata:(id)arg1;	// IMP=0x000000000002337f
- (_Bool)chainTransitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023044
- (_Bool)shouldTransitionImageViewFromMetadata:(id)arg1 toMetadata:(id)arg2;	// IMP=0x0000000000022edc
- (_Bool)canTransitionToMetadata:(id)arg1;	// IMP=0x0000000000022d3f
@property(retain, nonatomic) CAAnimation *imageAnimation;
- (void)endModalState;	// IMP=0x0000000000022aaf
- (void)beginModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022a08
- (void)updateFocusState;	// IMP=0x0000000000022030
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000021f55
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000021eff
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000021ea9
- (void)updateLabelStyleProperties;	// IMP=0x0000000000021a21
- (void)updateImageStyleProperties;	// IMP=0x00000000000216a4
@property(readonly, nonatomic) UILabel *subtitleLabel;
- (void)setSubtitleLabelIfLoaded:(id)arg1;	// IMP=0x00000000000214c6
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setTitleLabelIfLoaded:(id)arg1;	// IMP=0x0000000000021342
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002132d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021302
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000021151
- (_Bool)accessibilityActivate;	// IMP=0x0000000000039ca4
- (id)accessibilityValue;	// IMP=0x0000000000039bfd
- (id)accessibilityHint;	// IMP=0x0000000000039b98
- (id)accessibilityLabel;	// IMP=0x0000000000039957
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000000398e3
- (_Bool)isAccessibilityElement;	// IMP=0x00000000000398db

@end

