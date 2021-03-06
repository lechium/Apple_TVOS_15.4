//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout;

@interface PXStoryTransitionLayout
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    PXGLayout *_contentLayout;	// 32 = 0x20
    struct CGRect _contentFrameOverride;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000088ad6
@property(nonatomic) struct CGRect contentFrameOverride; // @synthesize contentFrameOverride=_contentFrameOverride;
@property(readonly, nonatomic) PXGLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
- (void)_updateSublayoutPositions;	// IMP=0x0000000000088a14
- (void)_invalidateSublayoutPositions;	// IMP=0x0000000000088920
- (void)update;	// IMP=0x0000000000088764
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)arg1;	// IMP=0x00000000000886c6
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x000000000008863e
- (long long)scrollableAxis;	// IMP=0x0000000000088636
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x00000000000885a5
- (void)referenceSizeDidChange;	// IMP=0x0000000000088564
- (id)initWithContentLayout:(id)arg1;	// IMP=0x00000000000883bd
- (id)init;	// IMP=0x0000000000088343

@end

