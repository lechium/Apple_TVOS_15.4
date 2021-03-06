//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOLocationShifter, GEONavigationMatchResult, GEORoadMatcher, GEORouteMatcher;

@interface GEONavigationMapMatcher : NSObject
{
    _Bool _isSimulation;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    GEONavigationMatchResult *_previousMatchResult;	// 24 = 0x18
    unsigned long long _targetLegIndex;	// 32 = 0x20
    GEORouteMatcher *_routeMatcher;	// 40 = 0x28
    GEORoadMatcher *_roadMatcher;	// 48 = 0x30
    GEOLocationShifter *_locationShifter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000c6ffa7
@property(retain, nonatomic) GEOLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(retain, nonatomic) GEORoadMatcher *roadMatcher; // @synthesize roadMatcher=_roadMatcher;
@property(retain, nonatomic) GEORouteMatcher *routeMatcher; // @synthesize routeMatcher=_routeMatcher;
@property(nonatomic) _Bool isSimulation; // @synthesize isSimulation=_isSimulation;
@property(nonatomic) unsigned long long targetLegIndex; // @synthesize targetLegIndex=_targetLegIndex;
@property(retain, nonatomic) GEONavigationMatchResult *previousMatchResult; // @synthesize previousMatchResult=_previousMatchResult;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)_routeMatcherForRoute:(id)arg1;	// IMP=0x0000000000c6ff1e
- (void)setShouldSnapRouteMatchToRoute:(_Bool)arg1;	// IMP=0x0000000000c6fe64
- (void)resetToLocation:(id)arg1;	// IMP=0x0000000000c6fdb1
- (int)transportType;	// IMP=0x0000000000c6fda6
- (id)updateForReroute:(id)arg1 location:(id)arg2;	// IMP=0x0000000000c6fc6c
- (id)matchLocation:(id)arg1 transportType:(int)arg2;	// IMP=0x0000000000c6fc64
- (id)initWithRoute:(id)arg1;	// IMP=0x0000000000c6fb4f

@end

