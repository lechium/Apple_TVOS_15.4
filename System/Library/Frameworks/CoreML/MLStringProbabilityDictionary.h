//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MLStringProbabilityDictionary
{
    map_3cdfdc0a _mapStrLabelToIndex;	// 32 = 0x20
}

+ (id)probabilityDictionaryForStringLabels:(id)arg1;	// IMP=0x000000000015d17d
- (id).cxx_construct;	// IMP=0x000000000015baa6
- (void).cxx_destruct;	// IMP=0x000000000015ba90
@property(nonatomic) map_3cdfdc0a mapStrLabelToIndex; // @synthesize mapStrLabelToIndex=_mapStrLabelToIndex;
- (id)copy;	// IMP=0x000000000015b6e9
- (id)keyEnumerator;	// IMP=0x000000000015b6c6
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000015b5e9
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000015b410
- (id)objectForKey:(id)arg1;	// IMP=0x000000000015b35e
- (unsigned long long)count;	// IMP=0x000000000015b34c
- (id)initWithStrLabels:(id)arg1;	// IMP=0x000000000015b01d

@end

