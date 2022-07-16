//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHRequestStarted
{
    SISchemaUUID *_orchestratorSessionId;	// 8 = 0x8
    int _requestType;	// 16 = 0x10
    _Bool _siriUODEnabled;	// 20 = 0x14
    struct {
        unsigned int requestType:1;
        unsigned int siriUODEnabled:1;
    } _has;	// 24 = 0x18
    _Bool _hasOrchestratorSessionId;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000027b6d1
@property(nonatomic) _Bool hasOrchestratorSessionId; // @synthesize hasOrchestratorSessionId=_hasOrchestratorSessionId;
@property(nonatomic) _Bool siriUODEnabled; // @synthesize siriUODEnabled=_siriUODEnabled;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) SISchemaUUID *orchestratorSessionId; // @synthesize orchestratorSessionId=_orchestratorSessionId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027b4aa
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000027b3ec
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000027b164
- (unsigned long long)hash;	// IMP=0x000000000027b0f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027aed8
- (void)writeTo:(id)arg1;	// IMP=0x000000000027ae09
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027adfc
- (void)deleteSiriUODEnabled;	// IMP=0x000000000027add2
@property(nonatomic) _Bool hasSiriUODEnabled;
- (void)deleteRequestType;	// IMP=0x000000000027ad5f
@property(nonatomic) _Bool hasRequestType;
- (void)deleteOrchestratorSessionId;	// IMP=0x000000000027ad06
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000334456
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033441e

@end

