//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestServerProxyDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOObserverHashTable, GEOResourceManifestConfiguration, NSDictionary, NSMutableArray, NSSet, NSString, geo_isolater;
@protocol GEOResourceManifestServerProxy, OS_dispatch_source;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate>
{
    id <GEOResourceManifestServerProxy> _serverProxy;	// 8 = 0x8
    GEOObserverHashTable *_serverProxyObservers;	// 16 = 0x10
    GEOActiveTileGroup *_activeTileGroup;	// 24 = 0x18
    struct os_unfair_lock_s _activeTileGroupLock;	// 32 = 0x20
    NSDictionary *_resourceNamesToPaths;	// 40 = 0x28
    NSSet *_allResourceNames;	// 48 = 0x30
    NSSet *_allRegionalResourceNames;	// 56 = 0x38
    _Bool _needsToLoadTileGroupFromDisk;	// 64 = 0x40
    NSMutableArray *_tileGroupObservers;	// 72 = 0x48
    struct os_unfair_recursive_lock_s _tileGroupObserversLock;	// 80 = 0x50
    struct os_unfair_lock_s _closedCountLock;	// 88 = 0x58
    long long _closedCount;	// 96 = 0x60
    _Bool _constantlyChangeTileGroup;	// 104 = 0x68
    double _constantlyChangeTileGroupInterval;	// 112 = 0x70
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;	// 120 = 0x78
    NSMutableArray *_networkActivityHandlers;	// 128 = 0x80
    geo_isolater *_networkActivityHandlersIsolation;	// 136 = 0x88
    _Bool _isUpdatingManifest;	// 144 = 0x90
    _Bool _isLoadingResources;	// 145 = 0x91
    struct os_unfair_lock_s _resourceNamesToPathsLock;	// 148 = 0x94
    GEOResourceManifestConfiguration *_configuration;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;	// 160 = 0xa0
    unsigned long long _stateCaptureHandle;	// 168 = 0xa8
}

+ (id)modernManagerForConfiguration:(id)arg1;	// IMP=0x0000000000a155cc
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;	// IMP=0x0000000000a15542
+ (id)modernManagerNoCreate;	// IMP=0x0000000000a15508
+ (id)modernManager;	// IMP=0x0000000000a1510c
+ (id)sharedManager;	// IMP=0x0000000000a15090
+ (void)configureInProcessSingletonWithConfiguration:(id)arg1;	// IMP=0x0000000000a1503c
+ (void)useLocalProxy;	// IMP=0x0000000000a1500e
+ (void)useRemoteProxy;	// IMP=0x0000000000a14fe0
+ (void)setServerProxyClass:(Class)arg1;	// IMP=0x0000000000a14fd3
+ (void)disableServerConnection;	// IMP=0x0000000000a14fc6
- (void).cxx_destruct;	// IMP=0x0000000000a1be5b
@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000000a1b964
- (void)removeDevResources;	// IMP=0x0000000000a1b7d6
- (void)devResourcesFolderDidChange;	// IMP=0x0000000000a1b794
- (void)resetActiveTileGroup;	// IMP=0x0000000000a1af43
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a1aebb
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;	// IMP=0x0000000000a1ae67
- (unsigned int)activeTileGroupIdentifier;	// IMP=0x0000000000a1ae23
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1ae0d
- (_Bool)hasResourceManifest;	// IMP=0x0000000000a1ad93
- (id)detailedDescription;	// IMP=0x0000000000a1abcc
- (void)deactivateResourceScenario:(int)arg1;	// IMP=0x0000000000a1abb6
- (void)deactivateResourceScale:(int)arg1;	// IMP=0x0000000000a1aba0
- (void)activateResourceScenario:(int)arg1;	// IMP=0x0000000000a1ab8a
- (void)activateResourceScale:(int)arg1;	// IMP=0x0000000000a1ab74
- (id)updateProgress;	// IMP=0x0000000000a1ab5e
- (void)updateManifest:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1ab48
- (void)updateManifest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1ab31
- (void)updateManifestIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1ab1b
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1ab05
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;	// IMP=0x0000000000a1aaef
- (void)serverProxy:(id)arg1 didLoadActiveTileGroup:(id)arg2;	// IMP=0x0000000000a1a98d
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a19a08
- (void)setConstantlyChangeTileGroupInterval:(double)arg1;	// IMP=0x0000000000a19954
- (void)setConstantlyChangeTileGroup:(_Bool)arg1;	// IMP=0x0000000000a198a0
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;	// IMP=0x0000000000a19632
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;	// IMP=0x0000000000a193ba
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;	// IMP=0x0000000000a1914c
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;	// IMP=0x0000000000a18eaf
- (id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a18d5d
- (void)addNetworkActivityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a18c4e
- (id)pathForResourceWithName:(id)arg1;	// IMP=0x0000000000a18b04
- (id)allResourcePaths;	// IMP=0x0000000000a188f9
- (id)allRegionalResourceNames;	// IMP=0x0000000000a187db
- (id)allResourceNames;	// IMP=0x0000000000a1788d
- (unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 outSize:(int *)arg3;	// IMP=0x0000000000a16d14
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;	// IMP=0x0000000000a16cad
- (id)disputedBordersQueryItemsForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;	// IMP=0x0000000000a16bec
- (_Bool)isDisputedBordersAllowlistedForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;	// IMP=0x0000000000a16b39
- (_Bool)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a16ae6
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;	// IMP=0x0000000000a16a5d
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a169fe
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a169ab
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a16954
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a16901
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a168ae
- (id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2 overrideLocale:(id)arg3;	// IMP=0x0000000000a1676a
@property(readonly, nonatomic) _Bool hasLoadedActiveTileGroup;
@property(readonly, nonatomic) _Bool hasActiveTileGroup;
- (unsigned int)mapMatchingZoomLevel;	// IMP=0x0000000000a16669
- (int)mapMatchingTileSetStyle;	// IMP=0x0000000000a1665e
- (void)removeTileGroupObserver:(id)arg1;	// IMP=0x0000000000a163e6
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000a161a6
- (void)removeServerProxyObserver:(id)arg1;	// IMP=0x0000000000a16190
- (void)addServerProxyObserver:(id)arg1;	// IMP=0x0000000000a1611d
- (void)_localeChanged:(id)arg1;	// IMP=0x0000000000a160e0
- (void)closeServerConnection:(_Bool)arg1;	// IMP=0x0000000000a15f9d
- (void)closeServerConnection;	// IMP=0x0000000000a15f89
- (void)openServerConnection;	// IMP=0x0000000000a15ede
- (id)authToken;	// IMP=0x0000000000a15ec8
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (void)dealloc;	// IMP=0x0000000000a15b1f
- (id)init;	// IMP=0x0000000000a15b13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

