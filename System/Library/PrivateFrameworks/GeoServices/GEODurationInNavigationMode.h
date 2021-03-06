//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEODurationInNavigationMode : PBCodable <NSCopying>
{
    double _duration;	// 8 = 0x8
    int _type;	// 16 = 0x10
    struct {
        unsigned int has_duration:1;
        unsigned int has_type:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012fdb41
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000012fe0ff
- (unsigned long long)hash;	// IMP=0x00000000012fdfb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012fdebd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012fde3c
- (void)copyTo:(id)arg1;	// IMP=0x00000000012fddc6
- (void)writeTo:(id)arg1;	// IMP=0x00000000012fdd53
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012fdd44
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012fd811
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012fd804
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012fd623
- (id)jsonRepresentation;	// IMP=0x00000000012fd619
- (id)dictionaryRepresentation;	// IMP=0x00000000012fd4cb
- (id)description;	// IMP=0x00000000012fd41c
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) double duration;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000012fd331
- (id)typeAsString:(int)arg1;	// IMP=0x00000000012fd2cb
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

