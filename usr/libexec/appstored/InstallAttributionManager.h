//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InstallAttributionDatabaseStore, NSMutableDictionary, NSString, TaskQueue;
@protocol OS_dispatch_queue, StoreKitBagContract;

@interface InstallAttributionManager : NSObject
{
    id <StoreKitBagContract> _bagContract;	// 8 = 0x8
    InstallAttributionDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    NSMutableDictionary *_logKeyDict;	// 40 = 0x28
    NSMutableDictionary *_paramsDict;	// 48 = 0x30
}

+ (void)registerInstallAttributionDatabaseCleanTask;	// IMP=0x00200000001ff8d1
+ (void)registerInstallAttributionPingbackRetryTask;	// IMP=0x00100000001fcadb
+ (id)sharedManager;	// IMP=0x00100000001f61b3
- (void).cxx_destruct;	// IMP=0x0020000000201431
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000020130b
- (id)sanitizedError:(id)arg1;	// IMP=0x0010000000201260
- (_Bool)_installAttributionShouldSendDevPingback;	// IMP=0x001000000020117f
- (_Bool)_installAttributionShouldUseProxy;	// IMP=0x0010000000201091
- (id)_getMescalSignedAuthValueForUrl:(id)arg1;	// IMP=0x0010000000200bb8
- (id)_getProxyHeaderForURL:(id)arg1;	// IMP=0x0010000000200a5e
- (id)_createConnectProxyConfig;	// IMP=0x00100000002007aa
- (void)_removeUnregisteredInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x0010000000200626
- (void)_removeInstallAttributionParamsBeforeDate:(id)arg1 isLowFidelity:(_Bool)arg2;	// IMP=0x0010000000200497
- (void)_removeInstallAttributionImpressionsBeforeDate:(id)arg1;	// IMP=0x0010000000200350
- (void)_cleanDatabase;	// IMP=0x00100000001ffc79
- (void)_registerInstallAttributionDatabaseCleanTaskIfNeeded;	// IMP=0x00100000001ffb93
- (void)_sendMaturePingbacksWithXPCActivity:(id)arg1;	// IMP=0x00100000001fe48e
- (void)sendTestPingbacksForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fce57
- (void)_registerInstallAttributionPingbackRetryTaskIfNeeded;	// IMP=0x00100000001fc9b2
- (void)_incrementRetryCountForPingback:(id)arg1;	// IMP=0x00100000001fc781
- (void)_removePingback:(id)arg1;	// IMP=0x00100000001fc545
- (void)kickPingbackTask;	// IMP=0x00100000001fc533
- (_Bool)cleanTestPingbacksForApp:(id)arg1;	// IMP=0x00100000001fc366
- (id)retrieveTestPingbacksForApp:(id)arg1;	// IMP=0x00100000001fc08e
- (_Bool)addMockPingback:(id)arg1;	// IMP=0x00100000001fbec1
- (void)setDeveloperPingbackURL:(id)arg1 forApp:(id)arg2;	// IMP=0x00100000001fbb85
- (void)updatePingbackWithConversionValue:(id)arg1 forApp:(id)arg2 withDeveloperPingbackURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001fb6bf
- (void)setPingbackRegisteredForApp:(id)arg1 withDeveloperPingbackURL:(id)arg2;	// IMP=0x00100000001fb470
- (void)addPingbacks:(id)arg1;	// IMP=0x00100000001faeda
- (void)addPingback:(id)arg1;	// IMP=0x00100000001faa4d
- (void)cacheInstallAttributionParams:(id)arg1 forFetchPostbackURL:(id)arg2;	// IMP=0x00100000001faa37
- (void)sendImpressionSentAnalyticsEventWithDicts:(id)arg1;	// IMP=0x00100000001fa5db
- (void)sendDifferingImpressionAnalyticsEventWithDict:(id)arg1 sourceIsCache:(_Bool)arg2;	// IMP=0x00100000001fa3de
- (id)getParamsForFetchingPostbacksForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x00100000001f9d00
- (void)fetchPingbackInfoFor:(id)arg1 withLogKey:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f949b
- (void)retryFetchingPingbackFor:(id)arg1;	// IMP=0x00100000001f8d93
- (void)removeFetchedPingbackInfoForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x00100000001f8b15
- (void)addPingbackFetchInfo:(id)arg1 withLogKey:(id)arg2;	// IMP=0x00100000001f85bc
- (void)removeParamsForApp:(id)arg1;	// IMP=0x00100000001f835d
- (id)campaignIdWithinPermissibleRange:(long long)arg1;	// IMP=0x00100000001f8107
- (id)addParams:(id)arg1 fromBundleId:(id)arg2 overrideCampaignLimit:(_Bool)arg3;	// IMP=0x00100000001f7a5b
- (id)getMultiParamsForApp:(id)arg1;	// IMP=0x00100000001f7905
- (void)purgeImpressionsFromProcessName:(id)arg1;	// IMP=0x00100000001f7730
- (void)finalizeImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f6df0
- (void)addImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f63a1
- (id)init;	// IMP=0x00100000001f6238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

