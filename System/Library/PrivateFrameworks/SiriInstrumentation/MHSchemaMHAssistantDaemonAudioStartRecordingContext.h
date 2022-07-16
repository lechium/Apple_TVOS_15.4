//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioStartRecordingEnded, MHSchemaMHAssistantDaemonAudioStartRecordingStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioStartRecordingContext
{
    MHSchemaMHAssistantDaemonAudioStartRecordingStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioStartRecordingEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d4ddb
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d4c00
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d4b42
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d490d
- (unsigned long long)hash;	// IMP=0x00000000001d48c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d45fe
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d451b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d3f14
- (void)deleteEnded;	// IMP=0x00000000001d3ee1
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioStartRecordingEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001d3e15
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioStartRecordingStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032afc4
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032af8c

@end

