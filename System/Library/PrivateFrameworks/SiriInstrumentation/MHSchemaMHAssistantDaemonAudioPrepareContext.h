//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioPrepareEnded, MHSchemaMHAssistantDaemonAudioPrepareStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioPrepareContext
{
    MHSchemaMHAssistantDaemonAudioPrepareStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioPrepareEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c59bd
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c57e2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001c5724
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001c54ef
- (unsigned long long)hash;	// IMP=0x00000000001c54a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c51e0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c50fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c4b27
- (void)deleteEnded;	// IMP=0x00000000001c4af4
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001c4a28
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000329d5d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000329d25

@end

