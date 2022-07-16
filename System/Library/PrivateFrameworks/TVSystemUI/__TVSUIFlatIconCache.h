//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __TVSUIFlatIconCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_updateQueue;	// 16 = 0x10
    NSMutableDictionary *_appIdentifierToInstalledCacheKeys;	// 24 = 0x18
    NSMutableDictionary *_appIdentifierToIconName;	// 32 = 0x20
}

+ (id)_launchImagesCacheDirectory;	// IMP=0x000000000003447e
+ (id)_smallIconsCacheDirectory;	// IMP=0x00000000000342db
+ (id)_iconsCacheDirectory;	// IMP=0x0000000000034138
+ (void)_disableLSWorkspaceInstallHandling;	// IMP=0x000000000003412b
+ (void)_cleanStaleAssetsInCacheDirectory:(id)arg1 withInstalledCacheKeys:(id)arg2;	// IMP=0x00000000000336ee
+ (id)sharedInstance;	// IMP=0x000000000003222f
- (void).cxx_destruct;	// IMP=0x0000000000034c78
- (_Bool)_createApplicationIcon:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3 destination:(id)arg4;	// IMP=0x0000000000034a13
- (_Bool)_createApplicationIcon:(id)arg1 variant:(long long)arg2 maskCorners:(_Bool)arg3 destination:(id)arg4;	// IMP=0x000000000003495f
- (_Bool)_createSmallApplicationIcon:(id)arg1;	// IMP=0x00000000000348b8
- (_Bool)_createApplicationIcon:(id)arg1 maskCorners:(_Bool)arg2;	// IMP=0x0000000000034813
- (id)_cacheLaunchImagePathWithCacheKey:(id)arg1;	// IMP=0x000000000003476d
- (id)_cacheSmallIconPathWithCacheKey:(id)arg1;	// IMP=0x00000000000346c7
- (id)_cacheIconPathWithCacheKey:(id)arg1;	// IMP=0x0000000000034621
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000034083
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000033fd1
- (void)_removeCachedImagesForCacheKey:(id)arg1;	// IMP=0x0000000000033f03
- (void)_updateForUninstalledApplications:(id)arg1;	// IMP=0x0000000000033cb9
- (void)_updateForInstalledApplications:(id)arg1;	// IMP=0x0000000000033a20
- (void)_cleanStaleAssets;	// IMP=0x0000000000033408
- (void)_update;	// IMP=0x00000000000331b1
- (id)_iconImageFromPath:(id)arg1;	// IMP=0x0000000000032fe8
- (id)smallFlatIconForAppProxy:(id)arg1;	// IMP=0x0000000000032f89
- (id)_createSmallFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000032e9e
- (id)flatIconForAppProxy:(id)arg1;	// IMP=0x0000000000032e3f
- (id)_createFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000032d4f
- (void)dealloc;	// IMP=0x0000000000032cda
- (void)_queue_appStateMonitorDidChange:(id)arg1;	// IMP=0x00000000000325b8
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x0000000000032510
- (id)init;	// IMP=0x0000000000032284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
