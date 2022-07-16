//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXStoryMutableRecipeManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSDate, NSDictionary, NSObject, NSProgress, NSSet, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXStoryAutoEditMomentsProvider, PXStoryConfiguration, PXStoryProducerResult, PXStoryRecipe, PXStoryRecipeAssetEdits, PXUpdater;
@protocol OS_dispatch_queue, PXAudioAssetFetchResult, PXDisplayAsset, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryAssetsProducer, PXStoryAssetsProducerFactory, PXStoryAutoCurationProducer, PXStoryAutoCurationProducerFactory, PXStoryAutoEditDecisionListsProducer, PXStoryAutoEditDecisionListsProducerFactory, PXStoryErrorReporter, PXStoryMovieHighlightsProducer, PXStoryMovieHighlightsProducerFactory, PXStoryPersistableRecipeProducer, PXStoryPersistableRecipeProducerFactory, PXStorySongResource, PXStorySongResourceProducer, PXStorySongResourceProducerFactory, PXStorySongsProducer, PXStorySongsProducerFactory, PXStoryStylesProducer, PXStoryStylesProducerFactory;

@interface PXStoryRecipeManager <PXStoryMutableRecipeManager, PXAssetsDataSourceManagerObserver, PXStoryDiagnosticHUDContentProvider, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>
{
    _Bool _isRecipeFinal;	// 8 = 0x8
    _Bool _isAssetCollectionFinal;	// 9 = 0x9
    _Bool _hasInitialPersistableRecipeBeenProduced;	// 10 = 0xa
    _Bool _haveFinalMovieHighlightsBeenProduced;	// 11 = 0xb
    _Bool _hasInitialStyleBeenProduced;	// 12 = 0xc
    _Bool _requiresAutoEditStylesSynchronously;	// 13 = 0xd
    NSObject<OS_dispatch_queue> *_storyQueue;	// 16 = 0x10
    PXStoryConfiguration *_configuration;	// 24 = 0x18
    PXStoryRecipe *_recipe;	// 32 = 0x20
    unsigned long long _recipeAttributes;	// 40 = 0x28
    PXAssetsDataSourceManager *_assetsDataSourceManager;	// 48 = 0x30
    unsigned long long _availableCurationLengths;	// 56 = 0x38
    PXStoryRecipeAssetEdits *_recipeAssetEdits;	// 64 = 0x40
    id <PXDisplayAssetFetchResult> _manuallyCuratedAssets;	// 72 = 0x48
    PXUpdater *_updater;	// 80 = 0x50
    id <PXStoryErrorReporter> _errorReporter;	// 88 = 0x58
    id <PXDisplayAssetCollection> _assetCollection;	// 96 = 0x60
    unsigned long long _finalizedProducers;	// 104 = 0x68
    unsigned long long _remainingProducers;	// 112 = 0x70
    id <PXStoryAssetsProducer> _assetsProducer;	// 120 = 0x78
    NSProgress *_assetsProgress;	// 128 = 0x80
    PXStoryProducerResult *_assetsResult;	// 136 = 0x88
    PXAssetsDataSource *_assetsDataSource;	// 144 = 0x90
    id <PXStoryPersistableRecipeProducer> _persistableRecipeProducer;	// 152 = 0x98
    NSProgress *_persistableRecipeProgress;	// 160 = 0xa0
    PXStoryProducerResult *_persistableRecipeResult;	// 168 = 0xa8
    id <PXStorySongsProducer> _curatedSongsProducer;	// 176 = 0xb0
    NSProgress *_curatedSongsProgress;	// 184 = 0xb8
    PXStoryProducerResult *_curatedSongsResult;	// 192 = 0xc0
    id <PXStorySongResourceProducer> _persistedSongProducer;	// 200 = 0xc8
    NSProgress *_persistedSongProgress;	// 208 = 0xd0
    PXStoryProducerResult *_persistedSongResult;	// 216 = 0xd8
    id <PXStorySongResource> _initialSongResource;	// 224 = 0xe0
    id <PXStoryMovieHighlightsProducer> _movieHighlightsProducer;	// 232 = 0xe8
    NSProgress *_movieHighlightsProgress;	// 240 = 0xf0
    PXStoryProducerResult *_movieHighlightsResult;	// 248 = 0xf8
    id <PXStoryAutoCurationProducer> _autoCurationProducer;	// 256 = 0x100
    NSProgress *_curationLengthsProgress;	// 264 = 0x108
    NSProgress *_assetsAutoCurationProgress;	// 272 = 0x110
    PXStoryProducerResult *_curationLengthsResult;	// 280 = 0x118
    unsigned long long _defaultCurationLength;	// 288 = 0x120
    id <PXDisplayAssetFetchResult> _curatedAssets;	// 296 = 0x128
    id <PXDisplayAssetFetchResult> _allAssets;	// 304 = 0x130
    id <PXDisplayAsset> _keyAsset;	// 312 = 0x138
    id <PXStoryStylesProducer> _initialStyleProducer;	// 320 = 0x140
    NSProgress *_initialStyleProgress;	// 328 = 0x148
    PXStoryProducerResult *_initialStyleResult;	// 336 = 0x150
    id <PXStoryStylesProducer> _autoEditStylesProducer;	// 344 = 0x158
    NSProgress *_autoEditStylesProgress;	// 352 = 0x160
    PXStoryProducerResult *_autoEditStylesResult;	// 360 = 0x168
    id <PXStoryAutoEditDecisionListsProducer> _autoEditDecisionListsProducer;	// 368 = 0x170
    NSProgress *_autoEditDecisionListsProgress;	// 376 = 0x178
    PXStoryProducerResult *_autoEditDecisionListsResult;	// 384 = 0x180
    NSProgress *_initialAutoEditDecisionListProgress;	// 392 = 0x188
    PXStoryProducerResult *_initialAutoEditDecisionListResult;	// 400 = 0x190
    NSDate *_loadingStartDate;	// 408 = 0x198
    NSDate *_loadingReadyForPlaybackDate;	// 416 = 0x1a0
    NSDate *_loadingFinalDate;	// 424 = 0x1a8
    PXStoryRecipeAssetEdits *_persistedRecipeAssetEdits;	// 432 = 0x1b0
    NSSet *_additionalSongs;	// 440 = 0x1b8
    NSDictionary *_additionalAutoEditDecisionListsBySong;	// 448 = 0x1c0
    id <PXStoryAssetsProducerFactory> _assetsProducerFactory;	// 456 = 0x1c8
    id <PXStoryPersistableRecipeProducerFactory> _persistableRecipeProducerFactory;	// 464 = 0x1d0
    id <PXStorySongsProducerFactory> _songsProducerFactory;	// 472 = 0x1d8
    id <PXStoryMovieHighlightsProducerFactory> _movieHighlightsProducerFactory;	// 480 = 0x1e0
    id <PXStoryStylesProducerFactory> _stylesProducerFactory;	// 488 = 0x1e8
    id <PXStoryAutoEditDecisionListsProducerFactory> _autoEditDecisionListsProducerFactory;	// 496 = 0x1f0
    id <PXStoryAutoCurationProducerFactory> _autoCurationProducerFactory;	// 504 = 0x1f8
    id <PXStorySongResourceProducerFactory> _songResourceProducerFactory;	// 512 = 0x200
    CDStruct_5d4c7ed3 _overallDurationInfo;	// 520 = 0x208
}

- (void).cxx_destruct;	// IMP=0x00000000004ef25e
@property(readonly, nonatomic) id <PXStorySongResourceProducerFactory> songResourceProducerFactory; // @synthesize songResourceProducerFactory=_songResourceProducerFactory;
@property(readonly, nonatomic) id <PXStoryAutoCurationProducerFactory> autoCurationProducerFactory; // @synthesize autoCurationProducerFactory=_autoCurationProducerFactory;
@property(readonly, nonatomic) id <PXStoryAutoEditDecisionListsProducerFactory> autoEditDecisionListsProducerFactory; // @synthesize autoEditDecisionListsProducerFactory=_autoEditDecisionListsProducerFactory;
@property(readonly, nonatomic) id <PXStoryStylesProducerFactory> stylesProducerFactory; // @synthesize stylesProducerFactory=_stylesProducerFactory;
@property(readonly, nonatomic) id <PXStoryMovieHighlightsProducerFactory> movieHighlightsProducerFactory; // @synthesize movieHighlightsProducerFactory=_movieHighlightsProducerFactory;
@property(readonly, nonatomic) id <PXStorySongsProducerFactory> songsProducerFactory; // @synthesize songsProducerFactory=_songsProducerFactory;
@property(readonly, nonatomic) id <PXStoryPersistableRecipeProducerFactory> persistableRecipeProducerFactory; // @synthesize persistableRecipeProducerFactory=_persistableRecipeProducerFactory;
@property(readonly, nonatomic) id <PXStoryAssetsProducerFactory> assetsProducerFactory; // @synthesize assetsProducerFactory=_assetsProducerFactory;
@property(copy, nonatomic) NSDictionary *additionalAutoEditDecisionListsBySong; // @synthesize additionalAutoEditDecisionListsBySong=_additionalAutoEditDecisionListsBySong;
@property(copy, nonatomic) NSSet *additionalSongs; // @synthesize additionalSongs=_additionalSongs;
@property(retain, nonatomic) PXStoryRecipeAssetEdits *persistedRecipeAssetEdits; // @synthesize persistedRecipeAssetEdits=_persistedRecipeAssetEdits;
@property(retain, nonatomic) NSDate *loadingFinalDate; // @synthesize loadingFinalDate=_loadingFinalDate;
@property(retain, nonatomic) NSDate *loadingReadyForPlaybackDate; // @synthesize loadingReadyForPlaybackDate=_loadingReadyForPlaybackDate;
@property(retain, nonatomic) NSDate *loadingStartDate; // @synthesize loadingStartDate=_loadingStartDate;
@property(retain, nonatomic) PXStoryProducerResult *initialAutoEditDecisionListResult; // @synthesize initialAutoEditDecisionListResult=_initialAutoEditDecisionListResult;
@property(retain, nonatomic) NSProgress *initialAutoEditDecisionListProgress; // @synthesize initialAutoEditDecisionListProgress=_initialAutoEditDecisionListProgress;
@property(retain, nonatomic) PXStoryProducerResult *autoEditDecisionListsResult; // @synthesize autoEditDecisionListsResult=_autoEditDecisionListsResult;
@property(retain, nonatomic) NSProgress *autoEditDecisionListsProgress; // @synthesize autoEditDecisionListsProgress=_autoEditDecisionListsProgress;
@property(retain, nonatomic) id <PXStoryAutoEditDecisionListsProducer> autoEditDecisionListsProducer; // @synthesize autoEditDecisionListsProducer=_autoEditDecisionListsProducer;
@property(retain, nonatomic) PXStoryProducerResult *autoEditStylesResult; // @synthesize autoEditStylesResult=_autoEditStylesResult;
@property(retain, nonatomic) NSProgress *autoEditStylesProgress; // @synthesize autoEditStylesProgress=_autoEditStylesProgress;
@property(readonly, nonatomic) _Bool requiresAutoEditStylesSynchronously; // @synthesize requiresAutoEditStylesSynchronously=_requiresAutoEditStylesSynchronously;
@property(retain, nonatomic) id <PXStoryStylesProducer> autoEditStylesProducer; // @synthesize autoEditStylesProducer=_autoEditStylesProducer;
@property(nonatomic) _Bool hasInitialStyleBeenProduced; // @synthesize hasInitialStyleBeenProduced=_hasInitialStyleBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *initialStyleResult; // @synthesize initialStyleResult=_initialStyleResult;
@property(retain, nonatomic) NSProgress *initialStyleProgress; // @synthesize initialStyleProgress=_initialStyleProgress;
@property(retain, nonatomic) id <PXStoryStylesProducer> initialStyleProducer; // @synthesize initialStyleProducer=_initialStyleProducer;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> allAssets; // @synthesize allAssets=_allAssets;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> curatedAssets; // @synthesize curatedAssets=_curatedAssets;
@property(nonatomic) unsigned long long defaultCurationLength; // @synthesize defaultCurationLength=_defaultCurationLength;
@property(nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(retain, nonatomic) PXStoryProducerResult *curationLengthsResult; // @synthesize curationLengthsResult=_curationLengthsResult;
@property(retain, nonatomic) NSProgress *assetsAutoCurationProgress; // @synthesize assetsAutoCurationProgress=_assetsAutoCurationProgress;
@property(retain, nonatomic) NSProgress *curationLengthsProgress; // @synthesize curationLengthsProgress=_curationLengthsProgress;
@property(retain, nonatomic) id <PXStoryAutoCurationProducer> autoCurationProducer; // @synthesize autoCurationProducer=_autoCurationProducer;
@property(nonatomic) _Bool haveFinalMovieHighlightsBeenProduced; // @synthesize haveFinalMovieHighlightsBeenProduced=_haveFinalMovieHighlightsBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *movieHighlightsResult; // @synthesize movieHighlightsResult=_movieHighlightsResult;
@property(retain, nonatomic) NSProgress *movieHighlightsProgress; // @synthesize movieHighlightsProgress=_movieHighlightsProgress;
@property(retain, nonatomic) id <PXStoryMovieHighlightsProducer> movieHighlightsProducer; // @synthesize movieHighlightsProducer=_movieHighlightsProducer;
@property(retain, nonatomic) id <PXStorySongResource> initialSongResource; // @synthesize initialSongResource=_initialSongResource;
@property(retain, nonatomic) PXStoryProducerResult *persistedSongResult; // @synthesize persistedSongResult=_persistedSongResult;
@property(retain, nonatomic) NSProgress *persistedSongProgress; // @synthesize persistedSongProgress=_persistedSongProgress;
@property(retain, nonatomic) id <PXStorySongResourceProducer> persistedSongProducer; // @synthesize persistedSongProducer=_persistedSongProducer;
@property(retain, nonatomic) PXStoryProducerResult *curatedSongsResult; // @synthesize curatedSongsResult=_curatedSongsResult;
@property(retain, nonatomic) NSProgress *curatedSongsProgress; // @synthesize curatedSongsProgress=_curatedSongsProgress;
@property(retain, nonatomic) id <PXStorySongsProducer> curatedSongsProducer; // @synthesize curatedSongsProducer=_curatedSongsProducer;
@property(nonatomic) _Bool hasInitialPersistableRecipeBeenProduced; // @synthesize hasInitialPersistableRecipeBeenProduced=_hasInitialPersistableRecipeBeenProduced;
@property(retain, nonatomic) PXStoryProducerResult *persistableRecipeResult; // @synthesize persistableRecipeResult=_persistableRecipeResult;
@property(retain, nonatomic) NSProgress *persistableRecipeProgress; // @synthesize persistableRecipeProgress=_persistableRecipeProgress;
@property(retain, nonatomic) id <PXStoryPersistableRecipeProducer> persistableRecipeProducer; // @synthesize persistableRecipeProducer=_persistableRecipeProducer;
@property(retain, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(retain, nonatomic) PXStoryProducerResult *assetsResult; // @synthesize assetsResult=_assetsResult;
@property(retain, nonatomic) NSProgress *assetsProgress; // @synthesize assetsProgress=_assetsProgress;
@property(retain, nonatomic) id <PXStoryAssetsProducer> assetsProducer; // @synthesize assetsProducer=_assetsProducer;
@property(nonatomic) unsigned long long remainingProducers; // @synthesize remainingProducers=_remainingProducers;
@property(nonatomic) unsigned long long finalizedProducers; // @synthesize finalizedProducers=_finalizedProducers;
@property(nonatomic) _Bool isAssetCollectionFinal; // @synthesize isAssetCollectionFinal=_isAssetCollectionFinal;
@property(retain, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXStoryErrorReporter> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> manuallyCuratedAssets; // @synthesize manuallyCuratedAssets=_manuallyCuratedAssets;
@property(retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits; // @synthesize recipeAssetEdits=_recipeAssetEdits;
@property(nonatomic) unsigned long long availableCurationLengths; // @synthesize availableCurationLengths=_availableCurationLengths;
@property(retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(readonly, nonatomic) _Bool isRecipeFinal; // @synthesize isRecipeFinal=_isRecipeFinal;
@property(readonly, nonatomic) unsigned long long recipeAttributes; // @synthesize recipeAttributes=_recipeAttributes;
@property(readonly, nonatomic) PXStoryRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, copy, nonatomic) PXStoryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)_storyQueue_handleChangedAssetsDataSource:(id)arg1;	// IMP=0x00000000004eec6d
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000004eeaa2
- (id)_collectAutoEditDecisionListsBySong;	// IMP=0x00000000004ee6d9
@property(readonly, nonatomic) NSDictionary *resultsByComponent;
- (void)_updateRecipeAttributes;	// IMP=0x00000000004ee2ff
- (void)_invalidateRecipeAttributes;	// IMP=0x00000000004ee2bb
- (void)_updateRecipe;	// IMP=0x00000000004edf7a
- (void)_invalidateRecipe;	// IMP=0x00000000004edf36
- (void)_handleAutoEditDecisionListsResult:(id)arg1;	// IMP=0x00000000004edea4
- (void)_updateAutoEditDecisionLists;	// IMP=0x00000000004ed88e
- (void)_invalidateAutoEditDecisionLists;	// IMP=0x00000000004ed84a
- (void)_handleInitialAutoEditDecisionListResult:(id)arg1;	// IMP=0x00000000004ed7b8
- (void)_updateInitialAutoEditDecisionList;	// IMP=0x00000000004ed170
- (void)_invalidateInitialAutoEditDecisionList;	// IMP=0x00000000004ed12c
- (void)_updateAutoEditDecisionListsProducer;	// IMP=0x00000000004ecf32
- (void)_invalidateAutoEditDecisionListsProducer;	// IMP=0x00000000004eceee
- (void)_handleAutoEditStylesResult:(id)arg1;	// IMP=0x00000000004ece5c
- (void)_updateAutoEditStyles;	// IMP=0x00000000004eca60
- (void)_invalidateAutoEditStyles;	// IMP=0x00000000004eca1c
- (void)_updateAutoEditStylesProducer;	// IMP=0x00000000004ec912
- (void)_invalidateAutoEditStylesProducer;	// IMP=0x00000000004ec8ce
- (void)_handleInitialStyleResult:(id)arg1;	// IMP=0x00000000004ec83c
- (void)_updateInitialStyle;	// IMP=0x00000000004ec490
- (void)_invalidateInitialStyle;	// IMP=0x00000000004ec44c
- (void)_updateInitialStyleProducer;	// IMP=0x00000000004ec1b5
- (void)_invalidateInitialStyleProducer;	// IMP=0x00000000004ec171
- (void)_updateManuallyCuratedAssets;	// IMP=0x00000000004ec0a8
- (void)_invalidateManuallyCuratedAssets;	// IMP=0x00000000004ec064
- (void)_updateKeyAsset;	// IMP=0x00000000004ebff5
- (void)_invalidateKeyAsset;	// IMP=0x00000000004ebfb1
- (void)_updateCuratedAssets;	// IMP=0x00000000004ebec8
- (void)_invalidateCuratedAssets;	// IMP=0x00000000004ebe84
- (void)_updateAllAssets;	// IMP=0x00000000004ebdb3
- (void)_invalidateAllAssets;	// IMP=0x00000000004ebd6f
- (void)_updateOverallDurationInfo;	// IMP=0x00000000004ebaf9
- (void)_invalidateOverallDurationInfo;	// IMP=0x00000000004ebab5
- (void)_handleMovieHighlightsResult:(id)arg1;	// IMP=0x00000000004eba02
- (void)_updateMovieHighlights;	// IMP=0x00000000004eb5dd
- (void)_invalidateMovieHighlights;	// IMP=0x00000000004eb599
- (void)_updateMovieHighlightsProducer;	// IMP=0x00000000004eb4ea
- (void)_invalidateMovieHighlightsProducer;	// IMP=0x00000000004eb4a6
- (void)_handleCurationLengthsResult:(id)arg1;	// IMP=0x00000000004eb414
- (void)_updateCurationLengths;	// IMP=0x00000000004eaff5
- (void)_invalidateCurationLengths;	// IMP=0x00000000004eafb1
- (void)_updateAutoCurationProducer;	// IMP=0x00000000004eaecf
- (void)_invalidateAutoCurationProducer;	// IMP=0x00000000004eae8b
- (void)_handleSongsResult:(id)arg1;	// IMP=0x00000000004eadf9
- (void)_updateCuratedSongs;	// IMP=0x00000000004ea962
- (void)_invalidateCuratedSongs;	// IMP=0x00000000004ea91e
- (void)_updateCuratedSongsProducer;	// IMP=0x00000000004ea83c
- (void)_invalidateCuratedSongsProducer;	// IMP=0x00000000004ea7f8
- (void)_updateInitialSongResource;	// IMP=0x00000000004ea696
- (void)_invalidateInitialSongResource;	// IMP=0x00000000004ea652
- (void)_handlePersistedSongResourceResult:(id)arg1;	// IMP=0x00000000004ea5c0
- (void)_updatePersistedSong;	// IMP=0x00000000004ea214
- (void)_invalidatePersistedSong;	// IMP=0x00000000004ea1d0
- (void)_updatePersistedSongProducer;	// IMP=0x00000000004ea084
- (void)_invalidatePersistedSongProducer;	// IMP=0x00000000004ea040
- (void)_handlePersistableRecipeResult:(id)arg1;	// IMP=0x00000000004e9fae
- (void)_updatePersistableRecipe;	// IMP=0x00000000004e9c02
- (void)_invalidatePersistableRecipe;	// IMP=0x00000000004e9bbe
- (void)_updatePersistableRecipeProducer;	// IMP=0x00000000004e9adc
- (void)_invalidatePersistableRecipeProducer;	// IMP=0x00000000004e9a98
- (void)_handleAssetsResult:(id)arg1;	// IMP=0x00000000004e9a06
- (void)_updateAssets;	// IMP=0x00000000004e962c
- (void)_invalidateAssets;	// IMP=0x00000000004e95e8
- (void)_updateAssetsProducer;	// IMP=0x00000000004e954f
- (void)_invalidateAssetsProducer;	// IMP=0x00000000004e950b
- (void)_updateAssetCollection;	// IMP=0x00000000004e949c
- (void)_invalidateAssetCollection;	// IMP=0x00000000004e9458
- (void)_setNeedsUpdate;	// IMP=0x00000000004e9444
@property(readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;	// IMP=0x00000000004e904c
- (id)_shortDescriptionOfPersistableRecipe:(id)arg1;	// IMP=0x00000000004e8dbd
- (id)_diagnosticTextForGenericHUDAtDisplaySize:(struct CGSize)arg1;	// IMP=0x00000000004e87c1
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;	// IMP=0x00000000004e872c
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x00000000004e7fa1
- (void)_handleAdditionalAutoEditDecisionListsResult:(id)arg1;	// IMP=0x00000000004e7c13
- (void)_updateAdditionalAutoEditDecisionLists;	// IMP=0x00000000004e7856
- (void)_invalidateAdditionalAutoEditDecisionLists;	// IMP=0x00000000004e7812
- (void)ensureAutoEditDecisionListForSong:(id)arg1;	// IMP=0x00000000004e7428
- (void)didPersistRecipeAssetEdits:(id)arg1;	// IMP=0x00000000004e7416
- (void)applyKeyAsset:(id)arg1;	// IMP=0x00000000004e738a
- (void)applyManuallyRemovedAsset:(id)arg1;	// IMP=0x00000000004e728a
- (void)applyManuallyCuratedAssets:(id)arg1;	// IMP=0x00000000004e70b6
- (void)_handleCuratedAssetsResult:(id)arg1 targetOverallDurationInfo:(CDStruct_5d4c7ed3)arg2;	// IMP=0x00000000004e6f36
- (void)applyTargetOverallDurationInfo:(CDStruct_5d4c7ed3)arg1;	// IMP=0x00000000004e6854
- (void)_handleResult:(id)arg1 forComponent:(id)arg2;	// IMP=0x00000000004e628c
- (void)setRecipeAttributes:(unsigned long long)arg1;	// IMP=0x00000000004e5eb3
- (void)setIsRecipeFinal:(_Bool)arg1;	// IMP=0x00000000004e5c87
- (void)setRecipe:(id)arg1;	// IMP=0x00000000004e597a
@property(readonly, nonatomic) _Bool requiresAutoEditDecisionListsSynchronously;
@property(readonly, nonatomic) _Bool requiresInitialStyleSynchronously;
@property(readonly, nonatomic) _Bool requiresMovieHighlightsSynchronously;
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> curatedSongs;
@property(readonly, nonatomic) _Bool requiresSongsSynchronously;
@property(readonly, nonatomic) _Bool requiresPersistableRecipeSynchronously;
@property(readonly, nonatomic) _Bool requiresAssetsSynchronously;
@property(readonly, nonatomic) _Bool wantsAutoEditResults;
@property(readonly, nonatomic) unsigned long long producersRequiredForPlayback;
@property(readonly, nonatomic) _Bool shouldAvoidSynchronousProductions;
@property(readonly, nonatomic) _Bool wantsSingleDelivery;
- (void)setConfiguration:(id)arg1;	// IMP=0x00000000004e342c
- (void)didPerformChanges;	// IMP=0x00000000004e33c2
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e333d
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000004e31c9
- (id)initWithConfiguration:(id)arg1 assetsProducerFactory:(id)arg2 persistableRecipeProducerFactory:(id)arg3 songsProducerFactory:(id)arg4 movieHighlightsProducerFactory:(id)arg5 stylesProducerFactory:(id)arg6 autoEditDecisionListsProducerFactory:(id)arg7 autoCurationProducerFactory:(id)arg8;	// IMP=0x00000000004e2b03
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000004e2ad4
- (id)init;	// IMP=0x00000000004e2a5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

