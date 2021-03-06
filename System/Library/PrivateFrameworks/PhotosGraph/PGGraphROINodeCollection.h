//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>

@class NSString, PGGraphFeatureNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphROINodeCollection <PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)roiNodesOfTypes:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000037f855
+ (id)roiNodesOfType:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x000000000037f7c3
+ (Class)nodeClass;	// IMP=0x000000000037f7b2
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

