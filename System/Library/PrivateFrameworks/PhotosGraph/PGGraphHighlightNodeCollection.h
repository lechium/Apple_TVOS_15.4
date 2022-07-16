//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>
#import <PhotosGraph/PGGraphEventCollection-Protocol.h>
#import <PhotosGraph/PGGraphScenedEventCollection-Protocol.h>

@class NSSet, NSString, PGGraphFeatureNodeCollection, PGGraphHighlightGroupNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphHighlightNodeCollection <PGGraphEventCollection, PGGraphScenedEventCollection, PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)highlightNodeAsCollectionByHighlightUUIDForArrayOfHighlightUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018c600
+ (id)highlightNodeAsCollectionByHighlightUUIDForHighlightUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018c5a9
+ (id)dayHighlightNodesInGraph:(id)arg1;	// IMP=0x000000000018c51c
+ (id)highlightNodeForUUID:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018c48a
+ (id)highlightNodesForArrayOfUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018c3f8
+ (id)highlightNodesForUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018c366
+ (Class)nodeClass;	// IMP=0x000000000018c355
- (id)highlightNodeByHighlightUUID;	// IMP=0x000000000018c0a7
- (id)highlightNodeAsCollectionByHighlightUUID;	// IMP=0x000000000018bfd8
@property(readonly, nonatomic) NSSet *localIdentifiers;
@property(readonly, nonatomic) NSSet *uuids;
- (void)enumerateUUIDs:(CDUnknownBlockType)arg1;	// IMP=0x000000000018be62
- (id)eventMomentNodes;	// IMP=0x000000000018be50
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
- (id)searchConfidenceSceneNodes;	// IMP=0x000000000018bde4
- (id)highConfidenceSceneNodes;	// IMP=0x000000000018bd94
- (id)sceneNodes;	// IMP=0x000000000018bd44
@property(readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

