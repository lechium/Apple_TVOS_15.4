//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGGraph, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject
{
    _Bool _petPrintClusteringEnabled;	// 8 = 0x8
    short _detectionType;	// 10 = 0xa
    PGGraph *_graph;	// 16 = 0x10
    PHPhotoLibrary *_photoLibrary;	// 24 = 0x18
    NSObject<OS_os_log> *_loggingConnection;	// 32 = 0x20
}

+ (unsigned long long)petFaceClusteringType;	// IMP=0x00000000001968d9
+ (unsigned long long)petFaceClusterMinSize;	// IMP=0x00000000001968ad
+ (double)petFaceClusteringThreshold;	// IMP=0x0000000000196880
- (void).cxx_destruct;	// IMP=0x0000000000194e0d
@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(nonatomic) _Bool petPrintClusteringEnabled; // @synthesize petPrintClusteringEnabled=_petPrintClusteringEnabled;
@property(nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak PGGraph *graph; // @synthesize graph=_graph;
@property(nonatomic) short detectionType; // @synthesize detectionType=_detectionType;
- (id)removeClusterMatchingPetEntityFaceSet:(id)arg1 fromFaceClustersAtHome:(id)arg2;	// IMP=0x0000000000194a50
- (_Bool)updatePetPersonsForFaceClusters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000193d3a
- (_Bool)updatePetFaceGroupsForFaceClusters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000192f3b
- (_Bool)updateFacesNameSourceToSourceGraphIfNeeded:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001929fc
- (void)_sortFaceClusters:(id)arg1;	// IMP=0x00000000001929e0
- (id)_createClustersFromPetFaces:(id)arg1 withErrors:(id)arg2;	// IMP=0x000000000019248f
- (id)_fetchPetFacesInMomentsForUUIDs:(id)arg1;	// IMP=0x0000000000192303
- (id)_fetchPetFaceGroups;	// IMP=0x0000000000192228
- (id)fetchPetPersons;	// IMP=0x0000000000192087
- (_Bool)updatePetIdentityWithError:(id *)arg1;	// IMP=0x0000000000191b26
- (id)petFacesAtHome;	// IMP=0x0000000000191296
- (id)momentNodesForFaces:(id)arg1;	// IMP=0x0000000000190fa5
- (id)initWithDetectionType:(short)arg1 photoLibrary:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4;	// IMP=0x0000000000190edb

@end

