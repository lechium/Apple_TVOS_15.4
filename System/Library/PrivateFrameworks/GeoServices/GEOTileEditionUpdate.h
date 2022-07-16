//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;	// 8 = 0x8
    _Bool _flushEverything;	// 16 = 0x10
    _Bool _invalidateEverything;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x000000000102d7c8
@property(nonatomic) _Bool invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;
@property(nonatomic) _Bool flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)tileset:(CDUnion_23a7df3d *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(_Bool *)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000102d709
- (unsigned long long)tilesetCount;	// IMP=0x000000000102d6f3
- (void)addTileset:(CDUnion_23a7df3d)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;	// IMP=0x000000000102d64f
- (id)init;	// IMP=0x000000000102d5f9
- (id)initWithActiveTileGroup:(id)arg1 oldActiveTileGroup:(id)arg2 dataSetDiffers:(_Bool)arg3 flushEverything:(_Bool)arg4;	// IMP=0x0000000000a2a1a4

@end

