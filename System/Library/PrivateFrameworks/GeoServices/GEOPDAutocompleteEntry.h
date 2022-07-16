//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryCollection, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryOfflineArea, GEOPDAutocompleteEntryPublisher, GEOPDAutocompleteEntryQuery, GEOPDParsecRankingFeatures, GEOPDRetainedSearchMetadata, GEOPDServerResultScoreMetadata, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAutocompleteEntryAddress *_address;	// 24 = 0x18
    GEOPDAutocompleteEntryBrandProfile *_brandProfile;	// 32 = 0x20
    GEOPDAutocompleteEntryBusiness *_business;	// 40 = 0x28
    GEOPDAutocompleteEntryCategory *_category;	// 48 = 0x30
    GEOPDAutocompleteEntryClientResolved *_clientResolved;	// 56 = 0x38
    GEOPDAutocompleteEntryCollection *_collection;	// 64 = 0x40
    GEOPDAutocompleteEntryDirectionIntent *_directionIntent;	// 72 = 0x48
    GEOPDAutocompleteEntryHighlightLine *_highlightExtra;	// 80 = 0x50
    GEOPDAutocompleteEntryHighlightLine *_highlightMain;	// 88 = 0x58
    GEOPDAutocompleteEntryOfflineArea *_offlineArea;	// 96 = 0x60
    GEOPDParsecRankingFeatures *_parsecRankingFeatures;	// 104 = 0x68
    GEOPDAutocompleteEntryPublisher *_publisher;	// 112 = 0x70
    NSString *_queryAcceleratorCompletionString;	// 120 = 0x78
    GEOPDAutocompleteEntryQuery *_query;	// 128 = 0x80
    GEOPDRetainedSearchMetadata *_retainSearch;	// 136 = 0x88
    GEOPDServerResultScoreMetadata *_serverResultScoreMetadata;	// 144 = 0x90
    unsigned int _readerMarkPos;	// 152 = 0x98
    unsigned int _readerMarkLength;	// 156 = 0x9c
    struct os_unfair_lock_s _readerLock;	// 160 = 0xa0
    int _autocompleteResultCellType;	// 164 = 0xa4
    int _sortPriority;	// 168 = 0xa8
    int _type;	// 172 = 0xac
    _Bool _enableQueryAcceleratorAffordance;	// 176 = 0xb0
    struct {
        unsigned int has_autocompleteResultCellType:1;
        unsigned int has_sortPriority:1;
        unsigned int has_type:1;
        unsigned int has_enableQueryAcceleratorAffordance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_brandProfile:1;
        unsigned int read_business:1;
        unsigned int read_category:1;
        unsigned int read_clientResolved:1;
        unsigned int read_collection:1;
        unsigned int read_directionIntent:1;
        unsigned int read_highlightExtra:1;
        unsigned int read_highlightMain:1;
        unsigned int read_offlineArea:1;
        unsigned int read_parsecRankingFeatures:1;
        unsigned int read_publisher:1;
        unsigned int read_queryAcceleratorCompletionString:1;
        unsigned int read_query:1;
        unsigned int read_retainSearch:1;
        unsigned int read_serverResultScoreMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 180 = 0xb4
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000617e4a
- (void).cxx_destruct;	// IMP=0x000000000061c0a2
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000061bebb
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000061b978
- (unsigned long long)hash;	// IMP=0x000000000061b6e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000061b24c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000061ada3
- (void)copyTo:(id)arg1;	// IMP=0x000000000061aaa0
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000061a9c6
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000061a6e0
- (void)writeTo:(id)arg1;	// IMP=0x000000000061a0b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000061a0a2
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000615d3c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000615d2a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000614d5a
- (id)jsonRepresentation;	// IMP=0x0000000000614c48
- (id)dictionaryRepresentation;	// IMP=0x0000000000613f1c
- (id)description;	// IMP=0x0000000000613e6d
@property(retain, nonatomic) GEOPDAutocompleteEntryPublisher *publisher;
@property(readonly, nonatomic) _Bool hasPublisher;
@property(retain, nonatomic) GEOPDAutocompleteEntryCollection *collection;
@property(readonly, nonatomic) _Bool hasCollection;
@property(retain, nonatomic) NSString *queryAcceleratorCompletionString;
@property(readonly, nonatomic) _Bool hasQueryAcceleratorCompletionString;
@property(nonatomic) _Bool hasEnableQueryAcceleratorAffordance;
@property(nonatomic) _Bool enableQueryAcceleratorAffordance;
@property(retain, nonatomic) GEOPDServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) _Bool hasServerResultScoreMetadata;
- (int)StringAsAutocompleteResultCellType:(id)arg1;	// IMP=0x0000000000613834
- (id)autocompleteResultCellTypeAsString:(int)arg1;	// IMP=0x00000000006137a7
@property(nonatomic) _Bool hasAutocompleteResultCellType;
@property(nonatomic) int autocompleteResultCellType;
@property(nonatomic) _Bool hasSortPriority;
@property(nonatomic) int sortPriority;
@property(retain, nonatomic) GEOPDParsecRankingFeatures *parsecRankingFeatures;
@property(readonly, nonatomic) _Bool hasParsecRankingFeatures;
@property(retain, nonatomic) GEOPDRetainedSearchMetadata *retainSearch;
@property(readonly, nonatomic) _Bool hasRetainSearch;
@property(retain, nonatomic) GEOPDAutocompleteEntryDirectionIntent *directionIntent;
@property(readonly, nonatomic) _Bool hasDirectionIntent;
@property(retain, nonatomic) GEOPDAutocompleteEntryClientResolved *clientResolved;
@property(readonly, nonatomic) _Bool hasClientResolved;
@property(retain, nonatomic) GEOPDAutocompleteEntryOfflineArea *offlineArea;
@property(readonly, nonatomic) _Bool hasOfflineArea;
@property(retain, nonatomic) GEOPDAutocompleteEntryBrandProfile *brandProfile;
@property(readonly, nonatomic) _Bool hasBrandProfile;
@property(retain, nonatomic) GEOPDAutocompleteEntryCategory *category;
@property(readonly, nonatomic) _Bool hasCategory;
@property(retain, nonatomic) GEOPDAutocompleteEntryAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
@property(retain, nonatomic) GEOPDAutocompleteEntryBusiness *business;
@property(readonly, nonatomic) _Bool hasBusiness;
@property(retain, nonatomic) GEOPDAutocompleteEntryQuery *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000006128c4
- (id)typeAsString:(int)arg1;	// IMP=0x00000000006127f9
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightExtra;
@property(readonly, nonatomic) _Bool hasHighlightExtra;
@property(retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightMain;
@property(readonly, nonatomic) _Bool hasHighlightMain;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000610cf4
- (id)init;	// IMP=0x0000000000610c98

@end
