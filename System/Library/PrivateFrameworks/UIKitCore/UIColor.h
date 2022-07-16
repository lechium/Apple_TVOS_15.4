//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSItemProviderReading-Protocol.h>
#import <UIKitCore/NSItemProviderWriting-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class CIColor, NSArray, NSString;

@interface UIColor : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;	// 8 = 0x8
    NSString *_cachedStyleString;	// 16 = 0x10
}

+ (id)_apiColorNames;	// IMP=0x000000000071963e
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x000000000071955a
+ (id)colorNamed:(id)arg1;	// IMP=0x0000000000719543
+ (id)_webContentBackgroundColor;	// IMP=0x000000000071946b
+ (id)__tintColor;	// IMP=0x0000000000719459
+ (id)_tintColor;	// IMP=0x0000000000719447
+ (id)tintColor;	// IMP=0x00000000007193f2
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;	// IMP=0x00000000007193c3
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;	// IMP=0x00000000007193aa
+ (id)_vibrantDarkFillDodgeColor;	// IMP=0x0000000000719381
+ (id)_vibrantLightFillDarkeningColor;	// IMP=0x000000000071935d
+ (id)_vibrantLightFillBurnColor;	// IMP=0x0000000000719334
+ (id)_vibrantLightDividerDarkeningColor;	// IMP=0x0000000000719305
+ (id)_vibrantLightDividerBurnColor;	// IMP=0x00000000007192dc
+ (id)_systemSelectedColor;	// IMP=0x00000000007192c3
+ (id)_externalBarBackgroundColor;	// IMP=0x00000000007192aa
+ (id)_grayColorForFontSize:(double)arg1;	// IMP=0x000000000071925c
+ (id)_dimmingViewColor;	// IMP=0x0000000000719243
+ (id)_translucentPaperTextureColor;	// IMP=0x000000000071915d
+ (id)noContentDarkGradientBackgroundColor;	// IMP=0x0000000000719009
+ (id)noContentLightGradientBackgroundColor;	// IMP=0x0000000000718f6d
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;	// IMP=0x0000000000718ea0
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;	// IMP=0x0000000000718dd8
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;	// IMP=0x0000000000718d0b
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;	// IMP=0x0000000000718c3e
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;	// IMP=0x0000000000718b71
+ (id)_externalSystemSuperDarkGrayColor;	// IMP=0x0000000000718aa4
+ (id)_externalSystemExtraDarkGrayColor;	// IMP=0x00000000007189d7
+ (id)_externalSystemDarkGrayColor;	// IMP=0x000000000071890a
+ (id)_externalSystemGrayColor;	// IMP=0x000000000071883d
+ (id)_externalSystemMidGrayColor;	// IMP=0x0000000000718770
+ (id)_externalSystemWhiteColor;	// IMP=0x00000000007186a8
+ (id)_systemMidGrayTintColor;	// IMP=0x00000000007185d5
+ (id)_barStyleBlackHairlineShadowColor;	// IMP=0x0000000000718502
+ (id)_barHairlineShadowColor;	// IMP=0x0000000000718434
+ (id)_systemDestructiveTintColor;	// IMP=0x000000000071835c
+ (id)_systemInteractionTintColor;	// IMP=0x0000000000718289
+ (id)systemDarkGrayTintColor;	// IMP=0x00000000007180c6
+ (id)systemDarkMidGrayTintColor;	// IMP=0x0000000000717f08
+ (id)systemDarkLightMidGrayTintColor;	// IMP=0x0000000000717d45
+ (id)systemDarkLightGrayTintColor;	// IMP=0x0000000000717b82
+ (id)systemDarkExtraLightGrayTintColor;	// IMP=0x00000000007179bf
+ (id)systemGrayTintColor;	// IMP=0x00000000007177fc
+ (id)systemMidGrayTintColor;	// IMP=0x000000000071763e
+ (id)systemLightMidGrayTintColor;	// IMP=0x000000000071747b
+ (id)systemLightGrayTintColor;	// IMP=0x00000000007172b8
+ (id)systemExtraLightGrayTintColor;	// IMP=0x00000000007170f5
+ (id)externalSystemGreenColor;	// IMP=0x0000000000716f2d
+ (id)externalSystemRedColor;	// IMP=0x0000000000716d6a
+ (id)externalSystemTealColor;	// IMP=0x0000000000716ba2
+ (id)systemDarkGrayColor;	// IMP=0x00000000007169df
+ (id)systemDarkMidGrayColor;	// IMP=0x000000000071681c
+ (id)systemDarkLightMidGrayColor;	// IMP=0x0000000000716659
+ (id)systemDarkLightGrayColor;	// IMP=0x0000000000716496
+ (id)systemDarkExtraLightGrayColor;	// IMP=0x00000000007162d3
+ (id)systemDarkPurpleColor;	// IMP=0x000000000071610b
+ (id)systemDarkPinkColor;	// IMP=0x0000000000715f43
+ (id)systemDarkTealColor;	// IMP=0x0000000000715d7b
+ (id)systemDarkYellowColor;	// IMP=0x0000000000715bb3
+ (id)systemDarkOrangeColor;	// IMP=0x00000000007159eb
+ (id)systemDarkBlueColor;	// IMP=0x0000000000715828
+ (id)systemDarkGreenColor;	// IMP=0x0000000000715665
+ (id)systemDarkRedColor;	// IMP=0x000000000071549d
+ (id)systemBlackColor;	// IMP=0x00000000007152e4
+ (id)systemLightMidGrayColor;	// IMP=0x0000000000715121
+ (id)systemLightGrayColor;	// IMP=0x0000000000714f5e
+ (id)systemExtraLightGrayColor;	// IMP=0x0000000000714d9b
+ (id)systemWhiteColor;	// IMP=0x0000000000714be2
+ (id)systemMidGrayColor;	// IMP=0x000000000071481b
+ (id)scrollViewTexturedBackgroundColor;	// IMP=0x000000000071478d
+ (id)underPageBackgroundColor;	// IMP=0x00000000007146d3
+ (id)viewFlipsideBackgroundColor;	// IMP=0x0000000000714619
+ (id)tableCellBlueTextColor;	// IMP=0x000000000071458c
+ (id)tableGroupedSeparatorLightColor;	// IMP=0x00000000007144db
+ (id)_appKeyColorOrDefaultTint;	// IMP=0x0000000000714491
+ (id)_appKeyColor;	// IMP=0x0000000000714402
+ (id)keyboardFocusIndicatorColor;	// IMP=0x00000000007143e9
+ (id)darkTextColor;	// IMP=0x0000000000714321
+ (id)lightTextColor;	// IMP=0x0000000000714254
+ (id)selectionGrabberColor;	// IMP=0x0000000000714177
+ (id)insertionPointColor;	// IMP=0x000000000071409a
+ (id)selectionHighlightColor;	// IMP=0x0000000000713fc2
+ (id)pinStripeColor;	// IMP=0x0000000000713edc
+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;	// IMP=0x00000000007133d4
+ (id)textFieldAtomBlueColor;	// IMP=0x0000000000712697
+ (id)__halfTransparentWhiteColor;	// IMP=0x0000000000712622
+ (id)__halfTransparentBlackColor;	// IMP=0x00000000007125b2
+ (id)infoTextOverPinStripeTextColor;	// IMP=0x00000000007124d5
+ (id)textFieldAtomPurpleColor;	// IMP=0x00000000007123fd
+ (id)tableCellGrayTextColor;	// IMP=0x000000000071232a
+ (id)tableCellValue2BlueColor;	// IMP=0x000000000071224d
+ (id)tableCellValue1BlueColor;	// IMP=0x0000000000712170
+ (id)sectionHeaderBorderColor;	// IMP=0x0000000000712093
+ (id)sectionHeaderOpaqueBackgroundColor;	// IMP=0x0000000000711fb6
+ (id)sectionHeaderBackgroundColor;	// IMP=0x0000000000711ed9
+ (id)sectionListBorderColor;	// IMP=0x0000000000711dfc
+ (id)tableGroupedTopShadowColor;	// IMP=0x0000000000711d2e
+ (id)tableShadowColor;	// IMP=0x0000000000711c5b
+ (id)tableSelectionGradientEndColor;	// IMP=0x0000000000711b7e
+ (id)tableSelectionGradientStartColor;	// IMP=0x0000000000711aa1
+ (id)tableCellbackgroundColorCarPlay;	// IMP=0x00000000007119d3
+ (id)tableCellBackgroundColor;	// IMP=0x0000000000711905
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// IMP=0x0000000000711837
+ (id)brownColor;	// IMP=0x000000000071175a
+ (id)purpleColor;	// IMP=0x0000000000711687
+ (id)orangeColor;	// IMP=0x00000000007115b4
+ (id)magentaColor;	// IMP=0x00000000007114e6
+ (id)yellowColor;	// IMP=0x0000000000711418
+ (id)cyanColor;	// IMP=0x000000000071134a
+ (id)blueColor;	// IMP=0x000000000071127c
+ (id)greenColor;	// IMP=0x00000000007111ae
+ (id)redColor;	// IMP=0x00000000007110e0
+ (id)clearColor;	// IMP=0x000000000071101d
+ (id)grayColor;	// IMP=0x0000000000710f50
+ (id)whiteColor;	// IMP=0x0000000000710e88
+ (id)lightGrayColor;	// IMP=0x0000000000710dbb
+ (id)darkGrayColor;	// IMP=0x0000000000710cee
+ (id)blackColor;	// IMP=0x0000000000710c26
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x0000000000710570
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000070ff5a
+ (id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;	// IMP=0x000000000070fba6
+ (id)_disabledColorForColor:(id)arg1;	// IMP=0x000000000070f8e6
+ (id)_accessibilityLightenedColorForColor:(id)arg1;	// IMP=0x000000000070f779
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;	// IMP=0x000000000070f5e9
+ (id)__darkSystemColorForColor:(id)arg1;	// IMP=0x000000000070f4df
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;	// IMP=0x000000000070f294
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;	// IMP=0x000000000070f1e4
+ (id)_systemColorWithUnvalidatedName:(id)arg1;	// IMP=0x000000000070f1a1
+ (id)_systemColorWithName:(id)arg1;	// IMP=0x000000000070f069
+ (id)_systemColorSelectorTable;	// IMP=0x000000000070dc49
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070dbf0
+ (id)colorWithCIColor:(id)arg1;	// IMP=0x000000000070dba3
+ (id)colorWithPatternImage:(id)arg1;	// IMP=0x000000000070db56
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000070db3d
+ (id)colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000070d8f6
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070d8dd
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070d884
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070d82b
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x000000000070d7e6
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000070d76d
+ (void)initialize;	// IMP=0x000000000070d6ef
+ (id)_dynamicColorWithColorsByTraitCollection:(id)arg1;	// IMP=0x000000000071a012
+ (id)colorWithDynamicProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000071a05f
+ (id)tertiarySystemGroupedBackgroundColor;	// IMP=0x0000000000724828
+ (id)secondarySystemGroupedBackgroundColor;	// IMP=0x0000000000724437
+ (id)systemGroupedBackgroundColor;	// IMP=0x000000000072400e
+ (id)tertiarySystemBackgroundColor;	// IMP=0x0000000000723c1d
+ (id)secondarySystemBackgroundColor;	// IMP=0x0000000000723818
+ (id)systemBackgroundColor;	// IMP=0x0000000000723529
+ (id)opaqueSeparatorColor;	// IMP=0x0000000000723331
+ (id)separatorColor;	// IMP=0x0000000000723011
+ (id)placeholderTextColor;	// IMP=0x0000000000722f4c
+ (id)linkColor;	// IMP=0x0000000000722d59
+ (id)quaternaryLabelColor;	// IMP=0x00000000007228a3
+ (id)tertiaryLabelColor;	// IMP=0x00000000007223bd
+ (id)secondaryLabelColor;	// IMP=0x0000000000721ed4
+ (id)labelColor;	// IMP=0x0000000000721cfd
+ (id)systemMintColor;	// IMP=0x00000000007219f1
+ (id)systemIndigoColor;	// IMP=0x00000000007214ec
+ (id)systemTealColor;	// IMP=0x00000000007211e5
+ (id)systemCyanColor;	// IMP=0x0000000000720ee3
+ (id)systemBrownColor;	// IMP=0x0000000000720bd2
+ (id)systemGray6Color;	// IMP=0x00000000007208d5
+ (id)systemGray5Color;	// IMP=0x00000000007205d8
+ (id)systemGray4Color;	// IMP=0x00000000007202db
+ (id)systemGray3Color;	// IMP=0x000000000071ffbb
+ (id)systemGray2Color;	// IMP=0x000000000071fcbe
+ (id)systemGrayColor;	// IMP=0x000000000071fa4d
+ (id)systemPurpleColor;	// IMP=0x000000000071f639
+ (id)systemPinkColor;	// IMP=0x000000000071efc4
+ (id)systemYellowColor;	// IMP=0x000000000071ebc6
+ (id)systemOrangeColor;	// IMP=0x000000000071e7cd
+ (id)_systemBlueColor2;	// IMP=0x000000000071e4d5
+ (id)systemBlueColor;	// IMP=0x000000000071e157
+ (id)systemGreenColor;	// IMP=0x000000000071dabc
+ (id)systemRedColor;	// IMP=0x000000000071d6bc
+ (id)_tvInterfaceStyleDarkContentColor;	// IMP=0x000000000072c421
+ (id)_tvInterfaceStyleLightContentColor;	// IMP=0x000000000072c359
+ (id)_tvLabelOpacityCColor;	// IMP=0x000000000072c340
+ (id)_tvLabelOpacityBColor;	// IMP=0x000000000072c327
+ (id)_tvLabelOpacityAColor;	// IMP=0x000000000072c30e
+ (id)_unfocusedCarSystemColor:(id)arg1;	// IMP=0x000000000072c223
+ (id)_focusedCarSystemColor:(id)arg1;	// IMP=0x000000000072c138
+ (id)_alternateSystemInteractionTintColor;	// IMP=0x000000000072c11f
+ (id)_carSystemFocusSecondaryColor;	// IMP=0x000000000072bf42
+ (id)_carSystemFocusPrimaryColor;	// IMP=0x000000000072bd65
+ (id)_carSystemFocusLabelColor;	// IMP=0x000000000072bb8d
+ (id)_carSystemFocusColor;	// IMP=0x000000000072b99a
+ (id)_carSystemQuaternaryColor;	// IMP=0x000000000072b7bd
+ (id)_carSystemTertiaryColor;	// IMP=0x000000000072b5e0
+ (id)_carSystemSecondaryColor;	// IMP=0x000000000072b403
+ (id)_carSystemPrimaryColor;	// IMP=0x000000000072b226
+ (id)_monochromeCellImageTintColor;	// IMP=0x000000000072b161
+ (id)_windowBackgroundColor;	// IMP=0x000000000072af09
+ (id)_swipedSidebarCellBackgroundColor;	// IMP=0x000000000072ab04
+ (id)_sidebarBackgroundColor;	// IMP=0x000000000072aaeb
+ (id)_groupTableHeaderFooterTextColor;	// IMP=0x000000000072a7ee
+ (id)_plainTableHeaderFooterTextColor;	// IMP=0x000000000072a600
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;	// IMP=0x000000000072a53b
+ (id)tablePlainHeaderFooterBackgroundColor;	// IMP=0x000000000072a19f
+ (id)tableCellDisabledBackgroundColor;	// IMP=0x000000000072a0d2
+ (id)tableCellFocusedBackgroundColor;	// IMP=0x000000000072a005
+ (id)tableCellHighlightedBackgroundColor;	// IMP=0x0000000000729f38
+ (id)tableCellGroupedSelectedBackgroundColor;	// IMP=0x0000000000729d60
+ (id)tableCellDefaultSelectionTintColor;	// IMP=0x0000000000729d47
+ (id)tableCellPlainSelectedBackgroundColor;	// IMP=0x0000000000729b6a
+ (id)tableSelectionColor;	// IMP=0x0000000000729a8d
+ (id)tableSeparatorLightColor;	// IMP=0x00000000007299c8
+ (id)tableSeparatorDarkColor;	// IMP=0x0000000000729903
+ (id)tableSeparatorColor;	// IMP=0x000000000072983e
+ (id)tableCellGroupedBackgroundColor;	// IMP=0x000000000072965c
+ (id)groupTableViewBackgroundColor;	// IMP=0x0000000000729597
+ (id)tableCellPlainBackgroundColor;	// IMP=0x00000000007291c5
+ (id)tableBackgroundColor;	// IMP=0x00000000007290f7
+ (id)_markedTextBackgroundColor;	// IMP=0x00000000007290de
+ (id)_splitViewBorderColor;	// IMP=0x00000000007290c5
+ (id)_textFieldDisabledBorderColor;	// IMP=0x0000000000728ee8
+ (id)_textFieldBorderColor;	// IMP=0x0000000000728d0b
+ (id)_textFieldDisabledBackgroundColor;	// IMP=0x0000000000728b29
+ (id)_textFieldBackgroundColor;	// IMP=0x0000000000728951
+ (id)_systemGroupBackgroundCellColor;	// IMP=0x0000000000728938
+ (id)_systemGroupBackgroundColor;	// IMP=0x000000000072891f
+ (id)_systemBackgroundSectionCellColor;	// IMP=0x0000000000728906
+ (id)_systemBackgroundSectionColor;	// IMP=0x00000000007288ed
+ (id)_contentBackgroundColor;	// IMP=0x00000000007288d4
+ (id)_tertiarySystemGroupedBackgroundColor;	// IMP=0x00000000007288bb
+ (id)_secondarySystemGroupedBackgroundColor;	// IMP=0x00000000007288a2
+ (id)_systemGroupedBackgroundColor;	// IMP=0x0000000000728889
+ (id)_tertiarySystemBackgroundColor;	// IMP=0x0000000000728870
+ (id)_secondarySystemBackgroundColor;	// IMP=0x0000000000728857
+ (id)_systemBackgroundColor;	// IMP=0x000000000072883e
+ (id)_opaqueSeparatorColor;	// IMP=0x0000000000728825
+ (id)_separatorColor;	// IMP=0x000000000072880c
+ (id)_placeholderTextColor;	// IMP=0x00000000007287f3
+ (id)_linkColor;	// IMP=0x00000000007287da
+ (id)_quaternaryLabelColor;	// IMP=0x00000000007287c1
+ (id)_tertiaryLabelColor;	// IMP=0x00000000007287a8
+ (id)_secondaryLabelColor;	// IMP=0x000000000072878f
+ (id)_labelColor;	// IMP=0x0000000000728776
+ (id)_systemGray6Color;	// IMP=0x000000000072875d
+ (id)_systemGray5Color;	// IMP=0x0000000000728744
+ (id)_systemGray4Color;	// IMP=0x000000000072872b
+ (id)_systemGray3Color;	// IMP=0x0000000000728712
+ (id)_systemGray2Color;	// IMP=0x00000000007286f9
+ (id)_quaternaryFillColor;	// IMP=0x00000000007286e0
+ (id)_tertiaryFillColor;	// IMP=0x00000000007286c7
+ (id)_secondaryFillColor;	// IMP=0x00000000007286ae
+ (id)_fillColor;	// IMP=0x0000000000728695
+ (id)_systemChromeShadowColor;	// IMP=0x00000000007284b8
+ (id)_alertControllerDimmingViewColor;	// IMP=0x00000000007282e0
+ (id)_swiftColor;	// IMP=0x00000000007280e3
+ (id)_controlVibrantBottomBackgroundColor;	// IMP=0x0000000000727ee6
+ (id)_controlVibrantTopBackgroundColor;	// IMP=0x0000000000727ce9
+ (id)_controlShadowColor;	// IMP=0x0000000000727c21
+ (id)_controlHighlightColor;	// IMP=0x0000000000727a29
+ (id)_controlForegroundColor;	// IMP=0x00000000007277c7
+ (id)_searchBarBackgroundColor;	// IMP=0x0000000000727702
+ (id)_searchFieldPlaceholderTextClearButtonColor;	// IMP=0x000000000072758d
+ (id)_pageControlPlatterIndicatorColor;	// IMP=0x00000000007272c7
+ (id)_pageControlIndicatorColor;	// IMP=0x00000000007270e5
+ (id)_searchFieldDisabledBackgroundColor;	// IMP=0x0000000000726de8
+ (id)_switchOffImageColor;	// IMP=0x0000000000726c0b
+ (id)_switchOffColor;	// IMP=0x000000000072690e
+ (id)quaternarySystemFillColor;	// IMP=0x000000000072642b
+ (id)tertiarySystemFillColor;	// IMP=0x0000000000725f48
+ (id)secondarySystemFillColor;	// IMP=0x0000000000725a65
+ (id)systemFillColor;	// IMP=0x0000000000725582
+ (id)_dynamicTestColor;	// IMP=0x0000000000724c2d
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a87a8f
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a87786
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a8771f
+ (id)_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000000d2e323
- (void).cxx_destruct;	// IMP=0x000000000071964b
- (id)_colorBlendedWithColors:(id)arg1;	// IMP=0x0000000000713d56
- (id)_colorBlendedWithColor:(id)arg1;	// IMP=0x0000000000713d42
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;	// IMP=0x00000000007133fa
- (double)_luminanceDifferenceFromColor:(id)arg1;	// IMP=0x0000000000713365
- (double)_luminance;	// IMP=0x00000000007131e6
- (double)_colorDifferenceFromColor:(id)arg1;	// IMP=0x0000000000712e97
- (_Bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;	// IMP=0x0000000000712ae4
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;	// IMP=0x0000000000712ace
- (id)_debugCatalogBundleIdentifier;	// IMP=0x0000000000712abd
- (void)_setDebugName:(id)arg1;	// IMP=0x0000000000712aa7
- (id)_debugName;	// IMP=0x0000000000712a5f
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (_Bool)_isOpaque;	// IMP=0x000000000071294d
- (_Bool)_isDeepColor;	// IMP=0x0000000000712945
- (_Bool)isPatternColor;	// IMP=0x000000000071293d
- (id)styleString;	// IMP=0x0000000000712806
- (double)alphaComponent;	// IMP=0x00000000007127fd
- (struct CGColor *)cgColor;	// IMP=0x00000000007127e3
- (id)colorSpaceName;	// IMP=0x00000000007127d6
- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007127c4
- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000007127b2
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007127aa
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000007127a2
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000071279a
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000712780
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000712773
@property(readonly, nonatomic) CIColor *CIColor;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x0000000000712751
- (void)setStroke;	// IMP=0x0000000000712747
- (void)setFill;	// IMP=0x000000000071273d
- (void)set;	// IMP=0x00000000007126b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000071057d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000070ff62
- (Class)classForCoder;	// IMP=0x000000000070ff49
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070fef2
- (id)initWithCIColor:(id)arg1;	// IMP=0x000000000070fe97
- (id)initWithPatternImage:(id)arg1;	// IMP=0x000000000070fe3c
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000070fd07
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070fcb0
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000070fc59
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x000000000070fc16
- (id)_backgroundColorIgnoringHighContrast;	// IMP=0x000000000070f8dd
@property(readonly, nonatomic) NSString *accessibilityName;
@property(readonly, nonatomic) NSString *_accessibilityNameWithLuma;
@property(readonly, nonatomic, getter=_isDynamicTintColor) _Bool isDynamicTintColor;
@property(readonly, nonatomic, getter=_isDynamic) _Bool dynamic;
- (id)resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x000000000071a10a
- (id)initWithDynamicProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000071a0ac
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a87b0f
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a879e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
