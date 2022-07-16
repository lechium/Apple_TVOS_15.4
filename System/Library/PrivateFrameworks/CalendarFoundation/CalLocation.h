//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class CLLocation, CLPlacemark, NSData, NSString;

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation *_location;	// 8 = 0x8
    NSString *_address;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_abURLString;	// 40 = 0x28
    CLPlacemark *_placemark;	// 48 = 0x30
    NSData *_mapKitHandle;	// 56 = 0x38
    _Bool _isCurrentLocation;	// 64 = 0x40
    double _radius;	// 72 = 0x48
    NSString *_routeType;	// 80 = 0x50
    int _type;	// 88 = 0x58
}

+ (long long)routingModeEnumForCalRouteType:(id)arg1;	// IMP=0x000000000005e83a
+ (id)routeTypeStringForCalLocationRoutingMode:(long long)arg1;	// IMP=0x000000000005e7fd
+ (id)displayStringForAddress:(id)arg1 withoutTitle:(id)arg2;	// IMP=0x000000000005e6d4
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;	// IMP=0x000000000000e265
+ (id)coordinatesFromGeoURLString:(id)arg1;	// IMP=0x000000000005e5da
+ (id)geoURLStringFromCoordinates:(id)arg1;	// IMP=0x0000000000012d59
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012268
- (void).cxx_destruct;	// IMP=0x0000000000012080
@property(copy) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(copy) NSString *routeType; // @synthesize routeType=_routeType;
@property int type; // @synthesize type=_type;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(copy) NSString *abURLString; // @synthesize abURLString=_abURLString;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *address; // @synthesize address=_address;
- (id)geoURLString;	// IMP=0x0000000000012bef
- (id)fullTitleAndAddressString;	// IMP=0x000000000005e549
- (id)displayString;	// IMP=0x0000000000012e21
@property(readonly, nonatomic) _Bool isCurrentLocation;
- (id)description;	// IMP=0x00000000000128f1
- (double)distanceFromLocation:(id)arg1;	// IMP=0x000000000005e4b4
- (id)typeString;	// IMP=0x0000000000012b43
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) CLLocation *location;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005decf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011c71
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012270
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012584

@end
