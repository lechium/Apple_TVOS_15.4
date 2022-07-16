//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/CPLStatusDelegate-Protocol.h>
#import <PhotosUICore/PXCPLStatusProvider-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXFetchResultCountObserverDelegate-Protocol.h>

@class CPLStatus, NSObject, NSProgress, NSString, PHPhotoLibrary, PLPhotoLibrary, PXCPLStatus, PXCPLSyncActivity, PXFetchResultCountObserver;
@protocol OS_dispatch_queue;

@interface PXCPLStatusProvider <CPLStatusDelegate, PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider>
{
    PXCPLStatus *_status;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;	// 16 = 0x10
    CPLStatus *_cplStatus;	// 24 = 0x18
    PXCPLSyncActivity *_syncActivity;	// 32 = 0x20
    unsigned long long _syncProgressState;	// 40 = 0x28
    id _syncProgressSubscriber;	// 48 = 0x30
    NSProgress *_syncProgress;	// 56 = 0x38
    PXFetchResultCountObserver *_numberOfReferencedItemsObserver;	// 64 = 0x40
    unsigned long long _numberOfReferencedItems;	// 72 = 0x48
    _Bool _hasCloudQuotaOffer;	// 80 = 0x50
    _Bool _cloudQuotaOfferHasAssetCounts;	// 81 = 0x51
    PHPhotoLibrary *_ph_photoLibrary;	// 88 = 0x58
    PLPhotoLibrary *_pl_photoLibrary;	// 96 = 0x60
    unsigned long long _needsUpdate;	// 104 = 0x68
    double _lastUpdate;	// 112 = 0x70
    _Bool _isUpdating;	// 120 = 0x78
}

+ (id)currentStatusProvider;	// IMP=0x000000000005ec7c
- (void).cxx_destruct;	// IMP=0x000000000005e383
@property(readonly, nonatomic) PXCPLStatus *status; // @synthesize status=_status;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000005e2b3
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;	// IMP=0x000000000005e2ad
- (void)statusDidChange:(id)arg1;	// IMP=0x000000000005e296
- (void)_scheduleUpdateForType:(unsigned long long)arg1;	// IMP=0x000000000005e0b3
- (void)_schedulePendingUpdates;	// IMP=0x000000000005dee1
- (void)_performUpdate;	// IMP=0x000000000005dce9
- (double)nextOverrideResumeTimeInterval;	// IMP=0x000000000005dc20
- (id)_updateStatus:(id)arg1 requestedTypes:(unsigned long long)arg2;	// IMP=0x000000000005c7b4
- (void)_setStatus:(id)arg1 producedForUpdateType:(unsigned long long)arg2;	// IMP=0x000000000005c5e6
- (id)init;	// IMP=0x000000000005c5cd
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)arg1;	// IMP=0x000000000005c5b6
- (id)_initWithInitialUpdateType:(unsigned long long)arg1 isSynchronous:(_Bool)arg2;	// IMP=0x000000000005bfa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
