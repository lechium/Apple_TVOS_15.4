//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOTileLoader, GEOVectorTileDecoder, NSString;

__attribute__((visibility("hidden")))
@interface AltTileFetcher : NSObject
{
    GEOTileLoader *_geoTileLoader;	// 8 = 0x8
    struct _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOVectorTileDecoder *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _vectorTileDecoder;	// 16 = 0x10
    struct _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOApplicationAuditToken *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _auditToken;	// 40 = 0x28
    struct unordered_map<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::allocator<std::pair<const _GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> _keyToJobMap;	// 64 = 0x40
    struct Mutex _mutex;	// 104 = 0x68
    unsigned int _numDownloads;	// 112 = 0x70
    NSString *_tileLoaderClientIdentifier;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x00000000005a7103
- (void).cxx_destruct;	// IMP=0x00000000005a7095
- (void)purgeExpired:(double)arg1;	// IMP=0x00000000005a7010
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000005a6ffa
- (void)cancelRequests;	// IMP=0x00000000005a6f44
- (void)updateJobPriority:(void *)arg1;	// IMP=0x00000000005a6eba
- (void)cancelJob:(void *)arg1;	// IMP=0x00000000005a6e20
- (void)fetchDataForJob:(void *)arg1;	// IMP=0x00000000005a5db4
- (shared_ptr_97fa0047)getJobForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000005a5d3a
- (void)dealloc;	// IMP=0x00000000005a5cff
- (id)initWithToken:(id)arg1;	// IMP=0x00000000005a5bc8

@end
