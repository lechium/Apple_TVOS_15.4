//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXStoryRecipeAssetEdits : NSObject
{
    id <PXDisplayAsset> _keyAsset;	// 8 = 0x8
    id <PXDisplayAssetFetchResult> _userCuratedAssets;	// 16 = 0x10
    CDStruct_5d4c7ed3 _overallDurationInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000331de7
@property(readonly, nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> userCuratedAssets; // @synthesize userCuratedAssets=_userCuratedAssets;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
- (id)copyWithOverallDurationInfo:(CDStruct_5d4c7ed3)arg1 userCuratedAssets:(id)arg2;	// IMP=0x0000000000331ceb
- (id)copyWithKeyAsset:(id)arg1;	// IMP=0x0000000000331c18
- (id)description;	// IMP=0x0000000000331ab7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003317b0
- (unsigned long long)hash;	// IMP=0x000000000033176c
- (id)initWithKeyAsset:(id)arg1 overallDurationInfo:(CDStruct_5d4c7ed3)arg2 userCuratedAssets:(id)arg3;	// IMP=0x00000000003316a1
- (id)init;	// IMP=0x0000000000331650

@end
