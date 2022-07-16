//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXStoryAspectFittingTimeline
{
    long long _keySegmentIdentifier;	// 8 = 0x8
    NSArray *_keySegmentDisplayAssetClips;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007439f2
@property(readonly, nonatomic) NSArray *keySegmentDisplayAssetClips; // @synthesize keySegmentDisplayAssetClips=_keySegmentDisplayAssetClips;
@property(readonly, nonatomic) long long keySegmentIdentifier; // @synthesize keySegmentIdentifier=_keySegmentIdentifier;
- (void)_enumerateClipsKeySegmentWithTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000074362c
- (void)_setupKeySegmentDisplayAssetClips;	// IMP=0x000000000074290e
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000742494
- (id)initWithOriginalTimeline:(id)arg1 keySegmentMix:(CDStruct_982265da)arg2;	// IMP=0x0000000000742421

@end

