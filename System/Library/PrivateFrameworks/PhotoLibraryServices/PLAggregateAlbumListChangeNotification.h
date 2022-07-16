//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLAggregateAlbumList, PLAssetContainerListChangeNotification;

@interface PLAggregateAlbumListChangeNotification
{
    PLAggregateAlbumList *_albumList;	// 8 = 0x8
    PLAssetContainerListChangeNotification *_note;	// 16 = 0x10
    unsigned long long _indexOffet;	// 24 = 0x18
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;	// IMP=0x000000000039e7b8
- (void).cxx_destruct;	// IMP=0x000000000039e759
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;	// IMP=0x000000000039e73c
- (id)changedObjects;	// IMP=0x000000000039e71f
- (id)insertedObjects;	// IMP=0x000000000039e702
- (id)deletedObjects;	// IMP=0x000000000039e6e5
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;	// IMP=0x000000000039e690
- (id)changedIndexesRelativeToSnapshot;	// IMP=0x000000000039e618
- (id)changedIndexes;	// IMP=0x000000000039e5a0
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039e503
- (id)insertedIndexes;	// IMP=0x000000000039e48b
- (id)deletedIndexes;	// IMP=0x000000000039e413
- (_Bool)shouldReload;	// IMP=0x000000000039e3f6
- (id)albumList;	// IMP=0x000000000039e3e1
- (id)object;	// IMP=0x000000000039e3cc
- (void)dealloc;	// IMP=0x000000000039e365
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;	// IMP=0x000000000039e2b0

@end

