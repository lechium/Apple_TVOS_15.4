//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOLPRValueMapping : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_mappedValues;	// 16 = 0x10
    NSMutableArray *_timeConditions;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_mappedValues:1;
        unsigned int read_timeConditions:1;
        unsigned int read_values:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000674246
+ (Class)timeConditionsType;	// IMP=0x000000000067373e
+ (Class)mappedValueType;	// IMP=0x00000000006734d9
+ (Class)valueType;	// IMP=0x0000000000673274
- (void).cxx_destruct;	// IMP=0x000000000067530b
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000674fbb
- (unsigned long long)hash;	// IMP=0x0000000000674f3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000674e1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006748df
- (void)copyTo:(id)arg1;	// IMP=0x0000000000674682
- (void)writeTo:(id)arg1;	// IMP=0x0000000000674262
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000674253
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000067413a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000674128
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000673b38
- (id)jsonRepresentation;	// IMP=0x0000000000673b29
- (id)dictionaryRepresentation;	// IMP=0x00000000006737fe
- (id)description;	// IMP=0x000000000067374f
- (id)timeConditionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000067370d
- (unsigned long long)timeConditionsCount;	// IMP=0x00000000006736e1
- (void)addTimeConditions:(id)arg1;	// IMP=0x000000000067362d
- (void)clearTimeConditions;	// IMP=0x0000000000673605
@property(retain, nonatomic) NSMutableArray *timeConditions;
- (id)mappedValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006734a8
- (unsigned long long)mappedValuesCount;	// IMP=0x000000000067347c
- (void)addMappedValue:(id)arg1;	// IMP=0x00000000006733c8
- (void)clearMappedValues;	// IMP=0x00000000006733a0
@property(retain, nonatomic) NSMutableArray *mappedValues;
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000673243
- (unsigned long long)valuesCount;	// IMP=0x0000000000673217
- (void)addValue:(id)arg1;	// IMP=0x0000000000673163
- (void)clearValues;	// IMP=0x000000000067313b
@property(retain, nonatomic) NSMutableArray *values;
- (id)initWithData:(id)arg1;	// IMP=0x00000000006729d9
- (id)init;	// IMP=0x000000000067297d

@end

