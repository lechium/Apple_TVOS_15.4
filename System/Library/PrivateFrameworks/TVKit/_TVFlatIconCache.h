//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface _TVFlatIconCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_updateQueue;	// 16 = 0x10
    NSMutableDictionary *_appIdentifierToInstalledCacheKeys;	// 24 = 0x18
    NSMutableDictionary *_appIdentifierToIconName;	// 32 = 0x20
}

+ (id)_launchImagesCacheDirectory;	// IMP=0x000000000004ee94
+ (id)_smallIconsCacheDirectory;	// IMP=0x000000000004ecf1
+ (id)_iconsCacheDirectory;	// IMP=0x000000000004eb4e
+ (void)_disableLSWorkspaceInstallHandling;	// IMP=0x000000000004eb41
+ (void)_cleanStaleAssetsInCacheDirectory:(id)arg1 withInstalledCacheKeys:(id)arg2;	// IMP=0x000000000004e1d9
+ (id)sharedInstance;	// IMP=0x000000000004cca6
- (void).cxx_destruct;	// IMP=0x000000000004f969
- (void)_flushApplicationCachedImages:(id)arg1;	// IMP=0x000000000004f89b
- (_Bool)_createApplicationIcon:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3 destination:(id)arg4;	// IMP=0x000000000004f391
- (_Bool)_createSmallApplicationIcon:(id)arg1;	// IMP=0x000000000004f2dd
- (_Bool)_createApplicationIcon:(id)arg1;	// IMP=0x000000000004f229
- (id)_cacheLaunchImagePathWithCacheKey:(id)arg1;	// IMP=0x000000000004f183
- (id)_cacheSmallIconPathWithCacheKey:(id)arg1;	// IMP=0x000000000004f0dd
- (id)_cacheIconPathWithCacheKey:(id)arg1;	// IMP=0x000000000004f037
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000004ea99
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000004e9e7
- (void)_removeCachedImagesForCacheKey:(id)arg1;	// IMP=0x000000000004e919
- (void)_updateForUninstalledApplications:(id)arg1;	// IMP=0x000000000004e73d
- (void)_updateForInstalledApplications:(id)arg1;	// IMP=0x000000000004e50b
- (void)_cleanStaleAssets;	// IMP=0x000000000004df29
- (void)_update;	// IMP=0x000000000004dcd2
- (id)_iconImageFromPath:(id)arg1;	// IMP=0x000000000004db82
- (id)smallFlatIconForAppProxy:(id)arg1;	// IMP=0x000000000004db23
- (id)_createSmallFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x000000000004da38
- (id)flatIconForAppProxy:(id)arg1;	// IMP=0x000000000004d9d9
- (id)_createFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x000000000004d8ee
- (void)dealloc;	// IMP=0x000000000004d832
- (void)_queue_appStateMonitorDidChange;	// IMP=0x000000000004d12b
- (void)_appStateMonitorDidChange:(id)arg1;	// IMP=0x000000000004d0ca
- (id)init;	// IMP=0x000000000004ccfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

