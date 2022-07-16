//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <TVUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TVLockupHeaderFooterView, UITapGestureRecognizer, UIView;

@interface TVLockupView : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _fixesHeaderFooterAtUnfocusedWidth;	// 8 = 0x8
    _Bool _ancestorFocused;	// 9 = 0x9
    TVLockupHeaderFooterView *_headerView;	// 16 = 0x10
    TVLockupHeaderFooterView *_footerView;	// 24 = 0x18
    NSLayoutConstraint *_headerViewTop;	// 32 = 0x20
    NSLayoutConstraint *_headerViewBottom;	// 40 = 0x28
    NSLayoutConstraint *_headerViewLeading;	// 48 = 0x30
    NSLayoutConstraint *_headerViewTrailing;	// 56 = 0x38
    NSLayoutConstraint *_contentViewTop;	// 64 = 0x40
    NSLayoutConstraint *_contentViewBottom;	// 72 = 0x48
    NSLayoutConstraint *_contentViewLeading;	// 80 = 0x50
    NSLayoutConstraint *_contentViewTrailing;	// 88 = 0x58
    NSLayoutConstraint *_footerViewTop;	// 96 = 0x60
    NSLayoutConstraint *_footerViewBottom;	// 104 = 0x68
    NSLayoutConstraint *_footerViewLeading;	// 112 = 0x70
    NSLayoutConstraint *_footerViewTrailing;	// 120 = 0x78
    UITapGestureRecognizer *_selectGestureRecognizer;	// 128 = 0x80
    UIView *_concreteContentView;	// 136 = 0x88
    struct CGSize _contentSize;	// 144 = 0x90
    struct NSDirectionalEdgeInsets _contentViewInsets;	// 160 = 0xa0
    struct NSDirectionalEdgeInsets _focusSizeIncrease;	// 192 = 0xc0
}

+ (_Bool)_inheritsAncestorHighlighting;	// IMP=0x000000000003d31f
+ (Class)_concreteContentViewClass;	// IMP=0x000000000003b3f8
- (void).cxx_destruct;	// IMP=0x000000000003d6c6
@property(nonatomic) _Bool ancestorFocused; // @synthesize ancestorFocused=_ancestorFocused;
@property(retain, nonatomic) UIView *concreteContentView; // @synthesize concreteContentView=_concreteContentView;
@property(nonatomic) _Bool fixesHeaderFooterAtUnfocusedWidth; // @synthesize fixesHeaderFooterAtUnfocusedWidth=_fixesHeaderFooterAtUnfocusedWidth;
@property(readonly, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // @synthesize selectGestureRecognizer=_selectGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *footerViewTrailing; // @synthesize footerViewTrailing=_footerViewTrailing;
@property(retain, nonatomic) NSLayoutConstraint *footerViewLeading; // @synthesize footerViewLeading=_footerViewLeading;
@property(retain, nonatomic) NSLayoutConstraint *footerViewBottom; // @synthesize footerViewBottom=_footerViewBottom;
@property(retain, nonatomic) NSLayoutConstraint *footerViewTop; // @synthesize footerViewTop=_footerViewTop;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTrailing; // @synthesize contentViewTrailing=_contentViewTrailing;
@property(retain, nonatomic) NSLayoutConstraint *contentViewLeading; // @synthesize contentViewLeading=_contentViewLeading;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottom; // @synthesize contentViewBottom=_contentViewBottom;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTop; // @synthesize contentViewTop=_contentViewTop;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTrailing; // @synthesize headerViewTrailing=_headerViewTrailing;
@property(retain, nonatomic) NSLayoutConstraint *headerViewLeading; // @synthesize headerViewLeading=_headerViewLeading;
@property(retain, nonatomic) NSLayoutConstraint *headerViewBottom; // @synthesize headerViewBottom=_headerViewBottom;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTop; // @synthesize headerViewTop=_headerViewTop;
@property(nonatomic) struct NSDirectionalEdgeInsets focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) struct NSDirectionalEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) TVLockupHeaderFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TVLockupHeaderFooterView *headerView; // @synthesize headerView=_headerView;
- (unsigned long long)_stateForFocusUpdateContext:(id)arg1;	// IMP=0x000000000003d327
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003d292
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000003d26f
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000003d24c
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x000000000003d1f9
- (void)_installSelectGestureRecognizer;	// IMP=0x000000000003d15a
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003d152
@property(readonly, nonatomic) _Bool canAncestorBecomeFocused;
- (unsigned long long)_stateByApplyingAncestorFocusState;	// IMP=0x000000000003d06e
- (void)_addHeaderFooterView:(id)arg1 position:(long long)arg2;	// IMP=0x000000000003c90d
- (void)_updateComponentViewConstraints;	// IMP=0x000000000003c753
- (void)_updateComponentAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x000000000003c53c
- (void)_updateHeaderFooterHorizontalGeometryInFocus:(_Bool)arg1;	// IMP=0x000000000003c1f8
- (void)_updateHeaderFooterVerticalPositionsInFocus:(_Bool)arg1;	// IMP=0x000000000003be66
- (void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003bd12
- (struct CGSize)_intrinsicContentSize;	// IMP=0x000000000003ba55
- (void)_createContentViewConstraints;	// IMP=0x000000000003b7cd
- (void)_createConcreteContentView;	// IMP=0x000000000003b6f3
- (struct CGSize)_inferredContentSizeFromFrame:(struct CGRect)arg1;	// IMP=0x000000000003b442
- (void)_createFooterView;	// IMP=0x000000000003b409
@property(readonly, nonatomic) UIView *contentView;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000003b356
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003b2c6
- (void)pressesCanceled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b1f2
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b11e
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b047
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003afba
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003afa8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003af96
- (_Bool)canBecomeFocused;	// IMP=0x000000000003af81
- (void)layoutSubviews;	// IMP=0x000000000003adf9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a7fc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a4da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003a3c6
- (id)init;	// IMP=0x000000000003a394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
