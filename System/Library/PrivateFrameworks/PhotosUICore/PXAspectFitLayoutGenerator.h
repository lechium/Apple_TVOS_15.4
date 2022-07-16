//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator
{
    struct _PXLayoutGeometry *_geometries;	// 8 = 0x8
    unsigned long long _geometriesCount;	// 16 = 0x10
    long long _lastGeometryIndex;	// 24 = 0x18
    struct CGSize _contentSize;	// 32 = 0x20
    double _currentRowUnmodifiedHeight;	// 48 = 0x30
    double _currentRowFinalHeight;	// 56 = 0x38
}

- (struct _PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1 atPosition:(struct CGPoint)arg2 withHorizontalGap:(double)arg3;	// IMP=0x0000000000084e2f
- (double)_rowHeightForItemsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000084c50
- (void)_fillRowFromIndex:(long long *)arg1 withCount:(long long)arg2;	// IMP=0x00000000000848c9
- (void)_computeGeometriesIfNeeded;	// IMP=0x00000000000846c8
- (struct _PXLayoutGeometry)_lastGeometry;	// IMP=0x00000000000845d4
- (void)_prepareGeometriesForCount:(unsigned long long)arg1;	// IMP=0x000000000008458e
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;	// IMP=0x000000000008426c
- (struct CGSize)size;	// IMP=0x0000000000084254
- (struct CGSize)estimatedSize;	// IMP=0x0000000000084186
- (void)invalidate;	// IMP=0x0000000000084146
- (void)dealloc;	// IMP=0x00000000000840f4
- (id)initWithMetrics:(id)arg1;	// IMP=0x000000000008409c

// Remaining properties
@property(copy, nonatomic) PXAspectFitLayoutMetrics *metrics; // @dynamic metrics;

@end
