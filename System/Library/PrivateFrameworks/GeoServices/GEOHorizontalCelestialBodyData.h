//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOHorizontalCelestialBodyData : NSObject
{
    double _altitude;	// 8 = 0x8
    double _azimuth;	// 16 = 0x10
}

@property(readonly, nonatomic) double azimuth; // @synthesize azimuth=_azimuth;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;	// IMP=0x00000000009c2f3e
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;	// IMP=0x00000000009c2e9b
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;	// IMP=0x00000000009c2e83

@end

