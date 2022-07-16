//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TVAssetManagerLifetimeCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_proxyCacheKeyToAssetManager;	// 8 = 0x8
    NSMutableDictionary *_applicationIdentifierToActiveCacheKeys;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000000e5ac
- (void).cxx_destruct;	// IMP=0x000000000000f398
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) NSMutableDictionary *applicationIdentifierToActiveCacheKeys; // @synthesize applicationIdentifierToActiveCacheKeys=_applicationIdentifierToActiveCacheKeys;
@property(retain, nonatomic) NSMutableDictionary *proxyCacheKeyToAssetManager; // @synthesize proxyCacheKeyToAssetManager=_proxyCacheKeyToAssetManager;
- (void)_removeAllCacheDataForProxy:(id)arg1;	// IMP=0x000000000000f167
- (void)_updateForUninstalledApplications:(id)arg1;	// IMP=0x000000000000f03d
- (void)_removeOldCacheDataForInstalledAppProxy:(id)arg1;	// IMP=0x000000000000ee21
- (void)_updateForInstalledApplications:(id)arg1;	// IMP=0x000000000000ecf7
- (void)_recordCacheKey:(id)arg1;	// IMP=0x000000000000ebfe
- (id)_assetManagerForProxy:(id)arg1;	// IMP=0x000000000000ea37
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000000e98f
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000000e8e7
- (void)flush;	// IMP=0x000000000000e869
- (id)assetManagerForProxy:(id)arg1;	// IMP=0x000000000000e660
- (id)_init;	// IMP=0x000000000000e4ec
- (id)init;	// IMP=0x000000000000e4de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

