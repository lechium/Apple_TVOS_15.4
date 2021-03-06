//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileLoader, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTileFinder : NSObject
{
    _Bool _allowStaleData;	// 8 = 0x8
    unsigned long long _zoomLevel;	// 16 = 0x10
    int _tileSize;	// 24 = 0x18
    int _tileScale;	// 28 = 0x1c
    int _tileSetStyle;	// 32 = 0x20
    NSString *_tileLoaderClientIdentifier;	// 40 = 0x28
    GEOTileLoader *_tileLoader;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000f7df8c
@property(nonatomic) _Bool allowStaleData; // @synthesize allowStaleData=_allowStaleData;
- (id)_tileLoaderClientIdentifier;	// IMP=0x0000000000f7debb
- (id)_findTilesInList:(id)arg1 allowNetwork:(_Bool)arg2 preloadToDiskOnly:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000f7cf95
- (void)cancel;	// IMP=0x0000000000f7cf74
- (id)preloadTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 preloadToDiskOnly:(_Bool)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000f7ce32
- (id)findTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 allowNetwork:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000f7c987
- (id)findTileWithKey:(struct _GEOTileKey)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000f7c84d
- (struct _GEOTileKey)tileKeyWithX:(unsigned int)arg1 y:(unsigned int)arg2;	// IMP=0x0000000000f7c7b2
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5;	// IMP=0x0000000000f7c6ed
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4;	// IMP=0x0000000000f7c6ca
- (id)initWithTileLoader:(id)arg1;	// IMP=0x0000000000f7c629

@end

