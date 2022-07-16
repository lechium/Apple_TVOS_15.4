//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOCoordinateArraySupportPoint : NSObject <NSSecureCoding>
{
    struct PolylineCoordinate _routeCoordinate;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
    long long _roadID;	// 24 = 0x18
    double _heading;	// 32 = 0x20
    _Bool _isUTurn;	// 40 = 0x28
    int _legacyRoadClass;	// 44 = 0x2c
    int _legacyFormOfWay;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000d79bb1
- (id).cxx_construct;	// IMP=0x0000000000d79f87
@property(nonatomic) int legacyFormOfWay; // @synthesize legacyFormOfWay=_legacyFormOfWay;
@property(nonatomic) int legacyRoadClass; // @synthesize legacyRoadClass=_legacyRoadClass;
@property(nonatomic) _Bool isUTurn; // @synthesize isUTurn=_isUTurn;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) long long roadID; // @synthesize roadID=_roadID;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id)description;	// IMP=0x0000000000d79e4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d79d4d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d79bb9
- (id)init;	// IMP=0x0000000000d79b67

@end
