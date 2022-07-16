//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_FerryProgression
{
    GEOComposedRouteStep *_boardStep;	// 48 = 0x30
    GEOComposedRouteStep *_alightStep;	// 56 = 0x38
    CDStruct_2c43369c _alightLocationCoordinate;	// 64 = 0x40
    double _startProgressionDistanceToDestination;	// 80 = 0x50
    unsigned long long _progressionCount;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000001048df7
- (unsigned long long)priority;	// IMP=0x0000000001048dec
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x0000000001048be5
- (id)initWithRoute:(id)arg1 tripSegment:(id)arg2;	// IMP=0x0000000001048a1b

@end

