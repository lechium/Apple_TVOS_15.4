//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder
{
    struct deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> _pieces;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x00000000009d3dc7
- (void).cxx_destruct;	// IMP=0x00000000009d3db6
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x00000000009d3d8d
- (id)_lastTile;	// IMP=0x00000000009d3d49
- (id)_firstTile;	// IMP=0x00000000009d3d10
- (Matrix_8746f91e)_lastPoint;	// IMP=0x00000000009d3c4d
- (Matrix_8746f91e)_firstPoint;	// IMP=0x00000000009d3b95
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x00000000009d3a66
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x00000000009d3943
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x00000000009d2ffb
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x00000000009d2295
- (void)_buildCompleteEdge;	// IMP=0x00000000009d2167
- (unsigned long long)_maxTileCount;	// IMP=0x00000000009d215c
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;	// IMP=0x00000000009d1dee

@end

