//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABConfigValue, NSString, PBDataReader, PBUnknownFields;

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_abConfigKey;	// 24 = 0x18
    GEOABConfigValue *_abConfigValue;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _abConfigValueType;	// 52 = 0x34
    struct {
        unsigned int has_abConfigValueType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abConfigKey:1;
        unsigned int read_abConfigValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010f13b8
- (void).cxx_destruct;	// IMP=0x00000000010f1ed1
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010f1e60
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010f1cbe
- (unsigned long long)hash;	// IMP=0x00000000010f1c3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010f1b18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010f1923
- (void)copyTo:(id)arg1;	// IMP=0x00000000010f1837
- (void)writeTo:(id)arg1;	// IMP=0x00000000010f165f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010f1650
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010f0ec6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010f0eb4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010f0bae
- (id)jsonRepresentation;	// IMP=0x00000000010f0a9c
- (id)dictionaryRepresentation;	// IMP=0x00000000010f076d
- (id)description;	// IMP=0x00000000010f06be
@property(retain, nonatomic) GEOABConfigValue *abConfigValue;
@property(readonly, nonatomic) _Bool hasAbConfigValue;
- (int)StringAsAbConfigValueType:(id)arg1;	// IMP=0x00000000010f04b4
- (id)abConfigValueTypeAsString:(int)arg1;	// IMP=0x00000000010f042a
@property(nonatomic) _Bool hasAbConfigValueType;
@property(nonatomic) int abConfigValueType;
@property(retain, nonatomic) NSString *abConfigKey;
@property(readonly, nonatomic) _Bool hasAbConfigKey;
- (id)initWithData:(id)arg1;	// IMP=0x00000000010efb3c
- (id)init;	// IMP=0x00000000010efae0

@end

