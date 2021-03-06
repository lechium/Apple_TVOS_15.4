//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PEGASUSSchemaPEGASUSEntityInfo
{
    NSString *_entityId;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    CDStruct_81d693a7 _has;	// 20 = 0x14
    _Bool _hasEntityId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002806a4
@property(nonatomic) _Bool hasEntityId; // @synthesize hasEntityId=_hasEntityId;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000280501
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000280443
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002802a9
- (unsigned long long)hash;	// IMP=0x0000000000280178
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027ffa6
- (void)writeTo:(id)arg1;	// IMP=0x000000000027ff11
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027fd20
- (void)deleteConfidence;	// IMP=0x000000000027fcf5
@property(nonatomic) _Bool hasConfidence;
- (void)deleteEntityId;	// IMP=0x000000000027fc9a
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000334bac
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000334b74

@end

