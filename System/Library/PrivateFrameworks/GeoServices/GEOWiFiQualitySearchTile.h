//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOWiFiQualitySearchTile : PBCodable <NSCopying>
{
    unsigned long long _tileKey;	// 8 = 0x8
    int _type;	// 16 = 0x10
    struct {
        unsigned int has_tileKey:1;
        unsigned int has_type:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009f657a
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009f6845
- (unsigned long long)hash;	// IMP=0x00000000009f67e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009f66fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009f667b
- (void)copyTo:(id)arg1;	// IMP=0x00000000009f6608
- (void)writeTo:(id)arg1;	// IMP=0x00000000009f6596
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009f6587
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009f651a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009f650d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009f6340
- (id)jsonRepresentation;	// IMP=0x00000000009f6336
- (id)dictionaryRepresentation;	// IMP=0x00000000009f61ed
- (id)description;	// IMP=0x00000000009f613e
- (int)StringAsType:(id)arg1;	// IMP=0x00000000009f60ac
- (id)typeAsString:(int)arg1;	// IMP=0x00000000009f6046
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasTileKey;
@property(nonatomic) unsigned long long tileKey;

@end

