//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _REConcreteFeature
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _featureType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003be76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003be1b
- (id)_rootFeatures;	// IMP=0x000000000003bde5
- (unsigned long long)hash;	// IMP=0x000000000003bdb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003bd0a
- (unsigned long long)featureType;	// IMP=0x000000000003bcf9
- (long long)_bitCount;	// IMP=0x000000000003bccc
- (id)name;	// IMP=0x000000000003bcb7
- (id)initWithName:(id)arg1 featureType:(unsigned long long)arg2;	// IMP=0x000000000003bc2b

@end
