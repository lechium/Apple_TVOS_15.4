//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface NLXSchemaNLXCurareContext
{
    SISchemaUUID *_curareId;	// 8 = 0x8
    _Bool _hasCurareId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000263a76
@property(nonatomic) _Bool hasCurareId; // @synthesize hasCurareId=_hasCurareId;
@property(retain, nonatomic) SISchemaUUID *curareId; // @synthesize curareId=_curareId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000263944
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000263886
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000263701
- (unsigned long long)hash;	// IMP=0x00000000002636e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000263562
- (void)writeTo:(id)arg1;	// IMP=0x00000000002634db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002634ce
- (void)deleteCurareId;	// IMP=0x00000000002634ba
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003327c5
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033278d

@end

