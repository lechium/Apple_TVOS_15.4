//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSurveyResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_optionDescription;	// 24 = 0x18
    NSString *_optionId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_optionDescription:1;
        unsigned int read_optionId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000125583f
- (void).cxx_destruct;	// IMP=0x0000000001255fa2
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000001255f51
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001255de6
- (unsigned long long)hash;	// IMP=0x0000000001255d8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001255c99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001255ad7
- (void)copyTo:(id)arg1;	// IMP=0x0000000001255a09
- (void)writeTo:(id)arg1;	// IMP=0x000000000125585b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000125584c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001255733
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001255721
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000125559d
- (id)jsonRepresentation;	// IMP=0x000000000125548b
- (id)dictionaryRepresentation;	// IMP=0x0000000001255279
- (id)description;	// IMP=0x00000000012551ca
@property(retain, nonatomic) NSString *optionDescription;
@property(readonly, nonatomic) _Bool hasOptionDescription;
@property(retain, nonatomic) NSString *optionId;
@property(readonly, nonatomic) _Bool hasOptionId;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001254a00
- (id)init;	// IMP=0x00000000012549a4

@end

