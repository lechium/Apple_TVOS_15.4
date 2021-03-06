//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXInfoProvider-Protocol.h>
#import <PhotosUICore/PXInfoUpdaterObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDDataSource-Protocol.h>
#import <PhotosUICore/PXStoryMutableViewModel-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXStoryVisualDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDateFormatter, NSError, NSMapTable, NSMutableSet, NSObject, NSString, PXExtendedTraitCollection, PXInfoUpdater, PXMediaProvider, PXObservable, PXPhotosViewInteraction, PXPhotosViewModel, PXStoryAudioSessionController, PXStoryConfiguration, PXStoryErrorRepository, PXStoryItemPlacement, PXStoryModel, PXStoryMusicPlayer, PXStoryOverlayController, PXStoryPacingController, PXStoryPausableLoadingCoordinator, PXStoryPersistenceController, PXStoryRelatedController, PXStoryResourcesPreloadingCoordinator, PXStorySongController, PXStoryValidationController, PXStoryViewAccessibilityHUDContentProvider, PXStoryViewBufferingController, PXStoryViewLayoutSpecManager, PXStoryViewModeTransition, PXStoryViewResourcesPreloadingController, PXUpdater;
@protocol OS_dispatch_queue, PXAnonymousViewController, PXDisplayAsset, PXDisplayAssetCollection, PXStoryErrorReporter, PXStoryPacingTimeSource, PXStoryViewActionPerformer, PXStoryViewLayoutSpec;

@interface PXStoryViewModel <PXTapToRadarDiagnosticProvider, PXStoryVisualDiagnosticsProvider, PXStoryDiagnosticHUDContentProvider, PXStoryMutableViewModel, PXChangeObserver, PXSettingsKeyObserver, PXInfoProvider, PXInfoUpdaterObserver, PXStoryQueueParticipant, PXStoryDiagnosticHUDDataSource>
{
    _Bool _hasBeenActiveOnce;	// 8 = 0x8
    long long _axStoredPlayStateLastViewModeOnUpdate;	// 16 = 0x10
    _Bool _axStoredPlayStateHasStoredPlayState;	// 24 = 0x18
    long long _axStoredPlayState;	// 32 = 0x20
    PXStoryViewAccessibilityHUDContentProvider *_accessibilityHUDContentProvider;	// 40 = 0x28
    _Bool _isHUDVisible;	// 48 = 0x30
    _Bool _isActive;	// 49 = 0x31
    _Bool _isAtPlaybackEnd;	// 50 = 0x32
    _Bool _wantsChromeVisible;	// 51 = 0x33
    _Bool _needsStatusBarVisible;	// 52 = 0x34
    _Bool _wantsRelatedOverlayVisible;	// 53 = 0x35
    _Bool _wantsRelatedOverlayScrollable;	// 54 = 0x36
    _Bool _isRelatedOverlayScrolledIntoView;	// 55 = 0x37
    _Bool _wantsRelatedOverlayNavigationButtonsVisible;	// 56 = 0x38
    _Bool _shouldCountDownToUpNext;	// 57 = 0x39
    _Bool _wantsPlaybackEndDarkening;	// 58 = 0x3a
    _Bool _isPerformingViewControllerTransition;	// 59 = 0x3b
    _Bool _swipeDownTriggeringDismissal;	// 60 = 0x3c
    _Bool _swipeDownDismissalPreviewEnabled;	// 61 = 0x3d
    _Bool _isScrubbing;	// 62 = 0x3e
    _Bool _wantsScrubberVisible;	// 63 = 0x3f
    _Bool _didSelectAnyRelated;	// 64 = 0x40
    _Bool _shouldPreventDisplaySleep;	// 65 = 0x41
    _Bool _isAnyMenuOpen;	// 66 = 0x42
    _Bool _isActionMenuOpen;	// 67 = 0x43
    _Bool _shouldShowErrorIndicator;	// 68 = 0x44
    _Bool _canToggleSelectMode;	// 69 = 0x45
    _Bool _isInSelectMode;	// 70 = 0x46
    _Bool _showSongInTitleWhenPaused;	// 71 = 0x47
    _Bool _isPerformingCrossfadeTransitionToRelated;	// 72 = 0x48
    _Bool _isUserPerformingRemoteGesture;	// 73 = 0x49
    _Bool _shouldSimplifyUIForAccessibility;	// 74 = 0x4a
    _Bool _hasAnyError;	// 75 = 0x4b
    _Bool _isReadingFromPhotosGridViewModel;	// 76 = 0x4c
    _Bool _shouldAutoHideChrome;	// 77 = 0x4d
    NSDateFormatter *_mainAssetInfoUpdateQueue_titleDateFormatter;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_storyQueue;	// 88 = 0x58
    long long _diagnosticHUDType;	// 96 = 0x60
    long long _viewMode;	// 104 = 0x68
    long long _desiredPlayState;	// 112 = 0x70
    double _playbackFractionCompleted;	// 120 = 0x78
    double _outroFractionCompleted;	// 128 = 0x80
    double _chromeVisibilityFraction;	// 136 = 0x88
    unsigned long long _chromeItems;	// 144 = 0x90
    double _bufferingIndicatorVisibilityFraction;	// 152 = 0x98
    double _relatedOverlayVisibilityFraction;	// 160 = 0xa0
    double _fadeOutOverlayVisibilityFraction;	// 168 = 0xa8
    double _playbackEndDarkening;	// 176 = 0xb0
    double _solidLegibilityOverlayOpacity;	// 184 = 0xb8
    double _topGradientLegibilityOverlayOpacity;	// 192 = 0xc0
    double _bottomGradientLegibilityOverlayOpacity;	// 200 = 0xc8
    PXStoryViewModeTransition *_viewModeTransition;	// 208 = 0xd0
    PXStoryItemPlacement *_viewControllerDismissalTargetPlacement;	// 216 = 0xd8
    double _swipeDownDismissalPreviewFraction;	// 224 = 0xe0
    double _scrubberVisibilityFraction;	// 232 = 0xe8
    NSDate *_lastSkipSegmentActionDate;	// 240 = 0xf0
    unsigned long long _edgeToHighlight;	// 248 = 0xf8
    double _styleSwitcherVisibilityFraction;	// 256 = 0x100
    id <PXDisplayAssetCollection> _mainAssetCollection;	// 264 = 0x108
    id <PXStoryViewLayoutSpec> _viewLayoutSpec;	// 272 = 0x110
    id <PXStoryViewActionPerformer> _actionPerformer;	// 280 = 0x118
    id <PXStoryErrorReporter> _errorReporter;	// 288 = 0x120
    NSString *_identifier;	// 296 = 0x128
    PXStoryModel *_mainModel;	// 304 = 0x130
    PXStoryConfiguration *_mainConfiguration;	// 312 = 0x138
    NSArray *_relatedModels;	// 320 = 0x140
    NSArray *_relatedConfigurations;	// 328 = 0x148
    long long _selectedRelatedIndex;	// 336 = 0x150
    NSError *_displayedError;	// 344 = 0x158
    NSObject<PXAnonymousViewController> *_presentingViewController;	// 352 = 0x160
    NSAttributedString *_displayTitle;	// 360 = 0x168
    NSAttributedString *_displaySubtitle;	// 368 = 0x170
    double _volume;	// 376 = 0x178
    PXPhotosViewModel *_photosGridViewModel;	// 384 = 0x180
    long long _highlightedRelatedIndex;	// 392 = 0x188
    PXStoryViewLayoutSpecManager *_viewLayoutSpecManager;	// 400 = 0x190
    PXUpdater *_updater;	// 408 = 0x198
    id _modelChangeOrigin;	// 416 = 0x1a0
    NSMapTable *_diagnosticHUDContentProvidersByType;	// 424 = 0x1a8
    PXStoryPausableLoadingCoordinator *_loadingCoordinator;	// 432 = 0x1b0
    id <PXDisplayAsset> _mainAsset;	// 440 = 0x1b8
    PXInfoUpdater *_mainAssetInfoUpdater;	// 448 = 0x1c0
    NSObject<OS_dispatch_queue> *_mainAssetInfoUpdateQueue;	// 456 = 0x1c8
    NSMutableSet *_recentlyUsedFlexSongIDs;	// 464 = 0x1d0
    NSMutableSet *_recentlyUsedAppleMusicSongIDs;	// 472 = 0x1d8
    PXExtendedTraitCollection *_extendedTraitCollection;	// 480 = 0x1e0
    id <PXStoryPacingTimeSource> _timeSource;	// 488 = 0x1e8
    PXMediaProvider *_mediaProvider;	// 496 = 0x1f0
    PXStoryResourcesPreloadingCoordinator *_resourcesPreloadingCoordinator;	// 504 = 0x1f8
    PXStoryErrorRepository *_errorRepository;	// 512 = 0x200
    PXStoryAudioSessionController *_audioSessionController;	// 520 = 0x208
    PXStoryOverlayController *_overlayController;	// 528 = 0x210
    PXStoryRelatedController *_relatedController;	// 536 = 0x218
    PXStoryMusicPlayer *_musicPlayer;	// 544 = 0x220
    PXStoryPacingController *_pacingController;	// 552 = 0x228
    PXStorySongController *_songController;	// 560 = 0x230
    PXStoryViewResourcesPreloadingController *_resourcesPreloadingController;	// 568 = 0x238
    PXStoryPersistenceController *_persistenceController;	// 576 = 0x240
    PXStoryViewBufferingController *_bufferingController;	// 584 = 0x248
    PXStoryValidationController *_validationController;	// 592 = 0x250
    PXPhotosViewInteraction *_photosGridViewInteraction;	// 600 = 0x258
    NSDate *_lastMainModelChangeDate;	// 608 = 0x260
    CDStruct_982265da _scrubberPosition;	// 616 = 0x268
    CDStruct_14916c44 _swipeDownInteractionState;	// 640 = 0x280
}

- (void).cxx_destruct;	// IMP=0x0000000000582a79
@property(retain, nonatomic) NSDate *lastMainModelChangeDate; // @synthesize lastMainModelChangeDate=_lastMainModelChangeDate;
@property(retain, nonatomic) PXPhotosViewInteraction *photosGridViewInteraction; // @synthesize photosGridViewInteraction=_photosGridViewInteraction;
@property(readonly, nonatomic) PXStoryValidationController *validationController; // @synthesize validationController=_validationController;
@property(readonly, nonatomic) PXStoryViewBufferingController *bufferingController; // @synthesize bufferingController=_bufferingController;
@property(readonly, nonatomic) PXStoryPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) PXStoryViewResourcesPreloadingController *resourcesPreloadingController; // @synthesize resourcesPreloadingController=_resourcesPreloadingController;
@property(readonly, nonatomic) PXStorySongController *songController; // @synthesize songController=_songController;
@property(readonly, nonatomic) PXStoryPacingController *pacingController; // @synthesize pacingController=_pacingController;
@property(readonly, nonatomic) PXStoryMusicPlayer *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(readonly, nonatomic) PXStoryRelatedController *relatedController; // @synthesize relatedController=_relatedController;
@property(readonly, nonatomic) PXStoryOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) PXStoryAudioSessionController *audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) _Bool shouldAutoHideChrome; // @synthesize shouldAutoHideChrome=_shouldAutoHideChrome;
@property(readonly, nonatomic) PXStoryErrorRepository *errorRepository; // @synthesize errorRepository=_errorRepository;
@property(readonly, nonatomic) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator; // @synthesize resourcesPreloadingCoordinator=_resourcesPreloadingCoordinator;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXStoryPacingTimeSource> timeSource; // @synthesize timeSource=_timeSource;
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(readonly, nonatomic) NSMutableSet *recentlyUsedAppleMusicSongIDs; // @synthesize recentlyUsedAppleMusicSongIDs=_recentlyUsedAppleMusicSongIDs;
@property(readonly, nonatomic) NSMutableSet *recentlyUsedFlexSongIDs; // @synthesize recentlyUsedFlexSongIDs=_recentlyUsedFlexSongIDs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mainAssetInfoUpdateQueue; // @synthesize mainAssetInfoUpdateQueue=_mainAssetInfoUpdateQueue;
@property(readonly, nonatomic) PXInfoUpdater *mainAssetInfoUpdater; // @synthesize mainAssetInfoUpdater=_mainAssetInfoUpdater;
@property(retain, nonatomic) id <PXDisplayAsset> mainAsset; // @synthesize mainAsset=_mainAsset;
@property(readonly, nonatomic) PXStoryPausableLoadingCoordinator *loadingCoordinator; // @synthesize loadingCoordinator=_loadingCoordinator;
@property(readonly, nonatomic) _Bool isReadingFromPhotosGridViewModel; // @synthesize isReadingFromPhotosGridViewModel=_isReadingFromPhotosGridViewModel;
@property(nonatomic) _Bool hasAnyError; // @synthesize hasAnyError=_hasAnyError;
@property(readonly, nonatomic) NSMapTable *diagnosticHUDContentProvidersByType; // @synthesize diagnosticHUDContentProvidersByType=_diagnosticHUDContentProvidersByType;
@property(readonly, nonatomic) id modelChangeOrigin; // @synthesize modelChangeOrigin=_modelChangeOrigin;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXStoryViewLayoutSpecManager *viewLayoutSpecManager; // @synthesize viewLayoutSpecManager=_viewLayoutSpecManager;
@property(readonly, nonatomic) _Bool shouldSimplifyUIForAccessibility; // @synthesize shouldSimplifyUIForAccessibility=_shouldSimplifyUIForAccessibility;
@property(readonly, nonatomic) _Bool isUserPerformingRemoteGesture; // @synthesize isUserPerformingRemoteGesture=_isUserPerformingRemoteGesture;
@property(readonly, nonatomic) long long highlightedRelatedIndex; // @synthesize highlightedRelatedIndex=_highlightedRelatedIndex;
@property(readonly, nonatomic) PXPhotosViewModel *photosGridViewModel; // @synthesize photosGridViewModel=_photosGridViewModel;
@property(nonatomic) _Bool isPerformingCrossfadeTransitionToRelated; // @synthesize isPerformingCrossfadeTransitionToRelated=_isPerformingCrossfadeTransitionToRelated;
@property(readonly, nonatomic) double volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) _Bool showSongInTitleWhenPaused; // @synthesize showSongInTitleWhenPaused=_showSongInTitleWhenPaused;
@property(retain, nonatomic) NSAttributedString *displaySubtitle; // @synthesize displaySubtitle=_displaySubtitle;
@property(retain, nonatomic) NSAttributedString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(readonly, nonatomic) __weak NSObject<PXAnonymousViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) _Bool isInSelectMode; // @synthesize isInSelectMode=_isInSelectMode;
@property(readonly, nonatomic) _Bool canToggleSelectMode; // @synthesize canToggleSelectMode=_canToggleSelectMode;
@property(readonly, nonatomic) NSError *displayedError; // @synthesize displayedError=_displayedError;
@property(readonly, nonatomic) _Bool shouldShowErrorIndicator; // @synthesize shouldShowErrorIndicator=_shouldShowErrorIndicator;
@property(readonly, nonatomic) _Bool isActionMenuOpen; // @synthesize isActionMenuOpen=_isActionMenuOpen;
@property(readonly, nonatomic) _Bool isAnyMenuOpen; // @synthesize isAnyMenuOpen=_isAnyMenuOpen;
@property(readonly, nonatomic) _Bool shouldPreventDisplaySleep; // @synthesize shouldPreventDisplaySleep=_shouldPreventDisplaySleep;
@property(readonly, nonatomic) _Bool didSelectAnyRelated; // @synthesize didSelectAnyRelated=_didSelectAnyRelated;
@property(readonly, nonatomic) long long selectedRelatedIndex; // @synthesize selectedRelatedIndex=_selectedRelatedIndex;
@property(readonly, copy, nonatomic) NSArray *relatedConfigurations; // @synthesize relatedConfigurations=_relatedConfigurations;
@property(readonly, copy, nonatomic) NSArray *relatedModels; // @synthesize relatedModels=_relatedModels;
@property(readonly, nonatomic) PXStoryConfiguration *mainConfiguration; // @synthesize mainConfiguration=_mainConfiguration;
@property(readonly, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) __weak id <PXStoryViewActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, nonatomic) id <PXStoryViewLayoutSpec> viewLayoutSpec; // @synthesize viewLayoutSpec=_viewLayoutSpec;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> mainAssetCollection; // @synthesize mainAssetCollection=_mainAssetCollection;
@property(readonly, nonatomic) double styleSwitcherVisibilityFraction; // @synthesize styleSwitcherVisibilityFraction=_styleSwitcherVisibilityFraction;
@property(readonly, nonatomic) unsigned long long edgeToHighlight; // @synthesize edgeToHighlight=_edgeToHighlight;
@property(readonly, nonatomic) NSDate *lastSkipSegmentActionDate; // @synthesize lastSkipSegmentActionDate=_lastSkipSegmentActionDate;
@property(readonly, nonatomic) CDStruct_982265da scrubberPosition; // @synthesize scrubberPosition=_scrubberPosition;
@property(readonly, nonatomic) double scrubberVisibilityFraction; // @synthesize scrubberVisibilityFraction=_scrubberVisibilityFraction;
@property(readonly, nonatomic) _Bool wantsScrubberVisible; // @synthesize wantsScrubberVisible=_wantsScrubberVisible;
@property(readonly, nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(readonly, nonatomic) double swipeDownDismissalPreviewFraction; // @synthesize swipeDownDismissalPreviewFraction=_swipeDownDismissalPreviewFraction;
@property(readonly, nonatomic) _Bool swipeDownDismissalPreviewEnabled; // @synthesize swipeDownDismissalPreviewEnabled=_swipeDownDismissalPreviewEnabled;
@property(readonly, nonatomic) _Bool swipeDownTriggeringDismissal; // @synthesize swipeDownTriggeringDismissal=_swipeDownTriggeringDismissal;
@property(readonly, copy, nonatomic) PXStoryItemPlacement *viewControllerDismissalTargetPlacement; // @synthesize viewControllerDismissalTargetPlacement=_viewControllerDismissalTargetPlacement;
@property(readonly, nonatomic) _Bool isPerformingViewControllerTransition; // @synthesize isPerformingViewControllerTransition=_isPerformingViewControllerTransition;
@property(readonly, nonatomic) CDStruct_14916c44 swipeDownInteractionState; // @synthesize swipeDownInteractionState=_swipeDownInteractionState;
@property(retain, nonatomic) PXStoryViewModeTransition *viewModeTransition; // @synthesize viewModeTransition=_viewModeTransition;
@property(readonly, nonatomic) double bottomGradientLegibilityOverlayOpacity; // @synthesize bottomGradientLegibilityOverlayOpacity=_bottomGradientLegibilityOverlayOpacity;
@property(readonly, nonatomic) double topGradientLegibilityOverlayOpacity; // @synthesize topGradientLegibilityOverlayOpacity=_topGradientLegibilityOverlayOpacity;
@property(nonatomic) double solidLegibilityOverlayOpacity; // @synthesize solidLegibilityOverlayOpacity=_solidLegibilityOverlayOpacity;
@property(readonly, nonatomic) double playbackEndDarkening; // @synthesize playbackEndDarkening=_playbackEndDarkening;
@property(readonly, nonatomic) _Bool wantsPlaybackEndDarkening; // @synthesize wantsPlaybackEndDarkening=_wantsPlaybackEndDarkening;
@property(readonly, nonatomic) _Bool shouldCountDownToUpNext; // @synthesize shouldCountDownToUpNext=_shouldCountDownToUpNext;
@property(readonly, nonatomic) _Bool wantsRelatedOverlayNavigationButtonsVisible; // @synthesize wantsRelatedOverlayNavigationButtonsVisible=_wantsRelatedOverlayNavigationButtonsVisible;
@property(readonly, nonatomic) _Bool isRelatedOverlayScrolledIntoView; // @synthesize isRelatedOverlayScrolledIntoView=_isRelatedOverlayScrolledIntoView;
@property(readonly, nonatomic) double fadeOutOverlayVisibilityFraction; // @synthesize fadeOutOverlayVisibilityFraction=_fadeOutOverlayVisibilityFraction;
@property(readonly, nonatomic) double relatedOverlayVisibilityFraction; // @synthesize relatedOverlayVisibilityFraction=_relatedOverlayVisibilityFraction;
@property(readonly, nonatomic) _Bool wantsRelatedOverlayScrollable; // @synthesize wantsRelatedOverlayScrollable=_wantsRelatedOverlayScrollable;
@property(readonly, nonatomic) _Bool wantsRelatedOverlayVisible; // @synthesize wantsRelatedOverlayVisible=_wantsRelatedOverlayVisible;
@property(readonly, nonatomic) double bufferingIndicatorVisibilityFraction; // @synthesize bufferingIndicatorVisibilityFraction=_bufferingIndicatorVisibilityFraction;
@property(readonly, nonatomic) unsigned long long chromeItems; // @synthesize chromeItems=_chromeItems;
@property(readonly, nonatomic) double chromeVisibilityFraction; // @synthesize chromeVisibilityFraction=_chromeVisibilityFraction;
@property(readonly, nonatomic) _Bool needsStatusBarVisible; // @synthesize needsStatusBarVisible=_needsStatusBarVisible;
@property(readonly, nonatomic) _Bool wantsChromeVisible; // @synthesize wantsChromeVisible=_wantsChromeVisible;
@property(readonly, nonatomic) double outroFractionCompleted; // @synthesize outroFractionCompleted=_outroFractionCompleted;
@property(readonly, nonatomic) _Bool isAtPlaybackEnd; // @synthesize isAtPlaybackEnd=_isAtPlaybackEnd;
@property(readonly, nonatomic) double playbackFractionCompleted; // @synthesize playbackFractionCompleted=_playbackFractionCompleted;
@property(readonly, nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) long long diagnosticHUDType; // @synthesize diagnosticHUDType=_diagnosticHUDType;
@property(nonatomic) _Bool isHUDVisible; // @synthesize isHUDVisible=_isHUDVisible;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (id)diagnosticTextForHUDType:(long long)arg1;	// IMP=0x00000000005822f3
@property(readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;
@property(readonly, nonatomic) PXObservable *HUDObservable;
@property(readonly, nonatomic) PXStoryModel *HUDStoryModel;
@property(readonly, nonatomic) unsigned long long HUDStoryModelChangeDescriptor;
@property(readonly, nonatomic) unsigned long long HUDContentChangeDescriptor;
@property(readonly, nonatomic) unsigned long long HUDVisibiltyChangeDescriptor;
- (void)setShouldSimplifyUIForAccessibility:(_Bool)arg1;	// IMP=0x000000000058218b
- (void)_accessibilityStatusDidChange;	// IMP=0x0000000000582158
- (void)_unregisterForAccessibilityEvents;	// IMP=0x0000000000582152
- (void)_registerForAccessibilityEvents;	// IMP=0x000000000058208f
- (void)_attachAccessibilityHUDIfNeeded;	// IMP=0x0000000000582072
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x0000000000581f16
- (id)_internalRecoveryOptions;	// IMP=0x0000000000581e50
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000581d54
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000581cfc
- (void)infoUpdaterDidUpdate:(id)arg1;	// IMP=0x0000000000581bfd
@property(readonly, nonatomic) NSDateFormatter *mainAssetInfoUpdateQueue_titleDateFormatter; // @synthesize mainAssetInfoUpdateQueue_titleDateFormatter=_mainAssetInfoUpdateQueue_titleDateFormatter;
- (id)_mainAssetInfoUpdateQueue_infoForAsset:(id)arg1;	// IMP=0x0000000000581a2f
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000058180c
- (void)_updateMainAsset;	// IMP=0x000000000058168a
- (void)_invalidateMainAsset;	// IMP=0x0000000000581646
- (void)_updateDisplayTitleAndSubtitle;	// IMP=0x0000000000580e18
- (void)_invalidateDisplayTitleAndSubtitle;	// IMP=0x0000000000580dd4
- (void)_updateDisplayChrome;	// IMP=0x0000000000580d81
- (void)_invalidateDisplayChrome;	// IMP=0x0000000000580d3d
- (void)_readFromPhotosGridViewModel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000580cb9
- (void)_updateRecentlyUsedSongs;	// IMP=0x0000000000580bb7
- (void)_invalidateRecentlyUsedSongs;	// IMP=0x0000000000580b73
- (void)_updateIsInSelectMode;	// IMP=0x0000000000580b27
- (void)_invalidateIsInSelectMode;	// IMP=0x0000000000580ae3
- (id)_gridEffectForAsset:(id)arg1 colorGradingEffect:(id)arg2 entityManager:(id)arg3;	// IMP=0x000000000058083a
- (void)_updateAXStoredPlayState;	// IMP=0x00000000005806ce
- (void)_invalidateAXStoredPlayState;	// IMP=0x000000000058068a
- (void)_updatePhotosGridEffectProvider;	// IMP=0x00000000005805ce
- (void)_invalidatePhotosGridEffectProvider;	// IMP=0x000000000058058a
- (void)_updateCanToggleSelectMode;	// IMP=0x0000000000580576
- (void)_invalidateCanToggleSelectMode;	// IMP=0x0000000000580532
- (void)setPhotosGridViewModel:(id)arg1;	// IMP=0x000000000058045c
- (void)_updateDiagnosticHUDState;	// IMP=0x00000000005803df
- (void)_invalidateDiagnosticHUDState;	// IMP=0x000000000058039b
- (void)_updateErrorIndicator;	// IMP=0x000000000057ffbd
- (void)_invalidateErrorIndicator;	// IMP=0x000000000057ff79
- (void)_updateShouldPreventDisplaySleep;	// IMP=0x000000000057fedf
- (void)_invalidateShouldPreventDisplaySleep;	// IMP=0x000000000057fe9b
- (void)_updateShouldAutoHideChrome;	// IMP=0x000000000057fd6a
- (void)_invalidateShouldAutoHideChrome;	// IMP=0x000000000057fd26
- (void)_updateIsAnyMenuOpen;	// IMP=0x000000000057fcf5
- (void)_invalidateIsAnyMenuOpen;	// IMP=0x000000000057fcb1
- (void)_updateWantsRelatedOverlayScrollable;	// IMP=0x000000000057fc0c
- (void)_invalidateWantsRelatedOverlayScrollable;	// IMP=0x000000000057fbc8
- (void)_updateLegibilityOverlayOpacity;	// IMP=0x000000000057f784
- (void)_invalidateLegibilityOverlayOpacity;	// IMP=0x000000000057f740
- (void)_updateControllersActiveness;	// IMP=0x000000000057f396
- (void)_invalidateControllersActiveness;	// IMP=0x000000000057f352
- (void)_updateMainModelControllers;	// IMP=0x000000000057f0f0
- (void)_invalidateMainModelControllers;	// IMP=0x000000000057f0ac
- (void)_updateViewModelControllers;	// IMP=0x000000000057ef36
- (void)_invalidateViewModelControllers;	// IMP=0x000000000057eef2
- (void)_updateViewLayoutSpec;	// IMP=0x000000000057ee83
- (void)_invalidateViewLayoutSpec;	// IMP=0x000000000057ee3f
- (void)_updateMainAssetCollection;	// IMP=0x000000000057edd0
- (void)_invalidateMainAssetCollection;	// IMP=0x000000000057ed8c
- (void)_updateOutroFractionCompleted;	// IMP=0x000000000057ed36
- (void)_invalidateOutroFractionCompleted;	// IMP=0x000000000057ecf2
- (void)_updatePlaybackFractionCompleted;	// IMP=0x000000000057ec9c
- (void)_invalidatePlaybackFractionCompleted;	// IMP=0x000000000057ec58
- (void)_updateDesiredPlayState;	// IMP=0x000000000057ebff
- (void)_invalidateDesiredPlayState;	// IMP=0x000000000057ebbb
- (void)_updateViewModeTransition;	// IMP=0x000000000057eae5
- (void)_invalidateViewModeTransition;	// IMP=0x000000000057eaa1
- (void)_updateViewMode;	// IMP=0x000000000057ea48
- (void)_invalidateViewMode;	// IMP=0x000000000057ea04
- (void)_updateMainModelProperties;	// IMP=0x000000000057e95a
- (void)_invalidateMainModelProperties;	// IMP=0x000000000057e916
- (void)_updateSpecManager;	// IMP=0x000000000057e897
- (void)_invalidateSpecManager;	// IMP=0x000000000057e853
- (void)_setNeedsUpdate;	// IMP=0x000000000057e83f
- (void)setIsUserPerformingRemoteGesture:(_Bool)arg1;	// IMP=0x000000000057e602
- (_Bool)checkIfShouldPreventAdvancingAndReturnReason:(out id *)arg1;	// IMP=0x000000000057e5ab
- (void)setHighlightedRelatedIndex:(long long)arg1;	// IMP=0x000000000057e57c
- (void)setVolume:(double)arg1;	// IMP=0x000000000057e54f
- (void)setDiagnosticHUDContentProvider:(id)arg1 forType:(long long)arg2;	// IMP=0x000000000057e494
- (id)diagnosticHUDContentProviderForType:(long long)arg1;	// IMP=0x000000000057e3a2
- (void)_updateHUDSettings;	// IMP=0x000000000057e2e6
- (void)_invalidateHUDSettings;	// IMP=0x000000000057e2a2
- (void)setDisplayedError:(id)arg1;	// IMP=0x000000000057e175
- (void)setShouldShowErrorIndicator:(_Bool)arg1;	// IMP=0x000000000057e14d
- (void)setShowSongInTitleWhenPaused:(_Bool)arg1;	// IMP=0x000000000057e090
- (void)setViewControllerDismissalTargetPlacement:(id)arg1;	// IMP=0x000000000057df22
- (void)setIsPerformingViewControllerTransition:(_Bool)arg1;	// IMP=0x000000000057ded6
- (void)setShouldPreventDisplaySleep:(_Bool)arg1;	// IMP=0x000000000057deae
- (void)deselectAllGridItems;	// IMP=0x000000000057de6a
- (void)selectAllGridItems;	// IMP=0x000000000057de26
- (void)setIsInSelectMode:(_Bool)arg1;	// IMP=0x000000000057dd60
- (void)setCanToggleSelectMode:(_Bool)arg1;	// IMP=0x000000000057dd33
- (void)setScrubberPosition:(CDStruct_982265da)arg1;	// IMP=0x000000000057dcdb
- (void)_updateScrubberFeedbackGeneratorWithShouldImpact:(_Bool)arg1 shouldPrepare:(_Bool)arg2;	// IMP=0x000000000057dcd5
- (void)setIsScrubbing:(_Bool)arg1;	// IMP=0x000000000057dba6
- (void)_replayMusic;	// IMP=0x000000000057db62
- (void)rewindToBeginning:(_Bool)arg1 rewindMusic:(_Bool)arg2;	// IMP=0x000000000057dadb
- (void)rewindToBeginning:(_Bool)arg1;	// IMP=0x000000000057dac4
- (void)_resetSelectedRelatedIndex;	// IMP=0x000000000057da78
- (void)_changeMainModelToRelatedAtIndex:(long long)arg1 changeOrigin:(unsigned long long)arg2;	// IMP=0x000000000057d6f3
- (void)setSelectedRelatedIndex:(long long)arg1;	// IMP=0x000000000057d6c4
- (void)autoPlayUpNext;	// IMP=0x000000000057d651
- (void)selectRelatedAtIndex:(long long)arg1;	// IMP=0x000000000057d63a
- (void)setMainConfiguration:(id)arg1;	// IMP=0x000000000057d5b6
- (void)setRelatedConfigurations:(id)arg1;	// IMP=0x000000000057d3b1
- (void)setValidationController:(id)arg1;	// IMP=0x000000000057d337
- (void)setBufferingController:(id)arg1;	// IMP=0x000000000057d2bd
- (void)setPersistenceController:(id)arg1;	// IMP=0x000000000057d243
- (void)setAudioSessionController:(id)arg1;	// IMP=0x000000000057d1f2
- (void)setSongController:(id)arg1;	// IMP=0x000000000057d1de
- (void)setResourcesPreloadingController:(id)arg1;	// IMP=0x000000000057d164
- (void)setPacingController:(id)arg1;	// IMP=0x000000000057d0ea
- (void)setMusicPlayer:(id)arg1;	// IMP=0x000000000057d070
- (void)setRelatedController:(id)arg1;	// IMP=0x000000000057cff6
- (void)setOverlayController:(id)arg1;	// IMP=0x000000000057cfe2
- (void)liveResizeDidEnd;	// IMP=0x000000000057cf9e
- (void)liveResizeWillStart;	// IMP=0x000000000057cf5a
- (void)cycleHUDType;	// IMP=0x000000000057cf41
- (void)toggleHUD;	// IMP=0x000000000057cf28
- (void)toggleChrome;	// IMP=0x000000000057cef5
- (_Bool)skipToBeginningOfSegmentWithIdentifier:(long long)arg1;	// IMP=0x000000000057ce23
- (_Bool)skipToSegmentWithOffset:(long long)arg1 byTappingEdge:(_Bool)arg2;	// IMP=0x000000000057cc71
- (_Bool)skipToSegmentWithOffset:(long long)arg1;	// IMP=0x000000000057cc5d
- (void)togglePlayback;	// IMP=0x000000000057cc27
- (void)setEdgeToHighlight:(unsigned long long)arg1;	// IMP=0x000000000057cbd0
- (void)setLastSkipSegmentActionDate:(id)arg1;	// IMP=0x000000000057cb60
- (void)setDidSelectAnyRelated:(_Bool)arg1;	// IMP=0x000000000057cb50
- (void)setRelatedModels:(id)arg1;	// IMP=0x000000000057cac0
- (void)_setMainModel:(id)arg1 changeOrigin:(unsigned long long)arg2;	// IMP=0x000000000057c6d1
- (void)setActionPerformer:(id)arg1;	// IMP=0x000000000057c5c4
- (void)setViewLayoutSpec:(id)arg1;	// IMP=0x000000000057c540
- (void)setMainAssetCollection:(id)arg1;	// IMP=0x000000000057c4cb
- (void)setBottomGradientLegibilityOverlayOpacity:(double)arg1;	// IMP=0x000000000057c494
- (void)setTopGradientLegibilityOverlayOpacity:(double)arg1;	// IMP=0x000000000057c45d
- (void)setPlaybackEndDarkening:(double)arg1;	// IMP=0x000000000057c3fe
- (void)setWantsPlaybackEndDarkening:(_Bool)arg1;	// IMP=0x000000000057c3d1
- (void)setShouldCountDownToUpNext:(_Bool)arg1;	// IMP=0x000000000057c3a9
- (void)setWantsRelatedOverlayNavigationButtonsVisible:(_Bool)arg1;	// IMP=0x000000000057c37c
- (void)setIsRelatedOverlayScrolledIntoView:(_Bool)arg1;	// IMP=0x000000000057c354
- (void)setFadeOutOverlayVisibilityFraction:(double)arg1;	// IMP=0x000000000057c2fe
- (void)setRelatedOverlayVisibilityFraction:(double)arg1;	// IMP=0x000000000057c2ad
- (void)setWantsRelatedOverlayScrollable:(_Bool)arg1;	// IMP=0x000000000057c266
- (void)setWantsRelatedOverlayVisible:(_Bool)arg1;	// IMP=0x000000000057c129
- (void)setStyleSwitcherVisibilityFraction:(double)arg1;	// IMP=0x000000000057c0c6
- (void)setScrubberVisibilityFraction:(double)arg1;	// IMP=0x000000000057c075
- (void)setWantsScrubberVisible:(_Bool)arg1;	// IMP=0x000000000057c04d
- (void)setBufferingIndicatorVisibilityFraction:(double)arg1;	// IMP=0x000000000057bfad
- (void)setChromeItems:(unsigned long long)arg1;	// IMP=0x000000000057bf83
- (void)setChromeVisibilityFraction:(double)arg1;	// IMP=0x000000000057bf32
- (void)setNeedsStatusBarVisible:(_Bool)arg1;	// IMP=0x000000000057bf05
- (void)setWantsChromeVisible:(_Bool)arg1;	// IMP=0x000000000057bebe
- (void)setIsAnyMenuOpen:(_Bool)arg1;	// IMP=0x000000000057be72
- (void)setIsActionMenuOpen:(_Bool)arg1;	// IMP=0x000000000057be4f
- (void)setIsAtPlaybackEnd:(_Bool)arg1;	// IMP=0x000000000057bdd7
- (void)_autoHideChrome;	// IMP=0x000000000057bd99
- (void)setShouldAutoHideChrome:(_Bool)arg1;	// IMP=0x000000000057bc5e
- (void)setOutroFractionCompleted:(double)arg1;	// IMP=0x000000000057bbe4
- (void)setPlaybackFractionCompleted:(double)arg1;	// IMP=0x000000000057bb6f
- (void)setDesiredPlayState:(long long)arg1;	// IMP=0x000000000057baff
- (void)setIsActive:(_Bool)arg1;	// IMP=0x000000000057ba56
- (void)setSwipeDownDismissalPreviewFraction:(double)arg1;	// IMP=0x000000000057ba1f
- (void)setSwipeDownDismissalPreviewEnabled:(_Bool)arg1;	// IMP=0x000000000057b9f2
- (void)setSwipeDownTriggeringDismissal:(_Bool)arg1;	// IMP=0x000000000057b9c5
- (void)setSwipeDownInteractionState:(CDStruct_14916c44)arg1;	// IMP=0x000000000057b8c3
- (void)setViewMode:(long long)arg1;	// IMP=0x000000000057b79b
@property(readonly, nonatomic) unsigned long long endBehavior;
@property(readonly, nonatomic) _Bool allowsRelated;
- (void)didPerformChanges;	// IMP=0x000000000057b627
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000057b5a2
- (void)dealloc;	// IMP=0x000000000057b564
- (id)initWithConfiguration:(id)arg1 extendedTraitCollection:(id)arg2 timeSource:(id)arg3 mediaProvider:(id)arg4;	// IMP=0x000000000057ac67
- (id)init;	// IMP=0x000000000057abed
- (void)addVisualDiagnosticsToContext:(id)arg1;	// IMP=0x0000000000019854
- (id)memoryDebugInfo;	// IMP=0x000000000001963d
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x0000000000019392
@property(readonly, nonatomic) NSString *diagnosticDescriptionForAllHUDTypes;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;	// IMP=0x000000000001923b
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;	// IMP=0x0000000000018b4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

