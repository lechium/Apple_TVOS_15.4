//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDBatchReverseGeocodeResult, GEOPDCollectionResult, GEOPDPlace, GEOPDPlaceQuestionnaireResult, GEOPDPublisherResult, PBDataReader, PBUnknownFields;

@interface GEOPDMapsResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDBatchReverseGeocodeResult *_batchReverseGeocode;	// 24 = 0x18
    GEOPDCollectionResult *_collection;	// 32 = 0x20
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;	// 40 = 0x28
    GEOPDPlace *_place;	// 48 = 0x30
    GEOPDPublisherResult *_publisher;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _resultType;	// 76 = 0x4c
    struct {
        unsigned int has_resultType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_batchReverseGeocode:1;
        unsigned int read_collection:1;
        unsigned int read_placeQuestionnaire:1;
        unsigned int read_place:1;
        unsigned int read_publisher:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b42226
- (void).cxx_destruct;	// IMP=0x0000000000b446c3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b4426b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b43bb1
- (unsigned long long)hash;	// IMP=0x0000000000b43ac9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b43908
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b4368c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b4353c
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000b43088
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000b42d9c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b42a97
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b42a88
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b41d04
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b41cf2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b40bda
- (id)jsonRepresentation;	// IMP=0x0000000000b40ac8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b405ea
- (id)description;	// IMP=0x0000000000b4053b
@property(retain, nonatomic) GEOPDBatchReverseGeocodeResult *batchReverseGeocode;
@property(readonly, nonatomic) _Bool hasBatchReverseGeocode;
@property(retain, nonatomic) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property(readonly, nonatomic) _Bool hasPlaceQuestionnaire;
@property(retain, nonatomic) GEOPDPublisherResult *publisher;
@property(readonly, nonatomic) _Bool hasPublisher;
@property(retain, nonatomic) GEOPDCollectionResult *collection;
@property(readonly, nonatomic) _Bool hasCollection;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (int)StringAsResultType:(id)arg1;	// IMP=0x0000000000b3f3c4
- (id)resultTypeAsString:(int)arg1;	// IMP=0x0000000000b3f32a
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b3f267
- (id)init;	// IMP=0x0000000000b3f20b

@end
