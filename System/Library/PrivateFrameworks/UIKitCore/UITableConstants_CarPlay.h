//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableConstants-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_CarPlay : NSObject <UITableConstants>
{
}

+ (id)sharedConstants;	// IMP=0x0000000000d287e0
- (unsigned long long)contentClipCornersForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d2a05c
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000000d2a054
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000000d29f0a
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000000d29f02
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000000d29efa
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000000d29ef1
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000000d29ee8
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000000d29edf
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29ed1
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000000d29ec9
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000000d29ebb
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000d29d1d
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000d29c86
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000000d29c78
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000000d29b72
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000000d29a37
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000d29a1e
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000000d29a08
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000000d299ef
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000000d299d9
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d299bb
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d299b2
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d299a4
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d2994a
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d2992f
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000000d29914
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d298ab
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000000d29892
- (id)_imageWithName:(id)arg1 accessoryBaseColor:(id)arg2;	// IMP=0x0000000000d297aa
- (id)_defaultAccessoryColorFocused:(_Bool)arg1;	// IMP=0x0000000000d29771
- (id)defaultFocusedAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29758
- (id)defaultAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d2973f
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 tableBackgroundColor:(id)arg2 floating:(_Bool)arg3;	// IMP=0x0000000000d296d5
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000000d296cd
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000d29693
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000000d29659
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d29628
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d29587
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000d29555
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000000d29532
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29519
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000000d29500
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000000d294d3
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x0000000000d294b0
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29497
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000000d2947e
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d29475
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d2946d
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d29465
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000000d29449
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000d2943b
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000d2942d
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000d293f9
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x0000000000d293ea
- (double)_defaultPlainHeaderFooterHeightForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d29392
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000d29384
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000d29372
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000000d292f3
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x0000000000d292ca
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x0000000000d292c2
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x0000000000d292af
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000000d29290
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000000d29271
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000000d29268
- (double)defaultPaddingBetweenRows;	// IMP=0x0000000000d2925a
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000000d29251
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000000d29243
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000000d290ed
- (double)defaultCellCornerRadius;	// IMP=0x0000000000d290e4
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000000d290db
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000d290d2
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d290c9
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000000d290b7
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000000d290a5
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000d29093
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000000d29085
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29077
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29069
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d29061
- (struct UIEdgeInsets)headerFooterOffsetFromContentInsetForTableView:(id)arg1;	// IMP=0x0000000000d29047
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d2901a
- (struct UIEdgeInsets)defaultCellLayoutMarginsForStyle:(long long)arg1 textLabelFont:(id)arg2 rawLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000d28fd0
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d28e84
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000d28d92
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000000d28d84
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000000d28d76
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000000d28cbc
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000d28c06
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000000d28bf8
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000000d28bea
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000000d28be2
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000000d28bce
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000000d28bc0
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d28bb8
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000000d28bb0
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000d28aba
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000000d289c4
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000000d288ba
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000000d28891
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d28878
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d28870
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000000d28836
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000000d2882e
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000000d28825
- (id)sidebarVariant;	// IMP=0x0000000000d2881c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

