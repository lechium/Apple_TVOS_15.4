//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface SUTSchemaTestGeneratedTurnID
{
    SISchemaUUID *_turnID;	// 8 = 0x8
    _Bool _hasTurnID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002df0a9
@property(nonatomic) _Bool hasTurnID; // @synthesize hasTurnID=_hasTurnID;
@property(retain, nonatomic) SISchemaUUID *turnID; // @synthesize turnID=_turnID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002def77
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002deeb9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ded34
- (unsigned long long)hash;	// IMP=0x00000000002ded17
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002deb95
- (void)writeTo:(id)arg1;	// IMP=0x00000000002deb0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002deb01
- (void)deleteTurnID;	// IMP=0x00000000002deaed
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033b7cb
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033b793

@end

