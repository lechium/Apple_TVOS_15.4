//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContext
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    unsigned int _numberOfEntitiesShown;	// 16 = 0x10
    struct {
        unsigned int numberOfEntitiesShown:1;
    } _has;	// 20 = 0x14
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013f109
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(nonatomic) unsigned int numberOfEntitiesShown; // @synthesize numberOfEntitiesShown=_numberOfEntitiesShown;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000013ef54
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000013ee96
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000013ecae
- (unsigned long long)hash;	// IMP=0x000000000013ec5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013ea8b
- (void)writeTo:(id)arg1;	// IMP=0x000000000013e9de
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013e774
- (void)deleteNumberOfEntitiesShown;	// IMP=0x000000000013e74a
@property(nonatomic) _Bool hasNumberOfEntitiesShown;
- (void)deleteLinkId;	// IMP=0x000000000013e6f1
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000321c5d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000321c25

@end

