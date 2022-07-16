//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOSearchAttributionServerProxy-Protocol.h>

@class GEOSearchAttributionManifest, NSMapTable, NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy>
{
    NSMapTable *_listeners;	// 8 = 0x8
    struct os_unfair_lock_s _listenersLock;	// 16 = 0x10
    _Bool _updatingManifest;	// 20 = 0x14
    NSMutableArray *_updateManifestCompletionHandlers;	// 24 = 0x18
    NSMutableArray *_updateManifestErrorHandlers;	// 32 = 0x20
    GEOSearchAttributionManifest *_attributionManifest;	// 40 = 0x28
    struct os_unfair_lock_s _attributionManifestLock;	// 48 = 0x30
    geo_isolater *_isolater;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001050542
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x0000000001050509
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000104fdb4
- (void)_loadAttributionInfoForListener:(id)arg1;	// IMP=0x000000000104fc6f
- (void)_sendError:(id)arg1 toListener:(id)arg2;	// IMP=0x000000000104fbb8
- (void)_sendInfo:(id)arg1 toListener:(id)arg2;	// IMP=0x000000000104fb01
- (id)_attributionManifest;	// IMP=0x000000000104fa3e
- (id)init;	// IMP=0x000000000104f96b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
