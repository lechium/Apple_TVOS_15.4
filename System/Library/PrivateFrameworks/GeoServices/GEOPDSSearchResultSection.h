//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchResultSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_resolvedItems;	// 24 = 0x18
    NSString *_sectionHeaderDisplayName;	// 32 = 0x20
    NSString *_sectionSubHeaderDisplayName;	// 40 = 0x28
    GEOStyleAttributes *_styleAttributes;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _searchResultSectionCellType;	// 68 = 0x44
    int _searchResultSectionType;	// 72 = 0x48
    struct {
        unsigned int has_searchResultSectionCellType:1;
        unsigned int has_searchResultSectionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_resolvedItems:1;
        unsigned int read_sectionHeaderDisplayName:1;
        unsigned int read_sectionSubHeaderDisplayName:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000064df13
- (unsigned long long)hash;	// IMP=0x000000000064dc73
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000064dacb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000064d738
- (void)writeTo:(id)arg1;	// IMP=0x000000000064d407
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064d3f8
- (id)jsonRepresentation;	// IMP=0x000000000064c5f0
- (id)dictionaryRepresentation;	// IMP=0x000000000064bf93
- (id)description;	// IMP=0x000000000064bee4
- (id)initWithData:(id)arg1;	// IMP=0x000000000064aea8
- (id)init;	// IMP=0x000000000064ae4c

@end

