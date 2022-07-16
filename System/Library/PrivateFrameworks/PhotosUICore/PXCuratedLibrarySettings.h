//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PXCuratedLibrarySettings
{
    _Bool _enablePlayMovieInYears;	// 8 = 0x8
    _Bool _enableSlideshowInYears;	// 9 = 0x9
    _Bool _launchToSavedAllPhotosScrollPosition;	// 10 = 0xa
    _Bool _emulatesEmptyLibrary;	// 11 = 0xb
    _Bool _showStatusBar;	// 12 = 0xc
    _Bool _secondaryToolbarAlwaysVisible;	// 13 = 0xd
    _Bool _alwaysShowSecondaryToolbarAtBottom;	// 14 = 0xe
    _Bool _showSecondaryToolbar;	// 15 = 0xf
    _Bool _enableTapOnTitleToScroll;	// 16 = 0x10
    _Bool _enableCustomScrollToTopOrBottom;	// 17 = 0x11
    _Bool _useSaliency;	// 18 = 0x12
    _Bool _showSaliencyRects;	// 19 = 0x13
    _Bool _hideStatusFooter;	// 20 = 0x14
    _Bool _hideStatusFooterInSelectMode;	// 21 = 0x15
    _Bool _hideAnalyzingStatus;	// 22 = 0x16
    _Bool _forceFloatingHeaderVisible;	// 23 = 0x17
    _Bool _showDebugInformationInFloatingHeader;	// 24 = 0x18
    _Bool _enableShowAllButtons;	// 25 = 0x19
    _Bool _allowsCustomDateTitles;	// 26 = 0x1a
    _Bool _showAllHighlights;	// 27 = 0x1b
    _Bool _useCustomDaysCurationType;	// 28 = 0x1c
    _Bool _hideRecents;	// 29 = 0x1d
    _Bool _hideAggregations;	// 30 = 0x1e
    _Bool _enableInlinePlayback;	// 31 = 0x1f
    _Bool _forcePlayback;	// 32 = 0x20
    _Bool _playBestTimeRange;	// 33 = 0x21
    _Bool _enablePlaybackDiagnostics;	// 34 = 0x22
    _Bool _stabilizeLivePhotos;	// 35 = 0x23
    _Bool _firstTimeExperienceAlwaysLogReadiness;	// 36 = 0x24
    _Bool _enbaleInteractiveTransition;	// 37 = 0x25
    _Bool _enableSnapshotMode;	// 38 = 0x26
    _Bool _enableRecentlyEditedAlbum;	// 39 = 0x27
    _Bool _exaggerateContrast;	// 40 = 0x28
    _Bool _forceBadgesOnAllAssets;	// 41 = 0x29
    _Bool _forceShowAllButtonsVisible;	// 42 = 0x2a
    unsigned short _daysCurationType;	// 44 = 0x2c
    double _recentHighlightsTimeInterval;	// 48 = 0x30
    NSString *_savedAllPhotosScrollPositionAnchorAssetIdentifier;	// 56 = 0x38
    double _bottomCenterSecondaryToolbarWidth;	// 64 = 0x40
    double _scrollSnapMaximumDecelerationFactor;	// 72 = 0x48
    double _scrollSnapMaximumAccelerationFactor;	// 80 = 0x50
    double _scrollSnapMinimumSpeed;	// 88 = 0x58
    double _floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;	// 96 = 0x60
    double _floatingHeaderFadeOverDistance;	// 104 = 0x68
    double _floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;	// 112 = 0x70
    double _floatingHeaderButtonsFadeOverDistance;	// 120 = 0x78
    double _floatingHeadersAppearanceCrossfadeDuration;	// 128 = 0x80
    double _monthsFloatingHeadersDistanceFromSafeAreaTop;	// 136 = 0x88
    double _monthsFloatingHeadersAppearanceCrossfadeStartDistance;	// 144 = 0x90
    double _monthsFloatingHeadersAppearanceCrossfadeDistance;	// 152 = 0x98
    double _monthsFloatingHeadersFadeoutDistance;	// 160 = 0xa0
    double _monthsFloatingHeadersSubtitleAlpha;	// 168 = 0xa8
    double _monthsInlineHeadersFadeoutOffset;	// 176 = 0xb0
    double _monthsInlineHeadersFadeoutDistance;	// 184 = 0xb8
    double _monthsInlineHeadersFadeoutMinimumAlpha;	// 192 = 0xc0
    double _yearsHeadersFadeoutOffset;	// 200 = 0xc8
    double _yearsHeadersFadeoutDistance;	// 208 = 0xd0
    double _yearsHeadersFadeoutMinimumAlpha;	// 216 = 0xd8
    long long _largeHeroDensity;	// 224 = 0xe0
    double _largeHeroMinimumScore;	// 232 = 0xe8
    double _aspectRatioForCompactPortraitYears;	// 240 = 0xf0
    double _aspectRatioForCompactLandscapeYears;	// 248 = 0xf8
    double _aspectRatioForRegularYears;	// 256 = 0x100
    long long _forcedNumberOfYearsColumn;	// 264 = 0x108
    double _aspectRatioForCompactPortraitMonths;	// 272 = 0x110
    double _spacingBetweenDays;	// 280 = 0x118
    double _interitemSpacingForDays;	// 288 = 0x120
    double _allowSpecialPanoHeaders;	// 296 = 0x128
    double _topInsetForVisibilityAnchoring;	// 304 = 0x130
    double _sectionShadowOpacity;	// 312 = 0x138
    double _skimmingScale;	// 320 = 0x140
    long long _sectionsToPrefetch;	// 328 = 0x148
    double _faultInDistance;	// 336 = 0x150
    double _faultOutPadding;	// 344 = 0x158
    double _minimumVisibleHeightForTopMostSection;	// 352 = 0x160
    double _yearsHeaderGradientAlpha;	// 360 = 0x168
    double _yearsHeaderGradientHeight;	// 368 = 0x170
    double _monthsHeaderGradientAlpha;	// 376 = 0x178
    double _monthsHeaderGradientHeight;	// 384 = 0x180
    double _monthsSmallHeaderGradientHeight;	// 392 = 0x188
    double _daysHeaderGradientAlpha;	// 400 = 0x190
    double _daysHeaderGradientHeight;	// 408 = 0x198
    double _statusBarGradientAlpha;	// 416 = 0x1a0
    double _statusBarGradientHeight;	// 424 = 0x1a8
    double _statusBarGradientAndStyleFadeDuration;	// 432 = 0x1b0
    long long _initialZoomLevel;	// 440 = 0x1b8
    double _nonInterestingPromotionScore;	// 448 = 0x1c0
    double _minAutoplaySuggestionScore;	// 456 = 0x1c8
    long long _maxNumberOfPlayingItems;	// 464 = 0x1d0
    double _playbackVisibleRectEdgeInset;	// 472 = 0x1d8
    double _livePhotoLoopingCrossfadeDuration;	// 480 = 0x1e0
    double _slideshowTriggerDelay;	// 488 = 0x1e8
    double _slideshowIntervalDelay;	// 496 = 0x1f0
    long long _firstTimeExperienceMaxNonProcessedHighlights;	// 504 = 0x1f8
    long long _firstTimeExperienceMaxNonProcessedAssets;	// 512 = 0x200
    double _defaultZoomLevelTransitionAnimationDuration;	// 520 = 0x208
    double _defaultZoomLevelTransitionMaximumScaleAroundAnchor;	// 528 = 0x210
    double _nonAnchorYearsFadeSpeed;	// 536 = 0x218
    double _nonAnchorMonthsFadeSpeed;	// 544 = 0x220
    double _nonAnchorDaysFadeSpeed;	// 552 = 0x228
    double _transitionToOrFromAllPhotosAnimationDuration;	// 560 = 0x230
    double _transitionToOrFromAllPhotosScale;	// 568 = 0x238
    double _transitionScaleForDayNotMatchingMonths;	// 576 = 0x240
    double _zoomLevelPinchSignificantScaleDelta;	// 584 = 0x248
    double _swipeBackGestureMinAngle;	// 592 = 0x250
    double _swipeBackGestureMinTranslation;	// 600 = 0x258
    double _zoomLevelControlSegmentExpansionFactor;	// 608 = 0x260
}

+ (void)setEnableEmptyYearsMonthsDaysForTesting:(_Bool)arg1;	// IMP=0x00000000005fc909
+ (_Bool)enableEmptyYearsMonthsDaysForTesting;	// IMP=0x00000000005fc8fd
+ (id)sharedInstance;	// IMP=0x00000000005fc8cd
+ (id)settingsControllerModule;	// IMP=0x00000000004c2671
- (void).cxx_destruct;	// IMP=0x00000000005fc868
@property(nonatomic) _Bool forceShowAllButtonsVisible; // @synthesize forceShowAllButtonsVisible=_forceShowAllButtonsVisible;
@property(nonatomic) _Bool forceBadgesOnAllAssets; // @synthesize forceBadgesOnAllAssets=_forceBadgesOnAllAssets;
@property(nonatomic) _Bool exaggerateContrast; // @synthesize exaggerateContrast=_exaggerateContrast;
@property(nonatomic) _Bool enableRecentlyEditedAlbum; // @synthesize enableRecentlyEditedAlbum=_enableRecentlyEditedAlbum;
@property(nonatomic) _Bool enableSnapshotMode; // @synthesize enableSnapshotMode=_enableSnapshotMode;
@property(nonatomic) double zoomLevelControlSegmentExpansionFactor; // @synthesize zoomLevelControlSegmentExpansionFactor=_zoomLevelControlSegmentExpansionFactor;
@property(nonatomic) double swipeBackGestureMinTranslation; // @synthesize swipeBackGestureMinTranslation=_swipeBackGestureMinTranslation;
@property(nonatomic) double swipeBackGestureMinAngle; // @synthesize swipeBackGestureMinAngle=_swipeBackGestureMinAngle;
@property(nonatomic) double zoomLevelPinchSignificantScaleDelta; // @synthesize zoomLevelPinchSignificantScaleDelta=_zoomLevelPinchSignificantScaleDelta;
@property(nonatomic) double transitionScaleForDayNotMatchingMonths; // @synthesize transitionScaleForDayNotMatchingMonths=_transitionScaleForDayNotMatchingMonths;
@property(nonatomic) double transitionToOrFromAllPhotosScale; // @synthesize transitionToOrFromAllPhotosScale=_transitionToOrFromAllPhotosScale;
@property(nonatomic) double transitionToOrFromAllPhotosAnimationDuration; // @synthesize transitionToOrFromAllPhotosAnimationDuration=_transitionToOrFromAllPhotosAnimationDuration;
@property(nonatomic) double nonAnchorDaysFadeSpeed; // @synthesize nonAnchorDaysFadeSpeed=_nonAnchorDaysFadeSpeed;
@property(nonatomic) double nonAnchorMonthsFadeSpeed; // @synthesize nonAnchorMonthsFadeSpeed=_nonAnchorMonthsFadeSpeed;
@property(nonatomic) double nonAnchorYearsFadeSpeed; // @synthesize nonAnchorYearsFadeSpeed=_nonAnchorYearsFadeSpeed;
@property(nonatomic) double defaultZoomLevelTransitionMaximumScaleAroundAnchor; // @synthesize defaultZoomLevelTransitionMaximumScaleAroundAnchor=_defaultZoomLevelTransitionMaximumScaleAroundAnchor;
@property(nonatomic) double defaultZoomLevelTransitionAnimationDuration; // @synthesize defaultZoomLevelTransitionAnimationDuration=_defaultZoomLevelTransitionAnimationDuration;
@property(nonatomic) _Bool enbaleInteractiveTransition; // @synthesize enbaleInteractiveTransition=_enbaleInteractiveTransition;
@property(nonatomic) _Bool firstTimeExperienceAlwaysLogReadiness; // @synthesize firstTimeExperienceAlwaysLogReadiness=_firstTimeExperienceAlwaysLogReadiness;
@property(nonatomic) long long firstTimeExperienceMaxNonProcessedAssets; // @synthesize firstTimeExperienceMaxNonProcessedAssets=_firstTimeExperienceMaxNonProcessedAssets;
@property(nonatomic) long long firstTimeExperienceMaxNonProcessedHighlights; // @synthesize firstTimeExperienceMaxNonProcessedHighlights=_firstTimeExperienceMaxNonProcessedHighlights;
@property(nonatomic) double slideshowIntervalDelay; // @synthesize slideshowIntervalDelay=_slideshowIntervalDelay;
@property(nonatomic) double slideshowTriggerDelay; // @synthesize slideshowTriggerDelay=_slideshowTriggerDelay;
@property(nonatomic) _Bool stabilizeLivePhotos; // @synthesize stabilizeLivePhotos=_stabilizeLivePhotos;
@property(nonatomic) _Bool enablePlaybackDiagnostics; // @synthesize enablePlaybackDiagnostics=_enablePlaybackDiagnostics;
@property(nonatomic) double livePhotoLoopingCrossfadeDuration; // @synthesize livePhotoLoopingCrossfadeDuration=_livePhotoLoopingCrossfadeDuration;
@property(nonatomic) double playbackVisibleRectEdgeInset; // @synthesize playbackVisibleRectEdgeInset=_playbackVisibleRectEdgeInset;
@property(nonatomic) long long maxNumberOfPlayingItems; // @synthesize maxNumberOfPlayingItems=_maxNumberOfPlayingItems;
@property(nonatomic) _Bool playBestTimeRange; // @synthesize playBestTimeRange=_playBestTimeRange;
@property(nonatomic) double minAutoplaySuggestionScore; // @synthesize minAutoplaySuggestionScore=_minAutoplaySuggestionScore;
@property(nonatomic) _Bool forcePlayback; // @synthesize forcePlayback=_forcePlayback;
@property(nonatomic) _Bool enableInlinePlayback; // @synthesize enableInlinePlayback=_enableInlinePlayback;
@property(nonatomic) _Bool hideAggregations; // @synthesize hideAggregations=_hideAggregations;
@property(nonatomic) _Bool hideRecents; // @synthesize hideRecents=_hideRecents;
@property(nonatomic) double nonInterestingPromotionScore; // @synthesize nonInterestingPromotionScore=_nonInterestingPromotionScore;
@property(nonatomic) unsigned short daysCurationType; // @synthesize daysCurationType=_daysCurationType;
@property(nonatomic) _Bool useCustomDaysCurationType; // @synthesize useCustomDaysCurationType=_useCustomDaysCurationType;
@property(nonatomic) _Bool showAllHighlights; // @synthesize showAllHighlights=_showAllHighlights;
@property(nonatomic) long long initialZoomLevel; // @synthesize initialZoomLevel=_initialZoomLevel;
@property(nonatomic) double statusBarGradientAndStyleFadeDuration; // @synthesize statusBarGradientAndStyleFadeDuration=_statusBarGradientAndStyleFadeDuration;
@property(nonatomic) double statusBarGradientHeight; // @synthesize statusBarGradientHeight=_statusBarGradientHeight;
@property(nonatomic) double statusBarGradientAlpha; // @synthesize statusBarGradientAlpha=_statusBarGradientAlpha;
@property(nonatomic) double daysHeaderGradientHeight; // @synthesize daysHeaderGradientHeight=_daysHeaderGradientHeight;
@property(nonatomic) double daysHeaderGradientAlpha; // @synthesize daysHeaderGradientAlpha=_daysHeaderGradientAlpha;
@property(nonatomic) double monthsSmallHeaderGradientHeight; // @synthesize monthsSmallHeaderGradientHeight=_monthsSmallHeaderGradientHeight;
@property(nonatomic) double monthsHeaderGradientHeight; // @synthesize monthsHeaderGradientHeight=_monthsHeaderGradientHeight;
@property(nonatomic) double monthsHeaderGradientAlpha; // @synthesize monthsHeaderGradientAlpha=_monthsHeaderGradientAlpha;
@property(nonatomic) double yearsHeaderGradientHeight; // @synthesize yearsHeaderGradientHeight=_yearsHeaderGradientHeight;
@property(nonatomic) double yearsHeaderGradientAlpha; // @synthesize yearsHeaderGradientAlpha=_yearsHeaderGradientAlpha;
@property(nonatomic) _Bool allowsCustomDateTitles; // @synthesize allowsCustomDateTitles=_allowsCustomDateTitles;
@property(nonatomic) _Bool enableShowAllButtons; // @synthesize enableShowAllButtons=_enableShowAllButtons;
@property(nonatomic) double minimumVisibleHeightForTopMostSection; // @synthesize minimumVisibleHeightForTopMostSection=_minimumVisibleHeightForTopMostSection;
@property(nonatomic) _Bool showDebugInformationInFloatingHeader; // @synthesize showDebugInformationInFloatingHeader=_showDebugInformationInFloatingHeader;
@property(nonatomic) _Bool forceFloatingHeaderVisible; // @synthesize forceFloatingHeaderVisible=_forceFloatingHeaderVisible;
@property(nonatomic) _Bool hideAnalyzingStatus; // @synthesize hideAnalyzingStatus=_hideAnalyzingStatus;
@property(nonatomic) _Bool hideStatusFooterInSelectMode; // @synthesize hideStatusFooterInSelectMode=_hideStatusFooterInSelectMode;
@property(nonatomic) _Bool hideStatusFooter; // @synthesize hideStatusFooter=_hideStatusFooter;
@property(nonatomic) double faultOutPadding; // @synthesize faultOutPadding=_faultOutPadding;
@property(nonatomic) double faultInDistance; // @synthesize faultInDistance=_faultInDistance;
@property(nonatomic) long long sectionsToPrefetch; // @synthesize sectionsToPrefetch=_sectionsToPrefetch;
@property(nonatomic) double skimmingScale; // @synthesize skimmingScale=_skimmingScale;
@property(nonatomic) double sectionShadowOpacity; // @synthesize sectionShadowOpacity=_sectionShadowOpacity;
@property(nonatomic) double topInsetForVisibilityAnchoring; // @synthesize topInsetForVisibilityAnchoring=_topInsetForVisibilityAnchoring;
@property(nonatomic) double allowSpecialPanoHeaders; // @synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders;
@property(nonatomic) double interitemSpacingForDays; // @synthesize interitemSpacingForDays=_interitemSpacingForDays;
@property(nonatomic) double spacingBetweenDays; // @synthesize spacingBetweenDays=_spacingBetweenDays;
@property(nonatomic) double aspectRatioForCompactPortraitMonths; // @synthesize aspectRatioForCompactPortraitMonths=_aspectRatioForCompactPortraitMonths;
@property(nonatomic) long long forcedNumberOfYearsColumn; // @synthesize forcedNumberOfYearsColumn=_forcedNumberOfYearsColumn;
@property(nonatomic) double aspectRatioForRegularYears; // @synthesize aspectRatioForRegularYears=_aspectRatioForRegularYears;
@property(nonatomic) double aspectRatioForCompactLandscapeYears; // @synthesize aspectRatioForCompactLandscapeYears=_aspectRatioForCompactLandscapeYears;
@property(nonatomic) double aspectRatioForCompactPortraitYears; // @synthesize aspectRatioForCompactPortraitYears=_aspectRatioForCompactPortraitYears;
@property(nonatomic) double largeHeroMinimumScore; // @synthesize largeHeroMinimumScore=_largeHeroMinimumScore;
@property(nonatomic) long long largeHeroDensity; // @synthesize largeHeroDensity=_largeHeroDensity;
@property(nonatomic) _Bool showSaliencyRects; // @synthesize showSaliencyRects=_showSaliencyRects;
@property(nonatomic) _Bool useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) double yearsHeadersFadeoutMinimumAlpha; // @synthesize yearsHeadersFadeoutMinimumAlpha=_yearsHeadersFadeoutMinimumAlpha;
@property(nonatomic) double yearsHeadersFadeoutDistance; // @synthesize yearsHeadersFadeoutDistance=_yearsHeadersFadeoutDistance;
@property(nonatomic) double yearsHeadersFadeoutOffset; // @synthesize yearsHeadersFadeoutOffset=_yearsHeadersFadeoutOffset;
@property(nonatomic) double monthsInlineHeadersFadeoutMinimumAlpha; // @synthesize monthsInlineHeadersFadeoutMinimumAlpha=_monthsInlineHeadersFadeoutMinimumAlpha;
@property(nonatomic) double monthsInlineHeadersFadeoutDistance; // @synthesize monthsInlineHeadersFadeoutDistance=_monthsInlineHeadersFadeoutDistance;
@property(nonatomic) double monthsInlineHeadersFadeoutOffset; // @synthesize monthsInlineHeadersFadeoutOffset=_monthsInlineHeadersFadeoutOffset;
@property(nonatomic) double monthsFloatingHeadersSubtitleAlpha; // @synthesize monthsFloatingHeadersSubtitleAlpha=_monthsFloatingHeadersSubtitleAlpha;
@property(nonatomic) double monthsFloatingHeadersFadeoutDistance; // @synthesize monthsFloatingHeadersFadeoutDistance=_monthsFloatingHeadersFadeoutDistance;
@property(nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeDistance=_monthsFloatingHeadersAppearanceCrossfadeDistance;
@property(nonatomic) double monthsFloatingHeadersAppearanceCrossfadeStartDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeStartDistance=_monthsFloatingHeadersAppearanceCrossfadeStartDistance;
@property(nonatomic) double monthsFloatingHeadersDistanceFromSafeAreaTop; // @synthesize monthsFloatingHeadersDistanceFromSafeAreaTop=_monthsFloatingHeadersDistanceFromSafeAreaTop;
@property(nonatomic) double floatingHeadersAppearanceCrossfadeDuration; // @synthesize floatingHeadersAppearanceCrossfadeDuration=_floatingHeadersAppearanceCrossfadeDuration;
@property(nonatomic) double floatingHeaderButtonsFadeOverDistance; // @synthesize floatingHeaderButtonsFadeOverDistance=_floatingHeaderButtonsFadeOverDistance;
@property(nonatomic) double floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop; // @synthesize floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop=_floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
@property(nonatomic) double floatingHeaderFadeOverDistance; // @synthesize floatingHeaderFadeOverDistance=_floatingHeaderFadeOverDistance;
@property(nonatomic) double floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom; // @synthesize floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom=_floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
@property(nonatomic) double scrollSnapMinimumSpeed; // @synthesize scrollSnapMinimumSpeed=_scrollSnapMinimumSpeed;
@property(nonatomic) double scrollSnapMaximumAccelerationFactor; // @synthesize scrollSnapMaximumAccelerationFactor=_scrollSnapMaximumAccelerationFactor;
@property(nonatomic) double scrollSnapMaximumDecelerationFactor; // @synthesize scrollSnapMaximumDecelerationFactor=_scrollSnapMaximumDecelerationFactor;
@property(nonatomic) _Bool enableCustomScrollToTopOrBottom; // @synthesize enableCustomScrollToTopOrBottom=_enableCustomScrollToTopOrBottom;
@property(nonatomic) _Bool enableTapOnTitleToScroll; // @synthesize enableTapOnTitleToScroll=_enableTapOnTitleToScroll;
@property(nonatomic) _Bool showSecondaryToolbar; // @synthesize showSecondaryToolbar=_showSecondaryToolbar;
@property(nonatomic) double bottomCenterSecondaryToolbarWidth; // @synthesize bottomCenterSecondaryToolbarWidth=_bottomCenterSecondaryToolbarWidth;
@property(nonatomic) _Bool alwaysShowSecondaryToolbarAtBottom; // @synthesize alwaysShowSecondaryToolbarAtBottom=_alwaysShowSecondaryToolbarAtBottom;
@property(nonatomic) _Bool secondaryToolbarAlwaysVisible; // @synthesize secondaryToolbarAlwaysVisible=_secondaryToolbarAlwaysVisible;
@property(nonatomic) _Bool showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(nonatomic) _Bool emulatesEmptyLibrary; // @synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary;
@property(copy, nonatomic) NSString *savedAllPhotosScrollPositionAnchorAssetIdentifier; // @synthesize savedAllPhotosScrollPositionAnchorAssetIdentifier=_savedAllPhotosScrollPositionAnchorAssetIdentifier;
@property(nonatomic) _Bool launchToSavedAllPhotosScrollPosition; // @synthesize launchToSavedAllPhotosScrollPosition=_launchToSavedAllPhotosScrollPosition;
@property(nonatomic) _Bool enableSlideshowInYears; // @synthesize enableSlideshowInYears=_enableSlideshowInYears;
@property(nonatomic) _Bool enablePlayMovieInYears; // @synthesize enablePlayMovieInYears=_enablePlayMovieInYears;
@property(nonatomic) double recentHighlightsTimeInterval; // @synthesize recentHighlightsTimeInterval=_recentHighlightsTimeInterval;
- (long long)version;	// IMP=0x00000000005fb9ef
- (_Bool)allowsModularLayoutForZoomLevel:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3;	// IMP=0x00000000005fb9c6
- (CDUnknownBlockType)acceptableLargeHeroPredicate;	// IMP=0x00000000005fb978
- (void)setDefaultValues;	// IMP=0x00000000005fb16b
- (id)parentSettings;	// IMP=0x00000000005fb152

@end

