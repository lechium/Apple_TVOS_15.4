//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKOverlay-Protocol.h>

@class GEOTileCache, NSString, geo_isolater;
@protocol OS_dispatch_source;

@interface MKTileOverlay : NSObject <MKOverlay>
{
    NSString *_URLTemplate;	// 8 = 0x8
    struct CGSize _tileSize;	// 16 = 0x10
    _Bool _geometryFlipped;	// 32 = 0x20
    long long _minimumZ;	// 40 = 0x28
    long long _maximumZ;	// 48 = 0x30
    _Bool _canReplaceMapContent;	// 56 = 0x38
    unsigned int _providerID;	// 60 = 0x3c
    GEOTileCache *_tileCache;	// 64 = 0x40
    GEOTileCache *_minimumLifetimeTileCache;	// 72 = 0x48
    geo_isolater *_minimumLifetimeTileCacheEvictionTimerIsolation;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_minimumLifetimeTileCacheEvictionTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;	// 96 = 0x60
    _Bool _needsAdditionalMinimumLifetimeCleanup;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000206d85
@property(readonly, nonatomic, getter=_providerID) unsigned int providerID; // @synthesize providerID=_providerID;
@property(nonatomic) _Bool canReplaceMapContent; // @synthesize canReplaceMapContent=_canReplaceMapContent;
@property long long maximumZ; // @synthesize maximumZ=_maximumZ;
@property long long minimumZ; // @synthesize minimumZ=_minimumZ;
@property(getter=isGeometryFlipped) _Bool geometryFlipped; // @synthesize geometryFlipped=_geometryFlipped;
@property(readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
@property struct CGSize tileSize; // @synthesize tileSize=_tileSize;
- (void)_flushCaches;	// IMP=0x0000000000206c3c
- (id)_tilesInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 contentScale:(double)arg3;	// IMP=0x0000000000206642
- (int)_zoomLevelForScale:(double)arg1;	// IMP=0x00000000002065e8
- (void)_minLifetimeCacheCleanupFired;	// IMP=0x0000000000206454
- (void)_scheduleMinLifetimeCacheCleanupIfNecessary;	// IMP=0x00000000002062ca
- (void)_receivedMemoryNotification;	// IMP=0x00000000002062b4
- (void)_cancelLoadingTileAtPath:(CDStruct_cbb88d5e)arg1;	// IMP=0x00000000002062ae
- (void)_loadTile:(const struct _GEOTileKey *)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000206024
- (struct _GEOTileKey)_keyForPath:(CDStruct_cbb88d5e)arg1;	// IMP=0x0000000000205e94
- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000205bd5
- (id)URLForTilePath:(CDStruct_cbb88d5e)arg1;	// IMP=0x0000000000205985
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (void)dealloc;	// IMP=0x00000000002058c3
- (id)initWithURLTemplate:(id)arg1;	// IMP=0x00000000002055fe
- (id)init;	// IMP=0x00000000002055ea
- (void)_assignProviderID;	// IMP=0x00000000002055c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

