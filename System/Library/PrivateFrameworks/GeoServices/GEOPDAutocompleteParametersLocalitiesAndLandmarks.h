//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParametersLocalitiesAndLandmarks : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    GEOPDViewportInfo *_viewportInfo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _maxResults;	// 52 = 0x34
    _Bool _highlightDiff;	// 56 = 0x38
    CDStruct_f55cf389 _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004d15b0
- (void).cxx_destruct;	// IMP=0x00000000004d1f4c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004d1edb
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004d1d1c
- (unsigned long long)hash;	// IMP=0x00000000004d1c71
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d1b20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d1906
- (void)copyTo:(id)arg1;	// IMP=0x00000000004d17f7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000004d17c6
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d15cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d15bd
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004d14a4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004d1492
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004d1205
- (id)jsonRepresentation;	// IMP=0x00000000004d10f3
- (id)dictionaryRepresentation;	// IMP=0x00000000004d0dd0
- (id)description;	// IMP=0x00000000004d0d21
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (id)initWithData:(id)arg1;	// IMP=0x00000000004d019f
- (id)init;	// IMP=0x00000000004d0143

@end
