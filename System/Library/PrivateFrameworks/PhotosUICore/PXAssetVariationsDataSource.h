//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PHAsset;

@interface PXAssetVariationsDataSource
{
    PHAsset *_asset;	// 8 = 0x8
    NSArray *_variations;	// 16 = 0x10
}

+ (id)emptyDataSource;	// IMP=0x00000000006bb858
- (void).cxx_destruct;	// IMP=0x00000000006bb827
@property(readonly, copy, nonatomic) NSArray *variations; // @synthesize variations=_variations;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000006bb7e4
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x00000000006bb7dc
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000006bb7bf
- (long long)numberOfSections;	// IMP=0x00000000006bb7b4
- (id)initWithVariations:(id)arg1 asset:(id)arg2;	// IMP=0x00000000006bb706
- (id)init;	// IMP=0x00000000006bb68c

@end

