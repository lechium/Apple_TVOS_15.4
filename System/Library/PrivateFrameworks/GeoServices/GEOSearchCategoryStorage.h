//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory, PBDataReader, PBUnknownFields;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAutocompleteEntry *_autocompleteEntry;	// 24 = 0x18
    GEOPDBrowseCategory *_browseCategory;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_browseCategory:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f5243b
- (void).cxx_destruct;	// IMP=0x0000000000f52fde
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f52f58
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f52dc1
- (unsigned long long)hash;	// IMP=0x0000000000f52d65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f52c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f52ab2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f529e4
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000f529b3
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000f52851
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f52649
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f5263a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f52188
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f52176
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f51fd4
- (id)jsonRepresentation;	// IMP=0x0000000000f51ec2
- (id)dictionaryRepresentation;	// IMP=0x0000000000f51c45
- (id)description;	// IMP=0x0000000000f51b96
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property(readonly, nonatomic) _Bool hasAutocompleteEntry;
@property(retain, nonatomic) GEOPDBrowseCategory *browseCategory;
@property(readonly, nonatomic) _Bool hasBrowseCategory;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f51283
- (id)init;	// IMP=0x0000000000f51227
- (id)initWithSearchCategory:(id)arg1;	// IMP=0x0000000000f6d568

@end

