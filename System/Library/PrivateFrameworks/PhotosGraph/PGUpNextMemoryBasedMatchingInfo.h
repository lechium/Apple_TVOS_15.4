//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGUpNextMatchingTarget-Protocol.h>

@class CLLocation, NSDate, NSString, PGGraphFeatureNodeCollection, PGGraphMeaningNodeCollection, PGGraphMemoryNodeCollection, PGGraphMomentNodeCollection, PGGraphPersonNodeCollection, PGGraphSceneNodeCollection;

@interface PGUpNextMemoryBasedMatchingInfo <PGUpNextMatchingTarget>
{
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;	// 72 = 0x48
    PGGraphMemoryNodeCollection *_memoryNodeAsCollection;	// 80 = 0x50
}

+ (id)matchingInfosWithMemoryNodes:(id)arg1;	// IMP=0x0000000000556183
- (void).cxx_destruct;	// IMP=0x0000000000556152
@property(readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodeAsCollection; // @synthesize memoryNodeAsCollection=_memoryNodeAsCollection;
@property(readonly, nonatomic) NSString *debugInfo;
- (_Bool)_implIsTripMemory;	// IMP=0x0000000000556024
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property(readonly, nonatomic) unsigned long long nodeIdentifier;
- (id)initWithMemoryNodeAsCollection:(id)arg1 momentNodes:(id)arg2;	// IMP=0x0000000000555e71
- (id)initWithMemoryNodeAsCollection:(id)arg1 momentNodes:(id)arg2 personNodes:(id)arg3 sceneNodes:(id)arg4 meaningNodes:(id)arg5 isTripMemory:(_Bool)arg6 representativeLocation:(id)arg7 representativeDate:(id)arg8 memoryFeatureNodes:(id)arg9;	// IMP=0x0000000000555da1
- (id)initWithMemoryNodeAsCollection:(id)arg1;	// IMP=0x0000000000555d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTripMemory;
@property(readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property(readonly, nonatomic) NSDate *representativeDate;
@property(readonly, nonatomic) CLLocation *representativeLocation;
@property(readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property(readonly) Class superclass;

@end

