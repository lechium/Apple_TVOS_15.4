//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap
{
    NSMutableDictionary *_theMap;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x0000000000077b1f
- (id)handleFetchRequest:(id)arg1;	// IMP=0x00000000000792f4
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;	// IMP=0x00000000000791c6
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x000000000007903b
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x0000000000078ff2
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;	// IMP=0x00000000000787bb
- (id)dataForKey:(id)arg1;	// IMP=0x000000000007879e
- (void)dealloc;	// IMP=0x0000000000078750
- (id)initWithStore:(id)arg1 fromArchivedData:(id)arg2;	// IMP=0x0000000000077eb9
- (id)initWithStore:(id)arg1 fromPath:(id)arg2;	// IMP=0x0000000000077b44
- (id)initWithStore:(id)arg1;	// IMP=0x0000000000077b30

@end

