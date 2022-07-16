//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOWalkingRouteMatcher
{
    unsigned long long _newStepProgressions;	// 16 = 0x10
}

- (_Bool)_supportsSnapping;	// IMP=0x00000000006902da
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000069001f
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;	// IMP=0x000000000068fc7c
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;	// IMP=0x000000000068fc37
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousMatchGood:(_Bool)arg3;	// IMP=0x000000000068fb99
- (id)initWithRoute:(id)arg1;	// IMP=0x000000000068faed

@end
