//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PXContentSyndicationSettings
{
    _Bool _contentSyndicationEnabled;	// 8 = 0x8
    _Bool _ignoreSocialLayerEnablement;	// 9 = 0x9
    _Bool _showSidebarItemEvenIfNoSyndicatedContentAvailable;	// 10 = 0xa
    _Bool _shouldMockChallengeQuestions;	// 11 = 0xb
    _Bool _showSyndicatedContentInLibrary;	// 12 = 0xc
    _Bool _enableFilteringCuratedGridsForContentSyndication;	// 13 = 0xd
    _Bool _showContentSyndicationInSystemPhotoLibraryOnly;	// 14 = 0xe
    _Bool _useUserLibraryForSyndicatedAssets;	// 15 = 0xf
    _Bool _delayLoadingActualDataSourceUntilAfterLaunch;	// 16 = 0x10
    _Bool _loadVerySmallInitialBatchOfRecentCollections;	// 17 = 0x11
    _Bool _shouldHorizontallyCenterAttributionViewInGrid;	// 18 = 0x12
    _Bool _alwaysLeadingAlignAttributionViewOnRegularWidthPads;	// 19 = 0x13
    _Bool _showSyndicatedContentWidgetForSavedAssets;	// 20 = 0x14
    _Bool _showSyndicatedContentWidgetForGuestAssets;	// 21 = 0x15
    _Bool _showSyndicated1upPillUI;	// 22 = 0x16
    _Bool _preventActualSaveToLibraryBehavior;	// 23 = 0x17
    _Bool _preventActualRemoveSuggestionBehavior;	// 24 = 0x18
    _Bool _treatEveryAssetAsGuest;	// 25 = 0x19
    _Bool _enableCustomTreatmentInDays;	// 26 = 0x1a
    _Bool _enableStackAspectRatio;	// 27 = 0x1b
    _Bool _enableStackSmartCrop;	// 28 = 0x1c
    _Bool _useSystemLibraryForReview;	// 29 = 0x1d
    _Bool _useRandomStatusForReview;	// 30 = 0x1e
    _Bool _mockNumberOfAssetsSaved;	// 31 = 0x1f
    _Bool _waitForAndLogAssetArrivalWhenSaving;	// 32 = 0x20
    long long _dataSourceType;	// 40 = 0x28
    unsigned long long _maxNumberOfBatches;	// 48 = 0x30
    unsigned long long _maxNumberOfAssetsPerBatch;	// 56 = 0x38
    double _blackOverlayForFirstThumbnail;	// 64 = 0x40
    double _blackOverlayForSecondThumbnail;	// 72 = 0x48
    double _blackOverlayForThirdThumbnail;	// 80 = 0x50
    long long _itemCellBlurStyle;	// 88 = 0x58
    long long _syndicated1upPillAlignment;	// 96 = 0x60
    long long _savedAssetViewVisibility;	// 104 = 0x68
    unsigned long long _numberOfMinutesToShowPillUIAfterSaving;	// 112 = 0x70
    long long _inlineAssetStyle;	// 120 = 0x78
    NSString *_inlineAssetBadgeGlyphName;	// 128 = 0x80
    long long _visualTreatmentStyle;	// 136 = 0x88
    double _insetScale;	// 144 = 0x90
    double _blurRadius;	// 152 = 0x98
    double _darkeningOverlayOpacity;	// 160 = 0xa0
    double _innerCornerRadius;	// 168 = 0xa8
    double _outerCornerRadius;	// 176 = 0xb0
    long long _reviewScope;	// 184 = 0xb8
    long long _footerMockType;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x000000000061aabf
- (void).cxx_destruct;	// IMP=0x000000000061aaac
@property(nonatomic) _Bool waitForAndLogAssetArrivalWhenSaving; // @synthesize waitForAndLogAssetArrivalWhenSaving=_waitForAndLogAssetArrivalWhenSaving;
@property(nonatomic) long long footerMockType; // @synthesize footerMockType=_footerMockType;
@property(nonatomic) _Bool mockNumberOfAssetsSaved; // @synthesize mockNumberOfAssetsSaved=_mockNumberOfAssetsSaved;
@property(nonatomic) long long reviewScope; // @synthesize reviewScope=_reviewScope;
@property(nonatomic) _Bool useRandomStatusForReview; // @synthesize useRandomStatusForReview=_useRandomStatusForReview;
@property(nonatomic) _Bool useSystemLibraryForReview; // @synthesize useSystemLibraryForReview=_useSystemLibraryForReview;
@property(nonatomic) _Bool enableStackSmartCrop; // @synthesize enableStackSmartCrop=_enableStackSmartCrop;
@property(nonatomic) _Bool enableStackAspectRatio; // @synthesize enableStackAspectRatio=_enableStackAspectRatio;
@property(nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property(nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius=_innerCornerRadius;
@property(nonatomic) double darkeningOverlayOpacity; // @synthesize darkeningOverlayOpacity=_darkeningOverlayOpacity;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double insetScale; // @synthesize insetScale=_insetScale;
@property(nonatomic) _Bool enableCustomTreatmentInDays; // @synthesize enableCustomTreatmentInDays=_enableCustomTreatmentInDays;
@property(nonatomic) long long visualTreatmentStyle; // @synthesize visualTreatmentStyle=_visualTreatmentStyle;
@property(copy, nonatomic) NSString *inlineAssetBadgeGlyphName; // @synthesize inlineAssetBadgeGlyphName=_inlineAssetBadgeGlyphName;
@property(nonatomic) long long inlineAssetStyle; // @synthesize inlineAssetStyle=_inlineAssetStyle;
@property(nonatomic) _Bool treatEveryAssetAsGuest; // @synthesize treatEveryAssetAsGuest=_treatEveryAssetAsGuest;
@property(nonatomic) _Bool preventActualRemoveSuggestionBehavior; // @synthesize preventActualRemoveSuggestionBehavior=_preventActualRemoveSuggestionBehavior;
@property(nonatomic) _Bool preventActualSaveToLibraryBehavior; // @synthesize preventActualSaveToLibraryBehavior=_preventActualSaveToLibraryBehavior;
@property(nonatomic) unsigned long long numberOfMinutesToShowPillUIAfterSaving; // @synthesize numberOfMinutesToShowPillUIAfterSaving=_numberOfMinutesToShowPillUIAfterSaving;
@property(nonatomic) long long savedAssetViewVisibility; // @synthesize savedAssetViewVisibility=_savedAssetViewVisibility;
@property(nonatomic) long long syndicated1upPillAlignment; // @synthesize syndicated1upPillAlignment=_syndicated1upPillAlignment;
@property(nonatomic) _Bool showSyndicated1upPillUI; // @synthesize showSyndicated1upPillUI=_showSyndicated1upPillUI;
@property(nonatomic) _Bool showSyndicatedContentWidgetForGuestAssets; // @synthesize showSyndicatedContentWidgetForGuestAssets=_showSyndicatedContentWidgetForGuestAssets;
@property(nonatomic) _Bool showSyndicatedContentWidgetForSavedAssets; // @synthesize showSyndicatedContentWidgetForSavedAssets=_showSyndicatedContentWidgetForSavedAssets;
@property(nonatomic) _Bool alwaysLeadingAlignAttributionViewOnRegularWidthPads; // @synthesize alwaysLeadingAlignAttributionViewOnRegularWidthPads=_alwaysLeadingAlignAttributionViewOnRegularWidthPads;
@property(nonatomic) _Bool shouldHorizontallyCenterAttributionViewInGrid; // @synthesize shouldHorizontallyCenterAttributionViewInGrid=_shouldHorizontallyCenterAttributionViewInGrid;
@property(nonatomic) long long itemCellBlurStyle; // @synthesize itemCellBlurStyle=_itemCellBlurStyle;
@property(nonatomic) double blackOverlayForThirdThumbnail; // @synthesize blackOverlayForThirdThumbnail=_blackOverlayForThirdThumbnail;
@property(nonatomic) double blackOverlayForSecondThumbnail; // @synthesize blackOverlayForSecondThumbnail=_blackOverlayForSecondThumbnail;
@property(nonatomic) double blackOverlayForFirstThumbnail; // @synthesize blackOverlayForFirstThumbnail=_blackOverlayForFirstThumbnail;
@property(nonatomic) _Bool loadVerySmallInitialBatchOfRecentCollections; // @synthesize loadVerySmallInitialBatchOfRecentCollections=_loadVerySmallInitialBatchOfRecentCollections;
@property(nonatomic) _Bool delayLoadingActualDataSourceUntilAfterLaunch; // @synthesize delayLoadingActualDataSourceUntilAfterLaunch=_delayLoadingActualDataSourceUntilAfterLaunch;
@property(nonatomic) unsigned long long maxNumberOfAssetsPerBatch; // @synthesize maxNumberOfAssetsPerBatch=_maxNumberOfAssetsPerBatch;
@property(nonatomic) unsigned long long maxNumberOfBatches; // @synthesize maxNumberOfBatches=_maxNumberOfBatches;
@property(nonatomic) _Bool useUserLibraryForSyndicatedAssets; // @synthesize useUserLibraryForSyndicatedAssets=_useUserLibraryForSyndicatedAssets;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(nonatomic) _Bool showContentSyndicationInSystemPhotoLibraryOnly; // @synthesize showContentSyndicationInSystemPhotoLibraryOnly=_showContentSyndicationInSystemPhotoLibraryOnly;
@property(nonatomic) _Bool enableFilteringCuratedGridsForContentSyndication; // @synthesize enableFilteringCuratedGridsForContentSyndication=_enableFilteringCuratedGridsForContentSyndication;
@property(nonatomic) _Bool showSyndicatedContentInLibrary; // @synthesize showSyndicatedContentInLibrary=_showSyndicatedContentInLibrary;
@property(nonatomic) _Bool shouldMockChallengeQuestions; // @synthesize shouldMockChallengeQuestions=_shouldMockChallengeQuestions;
@property(nonatomic) _Bool showSidebarItemEvenIfNoSyndicatedContentAvailable; // @synthesize showSidebarItemEvenIfNoSyndicatedContentAvailable=_showSidebarItemEvenIfNoSyndicatedContentAvailable;
@property(nonatomic) _Bool ignoreSocialLayerEnablement; // @synthesize ignoreSocialLayerEnablement=_ignoreSocialLayerEnablement;
@property(nonatomic) _Bool contentSyndicationEnabled; // @synthesize contentSyndicationEnabled=_contentSyndicationEnabled;
- (void)setDefaultValues;	// IMP=0x000000000061a0f5
- (id)parentSettings;	// IMP=0x000000000061a0dc

@end

