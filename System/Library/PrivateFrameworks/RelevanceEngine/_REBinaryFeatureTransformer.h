//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _REBinaryFeatureTransformer
{
    unsigned long long _threshold;	// 8 = 0x8
}

+ (id)functionName;	// IMP=0x000000000003d3ec
@property(nonatomic) unsigned long long threshold; // @synthesize threshold=_threshold;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d60d
- (unsigned long long)hash;	// IMP=0x000000000003d5f8
- (_Bool)_validateWithFeatures:(id)arg1;	// IMP=0x000000000003d5ac
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003d582
- (unsigned long long)_outputType;	// IMP=0x000000000003d57a
- (unsigned long long)_featureCount;	// IMP=0x000000000003d56f
- (long long)_bitCount;	// IMP=0x000000000003d564
- (void)configureWithInvocation:(id)arg1;	// IMP=0x000000000003d4e2
- (void)dealloc;	// IMP=0x000000000003d46b
- (id)init;	// IMP=0x000000000003d3f9

@end

