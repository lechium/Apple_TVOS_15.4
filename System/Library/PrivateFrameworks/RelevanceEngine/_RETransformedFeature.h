//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _hash;	// 16 = 0x10
    REFeatureSet *_features;	// 24 = 0x18
    REFeatureTransformer *_transformer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009a6c7
@property(readonly, nonatomic) REFeatureTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) REFeatureSet *features; // @synthesize features=_features;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009a616
- (void)_computeHash;	// IMP=0x000000000009a4b3
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;	// IMP=0x000000000009a365
- (id)_dependentFeatures;	// IMP=0x000000000009a350
- (id)_rootFeatures;	// IMP=0x000000000009a33b
- (long long)_bitCount;	// IMP=0x000000000009a31e
- (unsigned long long)hash;	// IMP=0x000000000009a30d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009a252
- (unsigned long long)featureType;	// IMP=0x000000000009a235
- (id)name;	// IMP=0x000000000009a220
- (id)initWithTransformer:(id)arg1 features:(id)arg2;	// IMP=0x0000000000099ed1

@end

