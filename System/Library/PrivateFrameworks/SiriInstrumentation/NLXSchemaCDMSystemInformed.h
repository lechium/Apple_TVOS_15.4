//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMSystemInformed
{
    SISchemaUUID *_taskId;	// 8 = 0x8
    NSArray *_entities;	// 16 = 0x10
    _Bool _hasTaskId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008c36e
@property(nonatomic) _Bool hasTaskId; // @synthesize hasTaskId=_hasTaskId;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) SISchemaUUID *taskId; // @synthesize taskId=_taskId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000008c019
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000008bf5b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000008bbab
- (unsigned long long)hash;	// IMP=0x000000000008bb5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b8a1
- (void)writeTo:(id)arg1;	// IMP=0x000000000008b716
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008b709
- (id)entitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008b6ec
- (unsigned long long)entitiesCount;	// IMP=0x000000000008b6cf
- (void)addEntities:(id)arg1;	// IMP=0x000000000008b655
- (void)deleteEntities;	// IMP=0x000000000008b643
- (void)clearEntities;	// IMP=0x000000000008b626
- (void)deleteTaskId;	// IMP=0x000000000008b612
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000315984
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031594c

@end
