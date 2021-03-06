//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PGGraphMomentFeaturesEdge
{
    NSString *_allAssetUUIDs;	// 8 = 0x8
    unsigned int _numberOfRelevantAssets:32;	// 16 = 0x10
}

+ (id)relevantAssetUUIDsFromAllAssetUUIDs:(id)arg1;	// IMP=0x00000000004ec853
+ (id)filter;	// IMP=0x00000000004ec81e
- (void).cxx_destruct;	// IMP=0x00000000004ec80b
- (unsigned short)domain;	// IMP=0x00000000004ec800
- (id)label;	// IMP=0x00000000004ec7e1
- (id)propertyDictionary;	// IMP=0x00000000004ec70d
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000004ec60a
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x00000000004ec513
- (id)initFromMomentNode:(id)arg1 toFeatureNode:(id)arg2 numberOfRelevantAssets:(unsigned long long)arg3 relevantAssetUUIDs:(id)arg4;	// IMP=0x00000000004ec46f
- (id)initFromMomentNode:(id)arg1 toFeatureNode:(id)arg2 numberOfRelevantAssets:(unsigned long long)arg3 allAssetUUIDs:(id)arg4;	// IMP=0x00000000004ec3db

@end

