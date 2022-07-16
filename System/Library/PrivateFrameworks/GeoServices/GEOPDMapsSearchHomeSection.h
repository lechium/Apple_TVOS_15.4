//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDCollectionSuggestionResult, GEOPDGuidesLocationsSuggestionResult, GEOPDPlaceSuggestionResult, GEOPDPublisherSuggestionResult, GEOPDSearchBrowseCategorySuggestionResult, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;	// 24 = 0x18
    GEOPDGuidesLocationsSuggestionResult *_guidesLocationsSuggestionResult;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    GEOPDPlaceSuggestionResult *_placeSuggestionResult;	// 48 = 0x30
    GEOPDPublisherSuggestionResult *_publisherSuggestionResult;	// 56 = 0x38
    GEOPDSearchBrowseCategorySuggestionResult *_searchBrowseCategorySuggestionResult;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _sectionType;	// 84 = 0x54
    struct {
        unsigned int has_sectionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionSuggestionResult:1;
        unsigned int read_guidesLocationsSuggestionResult:1;
        unsigned int read_name:1;
        unsigned int read_placeSuggestionResult:1;
        unsigned int read_publisherSuggestionResult:1;
        unsigned int read_searchBrowseCategorySuggestionResult:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000535e20
- (unsigned long long)hash;	// IMP=0x0000000000535bdf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005359f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000535760
- (void)writeTo:(id)arg1;	// IMP=0x00000000005354e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005354d3
- (id)jsonRepresentation;	// IMP=0x0000000000534c78
- (id)dictionaryRepresentation;	// IMP=0x0000000000534754
- (id)description;	// IMP=0x00000000005346a5
- (id)initWithData:(id)arg1;	// IMP=0x000000000053354b
- (id)init;	// IMP=0x00000000005334ef

@end
