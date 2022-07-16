//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface CLPInstSchemaCLPClientEventMetadata
{
    SISchemaUUID *_clpId;	// 8 = 0x8
    _Bool _hasClpId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a7b2b
@property(nonatomic) _Bool hasClpId; // @synthesize hasClpId=_hasClpId;
@property(retain, nonatomic) SISchemaUUID *clpId; // @synthesize clpId=_clpId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a79f9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a793b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a77b6
- (unsigned long long)hash;	// IMP=0x00000000000a7799
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7617
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a7590
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a7583
- (void)deleteClpId;	// IMP=0x00000000000a756f
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031868e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000318656

@end

