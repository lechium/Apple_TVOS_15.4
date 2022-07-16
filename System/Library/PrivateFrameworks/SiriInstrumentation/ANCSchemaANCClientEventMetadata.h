//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface ANCSchemaANCClientEventMetadata
{
    SISchemaUUID *_ancId;	// 8 = 0x8
    _Bool _hasAncId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f74b
@property(nonatomic) _Bool hasAncId; // @synthesize hasAncId=_hasAncId;
@property(retain, nonatomic) SISchemaUUID *ancId; // @synthesize ancId=_ancId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000f619
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000000f55b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000000f3d6
- (unsigned long long)hash;	// IMP=0x000000000000f3b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f237
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f1b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f1a3
- (void)deleteAncId;	// IMP=0x000000000000f18f
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030d023
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030cfeb

@end
