//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _REWidthFeatureTransformer
{
    unsigned long long _mask;	// 8 = 0x8
    unsigned long long _width;	// 16 = 0x10
    unsigned long long _shift;	// 24 = 0x18
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce66f
- (unsigned long long)hash;	// IMP=0x00000000000ce64f
- (_Bool)_validateWithFeatures:(id)arg1;	// IMP=0x00000000000ce603
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000ce5cc
- (unsigned long long)_featureCount;	// IMP=0x00000000000ce5c1
- (long long)_bitCount;	// IMP=0x00000000000ce5b0
- (unsigned long long)_outputType;	// IMP=0x00000000000ce5a5
- (id)initWithWidth:(unsigned long long)arg1 shift:(unsigned long long)arg2;	// IMP=0x00000000000ce4b1

@end

