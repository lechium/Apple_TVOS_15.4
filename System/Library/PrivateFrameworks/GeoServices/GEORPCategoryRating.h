//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPRatingValue, NSString, PBDataReader;

@interface GEORPCategoryRating : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    GEORPRatingValue *_value;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_key:1;
        unsigned int read_value:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007778cf
- (void).cxx_destruct;	// IMP=0x0000000000778308
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000077827c
- (unsigned long long)hash;	// IMP=0x0000000000778220
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000077812f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000777f87
- (void)copyTo:(id)arg1;	// IMP=0x0000000000777eb9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000777cfb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000777cec
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000777377
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000777365
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007771d8
- (id)jsonRepresentation;	// IMP=0x00000000007771c9
- (id)dictionaryRepresentation;	// IMP=0x00000000007770a1
- (id)description;	// IMP=0x0000000000776ff2
@property(retain, nonatomic) GEORPRatingValue *value;
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) NSString *key;
@property(readonly, nonatomic) _Bool hasKey;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000776880
- (id)init;	// IMP=0x0000000000776824

@end

