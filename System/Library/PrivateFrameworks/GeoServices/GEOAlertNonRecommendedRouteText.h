//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPlaceFormattedString *_body;	// 24 = 0x18
    GEOFormattedString *_responseAlertPrimary;	// 32 = 0x20
    GEOFormattedString *_responseAlertSecondary;	// 40 = 0x28
    GEOPlaceFormattedString *_title;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_responseAlertPrimary:1;
        unsigned int read_responseAlertSecondary:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000837aa0
- (void).cxx_destruct;	// IMP=0x0000000000838ab7
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008389ee
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008387e7
- (unsigned long long)hash;	// IMP=0x0000000000838754
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008385ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008383e1
- (void)copyTo:(id)arg1;	// IMP=0x00000000008382d3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000837ec7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000837eb8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000837646
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000837634
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000837336
- (id)jsonRepresentation;	// IMP=0x0000000000837224
- (id)dictionaryRepresentation;	// IMP=0x0000000000836e9f
- (id)description;	// IMP=0x0000000000836df0
@property(retain, nonatomic) GEOPlaceFormattedString *body;
@property(readonly, nonatomic) _Bool hasBody;
@property(retain, nonatomic) GEOPlaceFormattedString *title;
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) GEOFormattedString *responseAlertSecondary;
@property(readonly, nonatomic) _Bool hasResponseAlertSecondary;
@property(retain, nonatomic) GEOFormattedString *responseAlertPrimary;
@property(readonly, nonatomic) _Bool hasResponseAlertPrimary;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000836030
- (id)init;	// IMP=0x0000000000835fd4

@end

