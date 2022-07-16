//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

@interface GEORPPoiActivityFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _representativeHours;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    _Bool _isDataCorrect;	// 68 = 0x44
    _Bool _isDataUseful;	// 69 = 0x45
    _Bool _isVisualRepresentationValid;	// 70 = 0x46
    struct {
        unsigned int has_isDataCorrect:1;
        unsigned int has_isDataUseful:1;
        unsigned int has_isVisualRepresentationValid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_representativeHours:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000046bd3f
- (void).cxx_destruct;	// IMP=0x000000000046c848
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000046c7d7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000046c5ac
- (unsigned long long)hash;	// IMP=0x000000000046c4f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046c36f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046c155
- (void)copyTo:(id)arg1;	// IMP=0x000000000046bfc6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000046bf95
- (void)writeTo:(id)arg1;	// IMP=0x000000000046bd5b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000046bd4c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000046bc33
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000046bc21
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000046b7b0
- (id)jsonRepresentation;	// IMP=0x000000000046b69e
- (id)dictionaryRepresentation;	// IMP=0x000000000046b30e
- (id)description;	// IMP=0x000000000046b25f
@property(nonatomic) _Bool hasIsVisualRepresentationValid;
@property(nonatomic) _Bool isVisualRepresentationValid;
@property(nonatomic) _Bool hasIsDataCorrect;
@property(nonatomic) _Bool isDataCorrect;
@property(nonatomic) _Bool hasIsDataUseful;
@property(nonatomic) _Bool isDataUseful;
- (void)setRepresentativeHours:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000046b12b
- (unsigned int)representativeHoursAtIndex:(unsigned long long)arg1;	// IMP=0x000000000046b055
- (void)addRepresentativeHours:(unsigned int)arg1;	// IMP=0x000000000046b01c
- (void)clearRepresentativeHours;	// IMP=0x000000000046b000
@property(readonly, nonatomic) unsigned int *representativeHours;
@property(readonly, nonatomic) unsigned long long representativeHoursCount;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) _Bool hasMapsId;
- (void)dealloc;	// IMP=0x000000000046a28c
- (id)initWithData:(id)arg1;	// IMP=0x000000000046a230
- (id)init;	// IMP=0x000000000046a1d4

@end

