//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOLatLng *_location;	// 24 = 0x18
    unsigned long long _muid;	// 32 = 0x20
    NSString *_nameDisplayString;	// 40 = 0x28
    NSMutableArray *_zoomNames;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _stationIndex;	// 68 = 0x44
    int _structureType;	// 72 = 0x48
    struct {
        unsigned int has_muid:1;
        unsigned int has_stationIndex:1;
        unsigned int has_structureType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_location:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d36b02
+ (Class)zoomNameType;	// IMP=0x0000000000d358c6
- (void).cxx_destruct;	// IMP=0x0000000000d37ede
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d37d60
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d37a23
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d37778
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d373cb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d37206
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d371d5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d36e6f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d36e60
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d3684f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d3683d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d3620a
- (id)jsonRepresentation;	// IMP=0x0000000000d360f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000d35ac5
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
- (id)zoomNameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d35895
- (unsigned long long)zoomNamesCount;	// IMP=0x0000000000d35869
- (void)addZoomName:(id)arg1;	// IMP=0x0000000000d357b5
- (void)clearZoomNames;	// IMP=0x0000000000d3578d
@property(retain, nonatomic) NSMutableArray *zoomNames;
- (int)StringAsStructureType:(id)arg1;	// IMP=0x0000000000d35580
- (id)structureTypeAsString:(int)arg1;	// IMP=0x0000000000d354e7
@property(nonatomic) _Bool hasStructureType;
@property(nonatomic) int structureType;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasStationIndex;
@property(nonatomic) unsigned int stationIndex;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d3468e
- (id)init;	// IMP=0x0000000000d34632
- (id)identifier;	// IMP=0x0000000000fcf25b
- (id)bestName;	// IMP=0x0000000000fcf249

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

