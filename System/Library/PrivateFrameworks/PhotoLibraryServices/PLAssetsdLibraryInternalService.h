//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdLibraryInternalServiceProtocol-Protocol.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdLibraryInternalService <PLAssetsdLibraryInternalServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003eb13a
- (unsigned long long)_assetCountInManagedObjectContext:(id)arg1 forSyncedAssets:(_Bool)arg2;	// IMP=0x00000000003eaf80
- (void)metricsForLibraryAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003eaae7
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ea808
- (void)forceRunBackgroundJobsOnLibraryPath:(id)arg1 priority:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ea21b
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e9f1d
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e9a16
- (void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(CDStruct_4c969caf)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003e94fc
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e9144
- (void)deleteiTunesSyncedContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e8ec1
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;	// IMP=0x00000000003e8c87
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e8a1b
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e87af
- (void)getBackgroundJobServiceStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e8557
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e8193
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e7ddb
- (void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e79fb
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e728a
- (void)applySearchIndexUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e6edb
- (void)waitForSearchIndexExistenceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e6b20
- (void)getSearchIndexProgressWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e67f6
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e64bb
- (void)reloadMomentGenerationOptions;	// IMP=0x00000000003e6280
- (void)repairMemoriesWithUUIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e5f75
- (void)updateAssetLocationDataWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e5cca
- (void)getSizeOfResourcesToUploadByCPLWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e5a40
- (void)getLibrarySizesFromDB:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e57aa
- (void)getAssetCountsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e551e
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;	// IMP=0x00000000003e54a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

