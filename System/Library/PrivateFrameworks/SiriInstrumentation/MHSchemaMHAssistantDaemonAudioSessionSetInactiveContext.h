//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioSessionSetInactiveEnded, MHSchemaMHAssistantDaemonAudioSessionSetInactiveStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioSessionSetInactiveContext
{
    MHSchemaMHAssistantDaemonAudioSessionSetInactiveStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioSessionSetInactiveEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d34ad
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d32d2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d3214
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d2fdf
- (unsigned long long)hash;	// IMP=0x00000000001d2f92
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d2cd0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d2bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d2617
- (void)deleteEnded;	// IMP=0x00000000001d25e4
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetInactiveEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001d2518
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioSessionSetInactiveStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032adc3
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ad8b

@end

