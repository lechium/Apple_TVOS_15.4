//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REFeature;

@interface RECustomRelevanceProvider
{
    REFeature *_feature;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
}

+ (id)relevanceSimulatorID;	// IMP=0x000000000005e938
- (void).cxx_destruct;	// IMP=0x000000000005ef42
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)description;	// IMP=0x000000000005ee6e
- (unsigned long long)_hash;	// IMP=0x000000000005ee31
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ecd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ec71
- (id)dictionaryEncoding;	// IMP=0x000000000005ea92
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005e945
- (void)dealloc;	// IMP=0x000000000005e8f7
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000005e86f

@end

