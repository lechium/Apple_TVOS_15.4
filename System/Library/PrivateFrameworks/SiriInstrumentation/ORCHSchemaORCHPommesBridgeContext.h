//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, ORCHSchemaORCHPommesRequestEnded, ORCHSchemaORCHPommesRequestFailed, ORCHSchemaORCHPommesRequestStarted;

@interface ORCHSchemaORCHPommesBridgeContext
{
    ORCHSchemaORCHPommesRequestStarted *_startedOrChanged;	// 8 = 0x8
    ORCHSchemaORCHPommesRequestEnded *_ended;	// 16 = 0x10
    ORCHSchemaORCHPommesRequestFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002777b0
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000277534
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000277476
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000277191
- (unsigned long long)hash;	// IMP=0x0000000000277124
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000276d4b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000276c0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000276698
- (void)deleteFailed;	// IMP=0x0000000000276665
@property(retain, nonatomic) ORCHSchemaORCHPommesRequestFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x0000000000276587
@property(retain, nonatomic) ORCHSchemaORCHPommesRequestEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000027649f
@property(retain, nonatomic) ORCHSchemaORCHPommesRequestStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000333e8a
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333e52

@end

