//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection
{
    unsigned long long _containedMediaTypes;	// 8 = 0x8
    _Bool _initializedContainedMediaTypes;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    unsigned long long _itemsCount;	// 32 = 0x20
    MPMediaQuery *_itemsQuery;	// 40 = 0x28
    MPMediaItem *_representativeItem;	// 48 = 0x30
}

+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000f528b
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000f524e
+ (id)titlePropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000f5211
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f5209
+ (id)collectionWithItems:(id)arg1;	// IMP=0x00000000000f51bc
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1;	// IMP=0x000000000028a8a7
- (void).cxx_destruct;	// IMP=0x00000000000f517a
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f5009
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f4f68
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000f4eeb
- (id)multiverseIdentifier;	// IMP=0x00000000000f4e6d
@property(readonly, nonatomic) long long groupingType;
@property(readonly, nonatomic) unsigned long long mediaTypes;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) NSArray *items;
- (id)itemsQuery;	// IMP=0x00000000000f4bfa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f4a8e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f468c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f45ad
- (unsigned long long)hash;	// IMP=0x00000000000f4557
- (id)init;	// IMP=0x00000000000f4510
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;	// IMP=0x00000000000f4485
- (id)initWithItemsQuery:(id)arg1;	// IMP=0x00000000000f43f0
- (id)initWithItems:(id)arg1;	// IMP=0x00000000000f4322
- (id)_artworkCatalogRepresentativeItem;	// IMP=0x000000000028a79c
- (id)artistArtworkCatalog;	// IMP=0x000000000028a5dc
- (id)albumArtistArtworkCatalog;	// IMP=0x000000000028a41c
- (id)artworkCatalog;	// IMP=0x000000000028a333
- (_Bool)MPSD_hasDownloadingItem;	// IMP=0x00000000002dbae5
- (_Bool)MPSD_hasDownloadableItem;	// IMP=0x00000000002db955

@end

