//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVPhotoLibraryProtocol-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, PVVisionHelper;
@protocol PVPhotoLibraryProtocol;

@interface PVPersonClusterManager : NSObject <PVPhotoLibraryProtocol>
{
    NSMutableDictionary *_representativeFaceObservationForPersonIdentifier;	// 8 = 0x8
    NSMutableDictionary *_distancesForPersonLocalIdentifier;	// 16 = 0x10
    NSMutableDictionary *_distancesInCommonMomentsForPersonLocalIdentifier;	// 24 = 0x18
    id <PVPhotoLibraryProtocol> _photoLibrary;	// 32 = 0x20
    PVVisionHelper *_visionHelper;	// 40 = 0x28
    NSMutableDictionary *_personClusters;	// 48 = 0x30
    NSSet *_assetsToIgnore;	// 56 = 0x38
}

+ (id)nodeSortDescriptors;	// IMP=0x000000000001b6bc
+ (id)faceGroupSortDescriptors;	// IMP=0x000000000001b61e
+ (id)peopleSortDescriptors;	// IMP=0x000000000001b580
+ (id)faceSortDescriptors;	// IMP=0x000000000001b4e2
+ (id)assetSortDescriptors;	// IMP=0x000000000001b400
+ (id)momentSortDescriptors;	// IMP=0x000000000001b362
+ (id)personProcessingSortDescriptors;	// IMP=0x000000000001b286
- (void).cxx_destruct;	// IMP=0x000000000001ac04
@property(retain, nonatomic) NSSet *assetsToIgnore; // @synthesize assetsToIgnore=_assetsToIgnore;
@property(retain, nonatomic) NSMutableDictionary *personClusters; // @synthesize personClusters=_personClusters;
@property(retain, nonatomic) PVVisionHelper *visionHelper; // @synthesize visionHelper=_visionHelper;
@property(retain, nonatomic) id <PVPhotoLibraryProtocol> photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)pv_lastAssetDate;	// IMP=0x000000000001ab48
- (float)pv_faceProcessingProgress;	// IMP=0x000000000001aaf8
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x000000000001aaa8
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x000000000001aa06
- (id)pv_fetchFaceGroups;	// IMP=0x000000000001a9b6
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x000000000001a933
- (id)pv_fetchAssetsForPerson:(id)arg1;	// IMP=0x000000000001a91e
- (id)pv_fetchAssetsInMoment:(id)arg1;	// IMP=0x000000000001a89b
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a818
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a795
- (id)pv_fetchMomentsForPerson:(id)arg1;	// IMP=0x000000000001a780
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a6fd
- (id)pv_fetchMoments;	// IMP=0x000000000001a6ad
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a62a
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x000000000001a5a7
- (id)pv_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x000000000001a524
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x000000000001a48d
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x000000000001a069
- (id)pv_fetchFacesForPerson:(id)arg1;	// IMP=0x000000000001a054
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000019fd1
- (unsigned long long)pv_numberOfFacesWithFaceprints;	// IMP=0x0000000000019f8d
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x0000000000019e64
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000019d98
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000019ccc
- (id)pv_fetchPersonsInMoment:(id)arg1;	// IMP=0x0000000000019c22
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x0000000000019b4b
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x00000000000198a6
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000019829
- (id)pv_persistentStorageDirectoryURL;	// IMP=0x00000000000197d9
- (id)representativeFaceObservationForFaces:(id)arg1 ageType:(unsigned short *)arg2 inPerson:(id)arg3;	// IMP=0x0000000000018e80
- (id)_representativeFaceObservationForPerson:(id)arg1 ageType:(unsigned short *)arg2 inAssetCollections:(id)arg3;	// IMP=0x0000000000018831
- (id)representativeFaceObservationForPerson:(id)arg1 ageType:(unsigned short *)arg2;	// IMP=0x000000000001881c
- (float)_adjustDistanceFactorForPerson:(id)arg1 andPerson:(id)arg2 forAgeType:(unsigned short)arg3 andAgeType:(unsigned short)arg4;	// IMP=0x000000000001862f
- (float)_minimiumDistanceRequiredForCommonAssetDistanceForAgeType:(unsigned short)arg1;	// IMP=0x0000000000018612
- (float)distanceBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(_Bool)arg3 minAgeType:(unsigned short *)arg4 updateBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x00000000000178fd
- (float)distanceWithOverlapCheckBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(_Bool)arg3 minAgeType:(unsigned short *)arg4 updateBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000017810
- (unsigned long long)numberOfMomentsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x0000000000017758
- (unsigned long long)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2;	// IMP=0x000000000001769b
- (unsigned long long)numberOfAssetsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x0000000000017602
- (long long)assetsOverlapBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2;	// IMP=0x00000000000174bf
- (long long)assetsOverlapBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x0000000000017426
- (unsigned short)minAgeTypeForFaceAgeType:(unsigned short)arg1 andFaceAgeType:(unsigned short)arg2;	// IMP=0x000000000001740a
- (void)mergePersons:(id)arg1 withPerson:(id)arg2;	// IMP=0x0000000000016a56
- (id)_mapPersonClustersToFaceGroups:(id)arg1;	// IMP=0x00000000000167b7
- (id)_mapPersonClustersToPersons:(id)arg1;	// IMP=0x000000000001652a
- (void)invalidateCachesForPerson:(id)arg1;	// IMP=0x00000000000162ce
- (void)clearCaches;	// IMP=0x000000000001627f
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000001616d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
