//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, PFSceneTaxonomy;

@interface PFSceneTaxonomyNode : NSObject
{
    void *_nodeRef;	// 8 = 0x8
    PFSceneTaxonomy *_taxonomy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004c463
@property(readonly) PFSceneTaxonomy *taxonomy; // @synthesize taxonomy=_taxonomy;
- (id)description;	// IMP=0x000000000004c43a
- (unsigned long long)hash;	// IMP=0x000000000004c42c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004c3c5
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x000000000004c397
- (id)localizedSynonyms;	// IMP=0x000000000004c334
- (id)localizedLabel;	// IMP=0x000000000004c31f
- (void)traverse:(long long)arg1 visitor:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c207
@property(readonly, copy) NSSet *detectors;
@property(readonly, copy) NSSet *children;
@property(readonly, copy) NSSet *parents;
@property(readonly) double graphHighRecallThreshold;
@property(readonly) double graphHighPrecisionThreshold;
@property(readonly) double f2Threshold;
@property(readonly) double f1Threshold;
@property(readonly) double f0point5Threshold;
@property(readonly) double precision0point6Threshold;
@property(readonly) double highPrecisionThreshold;
@property(readonly) double highRecallThreshold;
@property(readonly, getter=searchThreshold) double threshold;
@property(readonly, getter=isIndexed) _Bool indexed;
@property(readonly) unsigned int sceneClassId;
@property(readonly, copy) NSString *name;
@property(readonly, getter=isRoot) _Bool root;
- (id)initWithNodeRef:(void *)arg1 taxonomy:(id)arg2;	// IMP=0x000000000004be2c

// Remaining properties
@property(readonly) double searchThreshold;

@end

