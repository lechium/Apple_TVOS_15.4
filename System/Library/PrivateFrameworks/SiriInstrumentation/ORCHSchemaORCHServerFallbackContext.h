//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, ORCHSchemaORCHServerFallbackFailed, ORCHSchemaORCHServerFallbackInitiated, ORCHSchemaORCHServerFallbackResponseReceived, SISchemaUUID;

@interface ORCHSchemaORCHServerFallbackContext
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    ORCHSchemaORCHServerFallbackInitiated *_startedOrChanged;	// 16 = 0x10
    ORCHSchemaORCHServerFallbackResponseReceived *_ended;	// 24 = 0x18
    ORCHSchemaORCHServerFallbackFailed *_failed;	// 32 = 0x20
    _Bool _hasContextId;	// 40 = 0x28
    _Bool _hasStartedOrChanged;	// 41 = 0x29
    _Bool _hasEnded;	// 42 = 0x2a
    _Bool _hasFailed;	// 43 = 0x2b
    unsigned long long _whichContextevent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000027dd08
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027d9d0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000027d912
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000027d57d
- (unsigned long long)hash;	// IMP=0x000000000027d4f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027cfd5
- (void)writeTo:(id)arg1;	// IMP=0x000000000027ce3a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027c840
- (void)deleteFailed;	// IMP=0x000000000027c80d
@property(retain, nonatomic) ORCHSchemaORCHServerFallbackFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x000000000027c724
@property(retain, nonatomic) ORCHSchemaORCHServerFallbackResponseReceived *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000027c646
@property(retain, nonatomic) ORCHSchemaORCHServerFallbackInitiated *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteContextId;	// IMP=0x000000000027c57d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003346fc
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003346c4

@end

