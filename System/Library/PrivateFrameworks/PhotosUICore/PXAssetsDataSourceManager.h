//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableAssetsDataSourceManager-Protocol.h>

@class NSPredicate, NSString, PXAssetsDataSource;

@interface PXAssetsDataSourceManager <PXMutableAssetsDataSourceManager>
{
    _Bool _isLoadingInitialDataSource;	// 8 = 0x8
    _Bool _isBackgroundFetching;	// 9 = 0x9
    _Bool _supportsFiltering;	// 10 = 0xa
    NSString *_localizedEmptyPlaceholderTitle;	// 16 = 0x10
    NSString *_localizedEmptyPlaceholderMessage;	// 24 = 0x18
    NSString *_localizedLoadingInitialDataSourceMessage;	// 32 = 0x20
    NSPredicate *_filterPredicate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003d500b
@property(readonly, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) _Bool supportsFiltering; // @synthesize supportsFiltering=_supportsFiltering;
@property(readonly, nonatomic) _Bool isBackgroundFetching; // @synthesize isBackgroundFetching=_isBackgroundFetching;
@property(readonly, nonatomic) _Bool isLoadingInitialDataSource; // @synthesize isLoadingInitialDataSource=_isLoadingInitialDataSource;
@property(readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage; // @synthesize localizedLoadingInitialDataSourceMessage=_localizedLoadingInitialDataSourceMessage;
@property(readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderMessage; // @synthesize localizedEmptyPlaceholderMessage=_localizedEmptyPlaceholderMessage;
@property(readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle; // @synthesize localizedEmptyPlaceholderTitle=_localizedEmptyPlaceholderTitle;
- (void)setFilteringDisabled:(_Bool)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000003d4f91
- (void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;	// IMP=0x00000000003d4f7f
- (void)setFilterPredicate:(id)arg1;	// IMP=0x00000000003d4f1f
- (void)waitForAvailabilityOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d4d2a
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)stopExcludingAssets:(id)arg1;	// IMP=0x00000000003d4d16
- (void)excludeAssetsAtIndexPaths:(id)arg1;	// IMP=0x00000000003d4d10
- (void)stopForceIncludingAllAssets;	// IMP=0x00000000003d4d0a
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;	// IMP=0x00000000003d4d04
- (void)startBackgroundFetchIfNeeded;	// IMP=0x00000000003d4cfe
- (void)ensureStartingSectionHasContent;	// IMP=0x00000000003d4c48
- (void)ensureLastSectionHasContent;	// IMP=0x00000000003d4b6f
- (void)refreshResultsForAssetCollection:(id)arg1;	// IMP=0x00000000003d4b69
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;	// IMP=0x00000000003d4b61
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;	// IMP=0x00000000003d4b59
- (_Bool)forceAccurateAllSectionsIfNeeded;	// IMP=0x00000000003d4ac0
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000003d4a10
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x00000000003d49e1
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x00000000003d49b2
- (id)mutableChangeObject;	// IMP=0x00000000003d49a9

// Remaining properties
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

