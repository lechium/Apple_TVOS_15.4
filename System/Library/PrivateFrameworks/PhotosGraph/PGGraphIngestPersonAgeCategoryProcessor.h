//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSDictionary, NSString, PGGraphBuilder;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    NSDictionary *_confidenceThresholdByBabySceneIdentifier;	// 16 = 0x10
    NSDictionary *_confidenceThresholdByChildSceneIdentifier;	// 24 = 0x18
    NSDictionary *_confidenceThresholdByTeenSceneIdentifier;	// 32 = 0x20
    NSDictionary *_confidenceThresholdByAdultSceneIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f0768
- (id)_ageDescriptionFromAge:(unsigned long long)arg1;	// IMP=0x00000000003f0704
- (unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)arg1 personNode:(id)arg2;	// IMP=0x00000000003f0283
- (unsigned long long)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000003f0074
@property(readonly, nonatomic) NSDictionary *confidenceThresholdByAdultSceneIdentifier; // @synthesize confidenceThresholdByAdultSceneIdentifier=_confidenceThresholdByAdultSceneIdentifier;
@property(readonly, nonatomic) NSDictionary *confidenceThresholdByTeenSceneIdentifier; // @synthesize confidenceThresholdByTeenSceneIdentifier=_confidenceThresholdByTeenSceneIdentifier;
@property(readonly, nonatomic) NSDictionary *confidenceThresholdByChildSceneIdentifier; // @synthesize confidenceThresholdByChildSceneIdentifier=_confidenceThresholdByChildSceneIdentifier;
@property(readonly, nonatomic) NSDictionary *confidenceThresholdByBabySceneIdentifier; // @synthesize confidenceThresholdByBabySceneIdentifier=_confidenceThresholdByBabySceneIdentifier;
- (unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)arg1;	// IMP=0x00000000003efe9a
- (unsigned long long)ageCategoryFromBirthdayDateComponents:(id)arg1 currentDate:(id)arg2;	// IMP=0x00000000003efd8c
- (unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)arg1;	// IMP=0x00000000003efd6c
- (unsigned long long)ageCategoryForPersonNode:(id)arg1 ageCategoryCountedSet:(id)arg2;	// IMP=0x00000000003ef6f3
- (unsigned long long)_ageCategoryUsingFaceAttributesForPersonNode:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000003ef2ae
- (void)processPersonAgeCategoryForPersonNodes:(id)arg1 photoLibrary:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ee727
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003ee424
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x00000000003ee3d6
- (void)setGraphBuilder:(id)arg1;	// IMP=0x00000000003ee3c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

