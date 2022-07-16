//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPSearchCommonContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_lastSearchString;	// 24 = 0x18
    NSString *_lastUserTypedSearchString;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_lastSearchString:1;
        unsigned int read_lastUserTypedSearchString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000047ca7f
- (void).cxx_destruct;	// IMP=0x000000000047d1e2
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000047d191
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000047d026
- (unsigned long long)hash;	// IMP=0x000000000047cfca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047ced9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047cd17
- (void)copyTo:(id)arg1;	// IMP=0x000000000047cc49
- (void)writeTo:(id)arg1;	// IMP=0x000000000047ca9b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000047ca8c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000047c973
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000047c961
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000047c7dd
- (id)jsonRepresentation;	// IMP=0x000000000047c6cb
- (id)dictionaryRepresentation;	// IMP=0x000000000047c4b9
- (id)description;	// IMP=0x000000000047c40a
@property(retain, nonatomic) NSString *lastUserTypedSearchString;
@property(readonly, nonatomic) _Bool hasLastUserTypedSearchString;
@property(retain, nonatomic) NSString *lastSearchString;
@property(readonly, nonatomic) _Bool hasLastSearchString;
- (id)initWithData:(id)arg1;	// IMP=0x000000000047bc41
- (id)init;	// IMP=0x000000000047bbe5

@end

