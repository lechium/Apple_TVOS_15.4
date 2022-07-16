//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOIndexAndOffset : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _index;	// 16 = 0x10
    unsigned int _offset;	// 20 = 0x14
    struct {
        unsigned int has_index:1;
        unsigned int has_offset:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000089168e
- (void).cxx_destruct;	// IMP=0x0000000000891a5b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000891a15
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000089198e
- (unsigned long long)hash;	// IMP=0x000000000089192e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000891845
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008917a8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000891736
- (void)writeTo:(id)arg1;	// IMP=0x00000000008916aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000089169b
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000089162e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000891621
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008914e1
- (id)jsonRepresentation;	// IMP=0x00000000008913cf
- (id)dictionaryRepresentation;	// IMP=0x00000000008911b4
- (id)description;	// IMP=0x0000000000891105
@property(nonatomic) _Bool hasOffset;
@property(nonatomic) unsigned int offset;
@property(nonatomic) _Bool hasIndex;
@property(nonatomic) unsigned int index;

@end

