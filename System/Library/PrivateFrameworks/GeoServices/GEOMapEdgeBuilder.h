//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder
{
    _Bool _buildAhead;	// 33 = 0x21
    _Bool _buildBehind;	// 34 = 0x22
    Matrix_8746f91e _firstTilePoint;	// 36 = 0x24
    Matrix_8746f91e _lastTilePoint;	// 44 = 0x2c
    GEOMapTileFinder *_currentTileFinder;	// 56 = 0x38
    CDUnknownBlockType _edgeHandler;	// 64 = 0x40
    struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> _tileKeysSeen;	// 72 = 0x48
    _Bool _searchDirection;	// 112 = 0x70
    unsigned long long _buildDirection;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x0000000000ca83d5
- (void).cxx_destruct;	// IMP=0x0000000000ca8395
@property(nonatomic) unsigned long long buildDirection; // @synthesize buildDirection=_buildDirection;
@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000000ca8339
- (id)_lastTile;	// IMP=0x0000000000ca8321
- (id)_firstTile;	// IMP=0x0000000000ca8309
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000000ca82f4
- (Matrix_8746f91e)_firstPoint;	// IMP=0x0000000000ca82df
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000000ca82c7
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x0000000000ca82af
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000000ca8297
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x0000000000ca827f
- (void)_buildCompleteEdge;	// IMP=0x0000000000ca826a
- (unsigned long long)_maxTileCount;	// IMP=0x0000000000ca8252
- (_Bool)_edgeStart:(const void *)arg1 end:(const void *)arg2 connectsTo:(const void *)arg3;	// IMP=0x0000000000ca81df
- (_Bool)_pointConnects:(const void *)arg1 rect:(const CDStruct_90e2a262 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;	// IMP=0x0000000000ca815f
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const void *)arg2 findAhead:(_Bool)arg3;	// IMP=0x0000000000ca7c96
- (void)buildEdge:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ca7c3c
- (_Bool)_findNextEdge;	// IMP=0x0000000000ca7b69
- (_Bool)_findEdgeBehind;	// IMP=0x0000000000ca79ab
- (_Bool)_findEdgeAhead;	// IMP=0x0000000000ca77ea
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;	// IMP=0x0000000000ca7763
- (id)initWithMap:(id)arg1;	// IMP=0x0000000000ca7720

@end

