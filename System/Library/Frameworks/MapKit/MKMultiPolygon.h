//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKGeoJSONObject-Protocol.h>
#import <MapKit/MKOverlay-Protocol.h>

@class NSArray, NSString;

@interface MKMultiPolygon <MKGeoJSONObject, MKOverlay>
{
    NSArray *_polygons;	// 8 = 0x8
    CDStruct_02837cd9 _boundingMapRect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023380b
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly, copy, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)init;	// IMP=0x000000000023378d
- (id)initWithPolygons:(id)arg1;	// IMP=0x000000000023340d
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c40b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

