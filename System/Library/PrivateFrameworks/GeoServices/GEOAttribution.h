//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAttribution : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOTileSetRegion *_regions;	// 24 = 0x18
    unsigned long long _regionsCount;	// 32 = 0x20
    unsigned long long _regionsSpace;	// 40 = 0x28
    NSString *_badgeChecksum;	// 48 = 0x30
    NSString *_badge;	// 56 = 0x38
    NSString *_logoChecksum;	// 64 = 0x40
    NSString *_logo;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    NSMutableArray *_resources;	// 88 = 0x58
    NSString *_url;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    unsigned int _dataSet;	// 116 = 0x74
    unsigned int _linkDisplayStringIndex;	// 120 = 0x78
    struct {
        unsigned int has_dataSet:1;
        unsigned int has_linkDisplayStringIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_badgeChecksum:1;
        unsigned int read_badge:1;
        unsigned int read_logoChecksum:1;
        unsigned int read_logo:1;
        unsigned int read_name:1;
        unsigned int read_resources:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 124 = 0x7c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006946b6
+ (Class)resourceType;	// IMP=0x0000000000692ccd
- (void).cxx_destruct;	// IMP=0x00000000006963c2
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000696249
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000695e1c
- (unsigned long long)hash;	// IMP=0x0000000000695cc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000695a47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006955d0
- (void)copyTo:(id)arg1;	// IMP=0x000000000069531f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000694ec3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000694eb4
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000069425c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000069424a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000693a7e
- (id)jsonRepresentation;	// IMP=0x000000000069396c
- (id)dictionaryRepresentation;	// IMP=0x00000000006932bf
- (id)description;	// IMP=0x0000000000693210
@property(nonatomic) _Bool hasLinkDisplayStringIndex;
@property(nonatomic) unsigned int linkDisplayStringIndex;
@property(nonatomic) _Bool hasDataSet;
@property(nonatomic) unsigned int dataSet;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006930dc
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000692fe9
- (void)addRegion:(struct GEOTileSetRegion)arg1;	// IMP=0x0000000000692f56
- (void)clearRegions;	// IMP=0x0000000000692f04
@property(readonly, nonatomic) struct GEOTileSetRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
- (id)resourceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000692c9c
- (unsigned long long)resourcesCount;	// IMP=0x0000000000692c70
- (void)addResource:(id)arg1;	// IMP=0x0000000000692bbb
- (void)clearResources;	// IMP=0x0000000000692b92
@property(retain, nonatomic) NSMutableArray *resources;
@property(retain, nonatomic) NSString *logoChecksum;
@property(readonly, nonatomic) _Bool hasLogoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum;
@property(readonly, nonatomic) _Bool hasBadgeChecksum;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) _Bool hasUrl;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) NSString *logo;
@property(readonly, nonatomic) _Bool hasLogo;
@property(retain, nonatomic) NSString *badge;
@property(readonly, nonatomic) _Bool hasBadge;
- (void)dealloc;	// IMP=0x00000000006914b4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000691458
- (id)init;	// IMP=0x00000000006913fc

@end

