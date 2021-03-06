//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXMockAssetsDataSource
{
    NSArray *_assetsBySection;	// 8 = 0x8
    NSArray *_assetCollections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000040ed1
@property(readonly, nonatomic) NSArray *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(readonly, nonatomic) NSArray *assetsBySection; // @synthesize assetsBySection=_assetsBySection;
- (struct PXSimpleIndexPath)indexPathForObjectID:(id)arg1;	// IMP=0x0000000000040b89
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000004089c
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x0000000000040829
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000040733
- (long long)numberOfSections;	// IMP=0x00000000000406ef
- (id)initWithAssetsBySection:(id)arg1 assetCollections:(id)arg2;	// IMP=0x0000000000040583

@end

