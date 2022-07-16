//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded, MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionContext
{
    MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d91f5
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d901a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d8f5c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d8d27
- (unsigned long long)hash;	// IMP=0x00000000001d8cda
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d8a18
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d8935
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d82d9
- (void)deleteEnded;	// IMP=0x00000000001d82a6
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001d81da
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioTwoShotTransitionStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032b56c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032b534

@end
