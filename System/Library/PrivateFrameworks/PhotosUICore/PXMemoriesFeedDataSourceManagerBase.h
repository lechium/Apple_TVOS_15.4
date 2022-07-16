//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMemoryForYouDataSourceManager-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSDate, NSString, PHFetchOptions, PHFetchResult, PHPhotoLibrary, PXDiscoveryFeedDataSourceManager, PXMemoriesFeedDataSource;

@interface PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver, PXMemoryForYouDataSourceManager>
{
    _Bool _memoryGenerationHasStarted;	// 8 = 0x8
    _Bool __generatingAdditionalEntries;	// 9 = 0x9
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    PHFetchOptions *_baseFetchOptions;	// 24 = 0x18
    PXDiscoveryFeedDataSourceManager *_discoveryDataSourceManager;	// 32 = 0x20
    PHFetchResult *_memoriesFetchResult;	// 40 = 0x28
    unsigned long long _firstUngroupedMemoryIndex;	// 48 = 0x30
}

+ (_Bool)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2;	// IMP=0x0000000000231747
+ (id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long *)arg4;	// IMP=0x00000000002312ec
+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3;	// IMP=0x00000000002311ba
+ (id)baseFetchOptions;	// IMP=0x0000000000231030
- (void).cxx_destruct;	// IMP=0x0000000000230e13
@property(nonatomic) unsigned long long firstUngroupedMemoryIndex; // @synthesize firstUngroupedMemoryIndex=_firstUngroupedMemoryIndex;
@property(retain, nonatomic) PHFetchResult *memoriesFetchResult; // @synthesize memoriesFetchResult=_memoriesFetchResult;
@property(retain, nonatomic) PXDiscoveryFeedDataSourceManager *discoveryDataSourceManager; // @synthesize discoveryDataSourceManager=_discoveryDataSourceManager;
@property(nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) _Bool _generatingAdditionalEntries; // @synthesize _generatingAdditionalEntries=__generatingAdditionalEntries;
@property(readonly, nonatomic) PHFetchOptions *baseFetchOptions; // @synthesize baseFetchOptions=_baseFetchOptions;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;	// IMP=0x0000000000230ba5
- (void)_clearPendingNotificationForMemory:(id)arg1;	// IMP=0x0000000000230a87
- (void)handleChangedKeyAssetsForMemories:(id)arg1;	// IMP=0x00000000002309d7
- (void)handleNonIncrementalFetchResultChange:(id)arg1;	// IMP=0x0000000000230927
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;	// IMP=0x000000000023086a
- (void)reloadMemories:(_Bool)arg1;	// IMP=0x00000000002307c3
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x00000000002305a5
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x000000000023036e
- (void)startObservingChanges;	// IMP=0x000000000023034e
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;	// IMP=0x00000000002302dc
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x000000000023024f
- (void)loadMoreContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023015c
- (void)generateAdditionalEntriesIfPossible;	// IMP=0x00000000002300b5
- (void)startGeneratingMemories;	// IMP=0x0000000000230098
- (void)resetMemoriesFetchResult;	// IMP=0x000000000022ff8c
- (id)fetchOptions;	// IMP=0x000000000022fdd9
@property(readonly, nonatomic) _Bool hasAnyMemories;
- (id)createInitialDataSource;	// IMP=0x000000000022fd78
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000022fbf9
- (id)init;	// IMP=0x000000000022fb7f
@property(readonly, nonatomic) NSDate *mostRecentCreationDate;

// Remaining properties
@property(readonly, nonatomic) PXMemoriesFeedDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

