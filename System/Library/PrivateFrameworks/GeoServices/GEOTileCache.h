//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileCacheReserved;
@protocol OS_dispatch_source;

@interface GEOTileCache : NSObject
{
    GEOTileCacheReserved *_reserved;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f4487
- (void)_enteredBackground:(id)arg1;	// IMP=0x00000000002f4475
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f41a8
- (void)enumerate:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f3fa5
- (void)removeAllObjects;	// IMP=0x00000000002f3ee9
- (void)removeTilesWithKeys:(id)arg1;	// IMP=0x00000000002f3d42
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002f3cea
- (void)_removeTileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002f3c46
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;	// IMP=0x00000000002f3a77
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;	// IMP=0x00000000002f3a15
- (id)tileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002f395b
@property unsigned long long maxCost;
@property unsigned long long maxCapacity;
- (void)_receivedMemoryNotification;	// IMP=0x00000000002f37ac
- (void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2;	// IMP=0x00000000002f36c8
- (id)description;	// IMP=0x00000000002f366c
- (id)_description;	// IMP=0x00000000002f2aa4
- (void)dealloc;	// IMP=0x00000000002f29f1
- (id)init;	// IMP=0x00000000002f2768
@property(readonly, nonatomic) unsigned long long currentCost;
@property(readonly, nonatomic) unsigned long long currentCount;

@end
