//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface DCMapsLink : NSObject <WFSerializableContent, WFNaming>
{
}

+ (_Bool)isMapsURL:(id)arg1;	// IMP=0x00000000000afbc6
+ (id)mapsLinkWithURL:(id)arg1;	// IMP=0x00000000000afb4d
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x0000000000050a0a
+ (void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000009ba33
+ (void)processLocation:(id)arg1 shiftingIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b8f9
+ (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;	// IMP=0x00000000000bacdb
+ (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;	// IMP=0x00000000000baaa2
+ (double)pixelSpaceYToLatitude:(double)arg1;	// IMP=0x00000000000baa59
+ (double)pixelSpaceXToLongitude:(double)arg1;	// IMP=0x00000000000baa2e
+ (double)latitudeToPixelSpaceY:(double)arg1;	// IMP=0x00000000000ba9d0
+ (double)longitudeToPixelSpaceX:(double)arg1;	// IMP=0x00000000000ba9a6
@property(readonly, nonatomic) NSString *streetViewLocation;
@property(readonly, nonatomic) _Bool showsBicycling;
@property(readonly, nonatomic) _Bool showsStreetView;
@property(readonly, nonatomic) _Bool showsTransit;
@property(readonly, nonatomic) _Bool showsTraffic;
@property(readonly, nonatomic) unsigned long long mapType;
@property(readonly, nonatomic) long long zoomLevel;
@property(readonly, nonatomic) NSString *centerLocation;
@property(readonly, nonatomic) unsigned long long directionsMode;
@property(readonly, nonatomic) NSString *destinationAddress;
@property(readonly, nonatomic) NSString *startAddress;
@property(readonly, nonatomic) NSString *searchLocation;
@property(readonly, nonatomic) NSString *searchNearQuery;
@property(readonly, nonatomic) NSString *searchQuery;
@property(readonly, copy) NSString *description;
- (void)getCitymapperAppURL:(CDUnknownBlockType)arg1;	// IMP=0x00000000000af950
- (id)baiduMapsAppURL;	// IMP=0x00000000000af934
- (id)wazeAppURL;	// IMP=0x00000000000af918
- (id)transitAppURL;	// IMP=0x00000000000af8fc
- (id)googleMapsAppURL;	// IMP=0x00000000000af8e0
- (id)mapsAppURL;	// IMP=0x00000000000af8c4
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040039
- (void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ff14
- (id)region;	// IMP=0x000000000003fee6
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D)arg1;	// IMP=0x000000000003fc12
- (id)wfSerializedRepresentation;	// IMP=0x000000000005047a
@property(readonly, copy, nonatomic) NSString *wfName;
- (void)getAppleMapsDirectionsURL:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a70c
@property(readonly, nonatomic) NSString *mkDirectionsMode;
@property(readonly, nonatomic) unsigned long long directionsTransportType;
- (void)getDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a17b
- (void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069e70
- (void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069e59
@property(readonly, nonatomic) _Bool canGetDirections;
- (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00000000000ba343
- (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00000000000ba2d3
@property(readonly, nonatomic) unsigned long long mkMapType;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (struct CLLocationCoordinate2D)streetViewLocationCoordinate;	// IMP=0x00000000000ba1b5
- (struct CLLocationCoordinate2D)centerLocationCoordinate;	// IMP=0x00000000000ba151
- (struct CLLocationCoordinate2D)searchLocationCoordinate;	// IMP=0x00000000000ba0ed
- (struct CLLocationCoordinate2D)locationCoordinateFromString:(id)arg1;	// IMP=0x00000000000b9ed7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

