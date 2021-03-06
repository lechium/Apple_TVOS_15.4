//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSDictionary, NSString, NSURL, WKHTTPCookieStore, _WKWebsiteDataStoreConfiguration;
@protocol _WKWebsiteDataStoreDelegate;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebsiteDataStore> _websiteDataStore;	// 8 = 0x8
    struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>> _delegate;	// 208 = 0xd0
}

+ (id)allWebsiteDataTypes;	// IMP=0x0000000000267668
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002675b8
+ (id)nonPersistentDataStore;	// IMP=0x00000000002673f4
+ (id)defaultDataStore;	// IMP=0x00000000002673c7
+ (_Bool)_defaultNetworkProcessExists;	// IMP=0x000000000026989b
+ (void)_setNetworkProcessSuspensionAllowedForTesting:(_Bool)arg1;	// IMP=0x000000000026987e
+ (void)_makeNextNetworkProcessLaunchFailForTesting;	// IMP=0x0000000000269871
+ (void)_setCachedProcessSuspensionDelayForTesting:(double)arg1;	// IMP=0x0000000000268c08
+ (void)_allowWebsiteDataRecordsForAllOrigins;	// IMP=0x00000000002683f2
+ (void)_deleteDefaultDataStoreForTesting;	// IMP=0x00000000002680d8
+ (_Bool)_defaultDataStoreExists;	// IMP=0x00000000002680a8
+ (id)_allWebsiteDataTypesIncludingPrivate;	// IMP=0x0000000000267f22
- (id).cxx_construct;	// IMP=0x0000000000267f0e
- (void).cxx_destruct;	// IMP=0x0000000000267efd
@property(readonly) struct Object *_apiObject;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000267c86
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002677d5
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002677be
@property(readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026760f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002675c0
- (void)dealloc;	// IMP=0x0000000000267563
- (id)init;	// IMP=0x0000000000267421
- (void)_getOriginsWithPushAndNotificationPermissions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000269c72
- (void)_deletePushAndNotificationRegistration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000269b91
- (void)_processPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000269a22
- (void)_getPendingPushMessages:(CDUnknownBlockType)arg1;	// IMP=0x0000000000269973
- (_Bool)_hasServiceWorkerBackgroundActivityForTesting;	// IMP=0x0000000000269965
- (void)_countNonDefaultSessionSets:(CDUnknownBlockType)arg1;	// IMP=0x00000000002698cb
- (_Bool)_networkProcessExists;	// IMP=0x000000000026988a
- (int)_networkProcessIdentifier;	// IMP=0x0000000000269852
- (void)_synthesizeAppIsBackground:(_Bool)arg1;	// IMP=0x0000000000269831
- (void)_sendNetworkProcessDidResume;	// IMP=0x000000000026981b
- (void)_sendNetworkProcessWillSuspendImminently;	// IMP=0x0000000000269805
- (void)_sendNetworkProcessPrepareToSuspend:(CDUnknownBlockType)arg1;	// IMP=0x000000000026977c
- (void)_terminateNetworkProcess;	// IMP=0x000000000026976e
- (void)_appBoundSchemes:(CDUnknownBlockType)arg1;	// IMP=0x00000000002696e1
- (void)_appBoundDomains:(CDUnknownBlockType)arg1;	// IMP=0x0000000000269654
- (void)_setPrivateClickMeasurementDebugModeEnabledForTesting:(_Bool)arg1;	// IMP=0x000000000026962b
- (void)_trustServerForLocalPCMTesting:(struct __SecTrust *)arg1;	// IMP=0x00000000002695bc
- (void)_allowTLSCertificateChain:(id)arg1 forHost:(id)arg2;	// IMP=0x00000000002694e3
@property(readonly, copy, nonatomic) _WKWebsiteDataStoreConfiguration *_configuration;
@property(nonatomic) __weak id <_WKWebsiteDataStoreDelegate> _delegate;
- (_Bool)_networkProcessHasEntitlementForTesting:(id)arg1;	// IMP=0x0000000000269294
- (void)_renameOrigin:(id)arg1 to:(id)arg2 forDataOfTypes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000026908d
- (_Bool)_hasRegisteredServiceWorker;	// IMP=0x0000000000269013
- (void)_setThirdPartyCookieBlockingMode:(_Bool)arg1 onlyOnSitesWithoutUserInteraction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000268f84
- (void)_processStatisticsAndDataRecords:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268f0d
- (void)_statisticsDatabaseHasAllTables:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268e84
- (void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000268d49
- (void)_isRelationshipOnlyInDatabaseOnce:(id)arg1 thirdParty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000268c0e
- (void)_getResourceLoadStatisticsDataSummary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268b6a
- (void)_closeDatabases:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268acc
- (void)_clearResourceLoadStatistics:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268a3d
- (void)_clearPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000268960
- (void)_getIsPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000268883
- (void)_setPrevalentDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000268788
- (void)_logUserInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000026868d
- (void)_scheduleCookieBlockingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000268616
- (void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000026854b
- (void)_clearLoadedSubresourceDomainsFor:(id)arg1;	// IMP=0x00000000002684eb
- (void)_loadedSubresourceDomainsFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002683ff
- (void)_setResourceLoadStatisticsTestingCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000026833f
@property(readonly, nonatomic) NSURL *_indexedDBDatabaseDirectory;
@property(nonatomic, setter=_setProxyConfiguration:) NSDictionary *_proxyConfiguration;
@property(nonatomic, setter=_setAllowsTLSFallback:) _Bool _allowsTLSFallback;
@property(nonatomic, setter=_setAllowsCellularAccess:) _Bool _allowsCellularAccess;
@property(nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property(nonatomic, setter=_setPerOriginStorageQuota:) unsigned long long _perOriginStorageQuota;
@property(nonatomic, setter=_setResourceLoadStatisticsDebugMode:) _Bool _resourceLoadStatisticsDebugMode;
@property(nonatomic, setter=_setResourceLoadStatisticsEnabled:) _Bool _resourceLoadStatisticsEnabled;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002681c8
- (id)_initWithConfiguration:(id)arg1;	// IMP=0x00000000002680e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

