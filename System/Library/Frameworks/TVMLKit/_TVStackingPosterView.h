//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, _TVAnimatedLabel;

@interface _TVStackingPosterView : UIView <TVAuxiliaryViewSelecting>
{
    _Bool _requiresReconfiguration;	// 8 = 0x8
    NSLayoutConstraint *_topAnchorConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomAnchorConstraint;	// 24 = 0x18
    NSLayoutConstraint *_topImageConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomImageConstraint;	// 40 = 0x28
    double _topAnchorConstant;	// 48 = 0x30
    double _bottomAnchorConstant;	// 56 = 0x38
    double _topImageConstant;	// 64 = 0x40
    double _bottomImageConstant;	// 72 = 0x48
    double _labelWidthExpansionAmount;	// 80 = 0x50
    NSArray *_labelWidthConstraints;	// 88 = 0x58
    _Bool _configuresForCollectionViewCell;	// 96 = 0x60
    _Bool _highlighted;	// 97 = 0x61
    NSArray *_components;	// 104 = 0x68
    UIView *_overlayView;	// 112 = 0x70
    NSArray *_filteredComponents;	// 120 = 0x78
    UIView *_mainImageComponent;	// 128 = 0x80
    _TVAnimatedLabel *_animatedLabel;	// 136 = 0x88
    NSArray *_marqueeLabels;	// 144 = 0x90
    NSArray *_visibleLabelWidths;	// 152 = 0x98
    struct CGSize _maxBoundsSize;	// 160 = 0xa0
    struct TVCellMetrics _cellMetrics;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000013d295
@property(copy, nonatomic) NSArray *visibleLabelWidths; // @synthesize visibleLabelWidths=_visibleLabelWidths;
@property(copy, nonatomic) NSArray *marqueeLabels; // @synthesize marqueeLabels=_marqueeLabels;
@property(retain, nonatomic) _TVAnimatedLabel *animatedLabel; // @synthesize animatedLabel=_animatedLabel;
@property(retain, nonatomic) UIView *mainImageComponent; // @synthesize mainImageComponent=_mainImageComponent;
@property(copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool configuresForCollectionViewCell; // @synthesize configuresForCollectionViewCell=_configuresForCollectionViewCell;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) struct CGSize maxBoundsSize; // @synthesize maxBoundsSize=_maxBoundsSize;
- (void)_updateFocusSizeIncrease;	// IMP=0x000000000013cf92
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;	// IMP=0x000000000013cea2
- (double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3;	// IMP=0x000000000013ce21
- (struct TVCellMetrics)_cellMetricsForMaxSize:(struct CGSize)arg1;	// IMP=0x000000000013b85f
- (void)_updateComponentConstraints;	// IMP=0x000000000013abe3
- (void)_configureSubviews;	// IMP=0x0000000000139db3
- (void)_updateSubviewHeirarchyWithComponents:(id)arg1;	// IMP=0x0000000000139ada
- (void)_resetSubviews;	// IMP=0x00000000001399d6
- (struct UIEdgeInsets)_mainImageComponentAspectFitMarginsForCellMetrics:(struct TVCellMetrics)arg1;	// IMP=0x0000000000139810
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x0000000000139612
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x00000000001395c8
- (void)_moveAllComponentsByOffset:(double)arg1;	// IMP=0x000000000013945b
- (double)_labelOffsetForIdleMode;	// IMP=0x000000000013933c
- (void)_applicationWillExitIdleMode:(id)arg1;	// IMP=0x0000000000139174
- (void)_applicationWillEnterIdleMode:(id)arg1;	// IMP=0x0000000000138fb6
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000138f9e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000138f86
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x0000000000137bde
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000137b1c
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000137aab
@property(nonatomic) struct CGPoint focusDirection;
- (void)layoutSubviews;	// IMP=0x000000000013781f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001377e7
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000137721
- (void)updateComponentLayout;	// IMP=0x00000000001376f3
- (void)setNeedsUpdateComponentLayout;	// IMP=0x00000000001372aa
- (void)setComponents:(id)arg1 mainImageComponent:(id)arg2;	// IMP=0x0000000000136573
- (id)preferredFocusEnvironments;	// IMP=0x0000000000136498
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000013633f
- (void)_commonInit;	// IMP=0x000000000013624d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000136201
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001361a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

