//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPCorrectedField : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_correctedValue;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
    NSString *_originalValue;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _field;	// 52 = 0x34
    _Bool _isMarkedIncorrect;	// 56 = 0x38
    struct {
        unsigned int has_field:1;
        unsigned int has_isMarkedIncorrect:1;
        unsigned int read_correctedValue:1;
        unsigned int read_fieldName:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ddf6fa
- (void).cxx_destruct;	// IMP=0x0000000000de025a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000de0181
- (unsigned long long)hash;	// IMP=0x0000000000de00a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ddff10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ddfcd9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ddfbae
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ddf98f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ddf980
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ddf447
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ddf435
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ddef57
- (id)jsonRepresentation;	// IMP=0x0000000000ddef48
- (id)dictionaryRepresentation;	// IMP=0x0000000000ddec54
- (id)description;	// IMP=0x0000000000ddeba5
@property(nonatomic) _Bool hasIsMarkedIncorrect;
@property(nonatomic) _Bool isMarkedIncorrect;
@property(retain, nonatomic) NSString *correctedValue;
@property(readonly, nonatomic) _Bool hasCorrectedValue;
@property(retain, nonatomic) NSString *originalValue;
@property(readonly, nonatomic) _Bool hasOriginalValue;
@property(retain, nonatomic) NSString *fieldName;
@property(readonly, nonatomic) _Bool hasFieldName;
- (int)StringAsField:(id)arg1;	// IMP=0x0000000000dddfb8
- (id)fieldAsString:(int)arg1;	// IMP=0x0000000000ddded0
@property(nonatomic) _Bool hasField;
@property(nonatomic) int field;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ddde0d
- (id)init;	// IMP=0x0000000000ddddb1

@end

