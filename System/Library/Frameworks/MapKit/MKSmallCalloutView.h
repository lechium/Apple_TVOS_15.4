//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UILayoutGuide, UIMotionEffectGroup, _MKSmallCalloutPassthroughButton, _MKUILabel;
@protocol _MKCalloutAccessoryView;

__attribute__((visibility("hidden")))
@interface MKSmallCalloutView : UIView
{
    _MKUILabel *_titleLabel;	// 8 = 0x8
    _MKUILabel *_subtitleLabel;	// 16 = 0x10
    UIView<_MKCalloutAccessoryView> *_leftView;	// 24 = 0x18
    UIView<_MKCalloutAccessoryView> *_rightView;	// 32 = 0x20
    UIView<_MKCalloutAccessoryView> *_externalLeftView;	// 40 = 0x28
    UIView<_MKCalloutAccessoryView> *_externalRightView;	// 48 = 0x30
    UIView<_MKCalloutAccessoryView> *_externalDetailView;	// 56 = 0x38
    UIView<_MKCalloutAccessoryView> *_detailView;	// 64 = 0x40
    struct CGSize _preferredContentSize;	// 72 = 0x48
    _Bool _shouldPositionTitleForMapsTransitionMovingSideways;	// 88 = 0x58
    _MKSmallCalloutPassthroughButton *_maskedContainerView;	// 96 = 0x60
    UIView *_unmaskedContainerView;	// 104 = 0x68
    CDStruct_f381021a _metrics;	// 112 = 0x70
    _Bool _needsPreferredContentSizeUpdate;	// 208 = 0xd0
    _Bool _parallaxEnabled;	// 209 = 0xd1
    UIMotionEffectGroup *_motionEffect;	// 216 = 0xd8
    NSLayoutConstraint *_minWidthConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_maxWidthConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;	// 248 = 0xf8
    NSArray *_titleLabelConstraints;	// 256 = 0x100
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;	// 264 = 0x108
    NSLayoutConstraint *_titleBaselineFromTopConstraint;	// 272 = 0x110
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;	// 280 = 0x118
    UILayoutGuide *_centerContentLeadingGuide;	// 288 = 0x120
    UILayoutGuide *_centerContentTrailingGuide;	// 296 = 0x128
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;	// 304 = 0x130
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;	// 312 = 0x138
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;	// 320 = 0x140
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;	// 328 = 0x148
    UILayoutGuide *_leftViewTopSpacer;	// 336 = 0x150
    UILayoutGuide *_leftViewLeftSpacer;	// 344 = 0x158
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;	// 352 = 0x160
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;	// 360 = 0x168
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;	// 368 = 0x170
    UILayoutGuide *_rightViewTopSpacer;	// 376 = 0x178
    UILayoutGuide *_rightViewRightSpacer;	// 384 = 0x180
    NSLayoutConstraint *_detailViewMinTopConstraint;	// 392 = 0x188
    NSLayoutConstraint *_detailViewBottomConstraint;	// 400 = 0x190
    NSLayoutConstraint *_detailViewTrailingConstraint;	// 408 = 0x198
    UIView *_titlesContainerView;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x0000000000239fe3
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(readonly, nonatomic) UIView *titlesContainerView; // @synthesize titlesContainerView=_titlesContainerView;
- (_Bool)canDisplayCompleteTitleWhenExpanded;	// IMP=0x0000000000239fba
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000239554
@property(retain, nonatomic) UIView *detailView;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000023884c
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002379e7
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002376b1
@property(copy, nonatomic) NSString *calloutTitle;
- (id)_maskedContainerView;	// IMP=0x00000000002374b5
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void)_updatePreferredContentSize;	// IMP=0x0000000000237416
- (void)_updatePreferredContentSizeIfNeeded;	// IMP=0x00000000002373f5
- (void)_setNeedsUpdatePreferredContentSize;	// IMP=0x00000000002373e4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002373b5
- (void)beginMapsTransitionMovingSideways;	// IMP=0x0000000000237320
- (void)reset;	// IMP=0x0000000000237193
- (void)_updateTransformForMotionEffectDirection:(struct CGPoint)arg1 forSubview:(id)arg2;	// IMP=0x0000000000236d8a
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x0000000000236c28
- (void)dealloc;	// IMP=0x0000000000236894
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumWidth;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002365e6
- (id)initWithFrame:(struct CGRect)arg1 metrics:(CDStruct_f381021a)arg2;	// IMP=0x0000000000235292
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002351f0

@end

