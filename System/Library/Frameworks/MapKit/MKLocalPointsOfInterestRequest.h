//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class MKPointOfInterestFilter;

@interface MKLocalPointsOfInterestRequest : NSObject <NSCopying>
{
    _Bool _createdFromRegion;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    MKPointOfInterestFilter *_pointOfInterestFilter;	// 24 = 0x18
    struct CLLocationCoordinate2D _coordinate;	// 32 = 0x20
    CDStruct_b7cb895d _region;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001e178d
@property(copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // @synthesize pointOfInterestFilter=_pointOfInterestFilter;
@property(readonly, nonatomic, getter=_createdFromRegion) _Bool createdFromRegion; // @synthesize createdFromRegion=_createdFromRegion;
@property(readonly, nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (double)_deriveRadiusFromCoordinateRegion:(CDStruct_b7cb895d)arg1;	// IMP=0x00000000001e16ab
- (CDStruct_b7cb895d)_clampedCoordinateRegionForCoordinateRegion:(CDStruct_b7cb895d)arg1;	// IMP=0x00000000001e15cf
- (_Bool)_isValidCoordinateRegion:(CDStruct_b7cb895d)arg1;	// IMP=0x00000000001e156e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e14b1
- (id)initWithCoordinateRegion:(CDStruct_b7cb895d)arg1;	// IMP=0x00000000001e130e
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;	// IMP=0x00000000001e1147

@end

