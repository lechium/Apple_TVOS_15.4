//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPoiIconCategoryFilter, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _placeTypeFilters;	// 24 = 0x18
    CDStruct_95bda58d _requestedEntryTypes;	// 48 = 0x30
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_placeTypeFilters:1;
        unsigned int read_requestedEntryTypes:1;
        unsigned int read_poiIconCategoryFilter:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004b1500
- (void).cxx_destruct;	// IMP=0x00000000004b22b0
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004b224a
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004b2023
- (unsigned long long)hash;	// IMP=0x00000000004b1fb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b1ec3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b1d0f
- (void)copyTo:(id)arg1;	// IMP=0x00000000004b1b5a
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b191a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b190b
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004b124d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004b123b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004b0946
- (id)jsonRepresentation;	// IMP=0x00000000004b0834
- (id)dictionaryRepresentation;	// IMP=0x00000000004b0209
- (id)description;	// IMP=0x00000000004b015a
- (int)StringAsPlaceTypeFilters:(id)arg1;	// IMP=0x00000000004afe54
- (id)placeTypeFiltersAsString:(int)arg1;	// IMP=0x00000000004afc80
- (void)setPlaceTypeFilters:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004afc5e
- (int)placeTypeFilterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004afb88
- (void)addPlaceTypeFilter:(int)arg1;	// IMP=0x00000000004afb4f
- (void)clearPlaceTypeFilters;	// IMP=0x00000000004afb33
@property(readonly, nonatomic) int *placeTypeFilters;
@property(readonly, nonatomic) unsigned long long placeTypeFiltersCount;
@property(retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property(readonly, nonatomic) _Bool hasPoiIconCategoryFilter;
- (int)StringAsRequestedEntryTypes:(id)arg1;	// IMP=0x00000000004af768
- (id)requestedEntryTypesAsString:(int)arg1;	// IMP=0x00000000004af69a
- (void)setRequestedEntryTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004af678
- (int)requestedEntryTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004af5a2
- (void)addRequestedEntryType:(int)arg1;	// IMP=0x00000000004af569
- (void)clearRequestedEntryTypes;	// IMP=0x00000000004af54d
@property(readonly, nonatomic) int *requestedEntryTypes;
@property(readonly, nonatomic) unsigned long long requestedEntryTypesCount;
- (void)dealloc;	// IMP=0x00000000004aea94
- (id)initWithData:(id)arg1;	// IMP=0x00000000004aea38
- (id)init;	// IMP=0x00000000004ae9dc

@end

