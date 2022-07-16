//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXStoryMutableConcreteTimeline
{
    long long _bufferCapacity;	// 176 = 0xb0
    long long *_playbackStyles;	// 184 = 0xb8
    CDStruct_4cef5b45 *_assetContentInfos;	// 192 = 0xc0
    struct UIEdgeInsets *_safeAreaInsets;	// 200 = 0xc8
    CDStruct_db17f41a *_clippingAnimationInfos;	// 208 = 0xd0
    CDStruct_24e54195 *_kenBurnsAnimationInfos;	// 216 = 0xd8
    CDStruct_cac3ced6 *_transitionInfos;	// 224 = 0xe0
    CDStruct_195f2361 *_audioInfos;	// 232 = 0xe8
    unsigned long long *_clipOptions;	// 240 = 0xf0
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bd459
- (void)setStartTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000004bd312
- (void)removeAllClipsAndSegments;	// IMP=0x00000000004bd282
- (long long)addClipWithTimeRange:(CDStruct_e83c9415)arg1 frame:(struct CGRect)arg2 info:(CDStruct_b5e02abd)arg3 resourceIndex:(long long)arg4;	// IMP=0x00000000004bcfd3
- (long long)insertClipInTimeRange:(CDStruct_e83c9415)arg1 resourceKind:(long long)arg2 options:(unsigned long long)arg3 resourceIndex:(long long)arg4 frame:(struct CGRect)arg5 transitionInfo:(CDStruct_cac3ced6)arg6 kenBurnsAnimationInfo:(CDStruct_24e54195)arg7;	// IMP=0x00000000004bcda9
- (void)setTimeline:(id)arg1;	// IMP=0x00000000004bcd57
- (long long)_appendSegmentFromTimeline:(id)arg1 withIdentifier:(long long)arg2;	// IMP=0x00000000004bcaca
- (void)appendTimeRange:(CDStruct_e83c9415)arg1 fromTimeline:(id)arg2;	// IMP=0x00000000004bca20
- (void)appendTimeline:(id)arg1;	// IMP=0x00000000004bc3f5
- (long long)addSegmentWithTimeRange:(CDStruct_e83c9415)arg1 info:(CDStruct_ae7b37d2)arg2;	// IMP=0x00000000004bc2d3
- (void)modifyInfoForFinalSegmentWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x00000000004bc047
- (long long)appendSegmentWithDurationInfo:(CDStruct_bb38be21)arg1 clipCount:(long long)arg2 compositionInfo:(CDStruct_99303aee)arg3 configuration:(CDUnknownBlockType)arg4;	// IMP=0x00000000004bb422
- (void)dealloc;	// IMP=0x00000000004bb371

@end

