//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, ORCHSchemaORCHRequestCancelled, ORCHSchemaORCHRequestEnded, ORCHSchemaORCHRequestFailed, ORCHSchemaORCHRequestStarted;

@interface ORCHSchemaORCHRequestContext
{
    ORCHSchemaORCHRequestStarted *_startedOrChanged;	// 8 = 0x8
    ORCHSchemaORCHRequestEnded *_ended;	// 16 = 0x10
    ORCHSchemaORCHRequestFailed *_failed;	// 24 = 0x18
    ORCHSchemaORCHRequestCancelled *_cancelled;	// 32 = 0x20
    _Bool _hasStartedOrChanged;	// 40 = 0x28
    _Bool _hasEnded;	// 41 = 0x29
    _Bool _hasFailed;	// 42 = 0x2a
    _Bool _hasCancelled;	// 43 = 0x2b
    unsigned long long _whichContextevent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000027a406
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027a0e3
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000027a025
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000279c90
- (unsigned long long)hash;	// IMP=0x0000000000279c0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002796e8
- (void)writeTo:(id)arg1;	// IMP=0x000000000027954d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000278ebd
- (void)deleteCancelled;	// IMP=0x0000000000278e8a
@property(retain, nonatomic) ORCHSchemaORCHRequestCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteFailed;	// IMP=0x0000000000278d8f
@property(retain, nonatomic) ORCHSchemaORCHRequestFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x0000000000278c9f
@property(retain, nonatomic) ORCHSchemaORCHRequestEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x0000000000278ba5
@property(retain, nonatomic) ORCHSchemaORCHRequestStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033416f
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000334137

@end

