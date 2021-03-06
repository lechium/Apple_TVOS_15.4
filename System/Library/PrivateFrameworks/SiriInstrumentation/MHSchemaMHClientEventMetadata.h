//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface MHSchemaMHClientEventMetadata
{
    SISchemaUUID *_mhId;	// 8 = 0x8
    _Bool _hasMhId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ee7e7
@property(nonatomic) _Bool hasMhId; // @synthesize hasMhId=_hasMhId;
@property(retain, nonatomic) SISchemaUUID *mhId; // @synthesize mhId=_mhId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001ee6b5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001ee5f7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ee472
- (unsigned long long)hash;	// IMP=0x00000000001ee455
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ee2d3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ee24c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ee23f
- (void)deleteMhId;	// IMP=0x00000000001ee22b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032ca1d
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032c9e5

@end

