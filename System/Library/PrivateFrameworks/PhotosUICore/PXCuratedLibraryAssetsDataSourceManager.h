//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryMutableAssetsDataSourceManager-Protocol.h>

@class NSDictionary, NSPredicate, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXPhotoKitAssetsDataSourceManager, PXUpdater, PXVisualPositionsChangeDetails;
@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;

@interface PXCuratedLibraryAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver>
{
    struct {
        _Bool isSelectingAssets;
        _Bool visibleAssetCollections;
        _Bool willTransitionFromZoomLevelToZoomLevel;
        _Bool didTransitionFromZoomLevelToZoomLevel;
        _Bool dominantAssetCollectionReferenceForZoomLevel;
        _Bool transitionTypeFromZoomLevelToZoomLevel;
    } _delegateRespondsTo;	// 8 = 0x8
    NSDictionary *_dataSourceManagerByZoomLevel;	// 16 = 0x10
    _Bool _isForcingSections;	// 24 = 0x18
    _Bool _canIncludeUnsavedSyndicatedAssets;	// 25 = 0x19
    _Bool _canLoadData;	// 26 = 0x1a
    _Bool _wantsCuration;	// 27 = 0x1b
    id <PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;	// 32 = 0x20
    long long _zoomLevel;	// 40 = 0x28
    NSPredicate *_allPhotosFilterPredicate;	// 48 = 0x30
    PXUpdater *_updater;	// 56 = 0x38
    PXCuratedLibraryAssetsDataSourceManagerConfiguration *_configuration;	// 64 = 0x40
    long long _zoomLevelForCurrentDataSourceManager;	// 72 = 0x48
    PXAssetsDataSource *_currentDataSource;	// 80 = 0x50
    long long _currentDataSourceZoomLevel;	// 88 = 0x58
    PXVisualPositionsChangeDetails *_lastVisualPositionsChangeDetails;	// 96 = 0x60
    long long _lastTransitionType;	// 104 = 0x68
    long long _lastVisualPositionsChangeFromDataSourceIdentifier;	// 112 = 0x70
    long long _lastVisualPositionsChangeToDataSourceIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000008b7f9f
@property(nonatomic) long long lastVisualPositionsChangeToDataSourceIdentifier; // @synthesize lastVisualPositionsChangeToDataSourceIdentifier=_lastVisualPositionsChangeToDataSourceIdentifier;
@property(nonatomic) long long lastVisualPositionsChangeFromDataSourceIdentifier; // @synthesize lastVisualPositionsChangeFromDataSourceIdentifier=_lastVisualPositionsChangeFromDataSourceIdentifier;
@property(nonatomic) long long lastTransitionType; // @synthesize lastTransitionType=_lastTransitionType;
@property(retain, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails; // @synthesize lastVisualPositionsChangeDetails=_lastVisualPositionsChangeDetails;
@property(nonatomic) long long currentDataSourceZoomLevel; // @synthesize currentDataSourceZoomLevel=_currentDataSourceZoomLevel;
@property(retain, nonatomic) PXAssetsDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(nonatomic) _Bool wantsCuration; // @synthesize wantsCuration=_wantsCuration;
@property(nonatomic) long long zoomLevelForCurrentDataSourceManager; // @synthesize zoomLevelForCurrentDataSourceManager=_zoomLevelForCurrentDataSourceManager;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) _Bool canLoadData; // @synthesize canLoadData=_canLoadData;
@property(readonly, nonatomic) _Bool canIncludeUnsavedSyndicatedAssets; // @synthesize canIncludeUnsavedSyndicatedAssets=_canIncludeUnsavedSyndicatedAssets;
@property(readonly, nonatomic) NSPredicate *allPhotosFilterPredicate; // @synthesize allPhotosFilterPredicate=_allPhotosFilterPredicate;
@property(readonly, nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) __weak id <PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000008b7d32
- (void)_updateDataSource;	// IMP=0x00000000008b681a
- (void)_invalidateDataSource;	// IMP=0x00000000008b67d6
- (void)_updateCuration;	// IMP=0x00000000008b66c4
- (void)_invalidateCuration;	// IMP=0x00000000008b6680
- (void)_updateDataSourceManagers;	// IMP=0x00000000008b6225
- (void)_invalidateDataSourceManagers;	// IMP=0x00000000008b61e1
- (void)_updatePropertiesDerivedFromZoomLevel;	// IMP=0x00000000008b619e
- (void)_invalidatePropertiesDerivedFromZoomLevel;	// IMP=0x00000000008b615a
- (void)setNeedsUpdate;	// IMP=0x00000000008b6146
- (void)didPerformChanges;	// IMP=0x00000000008b60dc
- (void)resumeChangeDelivery:(id)arg1;	// IMP=0x00000000008b6055
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x00000000008b5f70
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;	// IMP=0x00000000008b5e59
- (_Bool)forceAccurateAllSectionsIfNeeded;	// IMP=0x00000000008b5c74
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;	// IMP=0x00000000008b5b98
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;	// IMP=0x00000000008b5b3e
- (void)loadIfNeeded;	// IMP=0x00000000008b5ad9
- (void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;	// IMP=0x00000000008b5a15
- (id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2;	// IMP=0x00000000008b59c5
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg3;	// IMP=0x00000000008b5937
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2;	// IMP=0x00000000008b58ae
- (_Bool)forceAllPhotosAccurateIfNeeded;	// IMP=0x00000000008b5741
@property(readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property(readonly, nonatomic) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
- (id)_photosDataSourceForZoomLevel:(long long)arg1;	// IMP=0x00000000008b5566
- (unsigned long long)libraryStateForZoomLevel:(long long)arg1;	// IMP=0x00000000008b546c
- (id)dataSourceForZoomLevel:(long long)arg1;	// IMP=0x00000000008b541c
- (id)dataSourceManagerForZoomLevel:(long long)arg1;	// IMP=0x00000000008b533e
- (void)setCanIncludeUnsavedSyndicatedAssets:(_Bool)arg1;	// IMP=0x00000000008b5223
- (void)setAllPhotosFilterPredicate:(id)arg1;	// IMP=0x00000000008b50c4
- (void)setZoomLevel:(long long)arg1;	// IMP=0x00000000008b507b
- (long long)transitionTypeFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;	// IMP=0x00000000008b501a
- (id)visualPositionsChangeDetailsFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;	// IMP=0x00000000008b4fb2
- (id)assetsInAssetCollection:(id)arg1;	// IMP=0x00000000008b4e67
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;	// IMP=0x00000000008b4dea
- (id)createInitialDataSource;	// IMP=0x00000000008b4dd1
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000008b4b38
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000008b4ade
- (id)init;	// IMP=0x00000000008b4a64

// Remaining properties
@property(nonatomic) long long backgroundFetchOriginSection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSPredicate *filterPredicate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

