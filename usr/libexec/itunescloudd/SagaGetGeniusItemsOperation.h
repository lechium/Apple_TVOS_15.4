//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaGetGeniusItemsOperation
{
    unsigned long long _seedID;	// 8 = 0x8
    unsigned int _numberOfItems;	// 16 = 0x10
    NSArray *_itemIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000068652
@property(readonly, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void)main;	// IMP=0x00100000000683f6
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 seedID:(unsigned long long)arg3 numberOfItems:(unsigned int)arg4;	// IMP=0x00100000000683a0
- (id)initWithSeedID:(unsigned long long)arg1 clientIdentity:(id)arg2 numberOfItems:(unsigned int)arg3;	// IMP=0x0010000000068325

@end

