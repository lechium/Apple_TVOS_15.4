//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PXFileBackedAssetsDataSource
{
    NSDictionary *_assetCollectionBySection;	// 8 = 0x8
    NSDictionary *_assetDescriptionsBySection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000557d29
@property(readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection; // @synthesize assetDescriptionsBySection=_assetDescriptionsBySection;
- (id)inputForItem:(id)arg1;	// IMP=0x0000000000557c6b
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x0000000000557801
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000005575c0
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000557336
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000055732e
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000055728c
- (long long)numberOfSections;	// IMP=0x0000000000557248
- (id)init;	// IMP=0x00000000005571ce
- (id)initWithFileURLsBySection:(id)arg1;	// IMP=0x00000000005570f6
- (id)initWithFileBackedAssetDescriptionsBySection:(id)arg1;	// IMP=0x0000000000556fb5
- (id)photosGraphSuggestedContributions;	// IMP=0x00000000003cf09a

@end
