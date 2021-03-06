//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteEVStepInfo;

@interface GEOComposedDrivingRouteStep
{
    GEOComposedRouteEVStepInfo *_evInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003313e3
- (void).cxx_destruct;	// IMP=0x00000000003315c5
- (id)description;	// IMP=0x000000000033151a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033149d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003313eb
- (id)evInfo;	// IMP=0x0000000000331332
- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;	// IMP=0x0000000000331209
- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 startRouteCoordinate:(CDStruct_3f2a7a20)arg5 endRouteCoordinate:(CDStruct_3f2a7a20)arg6 maneuverStartRouteCoordinate:(CDStruct_3f2a7a20)arg7;	// IMP=0x00000000003310e0

@end

