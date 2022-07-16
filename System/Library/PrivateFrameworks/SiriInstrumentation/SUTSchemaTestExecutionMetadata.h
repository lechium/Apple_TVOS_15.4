//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface SUTSchemaTestExecutionMetadata
{
    SISchemaUUID *_fingerprint;	// 8 = 0x8
    _Bool _hasFingerprint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002de4e1
@property(nonatomic) _Bool hasFingerprint; // @synthesize hasFingerprint=_hasFingerprint;
@property(retain, nonatomic) SISchemaUUID *fingerprint; // @synthesize fingerprint=_fingerprint;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002de3af
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002de2f1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002de16c
- (unsigned long long)hash;	// IMP=0x00000000002de14f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ddfcd
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ddf46
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ddf39
- (void)deleteFingerprint;	// IMP=0x00000000002ddf25
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033b595
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033b55d

@end

