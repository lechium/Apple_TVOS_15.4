//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedBytes : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSData *_byteValue;	// 24 = 0x18
    NSString *_locale;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_byteValue:1;
        unsigned int read_locale:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000109a30d
- (void).cxx_destruct;	// IMP=0x000000000109ac30
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000109abdf
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000109aa74
- (unsigned long long)hash;	// IMP=0x000000000109aa18
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000109a927
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000109a765
- (void)copyTo:(id)arg1;	// IMP=0x000000000109a697
- (void)writeTo:(id)arg1;	// IMP=0x000000000109a4c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000109a4b3
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000109a05a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000109a048
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001099ebc
- (id)jsonRepresentation;	// IMP=0x0000000001099daa
- (id)dictionaryRepresentation;	// IMP=0x0000000001099b69
- (id)description;	// IMP=0x0000000001099aba
@property(retain, nonatomic) NSData *byteValue;
@property(readonly, nonatomic) _Bool hasByteValue;
@property(retain, nonatomic) NSString *locale;
@property(readonly, nonatomic) _Bool hasLocale;
- (id)initWithData:(id)arg1;	// IMP=0x00000000010992f2
- (id)init;	// IMP=0x0000000001099296

@end

