//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXDisplayAsset;

@interface PXStoryColorNormalizationAutoAdjustment
{
    id <PXDisplayAsset> _asset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001a8b6b
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (id)adjustmentSummary;	// IMP=0x00000000001a8b39
- (_Bool)isEqualToDisplayAssetAdjustment:(id)arg1;	// IMP=0x00000000001a89eb
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x00000000001a86f2

@end
