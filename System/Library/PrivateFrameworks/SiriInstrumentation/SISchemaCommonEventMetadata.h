//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaLogicalTimestamp;

@interface SISchemaCommonEventMetadata
{
    SISchemaLogicalTimestamp *_timestamp;	// 8 = 0x8
    _Bool _hasTimestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e482c
@property(nonatomic) _Bool hasTimestamp; // @synthesize hasTimestamp=_hasTimestamp;
@property(retain, nonatomic) SISchemaLogicalTimestamp *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e46fa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e463c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e44b7
- (unsigned long long)hash;	// IMP=0x00000000000e449a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4318
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e4291
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e3e5c
- (void)deleteTimestamp;	// IMP=0x00000000000e3e48
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031c026
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031bfee

@end

