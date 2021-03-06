//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXGridKitSettings
{
    _Bool _enableXcodeCustomDebugHierarchy;	// 8 = 0x8
    _Bool _sortSpritesInXcodeCustomDebugHierarchy;	// 9 = 0x9
    _Bool _includeLayoutsLocalSpritesInDebugHierarchy;	// 10 = 0xa
    _Bool _simulateMissingMetalDevice;	// 11 = 0xb
    _Bool _enableMetalRenderer;	// 12 = 0xc
    _Bool _enableViewRenderer;	// 13 = 0xd
    _Bool _lowLatency;	// 14 = 0xe
    _Bool _lowMemoryMode;	// 15 = 0xf
    _Bool _inLowMemoryModePreferMasterThumb;	// 16 = 0x10
    _Bool _enableRoundedCorners;	// 17 = 0x11
    _Bool _enableColorMatching;	// 18 = 0x12
    _Bool _debugExtendedColorRange;	// 19 = 0x13
    _Bool _debugOpaque;	// 20 = 0x14
    _Bool _debugResolution;	// 21 = 0x15
    _Bool _debugColorTransform;	// 22 = 0x16
    _Bool _debugSharedTextures;	// 23 = 0x17
    _Bool _colorCopiedImages;	// 24 = 0x18
    _Bool _colorCachedThumbnails;	// 25 = 0x19
    _Bool _requestThumbnailsOnly;	// 26 = 0x1a
    _Bool _requestMasterThumbsOnly;	// 27 = 0x1b
    _Bool _disableLowResThumbnails;	// 28 = 0x1c
    _Bool _simulateSomeAssetsInCloud;	// 29 = 0x1d
    _Bool _loadThumbnailsAsync;	// 30 = 0x1e
    _Bool _allowBlockingDuringScrolling;	// 31 = 0x1f
    _Bool _allowBlockingDueToFences;	// 32 = 0x20
    _Bool _wantsOrthogonalProjection;	// 33 = 0x21
    _Bool _wantsStatsDebugHUD;	// 34 = 0x22
    _Bool _wantsRectDiagnosticsDebugHUD;	// 35 = 0x23
    _Bool _enableAnchoringRectDiagnostics;	// 36 = 0x24
    _Bool _enableAssetsRectDiagnostics;	// 37 = 0x25
    _Bool _enableFocusRectDiagnostics;	// 38 = 0x26
    _Bool _enableCurrentFocusRectDiagnostics;	// 39 = 0x27
    _Bool _enableRectDiagnosticsForUndefinedSprites;	// 40 = 0x28
    _Bool _enableRectDiagnosticsForNamedImageSprites;	// 41 = 0x29
    _Bool _enableRectDiagnosticsForDisplayAssetSprites;	// 42 = 0x2a
    _Bool _enableRectDiagnosticsForTextSprites;	// 43 = 0x2b
    _Bool _enableRectDiagnosticsForTitleSubtitleSprites;	// 44 = 0x2c
    _Bool _enableRectDiagnosticsForSolidColorSprites;	// 45 = 0x2d
    _Bool _enableRectDiagnosticsForGradientSprites;	// 46 = 0x2e
    _Bool _enableRectDiagnosticsForShadowSprites;	// 47 = 0x2f
    _Bool _enableRectDiagnosticsForDecorationSprites;	// 48 = 0x30
    _Bool _enableRectDiagnosticsForViewSprites;	// 49 = 0x31
    _Bool _enableRectDiagnosticsForPathSprites;	// 50 = 0x32
    _Bool _wantsPerspectiveDebug;	// 51 = 0x33
    _Bool _shouldShowBoundariesOfTextTextures;	// 52 = 0x34
    _Bool _enableLayoutDanglingUpdatesAssertions;	// 53 = 0x35
    _Bool _enableSublayoutUpdateCycleAssertions;	// 54 = 0x36
    _Bool _enableRenderTextureCache;	// 55 = 0x37
    _Bool _shouldDeactivateTextureManagerWhenNotVisible;	// 56 = 0x38
    double _inactivityTimeout;	// 64 = 0x40
    double _slowLayoutUpdateThreshold;	// 72 = 0x48
    long long _sampleCount;	// 80 = 0x50
    long long _thumbnailCacheSize;	// 88 = 0x58
    double _opportunisticPreheatRequiredIdleTime;	// 96 = 0x60
    unsigned long long _textLegibilityDimmingType;	// 104 = 0x68
    double _textLegibilityDimmingStrength;	// 112 = 0x70
    double _blockingWhileScrollingTimeout;	// 120 = 0x78
    double _blockingWhileScrubbingTimeout;	// 128 = 0x80
    double _blockingWhileInitialLoadTimeout;	// 136 = 0x88
    long long _blockOnMissingThumbnailsAtSpeedRegime;	// 144 = 0x90
    long long _videoAllowedAtOrBelowSpeed;	// 152 = 0x98
    long long _videoAllowedAtOrBelowSpeedForLowSpec;	// 160 = 0xa0
    long long _lowSpecProcessorCountLimit;	// 168 = 0xa8
    double _slowAnimationsSpeed;	// 176 = 0xb0
    double _maxCornerRadius;	// 184 = 0xb8
    double _cameraZoomFactor;	// 192 = 0xc0
    double _perspectiveAngle;	// 200 = 0xc8
    double _livePhotoInitialCrossfadeDuration;	// 208 = 0xd0
    double _offscreenTextureMaximumLifeTime;	// 216 = 0xd8
    unsigned long long _renderTextureCacheCapacity;	// 224 = 0xe0
    double _renderTextureCacheAgeLimit;	// 232 = 0xe8
    unsigned long long _renderTextureCacheSizeLimitMB;	// 240 = 0xf0
}

+ (id)sharedInstance;	// IMP=0x00000000003396de
+ (id)settingsControllerModule;	// IMP=0x000000000046f7b4
@property(nonatomic) _Bool shouldDeactivateTextureManagerWhenNotVisible; // @synthesize shouldDeactivateTextureManagerWhenNotVisible=_shouldDeactivateTextureManagerWhenNotVisible;
@property(nonatomic) unsigned long long renderTextureCacheSizeLimitMB; // @synthesize renderTextureCacheSizeLimitMB=_renderTextureCacheSizeLimitMB;
@property(nonatomic) double renderTextureCacheAgeLimit; // @synthesize renderTextureCacheAgeLimit=_renderTextureCacheAgeLimit;
@property(nonatomic) unsigned long long renderTextureCacheCapacity; // @synthesize renderTextureCacheCapacity=_renderTextureCacheCapacity;
@property(nonatomic) _Bool enableRenderTextureCache; // @synthesize enableRenderTextureCache=_enableRenderTextureCache;
@property(nonatomic) double offscreenTextureMaximumLifeTime; // @synthesize offscreenTextureMaximumLifeTime=_offscreenTextureMaximumLifeTime;
@property(nonatomic) _Bool enableSublayoutUpdateCycleAssertions; // @synthesize enableSublayoutUpdateCycleAssertions=_enableSublayoutUpdateCycleAssertions;
@property(nonatomic) _Bool enableLayoutDanglingUpdatesAssertions; // @synthesize enableLayoutDanglingUpdatesAssertions=_enableLayoutDanglingUpdatesAssertions;
@property(nonatomic) double livePhotoInitialCrossfadeDuration; // @synthesize livePhotoInitialCrossfadeDuration=_livePhotoInitialCrossfadeDuration;
@property(nonatomic) _Bool shouldShowBoundariesOfTextTextures; // @synthesize shouldShowBoundariesOfTextTextures=_shouldShowBoundariesOfTextTextures;
@property(nonatomic) double perspectiveAngle; // @synthesize perspectiveAngle=_perspectiveAngle;
@property(nonatomic) _Bool wantsPerspectiveDebug; // @synthesize wantsPerspectiveDebug=_wantsPerspectiveDebug;
@property(nonatomic) _Bool enableRectDiagnosticsForPathSprites; // @synthesize enableRectDiagnosticsForPathSprites=_enableRectDiagnosticsForPathSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForViewSprites; // @synthesize enableRectDiagnosticsForViewSprites=_enableRectDiagnosticsForViewSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForDecorationSprites; // @synthesize enableRectDiagnosticsForDecorationSprites=_enableRectDiagnosticsForDecorationSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForShadowSprites; // @synthesize enableRectDiagnosticsForShadowSprites=_enableRectDiagnosticsForShadowSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForGradientSprites; // @synthesize enableRectDiagnosticsForGradientSprites=_enableRectDiagnosticsForGradientSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForSolidColorSprites; // @synthesize enableRectDiagnosticsForSolidColorSprites=_enableRectDiagnosticsForSolidColorSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForTitleSubtitleSprites; // @synthesize enableRectDiagnosticsForTitleSubtitleSprites=_enableRectDiagnosticsForTitleSubtitleSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForTextSprites; // @synthesize enableRectDiagnosticsForTextSprites=_enableRectDiagnosticsForTextSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForDisplayAssetSprites; // @synthesize enableRectDiagnosticsForDisplayAssetSprites=_enableRectDiagnosticsForDisplayAssetSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForNamedImageSprites; // @synthesize enableRectDiagnosticsForNamedImageSprites=_enableRectDiagnosticsForNamedImageSprites;
@property(nonatomic) _Bool enableRectDiagnosticsForUndefinedSprites; // @synthesize enableRectDiagnosticsForUndefinedSprites=_enableRectDiagnosticsForUndefinedSprites;
@property(nonatomic) _Bool enableCurrentFocusRectDiagnostics; // @synthesize enableCurrentFocusRectDiagnostics=_enableCurrentFocusRectDiagnostics;
@property(nonatomic) _Bool enableFocusRectDiagnostics; // @synthesize enableFocusRectDiagnostics=_enableFocusRectDiagnostics;
@property(nonatomic) _Bool enableAssetsRectDiagnostics; // @synthesize enableAssetsRectDiagnostics=_enableAssetsRectDiagnostics;
@property(nonatomic) _Bool enableAnchoringRectDiagnostics; // @synthesize enableAnchoringRectDiagnostics=_enableAnchoringRectDiagnostics;
@property(nonatomic) _Bool wantsRectDiagnosticsDebugHUD; // @synthesize wantsRectDiagnosticsDebugHUD=_wantsRectDiagnosticsDebugHUD;
@property(nonatomic) _Bool wantsStatsDebugHUD; // @synthesize wantsStatsDebugHUD=_wantsStatsDebugHUD;
@property(nonatomic) _Bool wantsOrthogonalProjection; // @synthesize wantsOrthogonalProjection=_wantsOrthogonalProjection;
@property(nonatomic) double cameraZoomFactor; // @synthesize cameraZoomFactor=_cameraZoomFactor;
@property(nonatomic) double maxCornerRadius; // @synthesize maxCornerRadius=_maxCornerRadius;
@property(nonatomic) double slowAnimationsSpeed; // @synthesize slowAnimationsSpeed=_slowAnimationsSpeed;
@property(nonatomic) _Bool allowBlockingDueToFences; // @synthesize allowBlockingDueToFences=_allowBlockingDueToFences;
@property(nonatomic) long long lowSpecProcessorCountLimit; // @synthesize lowSpecProcessorCountLimit=_lowSpecProcessorCountLimit;
@property(nonatomic) long long videoAllowedAtOrBelowSpeedForLowSpec; // @synthesize videoAllowedAtOrBelowSpeedForLowSpec=_videoAllowedAtOrBelowSpeedForLowSpec;
@property(nonatomic) long long videoAllowedAtOrBelowSpeed; // @synthesize videoAllowedAtOrBelowSpeed=_videoAllowedAtOrBelowSpeed;
@property(nonatomic) long long blockOnMissingThumbnailsAtSpeedRegime; // @synthesize blockOnMissingThumbnailsAtSpeedRegime=_blockOnMissingThumbnailsAtSpeedRegime;
@property(nonatomic) double blockingWhileInitialLoadTimeout; // @synthesize blockingWhileInitialLoadTimeout=_blockingWhileInitialLoadTimeout;
@property(nonatomic) double blockingWhileScrubbingTimeout; // @synthesize blockingWhileScrubbingTimeout=_blockingWhileScrubbingTimeout;
@property(nonatomic) double blockingWhileScrollingTimeout; // @synthesize blockingWhileScrollingTimeout=_blockingWhileScrollingTimeout;
@property(nonatomic) _Bool allowBlockingDuringScrolling; // @synthesize allowBlockingDuringScrolling=_allowBlockingDuringScrolling;
@property(nonatomic) double textLegibilityDimmingStrength; // @synthesize textLegibilityDimmingStrength=_textLegibilityDimmingStrength;
@property(nonatomic) unsigned long long textLegibilityDimmingType; // @synthesize textLegibilityDimmingType=_textLegibilityDimmingType;
@property(nonatomic) double opportunisticPreheatRequiredIdleTime; // @synthesize opportunisticPreheatRequiredIdleTime=_opportunisticPreheatRequiredIdleTime;
@property(nonatomic) long long thumbnailCacheSize; // @synthesize thumbnailCacheSize=_thumbnailCacheSize;
@property(nonatomic) _Bool loadThumbnailsAsync; // @synthesize loadThumbnailsAsync=_loadThumbnailsAsync;
@property(nonatomic) _Bool simulateSomeAssetsInCloud; // @synthesize simulateSomeAssetsInCloud=_simulateSomeAssetsInCloud;
@property(nonatomic) _Bool disableLowResThumbnails; // @synthesize disableLowResThumbnails=_disableLowResThumbnails;
@property(nonatomic) _Bool requestMasterThumbsOnly; // @synthesize requestMasterThumbsOnly=_requestMasterThumbsOnly;
@property(nonatomic) _Bool requestThumbnailsOnly; // @synthesize requestThumbnailsOnly=_requestThumbnailsOnly;
@property(nonatomic) _Bool colorCachedThumbnails; // @synthesize colorCachedThumbnails=_colorCachedThumbnails;
@property(nonatomic) _Bool colorCopiedImages; // @synthesize colorCopiedImages=_colorCopiedImages;
@property(nonatomic) _Bool debugSharedTextures; // @synthesize debugSharedTextures=_debugSharedTextures;
@property(nonatomic) _Bool debugColorTransform; // @synthesize debugColorTransform=_debugColorTransform;
@property(nonatomic) _Bool debugResolution; // @synthesize debugResolution=_debugResolution;
@property(nonatomic) _Bool debugOpaque; // @synthesize debugOpaque=_debugOpaque;
@property(nonatomic) _Bool debugExtendedColorRange; // @synthesize debugExtendedColorRange=_debugExtendedColorRange;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) _Bool enableColorMatching; // @synthesize enableColorMatching=_enableColorMatching;
@property(nonatomic) _Bool enableRoundedCorners; // @synthesize enableRoundedCorners=_enableRoundedCorners;
@property(nonatomic) double slowLayoutUpdateThreshold; // @synthesize slowLayoutUpdateThreshold=_slowLayoutUpdateThreshold;
@property(nonatomic) double inactivityTimeout; // @synthesize inactivityTimeout=_inactivityTimeout;
@property(nonatomic) _Bool inLowMemoryModePreferMasterThumb; // @synthesize inLowMemoryModePreferMasterThumb=_inLowMemoryModePreferMasterThumb;
@property(nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(nonatomic) _Bool lowLatency; // @synthesize lowLatency=_lowLatency;
@property(nonatomic) _Bool enableViewRenderer; // @synthesize enableViewRenderer=_enableViewRenderer;
@property(nonatomic) _Bool enableMetalRenderer; // @synthesize enableMetalRenderer=_enableMetalRenderer;
@property(nonatomic) _Bool simulateMissingMetalDevice; // @synthesize simulateMissingMetalDevice=_simulateMissingMetalDevice;
@property(nonatomic) _Bool includeLayoutsLocalSpritesInDebugHierarchy; // @synthesize includeLayoutsLocalSpritesInDebugHierarchy=_includeLayoutsLocalSpritesInDebugHierarchy;
@property(nonatomic) _Bool sortSpritesInXcodeCustomDebugHierarchy; // @synthesize sortSpritesInXcodeCustomDebugHierarchy=_sortSpritesInXcodeCustomDebugHierarchy;
@property(nonatomic) _Bool enableXcodeCustomDebugHierarchy; // @synthesize enableXcodeCustomDebugHierarchy=_enableXcodeCustomDebugHierarchy;
- (void)setDefaultValues;	// IMP=0x00000000003388b1
- (_Bool)anySpritesRectDiagnosticsEnabled;	// IMP=0x00000000003387b8
- (id)parentSettings;	// IMP=0x000000000033879f

@end

