//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3QueryResultSet_BackingStore;

__attribute__((visibility("hidden")))
@interface ML3ContainerQueryResultSet
{
    _Bool _needsSorting;	// 72 = 0x48
    _Bool _needsReversing;	// 73 = 0x49
    ML3QueryResultSet_BackingStore *_sortedBackingStore;	// 80 = 0x50
    long long _containerPID;	// 88 = 0x58
    unsigned long long _entityLimit;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000113342
- (_Bool)_updateToLibraryCurrentRevision;	// IMP=0x00000000001131e7
- (unsigned long long)entityLimit;	// IMP=0x00000000001131d6
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000113149
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001130bc
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011302c
- (id)sortedBackingStoreForDisplayOrdering;	// IMP=0x000000000011280c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112784
- (void)_loadCurrentFullResults;	// IMP=0x0000000000112594
- (id)initWithQuery:(id)arg1;	// IMP=0x0000000000112396

@end

