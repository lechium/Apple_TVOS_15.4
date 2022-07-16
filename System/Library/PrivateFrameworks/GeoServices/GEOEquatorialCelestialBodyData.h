//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOEquatorialCelestialBodyData : NSObject
{
    double _rightAscension;	// 8 = 0x8
    double _declination;	// 16 = 0x10
}

@property(readonly, nonatomic) double declination; // @synthesize declination=_declination;
@property(readonly, nonatomic) double rightAscension; // @synthesize rightAscension=_rightAscension;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;	// IMP=0x00000000009c2d8c
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2;	// IMP=0x00000000009c2d78
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(_Bool)arg3;	// IMP=0x00000000009c2cef
- (id)initWithDate:(id)arg1 body:(long long)arg2;	// IMP=0x00000000009c2cda

@end
