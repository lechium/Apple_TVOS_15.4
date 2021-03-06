//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSObject, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXUpdater, PXZoomableInlineHeaderSectionInfoMetaDataStore, PXZoomableInlineHeadersDataSource;
@protocol OS_dispatch_queue;

@interface PXZoomableInlineHeadersDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    PXAssetsDataSourceManager *_assetsDataSourceManager;	// 8 = 0x8
    PXAssetsDataSource *_previousAssetsDataSource;	// 16 = 0x10
    PXZoomableInlineHeaderSectionInfoMetaDataStore *_metaDataStore;	// 24 = 0x18
    _Bool _isPreparingMetadataInBackground;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_prepareQueue;	// 40 = 0x28
    PXZoomableInlineHeadersDataSource *_monthsDataSource;	// 48 = 0x30
    PXZoomableInlineHeadersDataSource *_yearsDataSource;	// 56 = 0x38
    PXUpdater *_updater;	// 64 = 0x40
}

+ (_Bool)supportsAssetsDataSourceManager:(id)arg1;	// IMP=0x000000000045eb39
- (void).cxx_destruct;	// IMP=0x000000000045dd37
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXZoomableInlineHeadersDataSource *yearsDataSource; // @synthesize yearsDataSource=_yearsDataSource;
@property(readonly, nonatomic) PXZoomableInlineHeadersDataSource *monthsDataSource; // @synthesize monthsDataSource=_monthsDataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000045dc15
- (void)setNeedsUpdate;	// IMP=0x000000000045dc01
- (void)didPerformChanges;	// IMP=0x000000000045db97
- (id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg1;	// IMP=0x000000000045d7fd
- (void)_didFinishBackgroundPreparationWithResult:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000045d6da
- (void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg1;	// IMP=0x000000000045d508
- (void)_prepareInBackgroundWithDataSource:(id)arg1;	// IMP=0x000000000045d379
- (void)_updateDataSource;	// IMP=0x000000000045cfcc
- (void)_invalidateDataSource;	// IMP=0x000000000045cfa8
- (id)_fetchResultForDataSource:(id)arg1;	// IMP=0x000000000045cf17
- (id)dataSourceForLevel:(unsigned long long)arg1;	// IMP=0x000000000045ce71
- (id)initWithAssetsDataSourceManager:(id)arg1;	// IMP=0x000000000045cc41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

