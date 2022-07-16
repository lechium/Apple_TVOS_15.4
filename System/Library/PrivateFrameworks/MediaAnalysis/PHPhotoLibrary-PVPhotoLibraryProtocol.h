//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

#import <MediaAnalysis/PVPhotoLibraryProtocol-Protocol.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol) <PVPhotoLibraryProtocol>
+ (id)_defaultFacePropertySets;	// IMP=0x0000000000052f94
+ (id)_defaultAssetPropertySets;	// IMP=0x0000000000052efc
+ (id)_phPeopleSortDescriptors;	// IMP=0x0000000000052e5e
+ (id)_phFaceSortDescriptors;	// IMP=0x0000000000052dc0
+ (_Bool)_includeTorsoOnlyFaces;	// IMP=0x0000000000147f2f
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;	// IMP=0x00000000001468b3
+ (id)vcp_defaultURL;	// IMP=0x0000000000146847
+ (id)vcp_defaultPhotoLibrary;	// IMP=0x00000000001467dc
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x00000000000556c5
- (id)pv_lastAssetDate;	// IMP=0x0000000000055566
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x000000000005514b
- (float)pv_faceProcessingProgress;	// IMP=0x0000000000054f54
- (double)_progressFromWorkerStatesDictionary:(id)arg1;	// IMP=0x0000000000054ce8
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x0000000000054c5e
- (id)pv_fetchFaceGroups;	// IMP=0x0000000000054c07
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x0000000000054b26
- (id)pv_fetchAssetsForPerson:(id)arg1;	// IMP=0x0000000000054a45
- (id)pv_fetchAssetsInMoment:(id)arg1;	// IMP=0x00000000000549bb
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000054931
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000054874
- (id)pv_fetchMomentsForPerson:(id)arg1;	// IMP=0x0000000000054862
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x00000000000547a5
- (id)pv_fetchMoments;	// IMP=0x000000000005465d
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x000000000005456b
- (id)pv_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x0000000000054479
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x0000000000054007
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x0000000000053f2a
- (id)pv_fetchFacesForPerson:(id)arg1;	// IMP=0x0000000000053e26
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000053d34
- (unsigned long long)pv_numberOfFacesWithFaceprints;	// IMP=0x0000000000053c28
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x0000000000053b48
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000053a8c
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x00000000000539d0
- (id)pv_fetchPersonsInMoment:(id)arg1;	// IMP=0x00000000000538f0
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x0000000000053430
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000053350
- (id)pv_persistentStorageDirectoryURL;	// IMP=0x00000000000530e2
- (id)_defaultAssetFetchOptions;	// IMP=0x000000000005306e
- (id)_defaultFetchOptions;	// IMP=0x000000000005301a
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000052f82
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;	// IMP=0x0000000000148290
- (_Bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;	// IMP=0x0000000000148197
- (_Bool)vcp_isSyndicationLibrary;	// IMP=0x000000000014817d
- (unsigned long long)mad_countOfUnclusteredFaces;	// IMP=0x000000000014801e
- (id)mad_unclusteredFacesFetchOptions;	// IMP=0x0000000000147f37
- (id)vcp_faceAnalysisStateFilepath;	// IMP=0x0000000000147e5d
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;	// IMP=0x0000000000147cc9
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;	// IMP=0x0000000000147acd
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000147935
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;	// IMP=0x0000000000147575
- (id)vcp_analysisPreferences;	// IMP=0x00000000001474be
- (id)_analysisPreferencesURL;	// IMP=0x0000000000147453
- (id)vcp_visionCacheStorageDirectoryURL;	// IMP=0x000000000014727d
- (id)vcp_libraryScaleShortDescription;	// IMP=0x00000000001471f7
- (_Bool)vcp_allowInMemoryDownload;	// IMP=0x0000000000147187
- (_Bool)vcp_supportsInMemoryDownload;	// IMP=0x000000000014714e
- (_Bool)vcp_eligibleForStreaming:(_Bool)arg1;	// IMP=0x000000000014710c
- (_Bool)vcp_isCPLDownloadComplete;	// IMP=0x0000000000147043
- (_Bool)vcp_isCPLSyncComplete;	// IMP=0x0000000000146f7a
- (_Bool)vcp_isCPLEnabled;	// IMP=0x0000000000146f68
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0000000000146cab
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x0000000000146bee
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;	// IMP=0x0000000000146b34
- (_Bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;	// IMP=0x0000000000146a61
- (id)vcp_mediaAnalysisDatabaseFilepath;	// IMP=0x00000000001469ed
- (id)vcp_mediaAnalysisDirectory;	// IMP=0x000000000014691f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

