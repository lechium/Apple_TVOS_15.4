//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17KnowledgeGraphKit28MAWrapperLearningStreamUtils : NSObject
{
    MISSING_TYPE *momentClassifier;	// 8 = 0x8
    MISSING_TYPE *assetClassifier;	// 16 = 0x10
}

+ (id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032540
+ (id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031c50
- (void).cxx_destruct;	// IMP=0x0000000000032990
- (id)init;	// IMP=0x0000000000032910
- (id)classifyAssetsWithInputFeatureVectors:(id)arg1;	// IMP=0x0000000000032690
- (id)classifyMomentsWithInputFeatureVectors:(id)arg1;	// IMP=0x0000000000032650
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;	// IMP=0x0000000000030b30

@end
