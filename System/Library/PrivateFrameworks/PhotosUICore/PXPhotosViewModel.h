//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXMutablePhotosViewModel-Protocol.h>
#import <PhotosUICore/PXSectionedSelectionManagerSnapshotValidator-Protocol.h>

@class NSMutableOrderedSet, NSMutableSet, NSNumber, NSOrderedSet, NSSet, NSString, PXAssetActionManager, PXAssetCollectionActionManager, PXAssetReference, PXAssetsDataSource, PXAssetsDataSourceManager, PXContentFilterState, PXFooterViewModel, PXLoadingStatusManager, PXMediaProvider, PXPhotosGridActionManager, PXPhotosLayoutSpecManager, PXSectionedSelectionManager, PXSelectionSnapshot, PXStatusViewModel, PXUpdater;
@protocol NSObject, PXAssetImportStatusManager, PXBrowserSelectionSnapshot, PXPhotosGridOptionsController, PXPhotosViewDelegate, PXTapbackStatusManager;

@interface PXPhotosViewModel <PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXSectionedSelectionManagerSnapshotValidator>
{
    long long _footerVisibilityStyle;	// 8 = 0x8
    PXFooterViewModel *_footerViewModel;	// 16 = 0x10
    NSMutableSet *_enterSelectModePreventedForReasons;	// 24 = 0x18
    NSMutableSet *_oneUpPresentationPreventedForReasons;	// 32 = 0x20
    NSMutableSet *_aspectRatioTogglePreventedForReasons;	// 40 = 0x28
    NSMutableSet *_hideSurroundingContentForReasons;	// 48 = 0x30
    _Bool _allowsAspectFitToggle;	// 56 = 0x38
    long long _contentMode;	// 64 = 0x40
    _Bool _wantsContentFilterIndicatorVisible;	// 72 = 0x48
    id <NSObject> _filterTimeoutObserver;	// 80 = 0x50
    NSMutableOrderedSet *_visibleAssetCollections;	// 88 = 0x58
    long long _contentStartingPosition;	// 96 = 0x60
    _Bool _keepsTabBarAlwaysHidden;	// 104 = 0x68
    _Bool _wantsCPLStatus;	// 105 = 0x69
    _Bool _wantsRenderingStatus;	// 106 = 0x6a
    _Bool _isEmbedded;	// 107 = 0x6b
    _Bool _isInSelectMode;	// 108 = 0x6c
    _Bool _isInCompactMode;	// 109 = 0x6d
    _Bool _isAppearing;	// 110 = 0x6e
    _Bool _dismissRequested;	// 111 = 0x6f
    _Bool _hasScrollableContent;	// 112 = 0x70
    _Bool _scrolledToTop;	// 113 = 0x71
    _Bool _supportsAspectRatioToggle;	// 114 = 0x72
    _Bool _aspectFitContent;	// 115 = 0x73
    _Bool _supportsZooming;	// 116 = 0x74
    _Bool _isInteractiveZooming;	// 117 = 0x75
    _Bool _shouldAnimateZooming;	// 118 = 0x76
    _Bool _wantsContentFilterVisible;	// 119 = 0x77
    _Bool _wantsFooterVisible;	// 120 = 0x78
    _Bool _footerHasImportantInformation;	// 121 = 0x79
    _Bool _wantsTabBarVisible;	// 122 = 0x7a
    _Bool _wantsNavbarVisible;	// 123 = 0x7b
    _Bool _wantsToolbarVisible;	// 124 = 0x7c
    _Bool _hidesNavbar;	// 125 = 0x7d
    _Bool _hidesToolbar;	// 126 = 0x7e
    _Bool _shouldAlwaysRespectToolbarActionPlacementPreference;	// 127 = 0x7f
    _Bool _prefersActionsInToolbar;	// 128 = 0x80
    _Bool _contentBelowTitle;	// 129 = 0x81
    _Bool _showingAlternateContent;	// 130 = 0x82
    _Bool _requiresLightTopBars;	// 131 = 0x83
    _Bool _viewBasedDecorationsEnabled;	// 132 = 0x84
    _Bool _captionsVisible;	// 133 = 0x85
    _Bool _wantsDimmedSelectionStyle;	// 134 = 0x86
    _Bool _wantsNumberedSelectionStyle;	// 135 = 0x87
    _Bool _allowsShowDetails;	// 136 = 0x88
    _Bool _allowsChromeManagementBehavior;	// 137 = 0x89
    _Bool _allowsInlineAddBehavior;	// 138 = 0x8a
    _Bool _allowsSelectionUserActivityBehavior;	// 139 = 0x8b
    _Bool _allowsPopOnContainerDeleteBehavior;	// 140 = 0x8c
    _Bool _allowsEmptyPlaceholderBehavior;	// 141 = 0x8d
    _Bool _allowsActionMenuBehavior;	// 142 = 0x8e
    _Bool _allowsDoubleTapBehavior;	// 143 = 0x8f
    _Bool _allowsContextMenuCustomization;	// 144 = 0x90
    _Bool _allowsAccessoriesContextMenuCustomization;	// 145 = 0x91
    _Bool _allowsMacStyleSelection;	// 146 = 0x92
    _Bool _allowsSelectModeToggle;	// 147 = 0x93
    _Bool _allowsSelectAllAction;	// 148 = 0x94
    _Bool _allowsSlideshowAction;	// 149 = 0x95
    _Bool _allowsAddAction;	// 150 = 0x96
    _Bool _allowsCopyAction;	// 151 = 0x97
    _Bool _allowsSelectSectionAction;	// 152 = 0x98
    _Bool _allowsGridAppearanceActions;	// 153 = 0x99
    _Bool _allowsShareAllAction;	// 154 = 0x9a
    _Bool _allowsQuickLookAction;	// 155 = 0x9b
    _Bool _allowsShowMapAction;	// 156 = 0x9c
    _Bool _allowsPickAssetAction;	// 157 = 0x9d
    _Bool _allowsOneUpPresentation;	// 158 = 0x9e
    _Bool _allowsDismissAction;	// 159 = 0x9f
    _Bool _allowsFileRadarAction;	// 160 = 0xa0
    _Bool _allowsTrashAction;	// 161 = 0xa1
    _Bool _allowsAddToLibraryAction;	// 162 = 0xa2
    _Bool _allowsInfoAction;	// 163 = 0xa3
    _Bool _allowsCMMActions;	// 164 = 0xa4
    _Bool _allowsSyndicatedContentFiltering;	// 165 = 0xa5
    _Bool _allowsContentSyndicationSaveAllAction;	// 166 = 0xa6
    _Bool _allowsReplyAction;	// 167 = 0xa7
    _Bool _allowsTapbackAction;	// 168 = 0xa8
    _Bool _allowsSwipeToSelect;	// 169 = 0xa9
    _Bool _allowsDragAndDrop;	// 170 = 0xaa
    _Bool _allowsDragOutOnly;	// 171 = 0xab
    _Bool _allowsUserDefaults;	// 172 = 0xac
    _Bool _allowsInteractiveFavoriteBadges;	// 173 = 0xad
    _Bool _shouldOptOutOfChromelessBars;	// 174 = 0xae
    _Bool _wantsModernNavBarButtons;	// 175 = 0xaf
    _Bool _lowMemoryMode;	// 176 = 0xb0
    _Bool _hideFooterInSelectMode;	// 177 = 0xb1
    _Bool _wantsFloatingTitle;	// 178 = 0xb2
    _Bool _providesOneUpActionManager;	// 179 = 0xb3
    _Bool _wantsOneUpShowInLibraryButton;	// 180 = 0xb4
    _Bool _wantsFooterTransparent;	// 181 = 0xb5
    _Bool __shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;	// 182 = 0xb6
    PXAssetsDataSourceManager *_dataSourceManager;	// 184 = 0xb8
    PXSectionedSelectionManager *_selectionManager;	// 192 = 0xc0
    PXPhotosGridActionManager *_gridActionManager;	// 200 = 0xc8
    PXMediaProvider *_mediaProvider;	// 208 = 0xd0
    PXAssetActionManager *_assetActionManager;	// 216 = 0xd8
    PXAssetCollectionActionManager *_assetCollectionActionManager;	// 224 = 0xe0
    PXLoadingStatusManager *_loadingStatusManager;	// 232 = 0xe8
    id <PXTapbackStatusManager> _tapbackStatusManager;	// 240 = 0xf0
    id <PXAssetImportStatusManager> _assetImportStatusManager;	// 248 = 0xf8
    PXPhotosLayoutSpecManager *_specManager;	// 256 = 0x100
    PXAssetsDataSource *_currentDataSource;	// 264 = 0x108
    PXSelectionSnapshot *_selectionSnapshot;	// 272 = 0x110
    double _headerTitleTopInset;	// 280 = 0x118
    NSSet *_draggedAssetReferences;	// 288 = 0x120
    PXAssetReference *_dropTargetAssetReference;	// 296 = 0x128
    long long _gridStyle;	// 304 = 0x130
    NSNumber *_userWantsAspectFitContent;	// 312 = 0x138
    long long _numberOfZoomSteps;	// 320 = 0x140
    double _zoomStep;	// 328 = 0x148
    PXAssetReference *_zoomAnchorAssetReference;	// 336 = 0x150
    long long _emptyPlaceholderState;	// 344 = 0x158
    double _topBarsAppearanceChangeAnimationDuration;	// 352 = 0x160
    double _titleBackgroundOpacity;	// 360 = 0x168
    NSString *_title;	// 368 = 0x170
    NSString *_footerSubtitle;	// 376 = 0x178
    unsigned long long _forbiddenBadges;	// 384 = 0x180
    id <PXPhotosGridOptionsController> _optionsController;	// 392 = 0x188
    CDUnknownBlockType _infoActionHandler;	// 400 = 0x190
    long long _navBarStyle;	// 408 = 0x198
    double _floatingTitleOpacity;	// 416 = 0x1a0
    long long _oneUpPresentationOrigin;	// 424 = 0x1a8
    PXContentFilterState *_contentFilterState;	// 432 = 0x1b0
    Class _decorationViewClass;	// 440 = 0x1b8
    PXStatusViewModel *_emptyPlaceholderStatusViewModel;	// 448 = 0x1c0
    id <PXPhotosViewDelegate> _viewDelegate;	// 456 = 0x1c8
    CDUnknownBlockType _effectProvider;	// 464 = 0x1d0
    long long _noContentPlaceholderType;	// 472 = 0x1d8
    PXUpdater *_updater;	// 480 = 0x1e0
    unsigned long long _viewDelegateRespondsTo;	// 488 = 0x1e8
}

- (void).cxx_destruct;	// IMP=0x00000000001e8097
@property(readonly, nonatomic) _Bool _shouldMimicSystemChromelessUsingManualScrollEdgeAppearance; // @synthesize _shouldMimicSystemChromelessUsingManualScrollEdgeAppearance=__shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;
@property(nonatomic) _Bool wantsFooterTransparent; // @synthesize wantsFooterTransparent=_wantsFooterTransparent;
@property(readonly, nonatomic) unsigned long long viewDelegateRespondsTo; // @synthesize viewDelegateRespondsTo=_viewDelegateRespondsTo;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) long long noContentPlaceholderType; // @synthesize noContentPlaceholderType=_noContentPlaceholderType;
@property(readonly, nonatomic) CDUnknownBlockType effectProvider; // @synthesize effectProvider=_effectProvider;
@property(nonatomic) __weak id <PXPhotosViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) PXStatusViewModel *emptyPlaceholderStatusViewModel; // @synthesize emptyPlaceholderStatusViewModel=_emptyPlaceholderStatusViewModel;
@property(retain, nonatomic) Class decorationViewClass; // @synthesize decorationViewClass=_decorationViewClass;
@property(readonly, nonatomic) PXContentFilterState *contentFilterState; // @synthesize contentFilterState=_contentFilterState;
@property(readonly, nonatomic) _Bool wantsOneUpShowInLibraryButton; // @synthesize wantsOneUpShowInLibraryButton=_wantsOneUpShowInLibraryButton;
@property(readonly, nonatomic) _Bool providesOneUpActionManager; // @synthesize providesOneUpActionManager=_providesOneUpActionManager;
@property(readonly, nonatomic) long long oneUpPresentationOrigin; // @synthesize oneUpPresentationOrigin=_oneUpPresentationOrigin;
@property(readonly, nonatomic) _Bool wantsFloatingTitle; // @synthesize wantsFloatingTitle=_wantsFloatingTitle;
@property(readonly, nonatomic) double floatingTitleOpacity; // @synthesize floatingTitleOpacity=_floatingTitleOpacity;
@property(readonly, nonatomic) _Bool hideFooterInSelectMode; // @synthesize hideFooterInSelectMode=_hideFooterInSelectMode;
@property(readonly, nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(readonly, nonatomic) _Bool wantsModernNavBarButtons; // @synthesize wantsModernNavBarButtons=_wantsModernNavBarButtons;
@property(readonly, nonatomic) _Bool shouldOptOutOfChromelessBars; // @synthesize shouldOptOutOfChromelessBars=_shouldOptOutOfChromelessBars;
@property(readonly, nonatomic) long long navBarStyle; // @synthesize navBarStyle=_navBarStyle;
@property(copy, nonatomic) CDUnknownBlockType infoActionHandler; // @synthesize infoActionHandler=_infoActionHandler;
@property(readonly, nonatomic) id <PXPhotosGridOptionsController> optionsController; // @synthesize optionsController=_optionsController;
@property(readonly, nonatomic) _Bool allowsInteractiveFavoriteBadges; // @synthesize allowsInteractiveFavoriteBadges=_allowsInteractiveFavoriteBadges;
@property(readonly, nonatomic) unsigned long long forbiddenBadges; // @synthesize forbiddenBadges=_forbiddenBadges;
@property(readonly, copy, nonatomic) NSString *footerSubtitle; // @synthesize footerSubtitle=_footerSubtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool allowsUserDefaults; // @synthesize allowsUserDefaults=_allowsUserDefaults;
@property(readonly, nonatomic) _Bool allowsDragOutOnly; // @synthesize allowsDragOutOnly=_allowsDragOutOnly;
@property(readonly, nonatomic) _Bool allowsDragAndDrop; // @synthesize allowsDragAndDrop=_allowsDragAndDrop;
@property(readonly, nonatomic) _Bool allowsSwipeToSelect; // @synthesize allowsSwipeToSelect=_allowsSwipeToSelect;
@property(readonly, nonatomic) _Bool allowsTapbackAction; // @synthesize allowsTapbackAction=_allowsTapbackAction;
@property(readonly, nonatomic) _Bool allowsReplyAction; // @synthesize allowsReplyAction=_allowsReplyAction;
@property(readonly, nonatomic) _Bool allowsContentSyndicationSaveAllAction; // @synthesize allowsContentSyndicationSaveAllAction=_allowsContentSyndicationSaveAllAction;
@property(readonly, nonatomic) _Bool allowsSyndicatedContentFiltering; // @synthesize allowsSyndicatedContentFiltering=_allowsSyndicatedContentFiltering;
@property(readonly, nonatomic) _Bool allowsCMMActions; // @synthesize allowsCMMActions=_allowsCMMActions;
@property(readonly, nonatomic) _Bool allowsInfoAction; // @synthesize allowsInfoAction=_allowsInfoAction;
@property(readonly, nonatomic) _Bool allowsAddToLibraryAction; // @synthesize allowsAddToLibraryAction=_allowsAddToLibraryAction;
@property(readonly, nonatomic) _Bool allowsTrashAction; // @synthesize allowsTrashAction=_allowsTrashAction;
@property(readonly, nonatomic) _Bool allowsFileRadarAction; // @synthesize allowsFileRadarAction=_allowsFileRadarAction;
@property(readonly, nonatomic) _Bool allowsDismissAction; // @synthesize allowsDismissAction=_allowsDismissAction;
@property(readonly, nonatomic) _Bool allowsOneUpPresentation; // @synthesize allowsOneUpPresentation=_allowsOneUpPresentation;
@property(readonly, nonatomic) _Bool allowsPickAssetAction; // @synthesize allowsPickAssetAction=_allowsPickAssetAction;
@property(readonly, nonatomic) _Bool allowsShowMapAction; // @synthesize allowsShowMapAction=_allowsShowMapAction;
@property(readonly, nonatomic) _Bool allowsQuickLookAction; // @synthesize allowsQuickLookAction=_allowsQuickLookAction;
@property(readonly, nonatomic) _Bool allowsShareAllAction; // @synthesize allowsShareAllAction=_allowsShareAllAction;
@property(readonly, nonatomic) _Bool allowsGridAppearanceActions; // @synthesize allowsGridAppearanceActions=_allowsGridAppearanceActions;
@property(readonly, nonatomic) _Bool allowsSelectSectionAction; // @synthesize allowsSelectSectionAction=_allowsSelectSectionAction;
@property(readonly, nonatomic) _Bool allowsCopyAction; // @synthesize allowsCopyAction=_allowsCopyAction;
@property(readonly, nonatomic) _Bool allowsAddAction; // @synthesize allowsAddAction=_allowsAddAction;
@property(readonly, nonatomic) _Bool allowsSlideshowAction; // @synthesize allowsSlideshowAction=_allowsSlideshowAction;
@property(readonly, nonatomic) _Bool allowsSelectAllAction; // @synthesize allowsSelectAllAction=_allowsSelectAllAction;
@property(readonly, nonatomic) _Bool allowsSelectModeToggle; // @synthesize allowsSelectModeToggle=_allowsSelectModeToggle;
@property(readonly, nonatomic) _Bool allowsMacStyleSelection; // @synthesize allowsMacStyleSelection=_allowsMacStyleSelection;
@property(readonly, nonatomic) _Bool allowsAccessoriesContextMenuCustomization; // @synthesize allowsAccessoriesContextMenuCustomization=_allowsAccessoriesContextMenuCustomization;
@property(readonly, nonatomic) _Bool allowsContextMenuCustomization; // @synthesize allowsContextMenuCustomization=_allowsContextMenuCustomization;
@property(readonly, nonatomic) _Bool allowsDoubleTapBehavior; // @synthesize allowsDoubleTapBehavior=_allowsDoubleTapBehavior;
@property(readonly, nonatomic) _Bool allowsActionMenuBehavior; // @synthesize allowsActionMenuBehavior=_allowsActionMenuBehavior;
@property(readonly, nonatomic) _Bool allowsEmptyPlaceholderBehavior; // @synthesize allowsEmptyPlaceholderBehavior=_allowsEmptyPlaceholderBehavior;
@property(readonly, nonatomic) _Bool allowsPopOnContainerDeleteBehavior; // @synthesize allowsPopOnContainerDeleteBehavior=_allowsPopOnContainerDeleteBehavior;
@property(readonly, nonatomic) _Bool allowsSelectionUserActivityBehavior; // @synthesize allowsSelectionUserActivityBehavior=_allowsSelectionUserActivityBehavior;
@property(readonly, nonatomic) _Bool allowsInlineAddBehavior; // @synthesize allowsInlineAddBehavior=_allowsInlineAddBehavior;
@property(readonly, nonatomic) _Bool allowsChromeManagementBehavior; // @synthesize allowsChromeManagementBehavior=_allowsChromeManagementBehavior;
@property(readonly, nonatomic) _Bool allowsShowDetails; // @synthesize allowsShowDetails=_allowsShowDetails;
@property(readonly, nonatomic) _Bool wantsNumberedSelectionStyle; // @synthesize wantsNumberedSelectionStyle=_wantsNumberedSelectionStyle;
@property(readonly, nonatomic) _Bool wantsDimmedSelectionStyle; // @synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle;
@property(readonly, nonatomic) _Bool captionsVisible; // @synthesize captionsVisible=_captionsVisible;
@property(readonly, nonatomic) _Bool viewBasedDecorationsEnabled; // @synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled;
@property(readonly, nonatomic) double titleBackgroundOpacity; // @synthesize titleBackgroundOpacity=_titleBackgroundOpacity;
@property(readonly, nonatomic) double topBarsAppearanceChangeAnimationDuration; // @synthesize topBarsAppearanceChangeAnimationDuration=_topBarsAppearanceChangeAnimationDuration;
@property(readonly, nonatomic) _Bool requiresLightTopBars; // @synthesize requiresLightTopBars=_requiresLightTopBars;
@property(readonly, nonatomic, getter=isShowingAlternateContent) _Bool showingAlternateContent; // @synthesize showingAlternateContent=_showingAlternateContent;
@property(readonly, nonatomic, getter=isContentBelowTitle) _Bool contentBelowTitle; // @synthesize contentBelowTitle=_contentBelowTitle;
@property(readonly, nonatomic) _Bool prefersActionsInToolbar; // @synthesize prefersActionsInToolbar=_prefersActionsInToolbar;
@property(readonly, nonatomic) _Bool shouldAlwaysRespectToolbarActionPlacementPreference; // @synthesize shouldAlwaysRespectToolbarActionPlacementPreference=_shouldAlwaysRespectToolbarActionPlacementPreference;
@property(readonly, nonatomic) _Bool hidesToolbar; // @synthesize hidesToolbar=_hidesToolbar;
@property(readonly, nonatomic) _Bool hidesNavbar; // @synthesize hidesNavbar=_hidesNavbar;
@property(nonatomic) _Bool wantsToolbarVisible; // @synthesize wantsToolbarVisible=_wantsToolbarVisible;
@property(nonatomic) _Bool wantsNavbarVisible; // @synthesize wantsNavbarVisible=_wantsNavbarVisible;
@property(nonatomic) _Bool wantsTabBarVisible; // @synthesize wantsTabBarVisible=_wantsTabBarVisible;
@property(nonatomic) long long emptyPlaceholderState; // @synthesize emptyPlaceholderState=_emptyPlaceholderState;
@property(readonly, nonatomic) _Bool footerHasImportantInformation; // @synthesize footerHasImportantInformation=_footerHasImportantInformation;
@property(nonatomic) _Bool wantsFooterVisible; // @synthesize wantsFooterVisible=_wantsFooterVisible;
@property(readonly, nonatomic) _Bool wantsContentFilterIndicatorVisible; // @synthesize wantsContentFilterIndicatorVisible=_wantsContentFilterIndicatorVisible;
@property(readonly, nonatomic) _Bool wantsContentFilterVisible; // @synthesize wantsContentFilterVisible=_wantsContentFilterVisible;
@property(nonatomic) _Bool shouldAnimateZooming; // @synthesize shouldAnimateZooming=_shouldAnimateZooming;
@property(nonatomic) _Bool isInteractiveZooming; // @synthesize isInteractiveZooming=_isInteractiveZooming;
@property(retain, nonatomic) PXAssetReference *zoomAnchorAssetReference; // @synthesize zoomAnchorAssetReference=_zoomAnchorAssetReference;
@property(nonatomic) double zoomStep; // @synthesize zoomStep=_zoomStep;
@property(readonly, nonatomic) long long numberOfZoomSteps; // @synthesize numberOfZoomSteps=_numberOfZoomSteps;
@property(readonly, nonatomic) _Bool supportsZooming; // @synthesize supportsZooming=_supportsZooming;
@property(readonly, copy, nonatomic) NSNumber *userWantsAspectFitContent; // @synthesize userWantsAspectFitContent=_userWantsAspectFitContent;
@property(readonly, nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) _Bool aspectFitContent; // @synthesize aspectFitContent=_aspectFitContent;
@property(readonly, nonatomic) _Bool supportsAspectRatioToggle; // @synthesize supportsAspectRatioToggle=_supportsAspectRatioToggle;
@property(readonly, nonatomic) PXAssetReference *dropTargetAssetReference; // @synthesize dropTargetAssetReference=_dropTargetAssetReference;
@property(readonly, copy, nonatomic) NSSet *draggedAssetReferences; // @synthesize draggedAssetReferences=_draggedAssetReferences;
@property(readonly, nonatomic) double headerTitleTopInset; // @synthesize headerTitleTopInset=_headerTitleTopInset;
@property(readonly, nonatomic, getter=isScrolledToTop) _Bool scrolledToTop; // @synthesize scrolledToTop=_scrolledToTop;
@property(readonly, nonatomic) _Bool hasScrollableContent; // @synthesize hasScrollableContent=_hasScrollableContent;
@property(readonly, nonatomic) _Bool dismissRequested; // @synthesize dismissRequested=_dismissRequested;
@property(readonly, nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(readonly, nonatomic) _Bool isInCompactMode; // @synthesize isInCompactMode=_isInCompactMode;
@property(readonly, nonatomic) _Bool isInSelectMode; // @synthesize isInSelectMode=_isInSelectMode;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(readonly, nonatomic) PXAssetsDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(readonly, nonatomic) PXPhotosLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
@property(readonly, nonatomic) _Bool isEmbedded; // @synthesize isEmbedded=_isEmbedded;
@property(readonly, nonatomic) _Bool wantsRenderingStatus; // @synthesize wantsRenderingStatus=_wantsRenderingStatus;
@property(readonly, nonatomic) _Bool wantsCPLStatus; // @synthesize wantsCPLStatus=_wantsCPLStatus;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> assetImportStatusManager; // @synthesize assetImportStatusManager=_assetImportStatusManager;
@property(readonly, nonatomic) id <PXTapbackStatusManager> tapbackStatusManager; // @synthesize tapbackStatusManager=_tapbackStatusManager;
@property(readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXPhotosGridActionManager *gridActionManager; // @synthesize gridActionManager=_gridActionManager;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) _Bool keepsTabBarAlwaysHidden; // @synthesize keepsTabBarAlwaysHidden=_keepsTabBarAlwaysHidden;
- (_Bool)selectionManagerShouldAvoidEmptySelection:(id)arg1;	// IMP=0x00000000001e78a5
- (id)selectionManager:(id)arg1 validateSnapshot:(id)arg2;	// IMP=0x00000000001e7898
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001e7712
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)arg1;	// IMP=0x00000000001e76c6
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;	// IMP=0x00000000001e767a
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001e75b7
- (_Bool)viewDelegateRespondsTo:(unsigned long long)arg1;	// IMP=0x00000000001e74a2
@property(readonly, nonatomic) _Bool contentStartsAtEnd;
- (void)setEffectProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e737c
- (void)setTitleBackgroundOpacity:(double)arg1;	// IMP=0x00000000001e7345
@property(readonly, nonatomic) NSOrderedSet *visibleAssetCollections;
- (void)setFloatingTitleOpacity:(double)arg1;	// IMP=0x00000000001e72da
- (void)setContentFilterState:(id)arg1;	// IMP=0x00000000001e70a0
- (void)setCaptionsVisible:(_Bool)arg1;	// IMP=0x00000000001e7078
- (void)setViewBasedDecorationsEnabled:(_Bool)arg1;	// IMP=0x00000000001e7050
- (void)setFooterHasImportantInformation:(_Bool)arg1;	// IMP=0x00000000001e6ff9
- (void)setWantsContentFilterIndicatorVisible:(_Bool)arg1;	// IMP=0x00000000001e6f81
- (void)setWantsContentFilterVisible:(_Bool)arg1;	// IMP=0x00000000001e6f3a
- (void)setRequiresLightTopBars:(_Bool)arg1;	// IMP=0x00000000001e6f12
- (void)setShowingAlternateContent:(_Bool)arg1;	// IMP=0x00000000001e6ecb
- (void)setContentBelowTitle:(_Bool)arg1;	// IMP=0x00000000001e6e84
- (void)setSupportsAspectRatioToggle:(_Bool)arg1;	// IMP=0x00000000001e6de4
- (void)setZoomStep:(double)arg1 isInteractive:(_Bool)arg2 shouldAnimate:(_Bool)arg3 anchorAssetReference:(id)arg4;	// IMP=0x00000000001e6d5c
- (void)setNumberOfZoomSteps:(long long)arg1;	// IMP=0x00000000001e6c8f
- (void)setUserWantsAspectFitContent:(id)arg1;	// IMP=0x00000000001e6ab8
@property(readonly, nonatomic) _Bool shouldAspectFitContentByDefault;
@property(readonly, nonatomic) PXAssetReference *singleSelectedAssetReference;
- (void)setTapbackStatusManager:(id)arg1;	// IMP=0x00000000001e6823
- (void)setDropTargetAssetReference:(id)arg1;	// IMP=0x00000000001e67ae
- (void)setDraggedAssetReferences:(id)arg1;	// IMP=0x00000000001e6739
- (void)setHeaderTitleTopInset:(double)arg1;	// IMP=0x00000000001e6707
- (void)setScrolledToTop:(_Bool)arg1;	// IMP=0x00000000001e66df
- (void)setHasScrollableContent:(_Bool)arg1;	// IMP=0x00000000001e6698
- (void)setDismissRequested:(_Bool)arg1;	// IMP=0x00000000001e6670
- (void)setIsAppearing:(_Bool)arg1;	// IMP=0x00000000001e6648
- (void)setIsInCompactMode:(_Bool)arg1;	// IMP=0x00000000001e65e7
@property(readonly, nonatomic) _Bool canPresentOneUp;
@property(readonly, nonatomic) _Bool hideSurroundingContent;
- (void)setHideSurroundingContent:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000001e64de
- (void)setAspectRatioToggleAllowed:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000001e6417
- (void)setOneUpPresentationAllowed:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000001e63e7
@property(readonly, nonatomic) _Bool canFilterContent;
- (void)deselectAll;	// IMP=0x00000000001e630a
- (void)selectAll;	// IMP=0x00000000001e62c6
@property(readonly, nonatomic) _Bool isFilteringContent;
@property(readonly, nonatomic) _Bool canSwipeSelect;
@property(readonly, nonatomic) _Bool canExitSelectMode;
@property(readonly, nonatomic) _Bool canEnterSelectMode;
- (void)setEnterSelectModeAllowed:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000001e613a
- (_Bool)attemptSetInSelectMode:(_Bool)arg1;	// IMP=0x00000000001e603a
- (void)setIsInSelectMode:(_Bool)arg1;	// IMP=0x00000000001e5fa5
- (void)setCurrentDataSource:(id)arg1;	// IMP=0x00000000001e5e94
- (void)setShouldAlwaysRespectToolbarActionPlacementPreference:(_Bool)arg1;	// IMP=0x00000000001e5e67
- (void)setHidesToolbar:(_Bool)arg1;	// IMP=0x00000000001e5e23
- (void)setHidesNavbar:(_Bool)arg1;	// IMP=0x00000000001e5dd2
- (id)_indexPathsForAssetCollectionReference:(id)arg1;	// IMP=0x00000000001e5cb4
- (void)clickSelectAssetReference:(id)arg1 updateCursorIndexPath:(_Bool)arg2;	// IMP=0x00000000001e5b51
- (void)clickSelectIndexPath:(struct PXSimpleIndexPath)arg1 updateCursorIndexPath:(_Bool)arg2;	// IMP=0x00000000001e5a24
- (void)toggleSelectionForAssetCollectionReference:(id)arg1;	// IMP=0x00000000001e5905
- (void)toggleSelectionForAssetReference:(id)arg1;	// IMP=0x00000000001e58f1
- (void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(_Bool)arg2;	// IMP=0x00000000001e578e
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000001e577a
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath)arg1 updateCursorIndexPath:(_Bool)arg2;	// IMP=0x00000000001e5698
- (void)_updateEmptyPlaceholderState;	// IMP=0x00000000001e55d7
- (void)_invalidateEmptyPlaceholderState;	// IMP=0x00000000001e5593
- (void)_updateFilteringTimeoutObserver;	// IMP=0x00000000001e53f5
- (void)_updateWantsContentFilterIndicatorVisible;	// IMP=0x00000000001e5368
- (void)_invalidateWantsContentFilterIndicatorVisible;	// IMP=0x00000000001e5324
- (void)_updateAssetsDataSourceManager;	// IMP=0x00000000001e5020
- (void)_invalidateAssetsDataSourceManager;	// IMP=0x00000000001e4fdc
@property(readonly, nonatomic) PXFooterViewModel *footerViewModel;
- (void)_updateFooterVisibility;	// IMP=0x00000000001e4f1b
- (void)_invalidateFooterVisibility;	// IMP=0x00000000001e4ed7
- (void)_updateGridAppearance;	// IMP=0x00000000001e4d8c
- (void)_invalidateGridAppearance;	// IMP=0x00000000001e4d48
- (void)_updateDraggedAssetReferences;	// IMP=0x00000000001e4b44
- (void)_invalidateDraggedAssetReferences;	// IMP=0x00000000001e4b00
- (void)_updateChromeVisibility;	// IMP=0x00000000001e4938
- (void)_invalidateChromeVisibility;	// IMP=0x00000000001e48f4
- (void)_updateAspectFitContent;	// IMP=0x00000000001e480a
- (void)_invalidateAspectFitContent;	// IMP=0x00000000001e47c6
- (void)_updateUserWantsAspectFitContent;	// IMP=0x00000000001e469b
- (void)_invalidateUserWantsAspectFitContent;	// IMP=0x00000000001e4657
- (void)_updateTopBarsStyles;	// IMP=0x00000000001e45aa
- (void)_invalidateTopBarsStyles;	// IMP=0x00000000001e4566
- (void)_setNeedsUpdate;	// IMP=0x00000000001e4552
- (void)didPerformChanges;	// IMP=0x00000000001e44e8
- (id)_initialContentFilterStateForConfiguration:(id)arg1;	// IMP=0x00000000001e43ce
- (void)_updateDataSourceDependentProperties;	// IMP=0x00000000001e427e
- (void)dealloc;	// IMP=0x00000000001e4202
- (id)init;	// IMP=0x00000000001e4188
- (id)initWithConfiguration:(id)arg1 specManager:(id)arg2;	// IMP=0x00000000001e2e48
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> browserSelectionSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

