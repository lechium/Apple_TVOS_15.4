//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator
{
    struct _LayoutContext _context;	// 8 = 0x8
}

- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;	// IMP=0x00000000006447e9
- (id)geometryKinds;	// IMP=0x00000000006447b9
- (struct CGSize)size;	// IMP=0x00000000006447a0
- (struct CGSize)estimatedSize;	// IMP=0x000000000064478e
- (id)initWithMetrics:(id)arg1;	// IMP=0x0000000000644349

// Remaining properties
@property(copy, nonatomic) PXMemoriesFeedWidgetLayoutMetrics *metrics; // @dynamic metrics;

@end

