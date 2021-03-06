//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface ANCSchemaANCServerEventMetadata
{
    SISchemaUUID *_ancId;	// 8 = 0x8
    _Bool _hasAncId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012870
@property(nonatomic) _Bool hasAncId; // @synthesize hasAncId=_hasAncId;
@property(retain, nonatomic) SISchemaUUID *ancId; // @synthesize ancId=_ancId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001273e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000012680
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000124fb
- (unsigned long long)hash;	// IMP=0x00000000000124de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001235c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000122d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000122c8
- (void)deleteAncId;	// IMP=0x00000000000122b4
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030d5a4
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030d56c

@end

