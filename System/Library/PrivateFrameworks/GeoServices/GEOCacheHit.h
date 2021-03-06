//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    int _requestorType;	// 16 = 0x10
    int _tileSourceType;	// 20 = 0x14
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012f0956
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000012f1014
- (unsigned long long)hash;	// IMP=0x00000000012f0f7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012f0e4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012f0d9e
- (void)copyTo:(id)arg1;	// IMP=0x00000000012f0cf6
- (void)writeTo:(id)arg1;	// IMP=0x00000000012f0c47
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012f0c38
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012f04ec
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012f04da
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012f0043
- (id)jsonRepresentation;	// IMP=0x00000000012f0034
- (id)dictionaryRepresentation;	// IMP=0x00000000012efd38
- (id)description;	// IMP=0x00000000012efc89
@property(nonatomic) _Bool hasBytes;
@property(nonatomic) unsigned int bytes;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsTileSourceType:(id)arg1;	// IMP=0x00000000012efac4
- (id)tileSourceTypeAsString:(int)arg1;	// IMP=0x00000000012efa1d
@property(nonatomic) _Bool hasTileSourceType;
@property(nonatomic) int tileSourceType;
- (int)StringAsRequestorType:(id)arg1;	// IMP=0x00000000012ef89c
- (id)requestorTypeAsString:(int)arg1;	// IMP=0x00000000012ef7f5
@property(nonatomic) _Bool hasRequestorType;
@property(nonatomic) int requestorType;

@end

