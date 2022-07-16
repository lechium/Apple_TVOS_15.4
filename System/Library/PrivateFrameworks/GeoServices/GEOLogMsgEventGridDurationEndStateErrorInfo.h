//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventGridDurationEndStateErrorInfo : PBCodable <NSCopying>
{
    unsigned int _count;	// 8 = 0x8
    int _type;	// 12 = 0xc
    struct {
        unsigned int has_count:1;
        unsigned int has_type:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000135c87d
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000135cb43
- (unsigned long long)hash;	// IMP=0x000000000135cae2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000135c9f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000135c97c
- (void)copyTo:(id)arg1;	// IMP=0x000000000135c90a
- (void)writeTo:(id)arg1;	// IMP=0x000000000135c899
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000135c88a
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000135c81d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000135c810
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000135c61a
- (id)jsonRepresentation;	// IMP=0x000000000135c610
- (id)dictionaryRepresentation;	// IMP=0x000000000135c4a3
- (id)description;	// IMP=0x000000000135c3f4
- (int)StringAsType:(id)arg1;	// IMP=0x000000000135c340
- (id)typeAsString:(int)arg1;	// IMP=0x000000000135c2c2
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;

@end

