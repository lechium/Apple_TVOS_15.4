//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITable_UITableViewCellDelegate-Protocol.h>

@class NSMutableSet, NSString, UICollectionViewLayout, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UIImageView, UILabel, UIScrollView, UIShadowView, UITableViewCell, UITableViewCollectionCell, UIView;

@interface UICollectionViewTableCell <UITable_UITableViewCellDelegate>
{
    UIView *_swipeableView;	// 280 = 0x118
    UIShadowView *_borderShadowTopView;	// 288 = 0x120
    UIShadowView *_borderShadowBottomView;	// 296 = 0x128
    UIView *_selectedBackgroundViewToRestoreWhenInteractiveMoveEnds;	// 304 = 0x130
    long long _accessoryType;	// 312 = 0x138
    NSMutableSet *_trackedAnimators;	// 320 = 0x140
    _Bool _editing;	// 328 = 0x148
    double _reorderingCenterX;	// 336 = 0x150
    _Bool _interactiveMoveEffectsVisible;	// 344 = 0x158
    _Bool _borderShadowVisible;	// 345 = 0x159
    _Bool _transitioningLayouts;	// 346 = 0x15a
    UITableViewCell *_swipeToDeleteCell;	// 352 = 0x160
    UITableViewCollectionCell *_tableViewCell;	// 360 = 0x168
    UICollectionViewLayout *_currentLayout;	// 368 = 0x170
    double _offsetForRevealingDeleteConfirmationButton;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x00000000002c8653
@property(nonatomic, getter=_offsetForRevealingDeleteConfirmationButton, setter=_setOffsetForRevealingDeleteConfirmationButton:) double offsetForRevealingDeleteConfirmationButton; // @synthesize offsetForRevealingDeleteConfirmationButton=_offsetForRevealingDeleteConfirmationButton;
@property(nonatomic) __weak UICollectionViewLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) _Bool transitioningLayouts; // @synthesize transitioningLayouts=_transitioningLayouts;
@property(nonatomic) _Bool borderShadowVisible; // @synthesize borderShadowVisible=_borderShadowVisible;
@property(nonatomic) _Bool interactiveMoveEffectsVisible; // @synthesize interactiveMoveEffectsVisible=_interactiveMoveEffectsVisible;
@property(retain, nonatomic) UITableViewCollectionCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(retain, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell; // @synthesize swipeToDeleteCell=_swipeToDeleteCell;
- (void)didTransitionToState:(unsigned long long)arg1;	// IMP=0x00000000002c852c
- (void)willTransitionToState:(unsigned long long)arg1;	// IMP=0x00000000002c84e0
- (void)setFocusStyle:(long long)arg1;	// IMP=0x00000000002c8494
- (long long)focusStyle;	// IMP=0x00000000002c8450
@property(readonly, nonatomic) _Bool showingDeleteConfirmation;
@property(nonatomic) struct UIEdgeInsets separatorInset;
@property(nonatomic) double indentationWidth;
@property(nonatomic) long long indentationLevel;
@property(retain, nonatomic) UIView *editingAccessoryView;
@property(nonatomic) long long editingAccessoryType;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) long long accessoryType;
@property(nonatomic) _Bool shouldIndentWhileEditing;
@property(nonatomic) _Bool showsReorderControl;
@property(readonly, nonatomic) long long editingStyle;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002c7d94
- (_Bool)isHighlighted;	// IMP=0x00000000002c7d50
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002c7cf0
- (_Bool)isSelected;	// IMP=0x00000000002c7cac
@property(nonatomic) long long selectionStyle;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002c7baa
- (id)backgroundColor;	// IMP=0x00000000002c7b5a
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1;	// IMP=0x00000000002c7a26
- (id)selectedBackgroundView;	// IMP=0x00000000002c79d6
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000000002c7964
- (id)backgroundView;	// IMP=0x00000000002c7914
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UIImageView *imageView;
- (_Bool)_shouldHaveFooterViewForSection:(long long)arg1;	// IMP=0x00000000002c77d1
- (_Bool)_shouldHaveHeaderViewForSection:(long long)arg1;	// IMP=0x00000000002c777e
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x00000000002c772b
@property(readonly, nonatomic, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;
@property(readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property(readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) _Bool sectionContentInsetFollowsLayoutMargins;
@property(readonly, nonatomic, getter=_sectionCornerRadius) double sectionCornerRadius;
@property(readonly, nonatomic, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property(readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property(readonly, nonatomic, getter=_indexBarExtentFromEdge) double indexBarExtentFromEdge;
@property(readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame;
@property(readonly, nonatomic, getter=_isShowingIndex) _Bool showingIndex;
@property(readonly, nonatomic, getter=_bottomPadding) double bottomPadding;
@property(readonly, nonatomic, getter=_topPadding) double topPadding;
- (_Bool)insetsContentViewsToSafeArea;	// IMP=0x00000000002c70a3
@property(readonly, nonatomic) _Bool cellLayoutMarginsFollowReadableWidth;
@property(readonly, nonatomic, getter=_cellSafeAreaInsets) struct UIEdgeInsets cellSafeAreaInsets;
@property(readonly, nonatomic, getter=_backgroundInset) double backgroundInset;
@property(readonly, nonatomic) _Bool overlapsSectionHeaderViews;
@property(readonly, nonatomic) _Bool usesVariableMargins;
@property(readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) _Bool separatorInsetIsRelativeToCellEdges;
@property(readonly, nonatomic) double estimatedSectionFooterHeight;
@property(readonly, nonatomic) double estimatedSectionHeaderHeight;
@property(readonly, nonatomic) double estimatedRowHeight;
@property(readonly, nonatomic) double sectionFooterHeight;
@property(readonly, nonatomic) double sectionHeaderHeight;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
@property(readonly, nonatomic, getter=_numberOfSections) long long numberOfSections;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property(readonly, nonatomic, getter=_tableStyle) long long tableStyle;
@property(readonly, nonatomic, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property(readonly, nonatomic, getter=_rowSpacing) double rowSpacing;
@property(readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property(readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
- (_Bool)_effectiveDefaultAllowsFocus;	// IMP=0x00000000002c6603
- (_Bool)_shouldDrawThickSeparators;	// IMP=0x00000000002c65bf
- (void)_userSelectCell:(id)arg1;	// IMP=0x00000000002c65b9
- (void)_accessoryButtonAction:(id)arg1;	// IMP=0x00000000002c6523
- (void)_updateCell:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000002c651d
- (void)_highlightCell:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3 highlight:(_Bool)arg4;	// IMP=0x00000000002c6517
- (void)_animateDeletionOfRowWithCell:(id)arg1;	// IMP=0x00000000002c64a8
- (void)_animateDeletionOfRowAtIndexPath:(id)arg1;	// IMP=0x00000000002c63da
- (id)_titleForDeleteConfirmationButton:(id)arg1;	// IMP=0x00000000002c63d2
- (void)_didInsertRowForTableCell:(id)arg1;	// IMP=0x00000000002c62ce
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002c6253
- (void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg1;	// IMP=0x00000000002c6151
- (void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3;	// IMP=0x00000000002c613c
- (_Bool)_beginReorderingForCell:(id)arg1 touch:(id)arg2;	// IMP=0x00000000002c5e46
- (_Bool)_isReorderControlActiveForCell:(id)arg1;	// IMP=0x00000000002c5e3e
- (_Bool)_isCellReorderable:(id)arg1;	// IMP=0x00000000002c5e36
- (id)_reorderingCell;	// IMP=0x00000000002c5e2e
@property(readonly, nonatomic, getter=_isEditingForSwipeDeletion) _Bool editingForSwipeDeletion;
- (void)_swipeToDeleteCell:(id)arg1;	// IMP=0x00000000002c5dda
- (struct CGRect)_calloutTargetRectForCell:(id)arg1;	// IMP=0x00000000002c5dbc
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;	// IMP=0x00000000002c5db6
- (_Bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;	// IMP=0x00000000002c5dae
- (_Bool)_shouldShowMenuForCell:(id)arg1;	// IMP=0x00000000002c5da6
- (long long)_cellFocusItemDeferral:(id)arg1;	// IMP=0x00000000002c5d94
- (void)_cellDidBecomeUnfocused:(id)arg1;	// IMP=0x00000000002c5d8e
- (void)_cellDidBecomeFocused:(id)arg1;	// IMP=0x00000000002c5d88
- (_Bool)_canFocusCell:(id)arg1;	// IMP=0x00000000002c5d80
- (void)_cellDidHideSelectedBackground:(id)arg1;	// IMP=0x00000000002c5d7a
- (void)_cellDidShowSelectedBackground:(id)arg1;	// IMP=0x00000000002c5d74
@property(readonly, nonatomic, getter=_wasEditing) _Bool wasEditing;
@property(readonly, nonatomic, getter=_isInModalViewController) _Bool inModalViewController;
@property(readonly, nonatomic, getter=_popoverControllerStyle) long long popoverControllerStyle;
- (double)_selectionAnimationDuration;	// IMP=0x00000000002c5d0c
- (void)_setupForEditing:(_Bool)arg1 atIndexPath:(id)arg2 multiselect:(_Bool)arg3 editingStyle:(long long)arg4 shouldIndentWhileEditing:(_Bool)arg5 showsReorderControl:(_Bool)arg6 accessoryType:(long long)arg7 updateSeparators:(_Bool)arg8;	// IMP=0x00000000002c5be5
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002c5bc3
@property(readonly, nonatomic) _Bool canBeEdited;
@property(readonly, nonatomic, getter=isInTableLayout) _Bool inTableLayout;
- (void)prepareForReuse;	// IMP=0x00000000002c56db
- (void)_trackAnimator:(id)arg1;	// IMP=0x00000000002c5523
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x00000000002c54bc
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x00000000002c539a
- (void)_updateInternalCellForTableLayout:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002c4b82
- (void)updateCellForTableLayout:(_Bool)arg1;	// IMP=0x00000000002c4b70
- (void)_updateEditing;	// IMP=0x00000000002c4a24
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000002c4728
- (void)layoutSubviews;	// IMP=0x00000000002c4538
- (void)_removeInteractiveMoveShadowViews;	// IMP=0x00000000002c44c6
- (void)_insertInteractiveMoveShadowViews;	// IMP=0x00000000002c42db
- (_Bool)_isInteractiveMoveShadowInstalled;	// IMP=0x00000000002c429d
- (void)_layoutInteractiveMoveShadow;	// IMP=0x00000000002c4234
- (void)_layoutTableViewCell;	// IMP=0x00000000002c41bc
- (struct UIEdgeInsets)_contentViewInset;	// IMP=0x00000000002c4005
@property(readonly, nonatomic) UIView *swipeableView;
- (void)awakeFromNib;	// IMP=0x00000000002c3faf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c3f57
- (void)_commonSetupTableCell;	// IMP=0x00000000002c3c6c
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000002c3ad6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
