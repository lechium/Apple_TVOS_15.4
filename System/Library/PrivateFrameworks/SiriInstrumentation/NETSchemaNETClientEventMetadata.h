//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface NETSchemaNETClientEventMetadata
{
    SISchemaUUID *_netId;	// 8 = 0x8
    _Bool _hasNetId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024116f
@property(nonatomic) _Bool hasNetId; // @synthesize hasNetId=_hasNetId;
@property(retain, nonatomic) SISchemaUUID *netId; // @synthesize netId=_netId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000024103d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000240f7f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000240dfa
- (unsigned long long)hash;	// IMP=0x0000000000240ddd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000240c5b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000240bd4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000240bc7
- (void)deleteNetId;	// IMP=0x0000000000240bb3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000330aa0
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000330a68

@end

