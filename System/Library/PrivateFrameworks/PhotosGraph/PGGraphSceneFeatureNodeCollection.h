//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>

@class NSString, PGGraphFeatureNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphSceneFeatureNodeCollection <PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)sceneFeatureNodesForSceneNames:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000021b8f2
+ (id)sceneFeatureNodesForSceneName:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000021b860
+ (Class)nodeClass;	// IMP=0x000000000021b84f
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

