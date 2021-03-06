//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLDataProvider, NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider
{
    NLDataProvider *_dataProvider;	// 104 = 0x68
    NSArray *_indexes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000003e869
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000003e84c
- (unsigned long long)numberOfLabels;	// IMP=0x000000000003e82f
- (id)documentFrequencyMap;	// IMP=0x000000000003e812
- (id)vocabularyMap;	// IMP=0x000000000003e7f5
- (id)inverseLabelMap;	// IMP=0x000000000003e7d8
- (id)labelMap;	// IMP=0x000000000003e7bb
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x000000000003e79e
- (void)_generateMaps;	// IMP=0x000000000003e798
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003e719
- (unsigned long long)numberOfInstances;	// IMP=0x000000000003e6fc
- (id)configuration;	// IMP=0x000000000003e6df
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;	// IMP=0x000000000003e62a

@end

