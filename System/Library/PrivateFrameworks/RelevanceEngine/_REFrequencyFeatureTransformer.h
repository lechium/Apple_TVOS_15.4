//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REFeatureValueCounter;

@interface _REFrequencyFeatureTransformer
{
    REFeatureValueCounter *_counter;	// 8 = 0x8
    long long _validCount;	// 16 = 0x10
}

+ (_Bool)supportsPersistence;	// IMP=0x0000000000001d35
+ (_Bool)supportsInvalidation;	// IMP=0x0000000000001d2d
+ (id)functionName;	// IMP=0x0000000000001d20
- (void).cxx_destruct;	// IMP=0x0000000000002223
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002218
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002161
- (unsigned long long)hash;	// IMP=0x00000000000020fb
- (void)increaseCountForFeatureValue:(id)arg1;	// IMP=0x00000000000020de
- (_Bool)_validateWithFeatures:(id)arg1;	// IMP=0x00000000000020a8
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000001fd9
- (unsigned long long)_outputType;	// IMP=0x0000000000001fce
- (unsigned long long)_featureCount;	// IMP=0x0000000000001fc3
- (long long)_bitCount;	// IMP=0x0000000000001fb6
- (void)_updateConfigurationForCount:(unsigned long long)arg1;	// IMP=0x0000000000001f16
- (void)configureWithInvocation:(id)arg1;	// IMP=0x0000000000001de9
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001dcc
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001daf
- (id)init;	// IMP=0x0000000000001d3d

@end

