//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface OPTINSchemaOPTINStatePropagationEvent
{
    int _optInState;	// 8 = 0x8
    int _propagationState;	// 12 = 0xc
    SISchemaUUID *_hashedHomeKitAccessoryId;	// 16 = 0x10
    struct {
        unsigned int optInState:1;
        unsigned int propagationState:1;
    } _has;	// 24 = 0x18
    _Bool _hasHashedHomeKitAccessoryId;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000002665b6
@property(nonatomic) _Bool hasHashedHomeKitAccessoryId; // @synthesize hasHashedHomeKitAccessoryId=_hasHashedHomeKitAccessoryId;
@property(retain, nonatomic) SISchemaUUID *hashedHomeKitAccessoryId; // @synthesize hashedHomeKitAccessoryId=_hashedHomeKitAccessoryId;
@property(nonatomic) int propagationState; // @synthesize propagationState=_propagationState;
@property(nonatomic) int optInState; // @synthesize optInState=_optInState;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000266396
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002662d8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000266069
- (unsigned long long)hash;	// IMP=0x0000000000265fff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000265dfe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000265d30
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000265a35
- (void)deleteHashedHomeKitAccessoryId;	// IMP=0x0000000000265a21
- (void)deletePropagationState;	// IMP=0x00000000002659e2
@property(nonatomic) _Bool hasPropagationState;
- (void)deleteOptInState;	// IMP=0x000000000026596f
@property(nonatomic) _Bool hasOptInState;
- (id)qualifiedMessageName;	// IMP=0x000000000026591d
- (int)getAnyEventType;	// IMP=0x0000000000265912
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000332b77
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000332b3f

@end

