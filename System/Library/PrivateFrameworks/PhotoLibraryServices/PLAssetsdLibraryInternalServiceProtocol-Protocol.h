//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString, NSURL;

@protocol PLAssetsdLibraryInternalServiceProtocol <NSObject>
- (void)metricsForLibraryAtURL:(NSURL *)arg1 reply:(void (^)(NSDictionary *, unsigned long long, unsigned long long, NSError *))arg2;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(void (^)(_Bool, NSError *, NSDictionary *))arg1;
- (void)forceRunBackgroundJobsOnLibraryPath:(NSString *)arg1 priority:(int)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setFetchFilterWithAssets:(NSArray *)arg1 forApplication:(NSString *)arg2 withAuditToken:(CDStruct_4c969caf)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)invalidateBehavioralScoreOnAllAssetsWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(void (^)(NSDictionary *))arg1;
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(void (^)(NSDictionary *))arg1;
- (void)getBackgroundJobServiceStateWithReply:(void (^)(unsigned long long))arg1;
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)setAssetKeywords:(NSSet *)arg1 forAssetUUID:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
- (void)applyGraphUpdates:(NSDictionary *)arg1 supportingData:(NSData *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)applySearchIndexUpdates:(NSDictionary *)arg1 reply:(void (^)(void))arg2;
- (void)waitForSearchIndexExistenceWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)getSearchIndexProgressWithReply:(void (^)(unsigned long long))arg1;
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)reloadMomentGenerationOptions;
- (void)repairMemoriesWithUUIDs:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateAssetLocationDataWithUUID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getSizeOfResourcesToUploadByCPLWithReply:(void (^)(_Bool, long long, NSError *))arg1;
- (void)getLibrarySizesFromDB:(_Bool)arg1 reply:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)getAssetCountsWithReply:(void (^)(unsigned long long, unsigned long long, NSError *))arg1;
@end

