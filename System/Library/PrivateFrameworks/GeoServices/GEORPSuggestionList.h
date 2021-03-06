//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString, PBDataReader;

@interface GEORPSuggestionList : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDPlaceRequest *_autocompleteRequest;	// 16 = 0x10
    GEOPDPlaceResponse *_autocompleteResponse;	// 24 = 0x18
    NSMutableArray *_entrys;	// 32 = 0x20
    NSString *_query;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_autocompleteRequest:1;
        unsigned int read_autocompleteResponse:1;
        unsigned int read_entrys:1;
        unsigned int read_query:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e4a248
+ (Class)entryType;	// IMP=0x0000000000e4959b
- (void).cxx_destruct;	// IMP=0x0000000000e4ae84
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e4ac89
- (unsigned long long)hash;	// IMP=0x0000000000e4abf6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e4aaa1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4a749
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e4a5bc
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e4a54e
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e4a53c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e4a264
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e4a255
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e4a13c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e4a12a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e49cd7
- (id)jsonRepresentation;	// IMP=0x0000000000e49cc8
- (id)dictionaryRepresentation;	// IMP=0x0000000000e498d9
- (id)description;	// IMP=0x0000000000e4982a
@property(retain, nonatomic) GEOPDPlaceResponse *autocompleteResponse;
@property(readonly, nonatomic) _Bool hasAutocompleteResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *autocompleteRequest;
@property(readonly, nonatomic) _Bool hasAutocompleteRequest;
- (id)entryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e4956a
- (unsigned long long)entrysCount;	// IMP=0x0000000000e4953e
- (void)addEntry:(id)arg1;	// IMP=0x0000000000e4948a
- (void)clearEntrys;	// IMP=0x0000000000e49462
@property(retain, nonatomic) NSMutableArray *entrys;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e489a3
- (id)init;	// IMP=0x0000000000e48947

@end

