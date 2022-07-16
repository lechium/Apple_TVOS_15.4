//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceContext, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 8 = 0x8
    _Bool _isLoading;	// 16 = 0x10
    _Bool _hasCreatedInitialDataSource;	// 17 = 0x11
    PXCMMSuggestionsDataSourceState *__state;	// 24 = 0x18
    NSMutableOrderedSet *__remainingAssetCollectionsObjectIDsToFetch;	// 32 = 0x20
    PXCMMSuggestionsDataSourceContext *_context;	// 40 = 0x28
}

+ (id)keyPathsAffectingCurrentDataSourceManager;	// IMP=0x000000000066cd86
+ (id)mockDataSourceManagerFromRecentLargeMoments;	// IMP=0x000000000066cd19
+ (id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 shouldShowAccepted:(_Bool)arg3 message:(id)arg4 date:(id)arg5 matchingStrategy:(unsigned long long)arg6;	// IMP=0x000000000066cb1f
+ (id)dataSourceManager;	// IMP=0x000000000066caee
+ (id)currentDataSourceManager;	// IMP=0x000000000066ca68
+ (id)emptyDataSourceManager;	// IMP=0x000000000066c9fb
+ (id)_fetchResultForTypeGraphWithContext:(id)arg1;	// IMP=0x000000000066c73a
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;	// IMP=0x000000000066c56a
+ (id)_fetchResultForEmptyDataSourceManager;	// IMP=0x000000000066c4e4
+ (id)new;	// IMP=0x000000000066c46a
+ (id)mostRecentCreationDate;	// IMP=0x000000000066c21e
- (void).cxx_destruct;	// IMP=0x000000000066ac3d
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // @synthesize context=_context;
@property(retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch; // @synthesize _remainingAssetCollectionsObjectIDsToFetch=__remainingAssetCollectionsObjectIDsToFetch;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x000000000066a931
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x000000000066a762
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;	// IMP=0x000000000066a2bc
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1;	// IMP=0x0000000000669c2f
- (void)_startLoadingIfNeeded;	// IMP=0x0000000000669b1a
- (id)_createSuggestionsDataSourceFromCurrentState;	// IMP=0x0000000000669ab1
- (id)createInitialDataSource;	// IMP=0x0000000000669a5a
- (id)assetCollections;	// IMP=0x0000000000669a0a
- (id)init;	// IMP=0x0000000000669990
- (id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2;	// IMP=0x000000000066969b
- (id)initWithAssetCollectionsFetchResult:(id)arg1;	// IMP=0x0000000000669624

// Remaining properties
@property(readonly, nonatomic) PXCMMSuggestionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
