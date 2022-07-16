//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOURLTimePoint : PBCodable <NSCopying>
{
    double _time;	// 8 = 0x8
    int _type;	// 16 = 0x10
    struct {
        unsigned int has_time:1;
        unsigned int has_type:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000098c77c
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000098cb48
- (unsigned long long)hash;	// IMP=0x000000000098c9f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098c902
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000098c881
- (void)copyTo:(id)arg1;	// IMP=0x000000000098c80b
- (void)writeTo:(id)arg1;	// IMP=0x000000000098c798
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000098c789
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000098c71c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000098c70f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000098c567
- (id)jsonRepresentation;	// IMP=0x000000000098c55d
- (id)dictionaryRepresentation;	// IMP=0x000000000098c421
- (id)description;	// IMP=0x000000000098c372
- (int)StringAsType:(id)arg1;	// IMP=0x000000000098c310
- (id)typeAsString:(int)arg1;	// IMP=0x000000000098c2bb
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasTime;
@property(nonatomic) double time;

@end
