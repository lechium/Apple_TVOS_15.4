//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition
{
    PXLayoutGenerator *_layoutGenerator;	// 8 = 0x8
    struct _PXLayoutGeometry *_layoutGeometries;	// 16 = 0x10
    long long _layoutGeometriesCapacity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ed96a
@property(readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;
- (struct CGRect)contentBounds;	// IMP=0x00000000000ed881
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ed7a3
- (void)updateEstimatedSublayoutGeometries;	// IMP=0x00000000000ed5ce
- (void)invalidateLayout;	// IMP=0x00000000000ed5bc
- (void)referenceSizeDidChange;	// IMP=0x00000000000ed57b
- (void)dealloc;	// IMP=0x00000000000ed53a

@end

