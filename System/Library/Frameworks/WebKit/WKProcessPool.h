//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, WKGeolocationProviderIOS, _WKProcessPoolConfiguration;
@protocol _WKAutomationDelegate, _WKDownloadDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebProcessPool> _processPool;	// 8 = 0x8
    struct WeakObjCPtr<id<_WKAutomationDelegate>> _automationDelegate;	// 880 = 0x370
    struct WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;	// 888 = 0x378
    struct RetainPtr<_WKAutomationSession> _automationSession;	// 896 = 0x380
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;	// 904 = 0x388
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> _coreLocationProvider;	// 912 = 0x390
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000226c29
+ (void)_setWebProcessCountLimit:(unsigned int)arg1;	// IMP=0x00000000002289db
+ (void)_clearCaptivePortalModeEnabledGloballyForTesting;	// IMP=0x00000000002282e0
+ (void)_setCaptivePortalModeEnabledGloballyForTesting:(_Bool)arg1;	// IMP=0x00000000002282d0
+ (void)_setLinkedOnOrAfterEverything;	// IMP=0x00000000002282b7
+ (void)_setLinkedOnOrAfterEverythingForTesting;	// IMP=0x00000000002282a5
+ (void)_setLinkedOnOrBeforeEverythingForTesting;	// IMP=0x000000000022828f
+ (void)_forceGameControllerFramework;	// IMP=0x0000000000228289
+ (int)_webAuthnProcessIdentifier;	// IMP=0x00000000002270c3
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;	// IMP=0x0000000000227036
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;	// IMP=0x000000000022701b
+ (id)_allProcessPoolsForTesting;	// IMP=0x0000000000226f4c
+ (id)_sharedProcessPool;	// IMP=0x0000000000226ebf
- (id).cxx_construct;	// IMP=0x0000000000226e9a
- (void).cxx_destruct;	// IMP=0x0000000000226e1c
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000226c7f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000226c31
- (void)dealloc;	// IMP=0x0000000000226bd4
- (id)init;	// IMP=0x0000000000226b78
- (id)_initWithConfiguration:(id)arg1;	// IMP=0x0000000000226b0b
- (void)_terminateAllWebContentProcesses;	// IMP=0x0000000000228a45
- (void)_setUsesOnlyHIDGamepadProviderForTesting:(_Bool)arg1;	// IMP=0x0000000000228a3f
- (unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;	// IMP=0x0000000000228a37
- (unsigned long long)_numberOfConnectedHIDGamepadsForTesting;	// IMP=0x0000000000228a2f
- (unsigned long long)_numberOfConnectedGamepadsForTesting;	// IMP=0x0000000000228a05
- (void)_garbageCollectJavaScriptObjectsForTesting;	// IMP=0x00000000002289e7
- (void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002287be
- (void)_clearPermanentCredentialsForProtectionSpace:(id)arg1;	// IMP=0x00000000002286ce
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000228648
- (id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4;	// IMP=0x00000000002284c5
- (id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3;	// IMP=0x000000000022837d
@property(nonatomic, setter=_setCoreLocationProvider:) id <_WKGeolocationCoreLocationProvider> _coreLocationProvider;
@property(nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) _Bool _cookieStoragePartitioningEnabled;
- (unsigned long long)_serviceWorkerProcessCount;	// IMP=0x000000000022827f
- (unsigned long long)_processCacheSize;	// IMP=0x0000000000228262
- (unsigned long long)_processCacheCapacity;	// IMP=0x0000000000228253
- (unsigned long long)_maximumSuspendedPageCount;	// IMP=0x0000000000228243
- (unsigned long long)_pluginProcessCount;	// IMP=0x000000000022823b
- (void)_preconnectToServer:(id)arg1;	// IMP=0x0000000000228235
- (unsigned long long)_webPageContentProcessCount;	// IMP=0x000000000022810c
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;	// IMP=0x00000000002280ca
- (unsigned long long)_webProcessCountIgnoringPrewarmed;	// IMP=0x0000000000228088
- (_Bool)_hasPrewarmedWebProcess;	// IMP=0x000000000022804c
- (void)_makeNextWebProcessLaunchFailForTesting;	// IMP=0x000000000022803f
- (_Bool)_requestWebProcessTermination:(int)arg1;	// IMP=0x0000000000228001
- (int)_gpuProcessIdentifier;	// IMP=0x0000000000227fe1
- (unsigned long long)_webProcessCount;	// IMP=0x0000000000227fd8
- (void)_clearWebProcessCache;	// IMP=0x0000000000227fc7
- (void)_syncNetworkProcessCookies;	// IMP=0x0000000000227fc1
- (int)_prewarmedProcessIdentifier;	// IMP=0x0000000000227f9b
- (void)_setUseSeparateServiceWorkerProcess:(_Bool)arg1;	// IMP=0x0000000000227f8f
- (void)_terminateServiceWorkers;	// IMP=0x0000000000227f81
- (void)_clearSupportedPlugins;	// IMP=0x0000000000227f7b
- (void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4;	// IMP=0x0000000000227b99
@property(copy, nonatomic, setter=_setJavaScriptConfigurationDirectory:) NSURL *_javaScriptConfigurationDirectory;
- (void)_setAutomationSession:(id)arg1;	// IMP=0x00000000002279ee
- (void)_automationCapabilitiesDidChange;	// IMP=0x00000000002279dc
- (void)_warmInitialProcess;	// IMP=0x00000000002279ce
@property(nonatomic, setter=_setAutomationDelegate:) __weak id <_WKAutomationDelegate> _automationDelegate;
@property(nonatomic, setter=_setDownloadDelegate:) __weak id <_WKDownloadDelegate> _downloadDelegate;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;	// IMP=0x00000000002275d1
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;	// IMP=0x0000000000227282
- (id)_objectForBundleParameter:(id)arg1;	// IMP=0x0000000000227269
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;	// IMP=0x0000000000227263
- (void)_setCanHandleHTTPSServerTrustEvaluation:(_Bool)arg1;	// IMP=0x000000000022725d
- (void)_setDomainRelaxationForbiddenForURLScheme:(id)arg1;	// IMP=0x00000000002271eb
- (void)_registerURLSchemeAsBypassingContentSecurityPolicy:(id)arg1;	// IMP=0x0000000000227197
- (void)_registerURLSchemeAsSecure:(id)arg1;	// IMP=0x0000000000227143
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1;	// IMP=0x00000000002270d1
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;	// IMP=0x00000000002270cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
