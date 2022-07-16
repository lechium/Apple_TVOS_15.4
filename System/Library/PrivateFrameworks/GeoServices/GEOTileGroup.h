//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _attributionIndexs;	// 24 = 0x18
    CDStruct_9f2792e4 _fontIndexs;	// 48 = 0x30
    struct GEOTileSetRegion *_hybridUnavailableRegions;	// 72 = 0x48
    unsigned long long _hybridUnavailableRegionsCount;	// 80 = 0x50
    unsigned long long _hybridUnavailableRegionsSpace;	// 88 = 0x58
    CDStruct_9f2792e4 _iconIndexs;	// 96 = 0x60
    struct GEORegionalResourceIndex *_regionalResourceIndexs;	// 120 = 0x78
    unsigned long long _regionalResourceIndexsCount;	// 128 = 0x80
    unsigned long long _regionalResourceIndexsSpace;	// 136 = 0x88
    CDStruct_9f2792e4 _resourceIndexs;	// 144 = 0x90
    CDStruct_9f2792e4 _styleSheetIndexs;	// 168 = 0xa8
    CDStruct_9f2792e4 _textureIndexs;	// 192 = 0xc0
    struct GEOVersionedTileSet *_tileSets;	// 216 = 0xd8
    unsigned long long _tileSetsCount;	// 224 = 0xe0
    unsigned long long _tileSetsSpace;	// 232 = 0xe8
    CDStruct_9f2792e4 _xmlIndexs;	// 240 = 0xf0
    unsigned int _readerMarkPos;	// 264 = 0x108
    unsigned int _readerMarkLength;	// 268 = 0x10c
    struct os_unfair_lock_s _readerLock;	// 272 = 0x110
    unsigned int _identifier;	// 276 = 0x114
    unsigned int _muninVersionIndex;	// 280 = 0x118
    struct {
        unsigned int has_muninVersionIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributionIndexs:1;
        unsigned int read_fontIndexs:1;
        unsigned int read_hybridUnavailableRegions:1;
        unsigned int read_iconIndexs:1;
        unsigned int read_regionalResourceIndexs:1;
        unsigned int read_resourceIndexs:1;
        unsigned int read_styleSheetIndexs:1;
        unsigned int read_textureIndexs:1;
        unsigned int read_tileSets:1;
        unsigned int read_xmlIndexs:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 284 = 0x11c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006ceb6b
- (void).cxx_destruct;	// IMP=0x00000000006d01d7
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000006d0184
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006cfca9
- (unsigned long long)hash;	// IMP=0x00000000006cfb25
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006cf8fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006cf619
- (void)copyTo:(id)arg1;	// IMP=0x00000000006cf073
- (void)writeTo:(id)arg1;	// IMP=0x00000000006cebea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006cebdb
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000006ce811
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000006ce7eb
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006cd6ce
- (id)jsonRepresentation;	// IMP=0x00000000006cd5a8
- (id)dictionaryRepresentation;	// IMP=0x00000000006ccf13
- (id)description;	// IMP=0x00000000006cce64
@property(nonatomic) _Bool hasMuninVersionIndex;
@property(nonatomic) unsigned int muninVersionIndex;
- (void)setResourceIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006ccde0
- (unsigned int)resourceIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006ccd0a
- (void)addResourceIndex:(unsigned int)arg1;	// IMP=0x00000000006ccccf
- (void)clearResourceIndexs;	// IMP=0x00000000006cccb1
@property(readonly, nonatomic) unsigned int *resourceIndexs;
@property(readonly, nonatomic) unsigned long long resourceIndexsCount;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006ccb27
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cca34
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;	// IMP=0x00000000006cc9a1
- (void)clearHybridUnavailableRegions;	// IMP=0x00000000006cc94f
@property(readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property(readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
- (void)setAttributionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cc705
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cc62f
- (void)addAttributionIndex:(unsigned int)arg1;	// IMP=0x00000000006cc5f4
- (void)clearAttributionIndexs;	// IMP=0x00000000006cc5d6
@property(readonly, nonatomic) unsigned int *attributionIndexs;
@property(readonly, nonatomic) unsigned long long attributionIndexsCount;
- (void)setXmlIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cc49a
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cc3c4
- (void)addXmlIndex:(unsigned int)arg1;	// IMP=0x00000000006cc38a
- (void)clearXmlIndexs;	// IMP=0x00000000006cc36d
@property(readonly, nonatomic) unsigned int *xmlIndexs;
@property(readonly, nonatomic) unsigned long long xmlIndexsCount;
- (void)setRegionalResourceIndexs:(struct GEORegionalResourceIndex *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cc1e6
- (struct GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cc108
- (void)addRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;	// IMP=0x00000000006cc094
- (void)clearRegionalResourceIndexs;	// IMP=0x00000000006cc042
@property(readonly, nonatomic) struct GEORegionalResourceIndex *regionalResourceIndexs;
@property(readonly, nonatomic) unsigned long long regionalResourceIndexsCount;
- (void)setIconIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cbe0c
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cbd36
- (void)addIconIndex:(unsigned int)arg1;	// IMP=0x00000000006cbcfb
- (void)clearIconIndexs;	// IMP=0x00000000006cbcdd
@property(readonly, nonatomic) unsigned int *iconIndexs;
@property(readonly, nonatomic) unsigned long long iconIndexsCount;
- (void)setFontIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cbba0
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cbaca
- (void)addFontIndex:(unsigned int)arg1;	// IMP=0x00000000006cba8f
- (void)clearFontIndexs;	// IMP=0x00000000006cba71
@property(readonly, nonatomic) unsigned int *fontIndexs;
@property(readonly, nonatomic) unsigned long long fontIndexsCount;
- (void)setTextureIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cb935
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cb85f
- (void)addTextureIndex:(unsigned int)arg1;	// IMP=0x00000000006cb825
- (void)clearTextureIndexs;	// IMP=0x00000000006cb808
@property(readonly, nonatomic) unsigned int *textureIndexs;
@property(readonly, nonatomic) unsigned long long textureIndexsCount;
- (void)setStyleSheetIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cb6ca
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cb5f4
- (void)addStyleSheetIndex:(unsigned int)arg1;	// IMP=0x00000000006cb5ba
- (void)clearStyleSheetIndexs;	// IMP=0x00000000006cb59d
@property(readonly, nonatomic) unsigned int *styleSheetIndexs;
@property(readonly, nonatomic) unsigned long long styleSheetIndexsCount;
- (void)setTileSets:(struct GEOVersionedTileSet *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006cb416
- (struct GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006cb341
- (void)addTileSet:(struct GEOVersionedTileSet)arg1;	// IMP=0x00000000006cb2e3
- (void)clearTileSets;	// IMP=0x00000000006cb292
@property(readonly, nonatomic) struct GEOVersionedTileSet *tileSets;
@property(readonly, nonatomic) unsigned long long tileSetsCount;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;	// IMP=0x00000000006c9966
- (id)initWithData:(id)arg1;	// IMP=0x00000000006c990a
- (id)init;	// IMP=0x00000000006c98ae

@end
