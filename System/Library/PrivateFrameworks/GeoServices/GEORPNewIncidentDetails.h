//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPIncidentLocation, GEORPUserLocationDetails, PBDataReader;

@interface GEORPNewIncidentDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEORPIncidentLocation *_incidentLocation;	// 16 = 0x10
    GEORPUserLocationDetails *_userLocation;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    struct {
        unsigned int has_type:1;
        unsigned int read_incidentLocation:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000364c77
- (void).cxx_destruct;	// IMP=0x0000000000365413
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000365350
- (unsigned long long)hash;	// IMP=0x00000000003652bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036519b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000364fbe
- (void)copyTo:(id)arg1;	// IMP=0x0000000000364ed2
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000364e64
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000364e52
- (void)writeTo:(id)arg1;	// IMP=0x0000000000364c93
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000364c84
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000364b6b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000364b59
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000364653
- (id)jsonRepresentation;	// IMP=0x0000000000364644
- (id)dictionaryRepresentation;	// IMP=0x0000000000364345
- (id)description;	// IMP=0x0000000000364296
@property(retain, nonatomic) GEORPIncidentLocation *incidentLocation;
@property(readonly, nonatomic) _Bool hasIncidentLocation;
@property(retain, nonatomic) GEORPUserLocationDetails *userLocation;
@property(readonly, nonatomic) _Bool hasUserLocation;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000003637e0
- (id)typeAsString:(int)arg1;	// IMP=0x00000000003636a2
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;	// IMP=0x00000000003635df
- (id)init;	// IMP=0x0000000000363583

@end

