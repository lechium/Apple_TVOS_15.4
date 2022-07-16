//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKGeoJSONObject-Protocol.h>

@class NSString;

@interface MKMultiPoint <MKGeoJSONObject>
{
    CDStruct_c3b9c2ee *_points;	// 8 = 0x8
    unsigned long long _pointCount;	// 16 = 0x10
    CDStruct_02837cd9 _boundingRect;	// 24 = 0x18
    struct GEOOnce_s _calculatedMapPointsLength;	// 56 = 0x38
    double _mapPointsLength;	// 64 = 0x40
    struct GEOOnce_s _calculatedSelfIntersecting;	// 72 = 0x48
    _Bool _selfIntersecting;	// 80 = 0x50
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
- (id)locationsAtPointIndexes:(id)arg1;	// IMP=0x00000000001a0f72
- (double)locationAtPointIndex:(unsigned long long)arg1;	// IMP=0x00000000001a0e91
- (_Bool)_determineSelfIntersecting;	// IMP=0x00000000001a066a
- (_Bool)_isSelfIntersecting;	// IMP=0x00000000001a05d6
- (double)_mapPointsLength;	// IMP=0x00000000001a04d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a03e3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a01a3
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001a0165
- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x00000000001a0131
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001a008e
- (void)_assignPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001a004a
- (void)_setPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000019ff71
- (void)_setCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000019fedd
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000019fdf9
- (void)_pointsDidChange;	// IMP=0x000000000019fdf3
- (void)_calculateBounds;	// IMP=0x000000000019fda1
- (void)_setBounds:(CDStruct_02837cd9)arg1;	// IMP=0x000000000019fd83
- (CDStruct_02837cd9)boundingMapRect;	// IMP=0x000000000019fd63
- (CDStruct_c3b9c2ee *)points;	// IMP=0x000000000019fd52
- (void)dealloc;	// IMP=0x000000000019fd0c
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

