//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTransitLinkFinder
{
    GEOTileLoader *_tileLoader;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003170bb
- (id)findTransitLinksNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000316c05
- (id)initWithTileLoader:(id)arg1;	// IMP=0x0000000000316b83

@end

