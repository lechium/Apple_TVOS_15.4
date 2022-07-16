//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _buildingId;	// 24 = 0x18
    NSMutableArray *_categorys;	// 32 = 0x20
    unsigned long long _levelId;	// 40 = 0x28
    NSString *_query;	// 48 = 0x30
    unsigned long long _sectionId;	// 56 = 0x38
    unsigned long long _venueId;	// 64 = 0x40
    GEOPDViewportInfo *_viewportInfo;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _maxResults;	// 92 = 0x5c
    _Bool _highlightDiff;	// 96 = 0x60
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_levelId:1;
        unsigned int has_sectionId:1;
        unsigned int has_venueId:1;
        unsigned int has_maxResults:1;
        unsigned int has_highlightDiff:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_query:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004d84b6
+ (Class)categoryType;	// IMP=0x00000000004d767a
- (void).cxx_destruct;	// IMP=0x00000000004d961f
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004d95ac
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004d9243
- (unsigned long long)hash;	// IMP=0x00000000004d9113
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d8eea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d8ad3
- (void)copyTo:(id)arg1;	// IMP=0x00000000004d88b6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000004d8885
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d84d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d84c3
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004d83aa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004d8398
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004d7d4b
- (id)jsonRepresentation;	// IMP=0x00000000004d7c39
- (id)dictionaryRepresentation;	// IMP=0x00000000004d773a
- (id)description;	// IMP=0x00000000004d768b
- (id)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d7649
- (unsigned long long)categorysCount;	// IMP=0x00000000004d761d
- (void)addCategory:(id)arg1;	// IMP=0x00000000004d7567
- (void)clearCategorys;	// IMP=0x00000000004d753d
@property(retain, nonatomic) NSMutableArray *categorys;
@property(nonatomic) _Bool hasBuildingId;
@property(nonatomic) unsigned long long buildingId;
@property(nonatomic) _Bool hasSectionId;
@property(nonatomic) unsigned long long sectionId;
@property(nonatomic) _Bool hasLevelId;
@property(nonatomic) unsigned long long levelId;
@property(nonatomic) _Bool hasVenueId;
@property(nonatomic) unsigned long long venueId;
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (id)initWithData:(id)arg1;	// IMP=0x00000000004d633c
- (id)init;	// IMP=0x00000000004d62e0

@end

