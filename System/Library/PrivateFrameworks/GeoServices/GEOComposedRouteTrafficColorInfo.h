//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOComposedRouteTrafficColorInfo : NSObject <NSSecureCoding>
{
    unsigned long long _color;	// 8 = 0x8
    double _offsetMeters;	// 16 = 0x10
    CDStruct_3f2a7a20 _routeCoordinate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000fea5d0
@property(nonatomic) CDStruct_3f2a7a20 routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property(nonatomic) double offsetMeters; // @synthesize offsetMeters=_offsetMeters;
@property(nonatomic) unsigned long long color; // @synthesize color=_color;
- (id)_stringForColor:(unsigned long long)arg1;	// IMP=0x0000000000fea7f9
- (id)description;	// IMP=0x0000000000fea756
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fea6c4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fea5d8

@end

