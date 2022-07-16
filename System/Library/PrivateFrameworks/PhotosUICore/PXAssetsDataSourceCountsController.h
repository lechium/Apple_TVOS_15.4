//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXMutableAssetsDataSourceCountsController-Protocol.h>

@class NSObject, NSString, PXAssetsDataSourceManager;
@protocol OS_dispatch_queue;

@interface PXAssetsDataSourceCountsController <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver>
{
    NSObject<OS_dispatch_queue> *_prepareCountsQueue;	// 8 = 0x8
    _Bool _isPreparingAssetTypeCounts;	// 16 = 0x10
    _Bool _hasUsableCounts;	// 17 = 0x11
    _Bool _waitingToPrepare;	// 18 = 0x12
    PXAssetsDataSourceManager *_assetsDataSourceManager;	// 24 = 0x18
    CDStruct_aa0b146f _counts;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000082a6b6
@property(nonatomic) _Bool waitingToPrepare; // @synthesize waitingToPrepare=_waitingToPrepare;
@property(nonatomic) _Bool hasUsableCounts; // @synthesize hasUsableCounts=_hasUsableCounts;
@property(nonatomic) _Bool isPreparingAssetTypeCounts; // @synthesize isPreparingAssetTypeCounts=_isPreparingAssetTypeCounts;
@property(readonly, nonatomic) CDStruct_aa0b146f counts; // @synthesize counts=_counts;
@property(readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;	// IMP=0x000000000082a574
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000082a428
- (void)_dataSourceManagerDidChange;	// IMP=0x000000000082a3ea
- (void)_updateCounts;	// IMP=0x0000000000829e9a
- (void)_handlePreparationCompletion;	// IMP=0x0000000000829db0
- (void)_prepareFetchResults:(id)arg1;	// IMP=0x0000000000829b6c
- (void)_prepareCounts;	// IMP=0x00000000008295d0
- (void)prepareCountsIfNeeded;	// IMP=0x000000000082951f
- (void)setCounts:(CDStruct_aa0b146f)arg1;	// IMP=0x00000000008293f4
- (id)initWithAssetsDataSourceManager:(id)arg1;	// IMP=0x00000000008292d9
- (id)init;	// IMP=0x000000000082925f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

