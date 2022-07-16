//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct GEORPVisibleTileKey *_tileKeys;	// 8 = 0x8
    unsigned long long _tileKeysCount;	// 16 = 0x10
    unsigned long long _tileKeysSpace;	// 24 = 0x18
    unsigned int _identifier;	// 32 = 0x20
    int _style;	// 36 = 0x24
    struct {
        unsigned int has_identifier:1;
        unsigned int has_style:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e540dc
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e54556
- (unsigned long long)hash;	// IMP=0x0000000000e544c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e543a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e542e6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e541e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e540f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e540e9
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e53d9b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e53d89
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e52e27
- (id)jsonRepresentation;	// IMP=0x0000000000e52e18
- (id)dictionaryRepresentation;	// IMP=0x0000000000e5274f
- (id)description;	// IMP=0x0000000000e526a0
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e52641
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e52568
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;	// IMP=0x0000000000e52515
- (void)clearTileKeys;	// IMP=0x0000000000e524d0
@property(readonly, nonatomic) struct GEORPVisibleTileKey *tileKeys;
@property(readonly, nonatomic) unsigned long long tileKeysCount;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) unsigned int identifier;
- (int)StringAsStyle:(id)arg1;	// IMP=0x0000000000e51984
- (id)styleAsString:(int)arg1;	// IMP=0x0000000000e51491
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style;
- (void)dealloc;	// IMP=0x0000000000e513eb

@end
