//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASAssetProtocol-Protocol.h>

@class NSDictionary, NSString, _PASLock, _PASNotificationTracker;
@protocol OS_dispatch_queue;

@interface _PASAsset : NSObject <_PASAssetProtocol>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSDictionary *_requiredMobileAssetProperties;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    int _installNotificationToken;	// 32 = 0x20
    int _metadataNotificationToken;	// 36 = 0x24
    _PASNotificationTracker *_updateNotificationTracker;	// 40 = 0x28
    _PASLock *_lock;	// 48 = 0x30
    unsigned long long _compatibilityVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002f11c
@property(readonly, nonatomic) unsigned long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
- (void)callAssetUpdateHandlers;	// IMP=0x000000000002f078
- (void)clearOverrides;	// IMP=0x000000000002f05b
- (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;	// IMP=0x000000000002ef4e
- (void)invokeWithBundleOverride:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ee53
- (id)bundlePath;	// IMP=0x000000000002ed7c
- (void)setBundlePath:(id)arg1;	// IMP=0x000000000002ecd0
- (void)_issueUpdateNotificationsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002eb42
- (_Bool)_updateAssetMetadataUsingQueryResults:(id)arg1;	// IMP=0x000000000002e96d
- (void)_updateAssetMetadata;	// IMP=0x000000000002e6dd
- (id)pathsForResourcesWithNames:(id)arg1;	// IMP=0x000000000002e6c9
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long *)arg2;	// IMP=0x000000000002e2f4
- (id)pathForResourceWithNameAndExtension:(id)arg1;	// IMP=0x000000000002e2e0
- (id)pathForResourceWithNameAndExtension:(id)arg1 assetVersion:(unsigned long long *)arg2;	// IMP=0x000000000002e191
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;	// IMP=0x000000000002e17c
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long *)arg3;	// IMP=0x000000000002dfdb
- (_Bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;	// IMP=0x000000000002dfbc
- (_Bool)deregisterUpdateHandlerWithToken:(id)arg1;	// IMP=0x000000000002df9d
- (id)registerUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002decf
- (void)_loadDefaultBundleVersionWithGuardedData:(id)arg1;	// IMP=0x000000000002d98e
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
- (id)_assetDescription;	// IMP=0x000000000002d7a0
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (void)dealloc;	// IMP=0x000000000002d67e
- (id)init;	// IMP=0x000000000002d678
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(_Bool)arg6;	// IMP=0x000000000002cff7
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(_Bool)arg5;	// IMP=0x000000000002c8fb
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;	// IMP=0x000000000002c8d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

