//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioInitEnded, MHSchemaMHAssistantDaemonAudioInitStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioInitContext
{
    MHSchemaMHAssistantDaemonAudioInitStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioInitEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c3aa5
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c38ca
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001c380c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001c35d7
- (unsigned long long)hash;	// IMP=0x00000000001c358a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c32c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c31e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c2c0f
- (void)deleteEnded;	// IMP=0x00000000001c2bdc
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioInitEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001c2b10
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioInitStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000329b24
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000329aec

@end

