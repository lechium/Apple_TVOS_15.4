//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface VCPPhotosAutoCounterWorker : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    unsigned long long _detectionVersion;	// 16 = 0x10
    unsigned long long _recognitionVersion;	// 24 = 0x18
    unsigned long long _personClusterVersion;	// 32 = 0x20
    int _processingVersion;	// 40 = 0x28
    unsigned long long _clusterDumpFaceFetched;	// 48 = 0x30
}

+ (_Bool)_dumpAssetsToFaces;	// IMP=0x00000000000cd67e
+ (_Bool)_dumpFaceprint;	// IMP=0x00000000000c902f
+ (id)workerWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000c87b4
- (void).cxx_destruct;	// IMP=0x00000000000d8c90
- (int)validateClusterAccuracyWithSIMLGroundtruth:(id)arg1 results:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d82b1
- (int)_parseSIMLGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d7321
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 results:(id *)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d721a
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 withGroundtruth:(id)arg3 results:(id *)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d6743
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)arg1 personClusterMeasure:(id)arg2 personClusters:(id)arg3 andGroundTruthInformation:(id)arg4;	// IMP=0x00000000000d4714
- (int)_measurePVPersonClusters:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000d1355
- (int)_measureClusterWithClusterStateURL:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000cd686
- (void)_exportAssetsToFacesDetails:(id)arg1;	// IMP=0x00000000000cd411
- (int)_parseGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000cc7d1
- (double)_overlapRatioOf:(struct CGRect)arg1 with:(struct CGRect)arg2;	// IMP=0x00000000000cc75e
- (int)exportClustersStates:(id *)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb5f5
- (_Bool)optInPerson:(id)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cab3d
- (_Bool)optInStatus:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000caa1f
- (void)_fetchPersonWithIdentifier:(id)arg1 facesPerAsset:(id)arg2 assetInformation:(id)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ca708
- (int)_processFetchedFaceGroup:(id)arg1 forPersonID:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c9037
- (id)_anonymizedName:(id)arg1;	// IMP=0x00000000000c8ec5
- (id)_fetchPeopleHomePersons;	// IMP=0x00000000000c8d35
- (unsigned long long)optInPersonCount;	// IMP=0x00000000000c8cba
- (int)_loadGroundTruth:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000c8c3f
- (int)_loadGroundTruthURL:(id)arg1 toGroundTruth:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000c899d
- (id)_groundTruthURL;	// IMP=0x00000000000c887a
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000000c858e

@end

