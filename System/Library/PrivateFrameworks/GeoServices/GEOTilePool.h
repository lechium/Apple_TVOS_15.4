//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileCache;
@protocol OS_dispatch_source;

@interface GEOTilePool : NSObject
{
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 8 = 0x8
    struct _GEOGenericContainer<_GEOTileKey, GEOTileData *, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _pool;	// 16 = 0x10
    struct _GEOGenericContainer<_GEOTileKey, id, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _decodedPool;	// 176 = 0xb0
    GEOTileCache *_cache;	// 336 = 0x150
}

- (id).cxx_construct;	// IMP=0x00000000010c34a9
- (void).cxx_destruct;	// IMP=0x00000000010c33df
- (void)_receivedMemoryNotification;	// IMP=0x00000000010c335e
- (void)_enteredBackground:(id)arg1;	// IMP=0x00000000010c334c
@property unsigned long long maxCost;
@property unsigned long long maxCapacity;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;	// IMP=0x00000000010c2f30
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000010c2af2
- (void)enumerate:(CDUnknownBlockType)arg1;	// IMP=0x00000000010c28f3
- (void)removeAllObjects;	// IMP=0x00000000010c27bc
- (void)removeTilesWithKeys:(id)arg1;	// IMP=0x00000000010c2379
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000010c2307
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;	// IMP=0x00000000010c1f44
- (id)tileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000010c1d6b
- (id)init;	// IMP=0x00000000010c1d54
- (id)initWithSideCacheEnabled:(_Bool)arg1;	// IMP=0x00000000010c1aa6
@property(readonly, nonatomic) unsigned long long currentCost;
@property(readonly, nonatomic) unsigned long long currentCount;

@end

