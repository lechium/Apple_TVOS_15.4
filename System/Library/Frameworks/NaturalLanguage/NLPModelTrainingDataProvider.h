//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NLPModelTrainingDataProvider
{
    unsigned long long _numberOfInstances;	// 8 = 0x8
    void *_dataSource;	// 16 = 0x10
    CDUnknownBlockType _instanceDataProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002574e
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000251c2
- (unsigned long long)numberOfInstances;	// IMP=0x00000000000251b1
- (id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void *)arg3 instanceDataProvider:(CDUnknownBlockType)arg4;	// IMP=0x000000000002510f

@end
