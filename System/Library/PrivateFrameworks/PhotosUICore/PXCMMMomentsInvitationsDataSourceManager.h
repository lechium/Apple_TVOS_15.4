//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMMomentsInvitationsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMMomentsInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 8 = 0x8
    _Bool _isLoading;	// 16 = 0x10
    _Bool _hasCreatedInitialDataSource;	// 17 = 0x11
    PXCMMMomentsInvitationsDataSourceState *__state;	// 24 = 0x18
    NSMutableOrderedSet *__remainingAssetCollectionObjectIDsToFetch;	// 32 = 0x20
}

+ (id)mockDataSourceManagerFromRecentLargeMoments;	// IMP=0x00000000005c2fe2
+ (id)new;	// IMP=0x00000000005c2f68
- (void).cxx_destruct;	// IMP=0x00000000005c1a73
@property(retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch; // @synthesize _remainingAssetCollectionObjectIDsToFetch=__remainingAssetCollectionObjectIDsToFetch;
@property(retain, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state; // @synthesize _state=__state;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x00000000005c1778
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x00000000005c15a9
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;	// IMP=0x00000000005c112f
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatches;	// IMP=0x00000000005c0a6c
- (void)startLoadingIfNeeded;	// IMP=0x00000000005c09a5
- (id)_createInvitationsDataSourceFromCurrentState;	// IMP=0x00000000005c093c
- (id)createInitialDataSource;	// IMP=0x00000000005c08e5
- (id)assetCollections;	// IMP=0x00000000005c0895
- (id)init;	// IMP=0x00000000005c081b
- (void)dealloc;	// IMP=0x00000000005c07a6
- (id)initWithAssetCollectionsFetchResult:(id)arg1;	// IMP=0x00000000005c060e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

