//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDResultRefinementMetadataDefault, GEOPDResultRefinementMetadataSort, PBDataReader, PBUnknownFields;

@interface GEOPDResultRefinementMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDResultRefinementMetadataDefault *_metadataDefault;	// 24 = 0x18
    GEOPDResultRefinementMetadataSort *_metadataSort;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _metadataType;	// 52 = 0x34
    struct {
        unsigned int has_metadataType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_metadataDefault:1;
        unsigned int read_metadataSort:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000cee578
- (void).cxx_destruct;	// IMP=0x0000000000cef3dc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000cef343
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cef18a
- (unsigned long long)hash;	// IMP=0x0000000000cef0f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ceefd5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ceede1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ceecf5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ceeaf7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ceeae8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000cede8e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000cede7c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000cedb90
- (id)jsonRepresentation;	// IMP=0x0000000000ceda7e
- (id)dictionaryRepresentation;	// IMP=0x0000000000ced749
- (id)description;	// IMP=0x0000000000ced69a
@property(retain, nonatomic) GEOPDResultRefinementMetadataSort *metadataSort;
@property(readonly, nonatomic) _Bool hasMetadataSort;
@property(retain, nonatomic) GEOPDResultRefinementMetadataDefault *metadataDefault;
@property(readonly, nonatomic) _Bool hasMetadataDefault;
- (int)StringAsMetadataType:(id)arg1;	// IMP=0x0000000000cecc46
- (id)metadataTypeAsString:(int)arg1;	// IMP=0x0000000000cecbe0
@property(nonatomic) _Bool hasMetadataType;
@property(nonatomic) int metadataType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cecb1d
- (id)init;	// IMP=0x0000000000cecac1

@end

