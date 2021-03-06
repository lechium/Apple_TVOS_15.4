//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDAutocompleteEntry, GEOPDPlace, NSString, PBDataReader;

@interface GEORPUserSearchInput : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDAutocompleteEntry *_autocompleteEntry;	// 16 = 0x10
    GEOLatLng *_coordinate;	// 24 = 0x18
    GEOPDPlace *_place;	// 32 = 0x20
    NSString *_searchString;	// 40 = 0x28
    NSString *_singleLineAddressString;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _origin;	// 68 = 0x44
    struct {
        unsigned int has_origin:1;
        unsigned int read_autocompleteEntry:1;
        unsigned int read_coordinate:1;
        unsigned int read_place:1;
        unsigned int read_searchString:1;
        unsigned int read_singleLineAddressString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e5024c
- (void).cxx_destruct;	// IMP=0x0000000000e50ca0
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e50b66
- (unsigned long long)hash;	// IMP=0x0000000000e50a89
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e508ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e50662
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e50512
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e5047e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e50268
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e50259
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e50140
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e5012e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e4fca3
- (id)jsonRepresentation;	// IMP=0x0000000000e4fc94
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4f94a
- (id)description;	// IMP=0x0000000000e4f89b
- (int)StringAsOrigin:(id)arg1;	// IMP=0x0000000000e4f7ec
- (id)originAsString:(int)arg1;	// IMP=0x0000000000e4f76e
@property(nonatomic) _Bool hasOrigin;
@property(nonatomic) int origin;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property(readonly, nonatomic) _Bool hasAutocompleteEntry;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
@property(retain, nonatomic) NSString *singleLineAddressString;
@property(readonly, nonatomic) _Bool hasSingleLineAddressString;
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) _Bool hasSearchString;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e4e88a
- (id)init;	// IMP=0x0000000000e4e82e

@end

