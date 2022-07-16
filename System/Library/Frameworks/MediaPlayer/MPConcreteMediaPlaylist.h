//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaPlaylist <NSCopying>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
    MPMediaQuery *_itemsQuery;	// 24 = 0x18
    void *_clusterPlaylist;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000123986
- (void).cxx_destruct;	// IMP=0x0000000000122495
- (_Bool)_allowsEditing;	// IMP=0x000000000012247d
- (void)endGeneratingGeniusClusterItems;	// IMP=0x00000000001223d5
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000012224f
- (_Bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000122089
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121e28
- (void)populateWithSeedItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000121de4
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121c71
- (void)removeFirstItem;	// IMP=0x0000000000121bcf
- (void)removeAllItems;	// IMP=0x0000000000121b01
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121983
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012150d
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000121203
- (void)appendItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012102e
- (void)appendItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120e86
- (void)replaceItemsWithPersistentIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120ced
- (void)replaceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120990
- (void)_updateLibraryForPlaylistEdit:(id)arg1;	// IMP=0x0000000000120976
- (id)valuesForProperties:(id)arg1;	// IMP=0x00000000001205ea
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000120218
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001201fb
- (id)multiverseIdentifier;	// IMP=0x000000000012018a
- (unsigned long long)mediaTypes;	// IMP=0x000000000012013f
- (unsigned long long)count;	// IMP=0x0000000000120122
- (id)representativeItem;	// IMP=0x00000000001200b6
- (id)items;	// IMP=0x0000000000120099
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000011ff26
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000011fe00
- (_Bool)existsInLibrary;	// IMP=0x000000000011fd97
- (id)mediaLibrary;	// IMP=0x000000000011fd7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011fcf7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011fb23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011fac8
- (unsigned long long)hash;	// IMP=0x000000000011faab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011fa3b
- (id)itemsQuery;	// IMP=0x000000000011fa26
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;	// IMP=0x000000000011f93d

@end

