//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _REBucketFeatureTransformer
{
    unsigned long long _count;	// 8 = 0x8
    long long _bitCount;	// 16 = 0x10
    unsigned long long _min;	// 24 = 0x18
    unsigned long long _max;	// 32 = 0x20
}

+ (id)functionName;	// IMP=0x000000000003b488
@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(nonatomic) unsigned long long min; // @synthesize min=_min;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ba36
- (unsigned long long)hash;	// IMP=0x000000000003ba01
- (_Bool)_validateWithFeatures:(id)arg1;	// IMP=0x000000000003b9b5
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003b81e
- (unsigned long long)_featureCount;	// IMP=0x000000000003b813
- (long long)_bitCount;	// IMP=0x000000000003b802
- (unsigned long long)_outputType;	// IMP=0x000000000003b7f7
- (void)configureWithInvocation:(id)arg1;	// IMP=0x000000000003b682
- (void)_updateConfigurationForCount:(unsigned long long)arg1;	// IMP=0x000000000003b5e8
- (void)dealloc;	// IMP=0x000000000003b523
- (id)init;	// IMP=0x000000000003b495

@end

