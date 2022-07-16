//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, PBDataReader, PBUnknownFields;

@interface GEORPPlaceRequestResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPlaceRequest *_placeRequest;	// 24 = 0x18
    GEOPDPlaceResponse *_placeResponse;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000046992a
- (void).cxx_destruct;	// IMP=0x000000000046a181
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000046a0e8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000469f4f
- (unsigned long long)hash;	// IMP=0x0000000000469ef3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000469e02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000469c40
- (void)copyTo:(id)arg1;	// IMP=0x0000000000469b72
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000469b04
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000469af2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000469946
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000469937
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000046981e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000046980c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000469648
- (id)jsonRepresentation;	// IMP=0x0000000000469536
- (id)dictionaryRepresentation;	// IMP=0x00000000004692a9
- (id)description;	// IMP=0x00000000004691fa
@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property(readonly, nonatomic) _Bool hasPlaceResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
- (id)initWithData:(id)arg1;	// IMP=0x00000000004688da
- (id)init;	// IMP=0x000000000046887e

@end
