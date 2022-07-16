//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOPBTransitArtwork, PBDataReader, PBUnknownFields;

@interface GEOAdvisoryCard : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPBTransitArtwork *_artworkOverride;	// 24 = 0x18
    GEOFormattedString *_details;	// 32 = 0x20
    GEOFormattedString *_metadata;	// 40 = 0x28
    GEOFormattedString *_timeString;	// 48 = 0x30
    GEOFormattedString *_title;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artworkOverride:1;
        unsigned int read_details:1;
        unsigned int read_metadata:1;
        unsigned int read_timeString:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000082c3a6
- (void).cxx_destruct;	// IMP=0x000000000082d191
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000082d0b2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000082ce74
- (unsigned long long)hash;	// IMP=0x000000000082cdc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082cc38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000082c9eb
- (void)copyTo:(id)arg1;	// IMP=0x000000000082c8bd
- (void)writeTo:(id)arg1;	// IMP=0x000000000082c5d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000082c5c8
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000082c0f3
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000082c0e1
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000082bd35
- (id)jsonRepresentation;	// IMP=0x000000000082bc23
- (id)dictionaryRepresentation;	// IMP=0x000000000082b826
- (id)description;	// IMP=0x000000000082b777
@property(retain, nonatomic) GEOFormattedString *timeString;
@property(readonly, nonatomic) _Bool hasTimeString;
@property(retain, nonatomic) GEOFormattedString *metadata;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property(readonly, nonatomic) _Bool hasArtworkOverride;
@property(retain, nonatomic) GEOFormattedString *details;
@property(readonly, nonatomic) _Bool hasDetails;
@property(retain, nonatomic) GEOFormattedString *title;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)initWithData:(id)arg1;	// IMP=0x000000000082a76e
- (id)init;	// IMP=0x000000000082a712

@end

