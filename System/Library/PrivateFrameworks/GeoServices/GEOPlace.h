//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOBusiness, GEOLatLng, GEOMapRegion, GEOStructuredAddress, GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    long long _uID;	// 24 = 0x18
    GEOAddress *_address;	// 32 = 0x20
    double _area;	// 40 = 0x28
    NSMutableArray *_business;	// 48 = 0x30
    GEOLatLng *_center;	// 56 = 0x38
    GEOMapRegion *_displayMapRegion;	// 64 = 0x40
    NSMutableArray *_entryPoints;	// 72 = 0x48
    long long _geoId;	// 80 = 0x50
    GEOMapRegion *_mapRegion;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    GEOAddress *_phoneticAddress;	// 104 = 0x68
    NSString *_phoneticLocaleIdentifier;	// 112 = 0x70
    NSString *_phoneticName;	// 120 = 0x78
    NSMutableArray *_roadAccessPoints;	// 128 = 0x80
    NSString *_spokenAddress;	// 136 = 0x88
    NSString *_spokenName;	// 144 = 0x90
    GEOStructuredAddress *_spokenStructuredAddress;	// 152 = 0x98
    GEOTimezone *_timezone;	// 160 = 0xa0
    unsigned int _readerMarkPos;	// 168 = 0xa8
    unsigned int _readerMarkLength;	// 172 = 0xac
    struct os_unfair_lock_s _readerLock;	// 176 = 0xb0
    int _addressGeocodeAccuracy;	// 180 = 0xb4
    int _localSearchProviderID;	// 184 = 0xb8
    int _referenceFrame;	// 188 = 0xbc
    int _type;	// 192 = 0xc0
    _Bool _isDisputed;	// 196 = 0xc4
    struct {
        unsigned int has_uID:1;
        unsigned int has_area:1;
        unsigned int has_geoId:1;
        unsigned int has_addressGeocodeAccuracy:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_type:1;
        unsigned int has_isDisputed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_business:1;
        unsigned int read_center:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_entryPoints:1;
        unsigned int read_mapRegion:1;
        unsigned int read_name:1;
        unsigned int read_phoneticAddress:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_phoneticName:1;
        unsigned int read_roadAccessPoints:1;
        unsigned int read_spokenAddress:1;
        unsigned int read_spokenName:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 200 = 0xc8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e9a038
+ (Class)roadAccessPointsType;	// IMP=0x0000000000e971d4
+ (Class)entryPointType;	// IMP=0x0000000000e967ca
+ (Class)businessType;	// IMP=0x0000000000e96361
+ (id)_placesFromURL:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;	// IMP=0x0000000000384e42
+ (id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;	// IMP=0x0000000000384a10
+ (id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;	// IMP=0x00000000003847a2
+ (id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(_Bool *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;	// IMP=0x0000000000384535
+ (id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3;	// IMP=0x0000000000383e94
+ (id)_urlToShowCurrentLocationWithOptions:(id)arg1;	// IMP=0x0000000000383dba
+ (id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3;	// IMP=0x0000000000383ac1
+ (id)_urlToShowPlaces:(id)arg1 options:(id)arg2;	// IMP=0x00000000003837f7
+ (id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2;	// IMP=0x000000000038354f
+ (id)_urlForAction:(id)arg1 rison:(id)arg2;	// IMP=0x000000000038344a
+ (id)_urlRepresentationForCurrentLocation;	// IMP=0x00000000003833d4
+ (id)placeForPlaceData:(id)arg1;	// IMP=0x00000000009c6947
- (void).cxx_destruct;	// IMP=0x0000000000e9d764
- (int)StringAsReferenceFrame:(id)arg1;	// IMP=0x0000000000e9d6d2
- (id)referenceFrameAsString:(int)arg1;	// IMP=0x0000000000e9d66c
@property(nonatomic) _Bool hasReferenceFrame;
@property(nonatomic) int referenceFrame;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e9d0da
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e9c94a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e9c00c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e9b7ad
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e9b2d6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e9aeea
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e9a69f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e9a690
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e99d85
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e99d73
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e98732
- (id)jsonRepresentation;	// IMP=0x0000000000e98620
- (id)dictionaryRepresentation;	// IMP=0x0000000000e972fa
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasGeoId;
@property(nonatomic) long long geoId;
- (id)roadAccessPointsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e971a3
- (unsigned long long)roadAccessPointsCount;	// IMP=0x0000000000e97177
- (void)addRoadAccessPoints:(id)arg1;	// IMP=0x0000000000e970c0
- (void)clearRoadAccessPoints;	// IMP=0x0000000000e97095
@property(retain, nonatomic) NSMutableArray *roadAccessPoints;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress;
@property(readonly, nonatomic) _Bool hasSpokenStructuredAddress;
@property(nonatomic) _Bool hasArea;
@property(nonatomic) double area;
@property(retain, nonatomic) NSString *spokenAddress;
@property(readonly, nonatomic) _Bool hasSpokenAddress;
@property(retain, nonatomic) NSString *spokenName;
@property(readonly, nonatomic) _Bool hasSpokenName;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) _Bool hasIsDisputed;
@property(nonatomic) _Bool isDisputed;
- (id)entryPointAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e96799
- (unsigned long long)entryPointsCount;	// IMP=0x0000000000e9676d
- (void)addEntryPoint:(id)arg1;	// IMP=0x0000000000e966b6
- (void)clearEntryPoints;	// IMP=0x0000000000e9668b
@property(retain, nonatomic) NSMutableArray *entryPoints;
- (int)StringAsAddressGeocodeAccuracy:(id)arg1;	// IMP=0x0000000000e9647c
- (id)addressGeocodeAccuracyAsString:(int)arg1;	// IMP=0x0000000000e963e5
@property(nonatomic) _Bool hasAddressGeocodeAccuracy;
@property(nonatomic) int addressGeocodeAccuracy;
- (id)businessAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e96330
- (unsigned long long)businessCount;	// IMP=0x0000000000e96304
- (void)addBusiness:(id)arg1;	// IMP=0x0000000000e9624d
- (void)clearBusiness;	// IMP=0x0000000000e96222
@property(retain, nonatomic) NSMutableArray *business;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOAddress *phoneticAddress;
@property(readonly, nonatomic) _Bool hasPhoneticAddress;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(retain, nonatomic) GEOAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000e939b8
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000e9372e
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasUID;
@property(nonatomic) long long uID;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e935fb
- (id)init;	// IMP=0x0000000000e9359f
- (id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1;	// IMP=0x0000000000384484
- (id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1;	// IMP=0x00000000003843d0
- (id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2;	// IMP=0x00000000003842e4
- (id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2;	// IMP=0x00000000003841f8
- (id)_urlToShowWithOptions:(id)arg1;	// IMP=0x0000000000383707
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;	// IMP=0x00000000003831a0
- (id)urlRepresentation;	// IMP=0x0000000000382f4a
- (id)initWithUrlRepresentation:(id)arg1;	// IMP=0x0000000000382d24
- (id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 addressObject:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5;	// IMP=0x00000000009c62ed
- (void)setNSTimeZone:(id)arg1;	// IMP=0x000000000103ba15
- (id)bestName;	// IMP=0x000000000103b913
- (id)arrivalMapRegionForTransportType:(int)arg1;	// IMP=0x000000000103b899
- (id)arrivalMapRegion;	// IMP=0x000000000103b818
- (double)radialDistance;	// IMP=0x000000000103b7ca
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000103b721
- (CDStruct_c3b9c2ee)coordinate;	// IMP=0x000000000103b642
- (id)addressDictionary;	// IMP=0x000000000103b572
@property(readonly, nonatomic) GEOBusiness *firstBusiness;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x000000000103b4e3
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 placeType:(int)arg3;	// IMP=0x000000000103b4a2
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3;	// IMP=0x000000000103b2c3
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9;	// IMP=0x000000000112164b
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;	// IMP=0x00000000011ca777
- (id)geoMapItem;	// IMP=0x0000000001263820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
