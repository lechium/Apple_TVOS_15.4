//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCArrayStore;

@interface PXStoryTransformedTimeline
{
    PXCArrayStore *_transformedRectsStore;	// 8 = 0x8
    PXCArrayStore *_transformedClipInfosStore;	// 16 = 0x10
    struct CGAffineTransform _transform;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003d400e
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) PXCArrayStore *transformedClipInfosStore; // @synthesize transformedClipInfosStore=_transformedClipInfosStore;
@property(readonly, nonatomic) PXCArrayStore *transformedRectsStore; // @synthesize transformedRectsStore=_transformedRectsStore;
- (struct CGSize)originalSize;	// IMP=0x00000000003d3f69
- (struct CGRect)frameForSegmentWithIdentifier:(long long)arg1;	// IMP=0x00000000003d3ea2
- (id)clipWithIdentifier:(long long)arg1;	// IMP=0x00000000003d3d2d
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d3c14
- (struct CGSize)size;	// IMP=0x00000000003d3b7a
- (void)_transformRects:(const struct CGRect *)arg1 clipInfos:(const CDStruct_b5e02abd *)arg2 count:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003d3a9b
- (struct CGRect)transformedRectForOriginalClipInfo:(const CDStruct_b5e02abd *)arg1 originalRect:(struct CGRect)arg2;	// IMP=0x00000000003d3a35
- (struct CGRect)_untransformRect:(struct CGRect)arg1;	// IMP=0x00000000003d39aa
- (id)description;	// IMP=0x00000000003d3840
- (id)initWithOriginalTimeline:(id)arg1 transform:(struct CGAffineTransform)arg2;	// IMP=0x00000000003d3763
- (id)initWithOriginalTimeline:(id)arg1;	// IMP=0x00000000003d3728

@end
