//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableMockAssetsDataSourceManager-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXMockAssetsDataSource, PXSectionedChangeDetailsCoalescer;

@interface PXMockAssetsDataSourceManager <PXMutableMockAssetsDataSourceManager>
{
    NSArray *_initialAssetsBySection;	// 8 = 0x8
    NSArray *_initialAssetCollections;	// 16 = 0x10
    _Bool _isPerformingDataSourceChanges;	// 24 = 0x18
    NSMutableArray *_nextAssetsBySection;	// 32 = 0x20
    NSMutableArray *_nextAssetCollections;	// 40 = 0x28
    PXSectionedChangeDetailsCoalescer *_changeDetailsCoalescer;	// 48 = 0x30
    _Bool _changeIsReload;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000042c93
- (void)markChangeAsReload;	// IMP=0x0000000000042be0
- (void)changeSectionAtIndex:(long long)arg1 toAssetCollection:(id)arg2;	// IMP=0x0000000000042981
- (void)removeSectionAtIndex:(long long)arg1;	// IMP=0x000000000004271b
- (void)insertSectionAtIndex:(long long)arg1 count:(long long)arg2 assetProperties:(id)arg3 assetCollection:(id)arg4;	// IMP=0x0000000000042309
- (void)changeItemAtIndexPath:(id)arg1 toAssetProperties:(id)arg2;	// IMP=0x0000000000041ed9
- (void)removeItemAtIndexPath:(id)arg1;	// IMP=0x0000000000041b19
- (void)insertItemAtIndexPath:(id)arg1 assetProperties:(id)arg2;	// IMP=0x00000000000416e9
- (void)_appendIncrementalChangeDetails:(id)arg1;	// IMP=0x0000000000041661
- (void)performDataSourceChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000410fb
- (id)createInitialDataSource;	// IMP=0x00000000000410b2
- (id)init;	// IMP=0x0000000000041038
- (id)initWithConfigurationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f5c

// Remaining properties
@property(readonly, nonatomic) PXMockAssetsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
