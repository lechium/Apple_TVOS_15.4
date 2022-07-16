//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOTileSetRegion *_tileRanges;	// 24 = 0x18
    unsigned long long _tileRangesCount;	// 32 = 0x20
    unsigned long long _tileRangesSpace;	// 40 = 0x28
    NSMutableArray *_attributions;	// 48 = 0x30
    NSMutableArray *_iconChecksums;	// 56 = 0x38
    NSMutableArray *_icons;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_tileRanges:1;
        unsigned int read_attributions:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000080ca3a
+ (Class)iconChecksumType;	// IMP=0x000000000080bad7
+ (Class)attributionType;	// IMP=0x000000000080b872
+ (Class)iconType;	// IMP=0x000000000080b60d
- (void).cxx_destruct;	// IMP=0x000000000080dfd7
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000080de60
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000080d994
- (unsigned long long)hash;	// IMP=0x000000000080d8e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000080d78e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000080d1eb
- (void)copyTo:(id)arg1;	// IMP=0x000000000080cf07
- (void)writeTo:(id)arg1;	// IMP=0x000000000080ca56
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000080ca47
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000080c92e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000080c91c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000080c1a7
- (id)jsonRepresentation;	// IMP=0x000000000080c095
- (id)dictionaryRepresentation;	// IMP=0x000000000080bb97
- (id)description;	// IMP=0x000000000080bae8
- (id)iconChecksumAtIndex:(unsigned long long)arg1;	// IMP=0x000000000080baa6
- (unsigned long long)iconChecksumsCount;	// IMP=0x000000000080ba7a
- (void)addIconChecksum:(id)arg1;	// IMP=0x000000000080b9c6
- (void)clearIconChecksums;	// IMP=0x000000000080b99e
@property(retain, nonatomic) NSMutableArray *iconChecksums;
- (id)attributionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000080b841
- (unsigned long long)attributionsCount;	// IMP=0x000000000080b815
- (void)addAttribution:(id)arg1;	// IMP=0x000000000080b761
- (void)clearAttributions;	// IMP=0x000000000080b739
@property(retain, nonatomic) NSMutableArray *attributions;
- (id)iconAtIndex:(unsigned long long)arg1;	// IMP=0x000000000080b5dc
- (unsigned long long)iconsCount;	// IMP=0x000000000080b5b0
- (void)addIcon:(id)arg1;	// IMP=0x000000000080b4fc
- (void)clearIcons;	// IMP=0x000000000080b4d4
@property(retain, nonatomic) NSMutableArray *icons;
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000080b34a
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000080b257
- (void)addTileRange:(struct GEOTileSetRegion)arg1;	// IMP=0x000000000080b1c6
- (void)clearTileRanges;	// IMP=0x000000000080b176
@property(readonly, nonatomic) struct GEOTileSetRegion *tileRanges;
@property(readonly, nonatomic) unsigned long long tileRangesCount;
- (void)dealloc;	// IMP=0x000000000080a670
- (id)initWithData:(id)arg1;	// IMP=0x000000000080a614
- (id)init;	// IMP=0x000000000080a5b8

@end
