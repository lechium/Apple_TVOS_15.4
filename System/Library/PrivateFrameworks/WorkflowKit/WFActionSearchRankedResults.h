//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface WFActionSearchRankedResults
{
    NSMutableDictionary *_displayNames;	// 40 = 0x28
    NSMutableDictionary *_records;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000cf56
- (id)rankedGroups;	// IMP=0x000000000000cc5d
- (void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000000cb74
- (void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000000cb00
- (id)init;	// IMP=0x000000000000ca6b

@end

