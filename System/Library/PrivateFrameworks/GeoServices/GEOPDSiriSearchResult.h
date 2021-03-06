//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSiriSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_disambiguationLabels;	// 24 = 0x18
    NSMutableArray *_resultDetourInfos;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    _Bool _isChainResultSet;	// 52 = 0x34
    struct {
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005f1a0e
- (unsigned long long)hash;	// IMP=0x00000000005f198f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f1870
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f1463
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f10db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f10cc
- (id)jsonRepresentation;	// IMP=0x00000000005f0fba
- (id)dictionaryRepresentation;	// IMP=0x00000000005f09a9
- (id)description;	// IMP=0x00000000005f08fa
- (id)initWithData:(id)arg1;	// IMP=0x00000000005efc2a
- (id)init;	// IMP=0x00000000005efbce

@end

