//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteHypothesizer, GEOXPCActivity, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerDelayer : NSObject
{
    struct __CFBinaryHeap *_minHeap;	// 8 = 0x8
    GEORouteHypothesizer *_nextHypothesizer;	// 16 = 0x10
    geo_isolater *_isolater;	// 24 = 0x18
    GEOXPCActivity *_activity;	// 32 = 0x20
}

+ (void)checkin;	// IMP=0x0000000000711bfc
- (void).cxx_destruct;	// IMP=0x00000000007126c3
- (void)dealloc;	// IMP=0x0000000000712689
- (void)delayStartOfHypothesizer:(id)arg1;	// IMP=0x000000000071259e
- (void)_setNextHypothesizer:(id)arg1;	// IMP=0x0000000000712204
- (void)_startValidHypothesizers;	// IMP=0x0000000000711ef2
- (id)init;	// IMP=0x0000000000711c40

@end

