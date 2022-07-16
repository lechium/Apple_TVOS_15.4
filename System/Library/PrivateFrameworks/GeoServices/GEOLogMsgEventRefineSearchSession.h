//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    NSMutableArray *_suggestionItems;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _refineSearchType;	// 44 = 0x2c
    int _searchType;	// 48 = 0x30
    struct {
        unsigned int has_refineSearchType:1;
        unsigned int has_searchType:1;
        unsigned int read_searchString:1;
        unsigned int read_suggestionItems:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000105af8c
+ (Class)suggestionItemType;	// IMP=0x0000000001059e7f
- (void).cxx_destruct;	// IMP=0x000000000105c079
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000105be9c
- (unsigned long long)hash;	// IMP=0x000000000105bded
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000105bca9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000105b969
- (void)copyTo:(id)arg1;	// IMP=0x000000000105b7e2
- (void)writeTo:(id)arg1;	// IMP=0x000000000105b4f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000105b4e4
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000105a8de
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000105a8cc
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000105a383
- (id)jsonRepresentation;	// IMP=0x000000000105a374
- (id)dictionaryRepresentation;	// IMP=0x0000000001059f3f
- (id)description;	// IMP=0x0000000001059e90
- (id)suggestionItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001059e4e
- (unsigned long long)suggestionItemsCount;	// IMP=0x0000000001059e22
- (void)addSuggestionItem:(id)arg1;	// IMP=0x0000000001059d6e
- (void)clearSuggestionItems;	// IMP=0x0000000001059d46
@property(retain, nonatomic) NSMutableArray *suggestionItems;
@property(retain, nonatomic) NSString *searchString;
@property(readonly, nonatomic) _Bool hasSearchString;
- (int)StringAsRefineSearchType:(id)arg1;	// IMP=0x000000000105927c
- (id)refineSearchTypeAsString:(int)arg1;	// IMP=0x0000000001059216
@property(nonatomic) _Bool hasRefineSearchType;
@property(nonatomic) int refineSearchType;
- (int)StringAsSearchType:(id)arg1;	// IMP=0x000000000105911d
- (id)searchTypeAsString:(int)arg1;	// IMP=0x00000000010590b7
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001058ff0
- (id)init;	// IMP=0x0000000001058f94

@end

