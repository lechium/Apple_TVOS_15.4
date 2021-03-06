//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPAnalytics, NSArray, NSMutableArray, NSProgress, NSString, NSURL, PGCurationManager, PGGraph, PGMemoryController, PGMusicBag, PGMusicCache, PGMutableGraph, PHPhotoLibrary;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGManager : NSObject
{
    PGGraph *_graph;	// 8 = 0x8
    NSURL *_cachedGraphPersistenceParentDirectoryURL;	// 16 = 0x10
    _Atomic unsigned long long _fullGraphRebuildStamp;	// 24 = 0x18
    PGMusicCache *_musicCache;	// 32 = 0x20
    PGMutableGraph *_mutableGraph;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_graphAccessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_applicationDataQueue;	// 56 = 0x38
    _Atomic unsigned long long _numberOfCurrentGraphAccesses;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_graphUpdateQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 80 = 0x50
    NSString *_graphName;	// 88 = 0x58
    NSMutableArray *_coalescingGraphIsReady;	// 96 = 0x60
    _Bool _shouldPostGraphAvailableNotification;	// 104 = 0x68
    _Bool _photoLibraryIsReadonly;	// 105 = 0x69
    PHPhotoLibrary *_photoLibrary;	// 112 = 0x70
    unsigned long long _libraryAnalysisState;	// 120 = 0x78
    PGMemoryController *_memoryController;	// 128 = 0x80
    PGCurationManager *_curationManager;	// 136 = 0x88
    NSURL *_metadataSnapshotOutputPathURL;	// 144 = 0x90
    NSObject<OS_os_log> *_loggingConnection;	// 152 = 0x98
    NSObject<OS_os_log> *_memoriesLoggingConnection;	// 160 = 0xa0
    NSObject<OS_os_log> *_relatedLoggingConnection;	// 168 = 0xa8
    NSObject<OS_os_log> *_ingestLoggingConnection;	// 176 = 0xb0
    NSObject<OS_os_log> *_graphLoggingConnection;	// 184 = 0xb8
    NSObject<OS_os_log> *_enrichmentLoggingConnection;	// 192 = 0xc0
    NSObject<OS_os_log> *_guessWhoLoggingConnection;	// 200 = 0xc8
    NSObject<OS_os_log> *_suggestionsLoggingConnection;	// 208 = 0xd0
    NSObject<OS_os_log> *_metricsLoggingConnection;	// 216 = 0xd8
    NSObject<OS_os_log> *_upNextLoggingConnection;	// 224 = 0xe0
    NSProgress *_rebuildProgress;	// 232 = 0xe8
    CPAnalytics *_analytics;	// 240 = 0xf0
    PGMusicBag *_musicBag;	// 248 = 0xf8
}

+ (_Bool)clientIsPhotoAnalysis;	// IMP=0x0000000000310664
+ (_Bool)photosChallengeIsEnabled;	// IMP=0x000000000031065c
+ (id)stringFromPGDuration:(unsigned long long)arg1;	// IMP=0x000000000031052c
+ (id)stringFromPGPrecision:(unsigned long long)arg1;	// IMP=0x00000000003104cd
+ (Class)graphClass;	// IMP=0x00000000003104bc
+ (_Bool)geoServiceProviderDidChangeForGraph:(id)arg1;	// IMP=0x000000000031041c
+ (void)initialize;	// IMP=0x000000000031033c
+ (unsigned long long)numberOfExistingMemoriesToKeepForOverlapCheckWithBeta:(double)arg1;	// IMP=0x0000000000183893
+ (double)durationForExistingMemoriesOverlapCheckWithBeta:(double)arg1;	// IMP=0x0000000000183861
+ (id)meaningsForSurvey;	// IMP=0x00000000002529fd
+ (_Bool)categoryIsUsableWithConditionalKeywordsForMemory:(id)arg1;	// IMP=0x00000000003dc1f2
+ (id)m5IncompatibleMeaningLabels;	// IMP=0x00000000003dc1c2
+ (id)m5IncompatibleMoods;	// IMP=0x00000000003dc192
+ (id)placeKeywords;	// IMP=0x00000000003dc162
+ (id)m5TimeConditionalKeywords;	// IMP=0x00000000003dc132
+ (id)m5IncompatibleKeywords;	// IMP=0x00000000003dc102
+ (id)allRecomputedTripMomentsInGraph:(id)arg1;	// IMP=0x00000000003f2970
+ (id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPersonLocalIdentifiers:(id)arg4 inPhotoLibrary:(id)arg5;	// IMP=0x000000000046deeb
+ (id)exportableDictionaryFromKeywords:(id)arg1;	// IMP=0x000000000046de30
- (void).cxx_destruct;	// IMP=0x000000000030e66e
@property(retain, nonatomic) PGMusicBag *musicBag; // @synthesize musicBag=_musicBag;
@property(retain, nonatomic) NSProgress *rebuildProgress; // @synthesize rebuildProgress=_rebuildProgress;
@property(readonly, nonatomic) NSObject<OS_os_log> *upNextLoggingConnection; // @synthesize upNextLoggingConnection=_upNextLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *metricsLoggingConnection; // @synthesize metricsLoggingConnection=_metricsLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *suggestionsLoggingConnection; // @synthesize suggestionsLoggingConnection=_suggestionsLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *guessWhoLoggingConnection; // @synthesize guessWhoLoggingConnection=_guessWhoLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *enrichmentLoggingConnection; // @synthesize enrichmentLoggingConnection=_enrichmentLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection; // @synthesize graphLoggingConnection=_graphLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection; // @synthesize ingestLoggingConnection=_ingestLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection; // @synthesize relatedLoggingConnection=_relatedLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *memoriesLoggingConnection; // @synthesize memoriesLoggingConnection=_memoriesLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly) _Bool photoLibraryIsReadonly; // @synthesize photoLibraryIsReadonly=_photoLibraryIsReadonly;
@property(retain, nonatomic) NSURL *metadataSnapshotOutputPathURL; // @synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL;
@property(readonly, nonatomic) PGCurationManager *curationManager; // @synthesize curationManager=_curationManager;
@property(readonly) PGMemoryController *memoryController; // @synthesize memoryController=_memoryController;
@property unsigned long long libraryAnalysisState; // @synthesize libraryAnalysisState=_libraryAnalysisState;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *graphUpdateQueue; // @synthesize graphUpdateQueue=_graphUpdateQueue;
@property(readonly, copy) NSString *graphName; // @synthesize graphName=_graphName;
- (id)workingContextForUpNext;	// IMP=0x000000000030e4e4
- (id)workingContextForSuggestions;	// IMP=0x000000000030e4a7
- (id)workingContextForEnrichment;	// IMP=0x000000000030e46a
- (id)workingContextForRelated;	// IMP=0x000000000030e42d
- (id)workingContextForMemories;	// IMP=0x000000000030e3f0
- (id)workingContext;	// IMP=0x000000000030e3b3
- (long long)validatePHObject:(id)arg1 featureAggregationValidator:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id *)arg4;	// IMP=0x000000000030e181
- (long long)validatePHObject:(id)arg1 graphRelationsFeatureValidator:(id)arg2 error:(id *)arg3;	// IMP=0x000000000030df7f
- (id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withTransformers:(id)arg3 error:(id *)arg4;	// IMP=0x000000000030dd42
- (id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withTransformers:(id)arg3 error:(id *)arg4;	// IMP=0x000000000030db05
- (_Bool)canProceedWithFullGraphRebuildStamp:(_Atomic unsigned long long)arg1;	// IMP=0x000000000030daf5
- (_Atomic unsigned long long)currentFullGraphRebuildStamp;	// IMP=0x000000000030daeb
- (void)stampFullGraphRebuild;	// IMP=0x000000000030dae0
- (_Bool)copyGraphToURL:(id)arg1;	// IMP=0x000000000030d9fb
- (_Bool)saveGraphToURL:(id)arg1;	// IMP=0x000000000030d916
- (void)matchWithVisualFormat:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000030d859
- (void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000030d779
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d6e7
- (void)_waitLibraryUpdateUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d5f7
- (void)_waitGraphUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d569
- (_Bool)requiresReadOnly;	// IMP=0x000000000030d561
- (_Bool)isBusy;	// IMP=0x000000000030d534
- (_Bool)isReady;	// IMP=0x000000000030d526
- (void)invalidatePersistentCaches;	// IMP=0x000000000030d50d
- (void)invalidateTransientCaches;	// IMP=0x000000000030d4f4
- (void)_invalidatePersistentCaches;	// IMP=0x000000000030d450
- (void)_invalidatePersistentCachesForGeoServiceProviderChange;	// IMP=0x000000000030d3f8
- (void)_invalidateTransientCaches;	// IMP=0x000000000030d3a0
- (void)performApplicationDataBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d319
- (void)performAsynchronousNotification:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d291
- (_Bool)hasPendingGraphAccess;	// IMP=0x000000000030d281
- (void)legacyPerformAsynchronousBarrierGraphWriteUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d1f1
- (void)performAsynchronousGraphBarrierUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d161
- (void)performSynchronousConcurrentGraphReadUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d0a3
- (void)performAsynchronousGraphWriteUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030d013
- (id)instantiateMutableGraphWithProgressReporter:(id)arg1;	// IMP=0x000000000030cef0
- (void)setMutableGraph:(id)arg1;	// IMP=0x000000000030cdef
- (void)setGraph:(id)arg1;	// IMP=0x000000000030ccfa
@property(readonly, nonatomic) CPAnalytics *analytics; // @synthesize analytics=_analytics;
- (id)processSubdirectoryName;	// IMP=0x000000000030cbbf
- (id)graphPersistenceParentDirectoryCandidateURLs;	// IMP=0x000000000030c94d
@property(retain, nonatomic) NSURL *graphPersistenceParentDirectoryURL;
- (void)notifyCoalescingBlocksGraphAnalysisFinished:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000030c315
- (void)registerCoalescingBlockWhenGraphAnalysisFinishes:(CDUnknownBlockType)arg1;	// IMP=0x000000000030c243
- (void)commonInitWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030be35
- (unsigned long long)currentGraphVersion;	// IMP=0x000000000030be1f
- (void)unloadGraph;	// IMP=0x000000000030bdd4
- (void)_unloadGraph;	// IMP=0x000000000030bd66
- (void)loadGraphWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000030b4e9
- (_Bool)copyGraphPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000030b412
- (_Bool)graphIsUsable:(id)arg1;	// IMP=0x000000000030af8e
- (void)dealloc;	// IMP=0x000000000030adb6
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000030ad0a
- (id)initWithImmutableGraph:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000030ac5e
- (id)initWithImmutableGraph:(id)arg1;	// IMP=0x000000000030abda
- (id)initWithGraph:(id)arg1;	// IMP=0x000000000030ab56
- (id)initForTesting;	// IMP=0x000000000030ab03
- (id)init;	// IMP=0x000000000030aad8
- (id)initWithGraph:(id)arg1 readonlyPhotoLibrary:(id)arg2;	// IMP=0x000000000030aabc
- (id)initWithReadonlyPhotoLibrary:(id)arg1;	// IMP=0x000000000030aa99
- (id)initWithPhotoLibrary:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000030a9f9
- (id)initWithPhotoLibrary:(id)arg1 analytics:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000030a988
- (id)textFeaturesForMomentLocalIdentifiers:(id)arg1;	// IMP=0x000000000015a848
- (id)featureVectorsForMoment:(id)arg1;	// IMP=0x000000000015a72d
- (id)featureVectorsForAsset:(id)arg1;	// IMP=0x000000000015a619
- (id)peopleSuggestionLearningStatistics;	// IMP=0x000000000015a34b
- (void)peopleSuggestionLearning;	// IMP=0x000000000015a2ff
- (id)suggestedContributionsForAssetsMetadata:(id)arg1;	// IMP=0x0000000000159fca
- (id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 sharingOptions:(id)arg3;	// IMP=0x0000000000159c82
- (id)_fallbackCurationOfLength:(unsigned long long)arg1 forMemory:(id)arg2 customDuration:(double)arg3 curationContext:(id)arg4;	// IMP=0x00000000001828be
- (id)curationOfLength:(unsigned long long)arg1 forMemory:(id)arg2 customDuration:(double)arg3 useAssetEligibility:(_Bool)arg4 curationContext:(id)arg5;	// IMP=0x00000000001822b6
- (double)targetCurationDurationWithCurationLength:(unsigned long long)arg1 customDuration:(double)arg2;	// IMP=0x0000000000182283
- (id)_featureNodesForEncodedFeatures:(id)arg1 inGraph:(id)arg2;	// IMP=0x0000000000181fc8
- (id)_momentNodesFromMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x0000000000181d2d
- (_Bool)isPGMemoryTriggered:(id)arg1;	// IMP=0x0000000000181cf5
- (_Bool)isPHMemoryTriggered:(id)arg1;	// IMP=0x0000000000181cbd
- (id)createMemoriesWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x0000000000181ad8
- (double)durationForExistingMemoriesOverlapCheck:(unsigned long long *)arg1 withProgress:(CDUnknownBlockType)arg2;	// IMP=0x0000000000181958
- (id)_featuresFromOptions:(id)arg1;	// IMP=0x00000000001802a1
- (id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1;	// IMP=0x0000000000180288
- (id)_memoriesWithOptions:(id)arg1 isFinalOne:(_Bool)arg2;	// IMP=0x000000000018009b
- (id)_memoryControllerWithOptions:(id)arg1;	// IMP=0x000000000017ff2e
- (id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2;	// IMP=0x000000000017fba6
- (id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2;	// IMP=0x000000000017f8e3
- (id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2;	// IMP=0x000000000017f5db
- (id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2;	// IMP=0x000000000017f25c
- (id)memoryWithOptions:(id)arg1;	// IMP=0x000000000017f142
- (id)memoriesWithOptions:(id)arg1;	// IMP=0x000000000017f044
- (id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2;	// IMP=0x000000000017e94e
- (id)memoryTreeWithOptions:(id)arg1;	// IMP=0x000000000017de9e
- (void)regenerateMemoriesOfCategory:(unsigned long long)arg1 progressReporter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000017dddc
- (id)suggestedPersonsForHome;	// IMP=0x00000000001b9ac0
- (id)relationshipInferencesForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b97cb
- (id)contactInferencesForPersonLocalIdentifiers:(id)arg1 queryOptions:(unsigned long long)arg2;	// IMP=0x00000000001b94ca
- (id)suggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1;	// IMP=0x00000000001b93ec
- (id)inferredContactIdentifierForPersonLocalIdentifier:(id)arg1;	// IMP=0x00000000001b92d8
- (id)inferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b90f6
- (id)assetIdentifiersForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b8b5a
- (id)assetCollectionsForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b8a09
- (id)maximalSocialGroupsForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b88bc
- (id)socialGroupsForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b876f
- (id)allSocialGroupsForPersonLocalIdentifier:(id)arg1;	// IMP=0x00000000001b8622
- (id)sortedArrayForPersonLocalIdentifiers:(id)arg1;	// IMP=0x00000000001b8557
- (id)publicEventsForAllMoments;	// IMP=0x000000000024c693
- (id)highlightGroupingsForPromotionScoreSurvey;	// IMP=0x000000000024bf65
- (id)highlightsForKeyAssetSurvey;	// IMP=0x000000000024bc42
- (id)highlightsForMeaningKeyAssetSurvey;	// IMP=0x000000000024b978
- (id)assetCollectionsForOptimizedMeaningSurvey:(id)arg1;	// IMP=0x000000000024b56c
- (_Bool)_momentNodeHasMeaningfulEntertainmentScenes:(id)arg1 graph:(id)arg2;	// IMP=0x000000000024b4a0
- (_Bool)_momentNodeHasMeaningfulCelebrationScenes:(id)arg1 graph:(id)arg2;	// IMP=0x000000000024b3db
- (_Bool)_momentNodeHasMeaningfulRestaurantScenes:(id)arg1 graph:(id)arg2;	// IMP=0x000000000024b30f
- (_Bool)_momentNodeHasMeaningfulActivityScenes:(id)arg1 graph:(id)arg2;	// IMP=0x000000000024b243
- (_Bool)_highConfidentSceneNodesInMoment:(id)arg1 withSceneNames:(id)arg2 includingChildrenOfScenes:(id)arg3 graph:(id)arg4;	// IMP=0x000000000024af2e
- (id)similarAssetCollections;	// IMP=0x000000000024ae3b
- (id)_topN:(unsigned long long)arg1 fromScoreByAsset:(id)arg2;	// IMP=0x000000000024a7fb
- (id)_assetsWithKNearestSceneprintsToReferenceAssets:(id)arg1 amongOtherAssets:(id)arg2 minimumSimilarity:(double)arg3 k:(unsigned long long)arg4;	// IMP=0x000000000024a127
- (id)popularAssetCollections;	// IMP=0x0000000000249ef3
- (id)businessItemsForAllMoments;	// IMP=0x0000000000249e3e
- (id)enrichedBusinessItemsByMuidsForBusinessItems:(id)arg1;	// IMP=0x0000000000249d27
- (id)_interactionScoreByAssetFromMomentNodes:(id)arg1;	// IMP=0x000000000024989e
- (id)_interestingMomentNodesAndUninterestingNodes;	// IMP=0x0000000000249745
- (_Bool)_isInterestingMomentNode:(id)arg1 withNeighborScoreComputer:(id)arg2;	// IMP=0x000000000024966d
- (id)_fetchLocationsFromMemory:(id)arg1 withGraph:(id)arg2;	// IMP=0x0000000000249334
- (id)_relationshipTypeStringFromRelationshipType:(long long)arg1;	// IMP=0x0000000000249271
- (id)_fetchVerifiedPersonsForKnowledgeArgs:(id)arg1;	// IMP=0x0000000000249183
- (id)_addRelationshipsToFeatures:(id)arg1 fromMemory:(id)arg2;	// IMP=0x0000000000248ffd
- (id)_filterRelevantFeatures:(id)arg1;	// IMP=0x0000000000248e29
- (id)_featuresFromFingerprint:(id)arg1 withValueGreaterThan:(float)arg2;	// IMP=0x0000000000248cf1
- (id)getMetadataFromMemory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000248bd0
- (id)fetchMemories;	// IMP=0x000000000024897d
- (id)fetchAssetsFromCollection:(id)arg1;	// IMP=0x00000000002488b7
- (id)surveyInformationForMoment:(id)arg1;	// IMP=0x00000000002487a3
- (id)meaningLabelsForMoment:(id)arg1;	// IMP=0x000000000024866c
- (id)momentFeatureVectorForMoment:(id)arg1;	// IMP=0x0000000000248558
- (id)uninterestingMoments;	// IMP=0x000000000024843a
- (id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1;	// IMP=0x000000000024833c
- (id)surveyMomentClustersForTrips;	// IMP=0x00000000002481f8
- (id)_tripRelatedClustersInGraph:(id)arg1;	// IMP=0x00000000002478ef
- (id)_momentClustersForTripsInGraph:(id)arg1 tripIndexByMomentNode:(id)arg2;	// IMP=0x0000000000247385
- (id)_tripIndexByMomentNodeInGraph:(id)arg1;	// IMP=0x0000000000246f4d
- (id)surveySocialGroupsInfoDictionaries;	// IMP=0x0000000000246eb0
- (id)surveyFrequentLocationQuestions;	// IMP=0x0000000000246dff
- (id)blockedFeatures;	// IMP=0x00000000002c647d
- (id)libraryStatisticsForCurrentPhotoLibrary;	// IMP=0x00000000002e1018
- (id)_yearsStatisticsForCurrentPhotoLibrary;	// IMP=0x00000000002e0dac
- (id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4;	// IMP=0x00000000002e094a
- (id)_collectionStatisticsForCurrentPhotoLibrary;	// IMP=0x00000000002e0344
- (id)_momentsStatisticsForCurrentPhotoLibrary;	// IMP=0x00000000002dff1d
- (unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1;	// IMP=0x00000000002dfd0e
- (id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;	// IMP=0x00000000002df9f7
- (id)_diagnosticSummaryInfoForMemory:(id)arg1;	// IMP=0x00000000002df3d2
- (id)_extractDatesAndAssetCountsFromMemory:(id)arg1;	// IMP=0x00000000002df149
- (id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2;	// IMP=0x00000000002de98a
- (id)highlightDebugInformationWithHighlight:(id)arg1;	// IMP=0x00000000002de86f
- (id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2;	// IMP=0x00000000002de733
- (id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000319cc5
- (id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000319ad4
- (id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000031990e
- (id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000318e04
- (id)titleTupleForPersonLocalIdentifiers:(id)arg1 format:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000318bd2
- (id)searchSynonymsDictionaries;	// IMP=0x000000000032c5fb
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3;	// IMP=0x000000000032c424
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x000000000032c265
- (id)searchKeywordsByEventWithUUIDs:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x000000000032c0a1
- (id)searchMetadataWithOptions:(id)arg1;	// IMP=0x000000000032c094
- (id)zeroKeywordsWithOptions:(id)arg1;	// IMP=0x000000000032c087
- (id)newSearchComputationCache;	// IMP=0x000000000032bff7
- (id)_memoryFetchOptions;	// IMP=0x0000000000334a91
- (_Bool)memoriesOfTheDayAreWorthNotifying;	// IMP=0x00000000003347b7
- (id)lastTriggeredNotificationDate;	// IMP=0x0000000000334682
- (id)nextPossibleNotificationDate;	// IMP=0x0000000000334054
@property(readonly, copy, nonatomic) NSArray *availableMetricEvents;
- (_Bool)swapInGraphAtURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000036809d
- (_Bool)performLibraryAnalysisWithGraphURL:(id)arg1 withRecipe:(id)arg2 processedGraphUpdate:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000367611
- (void)performFullLibraryAnalysisInGraph:(id)arg1 withRecipe:(id)arg2 withAlreadyIngestedMomentIdentifiers:(id)arg3 alreadyIngestedHighlightIdentifiers:(id)arg4 processedGraphUpdate:(id *)arg5 progressBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000000366ab0
- (id)graphForLibraryFullAnalysisAtURL:(id)arg1 alreadyIngestedMomentIdentifiers:(id *)arg2 alreadyIngestedHighlightIdentifiers:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000365e08
- (void)_precachePersonsInformationFromGraph:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003658e1
- (void)_exportGraphToDiskOrRemoveItDependingOnUserDefault;	// IMP=0x00000000003657eb
- (void)updateGraphWithRecipe:(id)arg1 keepExistingGraph:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000364b4e
- (void)startGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000364a1d
- (_Bool)updateGraph:(id)arg1 withGraphUpdate:(id)arg2 withRecipe:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000364542
- (void)startLibraryAnalysisWithRecipe:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 keepExistingGraph:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000003693fc
- (void)startLibraryAnalysis:(CDUnknownBlockType)arg1 keepExistingGraph:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000036935e
- (_Bool)_supportsSemanticalDedupingForMemory:(id)arg1;	// IMP=0x000000000037cc56
- (id)_curationDebugInformationForHighlight:(id)arg1 options:(id)arg2;	// IMP=0x000000000037c7bd
- (id)curationDebugInformationForAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x000000000037bd08
- (_Bool)isInterestingForMoment:(id)arg1;	// IMP=0x000000000037bc1a
- (_Bool)isSmartInterestingForMoment:(id)arg1;	// IMP=0x000000000037bb2c
- (double)neighborScoreForMoment:(id)arg1;	// IMP=0x000000000037ba37
- (double)graphScoreForMoment:(id)arg1;	// IMP=0x000000000037b946
- (id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3;	// IMP=0x000000000037b78b
- (_Bool)canAddM5KeywordToMemory:(id)arg1 currentKeywords:(id)arg2 libraryDuration:(double)arg3;	// IMP=0x00000000003dae1e
- (double)libraryDuration;	// IMP=0x00000000003dad77
- (id)_celebratedHolidayKeywordsForMomentNodes:(id)arg1;	// IMP=0x00000000003daae8
- (id)_momentNodesForMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000003da8d8
- (id)_poiLabelsForMomentNodes:(id)arg1;	// IMP=0x00000000003da647
- (id)_roiLabelsForMomentNodes:(id)arg1;	// IMP=0x00000000003da3b6
- (id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 withMomentNodes:(id)arg2 inGraph:(id)arg3;	// IMP=0x00000000003d9cfc
- (id)_locationTripKeywordsForMemory:(id)arg1 withMomentNodes:(id)arg2 inGraph:(id)arg3 locationHelper:(id)arg4;	// IMP=0x00000000003d95e7
- (id)_keywordsSortedByPriority:(id)arg1;	// IMP=0x00000000003d93e4
- (id)moodKeywordsForLegacyMemory:(id)arg1;	// IMP=0x00000000003d929d
- (id)_recentlyUsedSongAdamIDsFromCurationOptions:(id)arg1;	// IMP=0x0000000000417495
- (id)musicCurationInflationContextWithInflationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000417326
- (id)musicCuratorContextWithCurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000416fc0
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000416d45
- (id)_stringDescriptionForMusicWithGraph:(id)arg1 summaryOnly:(_Bool)arg2;	// IMP=0x000000000046461b
- (id)_behavioralStatisticsWithGraph:(id)arg1;	// IMP=0x00000000004632d9
- (unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)arg1;	// IMP=0x0000000000463295
- (id)_fetchResultMatchingInternalPredicate:(id)arg1;	// IMP=0x0000000000463172
- (id)_stringDescriptionForLegacyPetsWithGraph:(id)arg1;	// IMP=0x0000000000462764
- (id)_stringDescriptionForBabiesWithGraph:(id)arg1;	// IMP=0x00000000004624c1
- (id)_stringDescriptionForPetsWithGraph:(id)arg1;	// IMP=0x000000000046221e
- (id)_sortedTextFeaturesFromTextFeatures:(id)arg1;	// IMP=0x0000000000462107
- (id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg1;	// IMP=0x0000000000462028
- (id)_dayOfWeekStatisticsWithGraph:(id)arg1;	// IMP=0x0000000000461b5e
- (id)snapshotOuputFilePathURLForKey:(id)arg1;	// IMP=0x0000000000461a68
- (id)_snapshotFilenameForLookupKey:(id)arg1;	// IMP=0x00000000004619f6
- (id)defaultPeopleClustersExportIntermediatePath;	// IMP=0x0000000000461991
- (id)fastGraphExportFullPath;	// IMP=0x0000000000461910
- (id)defaultGraphExportFullPath;	// IMP=0x00000000004618ab
- (id)defaultSnapshotRootPath;	// IMP=0x000000000046188b
- (id)_getDefaultOutputPathForMetadataSnapshot;	// IMP=0x0000000000461806
- (id)utilityAssetInformation;	// IMP=0x00000000004612f8
- (id)sharingSuggestionDebugInformationForSuggestion:(id)arg1;	// IMP=0x00000000004609b4
- (id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5;	// IMP=0x0000000000460450
- (id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;	// IMP=0x0000000000460213
- (id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4;	// IMP=0x0000000000460091
- (id)_domainLabelCountStatisticsWithGraph:(id)arg1;	// IMP=0x000000000045fb04
- (id)_mobilityStatisticsWithGraph:(id)arg1;	// IMP=0x000000000045f896
- (id)_titleStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;	// IMP=0x000000000045eee4
- (id)_highlightTitleStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;	// IMP=0x000000000045e703
- (id)_stringDescriptionForPublicEventsWithGraph:(id)arg1 verbose:(_Bool)arg2;	// IMP=0x000000000045d3c7
- (id)_poiStatisticsWithGraph:(id)arg1;	// IMP=0x000000000045d1df
- (id)_stringDescriptionForBusinessItemsWithGraph:(id)arg1 includingInferredThroughPublicEvents:(_Bool)arg2 verbose:(_Bool)arg3;	// IMP=0x000000000045cbb6
- (id)_stringDescriptionForLanguagesWithGraph:(id)arg1;	// IMP=0x000000000045c98e
- (id)_stringDescriptionForLocationsWithGraph:(id)arg1;	// IMP=0x000000000045c54c
- (id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1;	// IMP=0x000000000045c2c8
- (id)_stringDescriptionForDisambiguatedLocationsWithGraph:(id)arg1;	// IMP=0x000000000045bd6f
- (id)_stringDescriptionForMeNode:(id)arg1;	// IMP=0x000000000045bae0
- (id)_stringDescriptionForPeopleEventsWithGraph:(id)arg1;	// IMP=0x000000000045b282
- (id)_stringDescriptionForInterestingAreas:(id)arg1;	// IMP=0x000000000045af20
- (id)_stringDescriptionForInterestingCities:(id)arg1;	// IMP=0x000000000045aa2c
- (id)_stringDescriptionForUrbanCities:(id)arg1;	// IMP=0x000000000045a65a
- (id)_dateFormatter;	// IMP=0x000000000045a5cb
- (id)_stringDescriptionForMeaningfulEvents:(id)arg1 isTrip:(_Bool)arg2 forDiagnostics:(_Bool)arg3 titleGenerationContext:(id)arg4;	// IMP=0x0000000000459ab8
- (id)_stringDescriptionForSocialGroups:(id)arg1 includeWeight:(_Bool)arg2;	// IMP=0x00000000004597f6
- (id)_highlightEstimatesStatistics;	// IMP=0x0000000000459775
- (id)_messagesStatistics;	// IMP=0x000000000045970e
- (id)_peopleNameBiologicalSexStatisticsWithGraph:(id)arg1;	// IMP=0x000000000045938f
- (id)_peopleVisionBiologicalSexStatisticsWithGraph:(id)arg1;	// IMP=0x0000000000459060
- (id)_peopleVisionAgeStatisticsWithGraph:(id)arg1;	// IMP=0x0000000000458aa4
- (id)_stringDescriptionForContactCache;	// IMP=0x00000000004589d7
- (id)_peopleContactSuggestionStatisticsWithGraph:(id)arg1 includingDebugInfo:(_Bool)arg2;	// IMP=0x0000000000458151
- (id)_oneOnOneTripsWithGraph:(id)arg1;	// IMP=0x0000000000457aa1
- (unsigned long long)_numberOfNightOutMomentsWithGraph:(id)arg1;	// IMP=0x0000000000457a55
- (unsigned long long)_numberOfFamilyHolidayMomentsWithGraph:(id)arg1;	// IMP=0x000000000045799a
- (unsigned long long)_numberOfMomentsOverWeekendsWithGraph:(id)arg1;	// IMP=0x000000000045793d
- (id)_peopleRelationshipsStatisticsWithGraph:(id)arg1 includingDebugInfo:(_Bool)arg2;	// IMP=0x0000000000456aa9
- (id)_partOfDayStatisticsWithGraph:(id)arg1 titleGenerationContext:(id)arg2;	// IMP=0x00000000004566a1
- (id)_interestingStatisticsWithGraph:(id)arg1;	// IMP=0x0000000000455c1b
- (id)_moodStatisticsWithGraph:(id)arg1;	// IMP=0x0000000000455315
- (id)_stringDescriptionForMemoriesNotification;	// IMP=0x00000000004551ad
- (id)_socialGroupsDebugStringWithGraph:(id)arg1;	// IMP=0x0000000000454f5d
- (id)_socialGroupsDebugStringIncludingMeNode:(_Bool)arg1 withGraph:(id)arg2;	// IMP=0x0000000000454cdf
- (id)_socialGroupsDebugStatistics:(id)arg1;	// IMP=0x0000000000454c10
- (id)_socialGroupsStatistics:(id)arg1;	// IMP=0x0000000000454455
- (id)_checkConsistencyOfGraph:(id)arg1;	// IMP=0x0000000000453339
- (id)_defaultStatisticsWithGraph:(id)arg1 verbose:(_Bool)arg2 forDiagnostics:(_Bool)arg3;	// IMP=0x000000000044e379
- (id)statisticsWithTypeStrings:(id)arg1;	// IMP=0x000000000044dbee
- (unsigned int)identifierForMoment:(id)arg1;	// IMP=0x000000000044dafb
- (id)UUIDForMoment:(id)arg1;	// IMP=0x000000000044d9e7
- (id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2;	// IMP=0x000000000044d8cc
- (id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2;	// IMP=0x000000000044d79c
- (id)keywordsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2;	// IMP=0x000000000044d66c
- (id)performerIdentifiersForMomentUUIDs:(id)arg1;	// IMP=0x000000000052a409

@end

