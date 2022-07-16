//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSKeybagStateObserver-Protocol.h>
#import <DoNotDisturbServer/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURLSession;
@protocol DNDSKeybagStateProviding, OS_dispatch_queue;

@interface DNDSAppInfoCache : NSObject <DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol>
{
    NSSet *_monitoredBundleIdentifiers;	// 8 = 0x8
    NSSet *_relevantBundleIdentifiers;	// 16 = 0x10
    NSMutableSet *_inflightBundleIdentifiers;	// 24 = 0x18
    NSMutableDictionary *_appInfoByBundleIdentifier;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <DNDSKeybagStateProviding> _keybag;	// 56 = 0x38
}

+ (id)_fallbackAppInfoByBundleIdentifier;	// IMP=0x00000000000592b7
- (void).cxx_destruct;	// IMP=0x0000000000059ec1
- (id)_fallbackAppInfoForBundleIdentifier:(id)arg1;	// IMP=0x0000000000059238
- (id)_sanitizeAppInfo:(id)arg1;	// IMP=0x0000000000059117
- (id)_installedBundleIdentifiers;	// IMP=0x0000000000058f6a
- (void)_queue_fetchMissingAppInfo;	// IMP=0x0000000000058b01
- (id)_queue_bundleIdentifiersWithMissingInfo;	// IMP=0x00000000000588ee
- (void)_queue_monitorBundleIdentifiers:(id)arg1;	// IMP=0x0000000000058720
- (void)_queue_removeUnusedAppInfo;	// IMP=0x00000000000584f7
- (void)_queue_removeCachedDataForAppInfo:(id)arg1;	// IMP=0x00000000000582c8
- (id)_parseAppStoreResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;	// IMP=0x0000000000057bb4
- (void)_fetchIconForAppInfo:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057479
- (void)_fetchIconsForAppInfo:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000570c0
- (void)_fetchAppStoreInfoForBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056aa6
- (void)_queue_read;	// IMP=0x00000000000566a2
- (void)_queue_write;	// IMP=0x0000000000056160
- (id)_cacheURL;	// IMP=0x000000000005607a
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000055fcf
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000055f24
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;	// IMP=0x0000000000055e7f
- (id)appInfoForBundleIdentifiers:(id)arg1;	// IMP=0x0000000000055b32
- (id)appInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000005591f
- (void)monitorApplicationIdentifiers:(id)arg1;	// IMP=0x00000000000556c2
- (id)initWithKeybag:(id)arg1;	// IMP=0x0000000000055420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

