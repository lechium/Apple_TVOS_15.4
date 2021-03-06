//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface SISchemaABExperimentClientFeatureTriggered
{
    SISchemaUUID *_turnId;	// 8 = 0x8
    NSString *_experimentId;	// 16 = 0x10
    _Bool _hasTurnId;	// 24 = 0x18
    _Bool _hasExperimentId;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000000a209
@property(nonatomic) _Bool hasExperimentId; // @synthesize hasExperimentId=_hasExperimentId;
@property(nonatomic) _Bool hasTurnId; // @synthesize hasTurnId=_hasTurnId;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(retain, nonatomic) SISchemaUUID *turnId; // @synthesize turnId=_turnId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000a027
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000009f69
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000009d7d
- (unsigned long long)hash;	// IMP=0x0000000000009d30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009a73
- (void)writeTo:(id)arg1;	// IMP=0x00000000000099ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000999e
- (void)deleteExperimentId;	// IMP=0x000000000000998a
- (void)deleteTurnId;	// IMP=0x0000000000009961
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030c806
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030c7ce

@end

