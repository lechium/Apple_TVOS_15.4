//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPlaceSummaryLayoutUnitAddress : PBCodable <NSCopying>
{
    int _type;	// 8 = 0x8
    CDStruct_3af5a977 _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d642fb
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d644fb
- (unsigned long long)hash;	// IMP=0x0000000000d644b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d643f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d64397
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d64342
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d64317
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d64308
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d6429b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d6428e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d640da
- (id)jsonRepresentation;	// IMP=0x0000000000d640d0
- (id)dictionaryRepresentation;	// IMP=0x0000000000d63fb2
- (id)description;	// IMP=0x0000000000d63f03
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000d63e38
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000d63dab
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

