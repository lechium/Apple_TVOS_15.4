//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

#import <PhotoAnalysis/PVPhotoLibraryProtocol-Protocol.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol) <PVPhotoLibraryProtocol>
+ (id)_defaultFacePropertySets;	// IMP=0x0000000000097d33
+ (id)_defaultAssetPropertySets;	// IMP=0x0000000000097cad
+ (id)_phPeopleSortDescriptors;	// IMP=0x0000000000097c0f
+ (id)_phFaceSortDescriptors;	// IMP=0x0000000000097b71
- (id)pv_lastAssetDate;	// IMP=0x0000000000097835
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x000000000009741a
- (float)pv_faceProcessingProgress;	// IMP=0x0000000000097309
- (double)_progressFromWorkerStatesDictionary:(id)arg1;	// IMP=0x000000000009709d
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x0000000000097013
- (id)pv_fetchFaceGroups;	// IMP=0x0000000000096fbc
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x0000000000096d76
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x0000000000096c95
- (id)pv_fetchAssetsForPerson:(id)arg1;	// IMP=0x0000000000096bb4
- (id)pv_fetchAssetsInMoment:(id)arg1;	// IMP=0x0000000000096b2a
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000096aa0
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x00000000000969e4
- (id)pv_fetchMomentsForPerson:(id)arg1;	// IMP=0x00000000000969d2
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000096916
- (id)pv_fetchMoments;	// IMP=0x0000000000096881
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x000000000009678f
- (id)pv_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x000000000009669d
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x00000000000961eb
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x000000000009610e
- (id)pv_fetchFacesForPerson:(id)arg1;	// IMP=0x000000000009600a
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000095f18
- (unsigned long long)pv_numberOfFacesWithFaceprints;	// IMP=0x0000000000095e0c
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x0000000000095d2c
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000095c70
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000095bb4
- (id)pv_fetchPersonsInMoment:(id)arg1;	// IMP=0x0000000000095ad4
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x00000000000957a5
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x00000000000956c5
- (id)pv_persistentStorageDirectoryURL;	// IMP=0x0000000000095457
- (id)_defaultAssetFetchOptions;	// IMP=0x00000000000953e3
- (id)_defaultFetchOptions;	// IMP=0x00000000000953a5
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000095393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

