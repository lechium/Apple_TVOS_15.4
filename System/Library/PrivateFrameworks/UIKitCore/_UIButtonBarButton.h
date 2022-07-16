//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSLayoutConstraint, _UIBarButtonItemData, _UIButtonBarButtonVisualProvider;

@interface _UIButtonBarButton
{
    _UIButtonBarButtonVisualProvider *_visualProvider;	// 112 = 0x70
    NSLayoutConstraint *_widthMinimizingConstraint;	// 120 = 0x78
    NSLayoutConstraint *_heightMinimizingConstraint;	// 128 = 0x80
    _Bool _autolayoutIsCleanForBoundsChange;	// 136 = 0x88
    NSDate *_appearanceDate;	// 144 = 0x90
    _Bool _backButton;	// 152 = 0x98
    _UIBarButtonItemData *_appearanceData;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000105202
@property(retain, nonatomic) _UIBarButtonItemData *appearanceData; // @synthesize appearanceData=_appearanceData;
@property(readonly, nonatomic, getter=isBackButton) _Bool backButton; // @synthesize backButton=_backButton;
@property(readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001050c8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000010502a
- (void)_accessibilitySettingsChanged:(id)arg1;	// IMP=0x0000000000104ff2
- (_Bool)_accessibilityShouldActivateOnHUDLift;	// IMP=0x0000000000104fe0
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000104f6a
@property(readonly, nonatomic) struct CGRect _buttonBarHitRect;
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000104ea6
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000104e86
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x0000000000104e2f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000104db9
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000000104d43
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000104c29
- (void)_is_setNeedsLayout;	// IMP=0x0000000000104bed
- (void)layoutSubviews;	// IMP=0x0000000000104b63
- (void)pasteTouchDown;	// IMP=0x0000000000104b44
- (void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(_Bool)arg3;	// IMP=0x0000000000104a06
@property(readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
- (void)setNeedsAppearanceUpdate;	// IMP=0x0000000000104809
- (void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;	// IMP=0x000000000010461b
- (void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;	// IMP=0x0000000000104599
@property(nonatomic) _Bool backButtonMaskEnabled;
- (void)_setTouchHasHighlighted:(_Bool)arg1;	// IMP=0x000000000010450c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000010448b
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000010440a
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000104389
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x000000000010437e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000104369
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010433e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000104313
- (id)init;	// IMP=0x00000000001042e8
- (id)initWithVisualProvider:(id)arg1;	// IMP=0x00000000001041f5
- (void)dealloc;	// IMP=0x0000000000104151

@end

