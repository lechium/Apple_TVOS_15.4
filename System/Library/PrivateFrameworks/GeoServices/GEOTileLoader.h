//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTileLoaderInternal, GEOTileServerProxy, NSMapTable, NSMutableArray, NSMutableSet, NSString, geo_isolater;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue;

@interface GEOTileLoader : NSObject <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_loadQ;	// 16 = 0x10
    NSMutableSet *_openers;	// 24 = 0x18
    geo_isolater *_openersIsolater;	// 32 = 0x20
    GEOTileServerProxy *_proxy;	// 40 = 0x28
    NSMutableArray *_tileDecoders;	// 48 = 0x30
    geo_isolater *_tileDecodersIsolater;	// 56 = 0x38
    id <GEOTileLoaderInternalDelegate> _internalDelegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_internalDelegateQ;	// 72 = 0x48
    GEOTileLoaderConfiguration *_config;	// 80 = 0x50
    int _rollingBatchId;	// 88 = 0x58
    unsigned long long _stateCaptureHandle;	// 96 = 0x60
    _Bool _coalesceTimerEnabled;	// 104 = 0x68
    GEOTileLoaderInternal *_internal;	// 112 = 0x70
    NSMapTable *_observers;	// 120 = 0x78
    geo_isolater *_observersIsolater;	// 128 = 0x80
}

+ (id)diskCacheLocation;	// IMP=0x00000000002c3ea1
+ (void)setDiskCacheLocation:(id)arg1;	// IMP=0x00000000002c3e21
+ (void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1;	// IMP=0x00000000002c3dd3
+ (void)setMemoryCacheCountLimit:(unsigned long long)arg1;	// IMP=0x00000000002c3d85
+ (void)useLocalLoader;	// IMP=0x00000000002c3d2e
+ (void)useRemoteLoader;	// IMP=0x00000000002c3cd7
+ (void)setServerProxyClass:(Class)arg1;	// IMP=0x00000000002c3c89
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002c2cd5
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;	// IMP=0x00000000002c2c30
+ (id)modernLoader;	// IMP=0x00000000002c2bdb
- (void).cxx_destruct;	// IMP=0x00000000002d0c8f
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002d0c5c
- (void)setInternalDelegateQ:(id)arg1;	// IMP=0x00000000002d0c4b
@property(nonatomic) id <GEOTileLoaderInternalDelegate> internalDelegate;
- (void)proxyDidDownloadRegionalResources:(id)arg1;	// IMP=0x00000000002d0b5e
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;	// IMP=0x00000000002d042d
- (void)proxyDidDeleteExternalTileData:(id)arg1;	// IMP=0x00000000002d01b3
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;	// IMP=0x00000000002d004d
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;	// IMP=0x00000000002cfbbd
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;	// IMP=0x00000000002ce9d4
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;	// IMP=0x00000000002ce6ba
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002cdb13
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cda1b
- (void)registerTileLoader:(Class)arg1;	// IMP=0x00000000002cd9cf
- (void)registerTileDecoder:(id)arg1;	// IMP=0x00000000002cd8a5
- (void)_localeChanged:(id)arg1;	// IMP=0x00000000002cd893
- (void)_tileEditionChanged:(id)arg1;	// IMP=0x00000000002cd881
- (void)experimentConfigurationDidChange:(id)arg1;	// IMP=0x00000000002cd86f
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000002cd869
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000002cd857
- (void)clearCachedTilesMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cd769
- (void)clearAllCaches;	// IMP=0x00000000002cd726
- (unsigned long long)calculateFreeableSizeSync;	// IMP=0x00000000002cd710
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x00000000002cd5bd
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;	// IMP=0x00000000002cd5a7
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cd591
- (void)endPreloadSessionForClient:(id)arg1;	// IMP=0x00000000002cd57b
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x00000000002cd565
- (void)cancelAllForClientSynchronous:(id)arg1;	// IMP=0x00000000002cd43e
- (void)cancelAllForClient:(id)arg1;	// IMP=0x00000000002ccfc5
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;	// IMP=0x00000000002ccd65
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;	// IMP=0x00000000002cbf86
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;	// IMP=0x00000000002cbe33
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;	// IMP=0x00000000002cbd1c
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;	// IMP=0x00000000002cbacd
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;	// IMP=0x00000000002cb9b1
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;	// IMP=0x00000000002cb8a6
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;	// IMP=0x00000000002cb850
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 createTime:(double)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;	// IMP=0x00000000002cb7ef
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;	// IMP=0x00000000002cb6b5
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;	// IMP=0x00000000002cb59a
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;	// IMP=0x00000000002cb54d
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 auditToken:(id)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;	// IMP=0x00000000002cb424
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;	// IMP=0x00000000002cb32c
- (_Bool)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;	// IMP=0x00000000002cb012
- (void)_scheduleCoalesceTimer;	// IMP=0x00000000002caec9
- (void)_decodePreliminaryTileData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;	// IMP=0x00000000002ca205
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const struct GEOTileLoaderAdditionalInfo *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned int)arg8 signpostID:(unsigned long long)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(CDUnknownBlockType)arg12 callback:(CDUnknownBlockType)arg13;	// IMP=0x00000000002c7f7d
- (void)closeForClient:(id)arg1;	// IMP=0x00000000002c7664
- (void)openForClient:(id)arg1;	// IMP=0x00000000002c7434
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000002c6941
- (void)registerObserver:(id)arg1;	// IMP=0x00000000002c6731
- (id)descriptionDictionaryRepresentation;	// IMP=0x00000000002c5fa4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002c4071
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000002c4064
- (id)init;	// IMP=0x00000000002c3fff
@property(readonly, nonatomic) int networkHits;
@property(readonly, nonatomic) int diskHits;
@property(readonly, nonatomic) int memoryHits;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x00000000002d0f67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
