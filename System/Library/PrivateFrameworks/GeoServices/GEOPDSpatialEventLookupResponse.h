//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categorys;	// 24 = 0x18
    GEOLatLng *_center;	// 48 = 0x30
    NSMutableArray *_eventDateTimes;	// 56 = 0x38
    GEOPDMapsIdentifier *_eventId;	// 64 = 0x40
    GEOPDMapsIdentifier *_poiId;	// 72 = 0x48
    GEOTimezone *_timezone;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_poiId:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000bb692e
+ (Class)eventDateTimeType;	// IMP=0x0000000000bb5242
- (void).cxx_destruct;	// IMP=0x0000000000bb7ec3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000bb7cc1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000bb7900
- (unsigned long long)hash;	// IMP=0x0000000000bb7835
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb768e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb72dd
- (void)copyTo:(id)arg1;	// IMP=0x0000000000bb70a7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000bb7013
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb6ccf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb6cc0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000bb66d5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000bb66c3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000bb5e1e
- (id)jsonRepresentation;	// IMP=0x0000000000bb5d0c
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb5580
- (id)description;	// IMP=0x0000000000bb54d1
@property(retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property(readonly, nonatomic) _Bool hasPoiId;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000bb5211
- (unsigned long long)eventDateTimesCount;	// IMP=0x0000000000bb51e5
- (void)addEventDateTime:(id)arg1;	// IMP=0x0000000000bb5131
- (void)clearEventDateTimes;	// IMP=0x0000000000bb5109
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000bb4df0
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000bb4cec
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000bb4cca
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000bb4bf4
- (void)addCategory:(int)arg1;	// IMP=0x0000000000bb4bbb
- (void)clearCategorys;	// IMP=0x0000000000bb4b9f
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) _Bool hasEventId;
- (void)dealloc;	// IMP=0x0000000000bb3ae7
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bb3a8b
- (id)init;	// IMP=0x0000000000bb3a2f

@end

