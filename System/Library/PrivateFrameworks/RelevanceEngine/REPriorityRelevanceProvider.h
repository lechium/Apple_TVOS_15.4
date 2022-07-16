//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REPriorityRelevanceProvider
{
    float _priority;	// 8 = 0x8
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000aef19
@property(readonly, nonatomic) float priority; // @synthesize priority=_priority;
- (id)description;	// IMP=0x00000000000af19f
- (unsigned long long)_hash;	// IMP=0x00000000000af145
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af0ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af069
- (id)dictionaryEncoding;	// IMP=0x00000000000aefb2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000aef26
- (id)initWithPriority:(float)arg1;	// IMP=0x00000000000aee90

@end

