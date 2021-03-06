//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature;

@interface _REHasFeatureRuleCondition <REAutomaticExportedInterface>
{
    _Bool _contains;	// 8 = 0x8
    REFeature *_feature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cd9cf
@property(readonly, nonatomic) _Bool contains; // @synthesize contains=_contains;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd953
- (id)_inflectionFeatureValuePairs;	// IMP=0x00000000000cd93a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd88e
- (unsigned long long)hash;	// IMP=0x00000000000cd858
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;	// IMP=0x00000000000cd7d8
- (id)_notCondition;	// IMP=0x00000000000cd78a
- (id)_dependentFeatures;	// IMP=0x00000000000cd763
- (id)initWithFeature:(id)arg1 contains:(_Bool)arg2;	// IMP=0x00000000000cd6e3

@end

