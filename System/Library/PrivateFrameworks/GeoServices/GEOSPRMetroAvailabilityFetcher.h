//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOTileLoader, GEOVectorTile, geo_isolater;

@interface GEOSPRMetroAvailabilityFetcher : NSObject
{
    GEOApplicationAuditToken *_auditToken;	// 8 = 0x8
    GEOTileLoader *_tileLoader;	// 16 = 0x10
    _Bool _forceDisableMetros;	// 24 = 0x18
    geo_isolater *_isolation;	// 32 = 0x20
    struct _GEOTileKey _lastLoadedKey;	// 40 = 0x28
    GEOVectorTile *_lastLoadedTile;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000ef5383
- (void)determineAvailabilityForCoordinate:(CDStruct_c3b9c2ee)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ef4658
- (id)initWithTileLoader:(id)arg1 auditToken:(id)arg2 forceDisableMetros:(_Bool)arg3;	// IMP=0x0000000000ef4532
- (id)initWithTileLoader:(id)arg1 auditToken:(id)arg2;	// IMP=0x0000000000ef451d
- (id)init;	// IMP=0x0000000000ef4507

@end
