//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSData *_suggestionEntryMetadata;	// 24 = 0x18
    NSData *_suggestionMetadata;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _entriesType;	// 52 = 0x34
    int _listType;	// 56 = 0x38
    _Bool _includeRankingFeatures;	// 60 = 0x3c
    _Bool _normalizePOIs;	// 61 = 0x3d
    struct {
        unsigned int has_entriesType:1;
        unsigned int has_listType:1;
        unsigned int has_includeRankingFeatures:1;
        unsigned int has_normalizePOIs:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000eda73d
- (unsigned long long)hash;	// IMP=0x0000000000eda645
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000eda49b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000eda24d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000eda01d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000eda00e
- (id)jsonRepresentation;	// IMP=0x0000000000ed9efc
- (id)dictionaryRepresentation;	// IMP=0x0000000000ed98ff
- (id)description;	// IMP=0x0000000000ed9850
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ed8ef3
- (id)init;	// IMP=0x0000000000ed8e97

@end
