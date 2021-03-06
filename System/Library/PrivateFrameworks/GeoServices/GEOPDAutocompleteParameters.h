//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteFilter, GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersBrandProfileSearch, GEOPDAutocompleteParametersCollectionOnly, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersPoiAddressOnly, GEOPDAutocompleteParametersSiriSearch, GEOPDAutocompleteParametersVenueSearch, GEOPDAutocompleteSessionData, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _supportedClientResolvedTypeWithSetupPrompts;	// 24 = 0x18
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;	// 48 = 0x30
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;	// 56 = 0x38
    GEOPDAutocompleteParametersAllEntries *_allEntries;	// 64 = 0x40
    GEOPDAutocompleteFilter *_autocompleteFilter;	// 72 = 0x48
    GEOPDAutocompleteSessionData *_autocompleteSessionData;	// 80 = 0x50
    GEOPDAutocompleteParametersBrandProfileSearch *_brandProfileSearch;	// 88 = 0x58
    GEOPDAutocompleteParametersCollectionOnly *_collectionOnly;	// 96 = 0x60
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;	// 104 = 0x68
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;	// 112 = 0x70
    GEOPDAutocompleteParametersPoiAddressOnly *_poiAddressOnly;	// 120 = 0x78
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;	// 128 = 0x80
    GEOPDAutocompleteParametersVenueSearch *_venueSearch;	// 136 = 0x88
    unsigned int _readerMarkPos;	// 144 = 0x90
    unsigned int _readerMarkLength;	// 148 = 0x94
    struct os_unfair_lock_s _readerLock;	// 152 = 0x98
    int _requestType;	// 156 = 0x9c
    _Bool _shouldPopulateMapsIdentifier;	// 160 = 0xa0
    _Bool _supportAutocompleteSessionData;	// 161 = 0xa1
    struct {
        unsigned int has_requestType:1;
        unsigned int has_shouldPopulateMapsIdentifier:1;
        unsigned int has_supportAutocompleteSessionData:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedClientResolvedTypeWithSetupPrompts:1;
        unsigned int read_addressOnly:1;
        unsigned int read_allEntriesWithBrowse:1;
        unsigned int read_allEntries:1;
        unsigned int read_autocompleteFilter:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_brandProfileSearch:1;
        unsigned int read_collectionOnly:1;
        unsigned int read_fullEntries:1;
        unsigned int read_localitiesAndLandmarks:1;
        unsigned int read_poiAddressOnly:1;
        unsigned int read_siriSearch:1;
        unsigned int read_venueSearch:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 164 = 0xa4
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004b7f35
- (void).cxx_destruct;	// IMP=0x00000000004bca75
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004bc8e5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004bc460
- (unsigned long long)hash;	// IMP=0x00000000004bc268
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004bbea6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bbabb
- (void)copyTo:(id)arg1;	// IMP=0x00000000004bb7c9
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000004bb631
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000004bb225
- (void)writeTo:(id)arg1;	// IMP=0x00000000004baa55
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004baa46
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004b6bfc
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004b6bea
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004b5d46
- (id)jsonRepresentation;	// IMP=0x00000000004b5c34
- (id)dictionaryRepresentation;	// IMP=0x00000000004b50c2
- (id)description;	// IMP=0x00000000004b5013
- (int)StringAsSupportedClientResolvedTypeWithSetupPrompts:(id)arg1;	// IMP=0x00000000004b4efc
- (id)supportedClientResolvedTypeWithSetupPromptsAsString:(int)arg1;	// IMP=0x00000000004b4e58
- (void)setSupportedClientResolvedTypeWithSetupPrompts:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004b4e33
- (int)supportedClientResolvedTypeWithSetupPromptAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004b4d5d
- (void)addSupportedClientResolvedTypeWithSetupPrompt:(int)arg1;	// IMP=0x00000000004b4d21
- (void)clearSupportedClientResolvedTypeWithSetupPrompts;	// IMP=0x00000000004b4d02
@property(readonly, nonatomic) int *supportedClientResolvedTypeWithSetupPrompts;
@property(readonly, nonatomic) unsigned long long supportedClientResolvedTypeWithSetupPromptsCount;
@property(retain, nonatomic) GEOPDAutocompleteParametersCollectionOnly *collectionOnly;
@property(readonly, nonatomic) _Bool hasCollectionOnly;
@property(retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property(readonly, nonatomic) _Bool hasAutocompleteSessionData;
@property(nonatomic) _Bool hasSupportAutocompleteSessionData;
@property(nonatomic) _Bool supportAutocompleteSessionData;
@property(nonatomic) _Bool hasShouldPopulateMapsIdentifier;
@property(nonatomic) _Bool shouldPopulateMapsIdentifier;
@property(retain, nonatomic) GEOPDAutocompleteFilter *autocompleteFilter;
@property(readonly, nonatomic) _Bool hasAutocompleteFilter;
@property(retain, nonatomic) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly;
@property(readonly, nonatomic) _Bool hasPoiAddressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch;
@property(readonly, nonatomic) _Bool hasBrandProfileSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersVenueSearch *venueSearch;
@property(readonly, nonatomic) _Bool hasVenueSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly;
@property(readonly, nonatomic) _Bool hasAddressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch;
@property(readonly, nonatomic) _Bool hasSiriSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property(readonly, nonatomic) _Bool hasAllEntriesWithBrowse;
@property(retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property(readonly, nonatomic) _Bool hasLocalitiesAndLandmarks;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries;
@property(readonly, nonatomic) _Bool hasAllEntries;
@property(retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property(readonly, nonatomic) _Bool hasFullEntries;
- (int)StringAsRequestType:(id)arg1;	// IMP=0x00000000004b2534
- (id)requestTypeAsString:(int)arg1;	// IMP=0x00000000004b2459
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType;
- (void)dealloc;	// IMP=0x00000000004b23aa
- (id)initWithData:(id)arg1;	// IMP=0x00000000004b234e
- (id)init;	// IMP=0x00000000004b22f2

@end

