//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexSet, PXEditorialLayoutMetrics, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator
{
    _Bool _isPrepared;	// 8 = 0x8
    PXMagazineLayoutTileMaker *_tileMaker;	// 16 = 0x10
    struct CGSize _actualSize;	// 24 = 0x18
    struct _PXLayoutGeometry *_geometries;	// 40 = 0x28
    struct CGRect *_rects;	// 48 = 0x30
    unsigned long long _geometriesCount;	// 56 = 0x38
    NSIndexSet *_geometrySet;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000008cf4b8
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000008cf304
- (void)_prepareIfNeeded;	// IMP=0x00000000008ceceb
- (void)_prepareBuffersForCount:(unsigned long long)arg1;	// IMP=0x00000000008cec8a
- (struct CGSize)size;	// IMP=0x00000000008cec5b
- (struct CGSize)estimatedSize;	// IMP=0x00000000008ceae0
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000008ce8b3
- (void)_getContentGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000008ce7bd
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;	// IMP=0x00000000008ce717
- (void)invalidate;	// IMP=0x00000000008ce6db
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;	// IMP=0x00000000008ce5e6
- (id)geometryKinds;	// IMP=0x00000000008ce5d1
- (void)dealloc;	// IMP=0x00000000008ce580
- (id)initWithMetrics:(id)arg1;	// IMP=0x00000000008ce363

// Remaining properties
@property(copy, nonatomic) PXEditorialLayoutMetrics *metrics; // @dynamic metrics;

@end

