//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, PEGASUSSchemaPEGASUSEntityInfo;

@interface PEGASUSSchemaPEGASUSIntentArg
{
    NSString *_key;	// 8 = 0x8
    NSString *_attributeType;	// 16 = 0x10
    PEGASUSSchemaPEGASUSEntityInfo *_entity;	// 24 = 0x18
    _Bool _hasKey;	// 32 = 0x20
    _Bool _hasAttributeType;	// 33 = 0x21
    _Bool _hasEntity;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x0000000000282426
@property(nonatomic) _Bool hasEntity; // @synthesize hasEntity=_hasEntity;
@property(nonatomic) _Bool hasAttributeType; // @synthesize hasAttributeType=_hasAttributeType;
@property(nonatomic) _Bool hasKey; // @synthesize hasKey=_hasKey;
@property(retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *attributeType; // @synthesize attributeType=_attributeType;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002821a1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002820e3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000281e90
- (unsigned long long)hash;	// IMP=0x0000000000281e23
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000281a34
- (void)writeTo:(id)arg1;	// IMP=0x000000000028192b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002816f6
- (void)deleteEntity;	// IMP=0x00000000002816e2
- (void)deleteAttributeType;	// IMP=0x00000000002816b9
- (void)deleteKey;	// IMP=0x0000000000281690
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000334d9b
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000334d63

@end
