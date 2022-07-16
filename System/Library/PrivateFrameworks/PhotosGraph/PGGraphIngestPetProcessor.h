//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString, PGGraphBuilder;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    _Bool _petPrintClusteringEnabled;	// 16 = 0x10
}

+ (id)blocklistScenePetLabels;	// IMP=0x000000000020d8bb
+ (id)scenePetLabels;	// IMP=0x000000000020d8ae
- (void).cxx_destruct;	// IMP=0x000000000020d6a1
- (id)_petsDetectedWithType:(short)arg1 inPhotoLibrary:(id)arg2 withGraph:(id)arg3;	// IMP=0x000000000020d118
- (id)momentNodesForPerson:(id)arg1 inPhotoLibrary:(id)arg2 withGraph:(id)arg3;	// IMP=0x000000000020ce6c
- (unsigned long long)_speciesForSceneLabel:(id)arg1;	// IMP=0x000000000020cdb0
- (unsigned long long)_speciesForDetectionType:(short)arg1;	// IMP=0x000000000020ccd8
- (id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000020c6d1
- (void)_removeAllPetNodesForGraph:(id)arg1;	// IMP=0x000000000020c630
- (id)_petSceneNodesForGraph:(id)arg1;	// IMP=0x000000000020c580
- (id)_supportedPetDetectionTypes;	// IMP=0x000000000020c573
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000020b926
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x000000000020b911
- (void)setGraphBuilder:(id)arg1;	// IMP=0x000000000020b900
- (id)initForTesting;	// IMP=0x000000000020b8c8
- (id)init;	// IMP=0x000000000020b890

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
