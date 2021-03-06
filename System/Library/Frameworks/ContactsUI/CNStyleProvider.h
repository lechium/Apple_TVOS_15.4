//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/ABStyleProvider-Protocol.h>

@class NSString, UIColor, UIFont, UIImage, UIView, _UIGraphicsLetterpressStyle;

@interface CNStyleProvider : NSObject <ABStyleProvider>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bbb2d
+ (double)memberTextBaseline;	// IMP=0x00000000000bb993
+ (double)memberRowHeight;	// IMP=0x00000000000bb86e
+ (double)memberHeaderTextBaseline;	// IMP=0x00000000000bb6a8
+ (double)memberHeaderRowHeight;	// IMP=0x00000000000bb557
+ (id)preferredContentSizeCategoryName;	// IMP=0x00000000000bb500
+ (id)defaultStyleProviderForStyle:(int)arg1;	// IMP=0x00000000000bb3f5
+ (id)defaultStyleProvider;	// IMP=0x00000000000bb3e1
- (_Bool)reloadCallAction;	// IMP=0x00000000000bd9a4
- (_Bool)refreshTinyActionCell;	// IMP=0x00000000000bd99c
- (void)customSetEmphasized:(_Bool)arg1 onCell:(id)arg2;	// IMP=0x00000000000bd996
- (id)newCustomCardTableScrollingBackgroundView;	// IMP=0x00000000000bd98e
- (Class)customCardCellClass;	// IMP=0x00000000000bd986
- (Class)customCardActionCellClass;	// IMP=0x00000000000bd97e
@property(readonly, nonatomic) long long groupCellSelectionStyle;
@property(readonly, nonatomic) struct CGSize groupCellShadowOffset;
@property(readonly, nonatomic) UIColor *groupCellShadowColor;
@property(readonly, nonatomic) UIColor *groupCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *groupCellTextColor;
@property(readonly, nonatomic) UIColor *groupHeaderBackgroudColor;
@property(readonly, nonatomic) UIColor *groupCellBackgroundColor;
@property(readonly, nonatomic) _Bool groupSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) double groupSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) double groupSectionHeaderHeight;
@property(readonly, nonatomic) struct CGSize groupAccountNameShadowOffset;
@property(readonly, nonatomic) UIColor *groupAccountNameShadowColor;
@property(readonly, nonatomic) UIColor *groupAccountNameColor;
@property(readonly, nonatomic) UIFont *groupAccountNameFont;
@property(readonly, nonatomic) UIColor *groupsTableBackgroundColor;
@property(readonly, nonatomic) _Bool groupsTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) _Bool peoplePickerBarStyleIsTranslucent;
@property(readonly, nonatomic) long long peoplePickerBarStyle;
@property(readonly, nonatomic) _Bool shouldUsePeoplePickerBarStyle;
- (int)dialogStyleForDeleteConfirmation;	// IMP=0x00000000000bd8ae
@property(readonly, nonatomic) _Bool presentDatePickerInPopover;
@property(readonly, nonatomic) _Bool presentNewContactsControllersInPopover;
@property(readonly, nonatomic) _Bool presentModalViewInPopover;
@property(readonly, nonatomic) long long unknownModalPresentationStyle;
@property(readonly, nonatomic) long long composeModalPresentationStyle;
@property(readonly, nonatomic) _Bool shouldDefinePickerTransitionStyle;
@property(readonly, nonatomic) long long pickerTransitionStyle;
@property(readonly, nonatomic) _Bool shouldPropagateStylesToPickers;
@property(readonly, nonatomic) _Bool shouldPropagateStylesThroughUnknownPersonActions;
@property(readonly, nonatomic) _Bool linkedPhotoLabelStringsDescribeSourceOnly;
@property(readonly, nonatomic) _Bool linkedPhotoPickerIncludesCurrentPhoto;
@property(readonly, nonatomic) _Bool labelPickerUsesOpaqueBackground;
@property(readonly, nonatomic) _Bool labelPickerShouldPushCustomLabelCreator;
- (void)unselectAllCellParts:(id)arg1;	// IMP=0x00000000000bd83d
- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3;	// IMP=0x00000000000bd837
- (void)selectWholePartForCell:(id)arg1;	// IMP=0x00000000000bd831
- (void)selectValuePartForCell:(id)arg1;	// IMP=0x00000000000bd82b
- (void)selectLabelPartForCell:(id)arg1;	// IMP=0x00000000000bd825
- (id)cardTableView:(id)arg1 prepareCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000bd80f
- (_Bool)cardTableView:(id)arg1 wantsHeaderForProperty:(int)arg2 inSection:(long long)arg3 whenEditing:(_Bool)arg4;	// IMP=0x00000000000bd807
- (_Bool)personTableHeaderViewScrollsWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd7ff
- (double)cardHeaderSpacingFromCardBodyWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd7b9
- (double)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd7ab
- (double)cardTableViewLinkingHeaderTopPaddingWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd79d
@property(readonly, nonatomic) double cardSectionHeaderHeightForFollowingCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForFirstCardActions;
@property(readonly, nonatomic) _Bool cardShouldUseSeparateSectionsForUnknownCardActions;
@property(readonly, nonatomic) double cardSectionHeaderHeightForBottomActions;
- (double)cardTableViewSectionFooterHeightWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd76c
- (double)cardTableViewSectionHeaderHeightWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd763
- (double)cardMaxHeightForSwellTextViewWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd755
@property(readonly, nonatomic) _Bool datePickerHasNavigationTitle;
@property(readonly, nonatomic) _Bool linkedCardsShouldAllowDeletion;
@property(readonly, nonatomic) _Bool cardTableUsesRowFadeAnimation;
@property(readonly, nonatomic) double cardLinkingHeaderLabelHeight;
- (double)cardNotesMinimumHeightWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd726
@property(readonly, nonatomic) UIView *cardNotesHeaderView;
@property(readonly, nonatomic) double cardNotesHeaderViewHeight;
@property(readonly, nonatomic) _Bool cardNotesLabelIncludesSource;
@property(readonly, nonatomic) _Bool cardAlwaysShowsNotes;
@property(readonly, nonatomic) long long cardCellSelectionStyle;
- (id)cardCellDividerShadowColorVertical:(_Bool)arg1;	// IMP=0x00000000000bd655
- (id)cardCellDividerColorVertical:(_Bool)arg1;	// IMP=0x00000000000bd5f8
@property(readonly, nonatomic) UIColor *cardCellDisabledBackgroundColor;
@property(readonly, nonatomic) UIColor *cardCellBackgroundColor;
- (id)cardDeleteButtonImagePressed;	// IMP=0x00000000000bd5a3
- (id)cardDeleteButtonImage;	// IMP=0x00000000000bd59b
- (struct UIEdgeInsets)cardDeleteButtonInsets;	// IMP=0x00000000000bd550
- (double)cardDeleteButtonHeight;	// IMP=0x00000000000bd539
- (struct UIEdgeInsets)cardCellBackgroundInsetsWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bd51b
@property(readonly, nonatomic) double cardContentOccluderDefaultBottomFadingHeight;
@property(readonly, nonatomic) double cardContentOccluderDefaultTopFadingHeight;
@property(readonly, nonatomic) UIColor *cardValueHighlightedTextColor;
- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;	// IMP=0x00000000000bd43c
@property(readonly, nonatomic) _Bool cardActionsAllowFaceTimeFavorites;
@property(readonly, nonatomic) _Bool cardActionsAllowVoiceFavorites;
@property(readonly, nonatomic) UIImage *cardActionConferenceIconPressed;
@property(readonly, nonatomic) UIImage *cardActionConferenceIcon;
- (id)newCardActionButton;	// IMP=0x00000000000bd08d
@property(readonly, nonatomic) double cardActionButtonHeight;
@property(readonly, nonatomic) double cardActionButtonSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonsInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonImageInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleDoubleLineInsets;
@property(readonly, nonatomic) struct UIEdgeInsets cardActionButtonTitleSingleLineInsets;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundHighlighted;
@property(readonly, nonatomic) UIImage *cardActionButtonBackgroundNormal;
@property(readonly, nonatomic) long long cardActionButtonType;
@property(readonly, nonatomic) double cardCellVerticalSpacingBetweenAlertsOfSimilarType;
@property(readonly, nonatomic) UIImage *cardCellFacebookBadge;
@property(readonly, nonatomic) double cardCellBadgePaddingLeft;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEditRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeRingtone;
@property(readonly, nonatomic) long long cardCellAccessoryTypeEdit;
@property(readonly, nonatomic) long long cardCellAccessoryType;
@property(readonly, nonatomic) _Bool cardSectionDrawsDefaultTopShadow;
@property(readonly, nonatomic) struct CGSize cardSectionHeaderShadowOffset;
@property(readonly, nonatomic) UIColor *cardSectionHeaderShadowColor;
@property(readonly, nonatomic) UIColor *cardSectionHeaderTextColor;
@property(readonly, nonatomic) UIFont *cardSectionHeaderFont;
@property(readonly, nonatomic) double cardSectionHeaderHorizontalPadding;
@property(readonly, nonatomic) _Bool cardSectionAlwaysWantsHeader;
@property(readonly, nonatomic) UIImage *cardValueClearButtonImage;
@property(readonly, nonatomic) UIColor *cardValueTappableColor;
@property(readonly, nonatomic) UIColor *cardValueBackgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardValueEditingInsets;
- (struct UIEdgeInsets)cardValueInsetsWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bcdfa
@property(readonly, nonatomic) struct UIEdgeInsets cardValueInsets;
@property(readonly, nonatomic) UIFont *cardValueTextFont;
@property(readonly, nonatomic) struct CGSize cardValueShadowOffset;
@property(readonly, nonatomic) UIColor *cardValueHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardValueShadowColor;
@property(readonly, nonatomic) UIColor *cardValueDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardValueTextColor;
@property(readonly, nonatomic) struct UIEdgeInsets cardLabelInsets;
@property(readonly, nonatomic) UIColor *cardLabelBackgroundColor;
@property(readonly, nonatomic) double cardLabelWidth;
@property(readonly, nonatomic) UIFont *cardLabelEditingTextFont;
@property(readonly, nonatomic) UIFont *cardLabelTextFont;
@property(readonly, nonatomic) _Bool cardValueHighlightsWhenTouched;
@property(readonly, nonatomic) struct CGSize cardLabelShadowOffset;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelShadowColor;
@property(readonly, nonatomic) UIColor *cardLabelImportantHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEmphasizedHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelHighlightedTextColor;
@property(readonly, nonatomic) UIColor *cardLabelEditingTextColor;
@property(readonly, nonatomic) UIColor *cardLabelDisabledTextColor;
@property(readonly, nonatomic) UIColor *cardLabelTextColor;
- (_Bool)shouldAdjustTableView:(id)arg1 forKeyboardOrdering:(_Bool)arg2;	// IMP=0x00000000000bcbf8
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000000bcbde
@property(readonly, nonatomic) _Bool shouldUseCardContentProviderWhenAvailable;
- (id)editorViewColor;	// IMP=0x00000000000bcb9d
- (id)editorViewSmallFont;	// IMP=0x00000000000bcb7c
- (id)editorViewLargeFont;	// IMP=0x00000000000bcb5b
- (double)personEditorFieldVerticalInset;	// IMP=0x00000000000bcb4d
- (struct CGSize)personActionShadowOffset;	// IMP=0x00000000000bcb3b
- (id)personActionShadowColor;	// IMP=0x00000000000bcb33
- (id)personActionHighlightedColor;	// IMP=0x00000000000bcb2b
- (id)personActionColor;	// IMP=0x00000000000bcaf2
- (id)personActionFont;	// IMP=0x00000000000bcad1
- (struct CGSize)personNoValueLabelShadowOffset;	// IMP=0x00000000000bcac0
- (id)personNoValueLabelShadowColor;	// IMP=0x00000000000bca97
- (id)personNoValueLabelTextColor;	// IMP=0x00000000000bca5e
- (id)personNoValueLabelFont;	// IMP=0x00000000000bca3d
- (id)personValueBackgroundColor;	// IMP=0x00000000000bca24
- (id)personValueImportantHighlightColor;	// IMP=0x00000000000bca12
- (id)personValueImportantColor;	// IMP=0x00000000000bc9d9
- (id)personValueEmphasizedHighlightColor;	// IMP=0x00000000000bc9c7
- (id)personValueEmphasizedColor;	// IMP=0x00000000000bc98e
- (id)personValueHighlightColor;	// IMP=0x00000000000bc975
- (id)personValueColor;	// IMP=0x00000000000bc95c
- (id)personValueFont;	// IMP=0x00000000000bc93b
- (double)personValueFontMinSize;	// IMP=0x00000000000bc92d
- (id)copyLocalizedPropertyName:(int)arg1 lowercase:(_Bool)arg2;	// IMP=0x00000000000bc917
- (id)copyLocalizedLabel:(id)arg1;	// IMP=0x00000000000bc90a
- (struct CGSize)personLabelShadowOffset;	// IMP=0x00000000000bc8f8
- (id)personLabelShadowColor;	// IMP=0x00000000000bc8f0
- (id)personLabelHighlightedColor;	// IMP=0x00000000000bc8d7
- (id)personLabelColor;	// IMP=0x00000000000bc89e
- (id)personLabelFont;	// IMP=0x00000000000bc87d
- (double)personLabelFontMinSize;	// IMP=0x00000000000bc86f
- (double)personViewVerticalCellInset;	// IMP=0x00000000000bc861
- (double)personViewHorizontalCellInset;	// IMP=0x00000000000bc853
- (double)personViewDefaultRowHeight;	// IMP=0x00000000000bc845
- (double)personViewRowHeightWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bc837
- (struct CGSize)personHeaderShadowOffset;	// IMP=0x00000000000bc826
- (id)personHeaderShadowColor;	// IMP=0x00000000000bc80d
- (id)personHeaderPasteboardColor;	// IMP=0x00000000000bc7d4
- (double)personViewHeaderNameViewTextVerticalInset;	// IMP=0x00000000000bc7cb
- (double)personViewHeaderNameViewTextHorizontalInset;	// IMP=0x00000000000bc7bd
- (double)personViewHeaderImageHeight;	// IMP=0x00000000000bc7af
- (double)personViewHeaderImageWidth;	// IMP=0x00000000000bc7a1
@property(readonly, nonatomic) _Bool cardHeaderNameViewAlignOnBottom;
- (double)personViewVerticalSpacing;	// IMP=0x00000000000bc78b
- (double)personViewHeaderMinimumHeight;	// IMP=0x00000000000bc77d
- (double)personViewHeaderRightMargin;	// IMP=0x00000000000bc76f
- (id)personViewGetNameViewAccessoryImageSelected;	// IMP=0x00000000000bc765
- (id)personViewGetNameViewAccessoryImage;	// IMP=0x00000000000bc75b
- (id)personViewGetFavoritesBadgeHighlighted;	// IMP=0x00000000000bc707
- (id)personViewGetFavoritesBadge;	// IMP=0x00000000000bc6b3
- (id)accessoryButtonForRelatedNames;	// IMP=0x00000000000bc556
- (id)accessoryViewForVideoBadge;	// IMP=0x00000000000bc4b3
- (id)accessoryViewForFavoritesBadge;	// IMP=0x00000000000bc410
- (id)accessoryViewForMailVIPBadge;	// IMP=0x00000000000bc3fe
- (_Bool)usesPhoneCardMetrics;	// IMP=0x00000000000bc3f6
@property(readonly, nonatomic) UIColor *cardHeaderDefaultLabelTextColor;
@property(readonly, nonatomic) double cardHeaderEditingImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderEditingImageTopMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageTopMargin;
@property(readonly, nonatomic) double cardHeaderDisplayImageLeftMargin;
@property(readonly, nonatomic) double cardHeaderViewLeftMargin;
@property(readonly, nonatomic) double cardHeaderViewTopMargin;
@property(readonly, nonatomic) UIColor *cardHeaderBackgroundColor;
@property(readonly, nonatomic) double cardHeaderImageNameEditorSpacing;
@property(readonly, nonatomic) double cardHeaderImageNameSpacing;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelBevelColor;
@property(readonly, nonatomic) UIColor *cardClippingImageLabelColor;
@property(readonly, nonatomic) struct CGSize cardPhotoShadowOffset;
- (id)cardPhotoShadowImage;	// IMP=0x00000000000bc2ef
@property(readonly, nonatomic) struct CGSize cardPhotoOffset;
@property(readonly, nonatomic) double cardPhotoFrameBorderSize;
@property(readonly, nonatomic) _Bool shouldApplyMaskImage;
@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenLabelPresent;
@property(readonly, nonatomic) _Bool cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
@property(readonly, nonatomic) _Bool cardPlaceholderImageShouldApplyMaskAndOverlay;
@property(readonly, nonatomic) _Bool shouldShowCardPhotoPlaceholder;
@property(readonly, nonatomic) unsigned long long cardTagNumberOfLines;
@property(readonly, nonatomic) unsigned long long cardNameNumberOfLines;
@property(readonly, nonatomic) UIFont *cardTaglineTextFont;
@property(readonly, nonatomic) UIColor *cardTaglineShadowColor;
@property(readonly, nonatomic) UIColor *cardTaglineTextColor;
@property(readonly, nonatomic) UIFont *cardHeadlineTextFont;
@property(readonly, nonatomic) UIColor *cardHeadlineShadowColor;
@property(readonly, nonatomic) UIColor *cardHeadlineTextColor;
- (id)cardNameDividerColor;	// IMP=0x00000000000bc19e
@property(readonly, nonatomic) UIColor *cardTableCellBorderColor;
@property(readonly, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property(readonly, nonatomic) _Bool cardTableShouldAdjustForKeyboard;
@property(readonly, nonatomic) UIColor *cardSectionBackgroundColor;
@property(readonly, nonatomic) UIColor *cardTableBackgroundColor;
@property(readonly, nonatomic) _Bool cardTableShouldRemoveBackgroundView;
@property(readonly, nonatomic) UIImage *memberSectionListHeaderImage;
@property(readonly, nonatomic) _Bool searchControllerForceKeyboardDisplayEnabled;
@property(readonly, nonatomic) _Bool serverSearchNavigationBarHidingEnabled;
@property(readonly, nonatomic) _Bool searchIsAlwaysActive;
@property(readonly, nonatomic) double memberScrollBarInset;
@property(readonly, nonatomic) UIColor *cardLabelSelectedBackgroundColor;
@property(readonly, nonatomic) UIColor *membersSearchCellBackgroundColor;
@property(readonly, nonatomic) UIColor *membersSearchBackgroundColor;
@property(readonly, nonatomic) UIColor *membersBackgroundColor;
@property(readonly, nonatomic) UIView *memberHeaderBackgroundView;
@property(readonly, nonatomic) UIColor *membersHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *membersHeaderContentViewBackgroundColor;
@property(readonly, nonatomic) UIColor *memberSelectedBackgroundColor;
@property(readonly, nonatomic) _Bool memberShowContactPhoto;
@property(readonly, nonatomic) struct CGSize memberNameShadowOffset;
@property(readonly, nonatomic) UIColor *memberSearchFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedShadowColor;
@property(readonly, nonatomic) UIColor *memberNameShadowColor;
@property(readonly, nonatomic) UIImage *memberNameMeCardDisabledImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardSelectedImage;
@property(readonly, nonatomic) UIImage *memberNameMeCardImage;
@property(readonly, nonatomic) UIColor *memberNameMeCardShadowColor;
@property(readonly, nonatomic) UIColor *memberNameMeCardTextColor;
@property(readonly, nonatomic) UIColor *memberNameSelectedColor;
@property(readonly, nonatomic) UIColor *memberNameDisabledTextColor;
@property(readonly, nonatomic) UIColor *memberNameTextColor;
@property(readonly, nonatomic) UIFont *memberNameBoldFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameRegularFontForSectionHeader;
@property(readonly, nonatomic) UIFont *memberNameBoldFont;
@property(readonly, nonatomic) UIFont *memberNamePlaceholderFont;
@property(readonly, nonatomic) UIFont *memberNameRegularFont;
- (double)memberNameFontSize;	// IMP=0x00000000000bbc68
- (id)_fontForTextStyle:(id)arg1;	// IMP=0x00000000000bbc4f
@property(readonly, nonatomic) struct UIEdgeInsets memberNameInsets;
@property(readonly, nonatomic) double memberNameInterComponentSpacing;
@property(readonly, nonatomic) _Bool membersSearchBarIsInTableHeader;
@property(readonly, nonatomic) UIColor *membersIndexTrackingBackgroundColor;
@property(readonly, nonatomic) UIColor *membersIndexTextColor;
@property(readonly, nonatomic) double membersIndexMaximumHeight;
@property(readonly, nonatomic) unsigned long long membersCountToShowIndex;
@property(readonly, nonatomic) unsigned long long membersCountToShowSections;
@property(readonly, nonatomic) long long membersSelectionStyle;
- (id)newTableFooterViewForCellStyle:(int)arg1;	// IMP=0x00000000000bbbd1
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;	// IMP=0x00000000000bbbc9
- (id)separatorBottomShadowColorForCellStyle:(int)arg1;	// IMP=0x00000000000bbbc1
- (id)separatorTopShadowColorForCellStyle:(int)arg1;	// IMP=0x00000000000bbbb9
- (id)separatorColorForCellStyle:(int)arg1;	// IMP=0x00000000000bbbb1
- (long long)separatorStyleForCellStyle:(int)arg1;	// IMP=0x00000000000bbba0
- (id)shadowColorForCellStyle:(int)arg1;	// IMP=0x00000000000bbb98
- (int)abCellStyleForCardTableLinkingUI;	// IMP=0x00000000000bbb90
- (int)abCellStyleForCardTableWhenEditing:(_Bool)arg1;	// IMP=0x00000000000bbb88
- (int)abCellStyleForMembersTable;	// IMP=0x00000000000bbb7d
- (int)abCellStyleForGroupsTablePlain;	// IMP=0x00000000000bbb72
- (int)abCellStyleForGroupsTableGrouped;	// IMP=0x00000000000bbb6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bbb64
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bbb35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

