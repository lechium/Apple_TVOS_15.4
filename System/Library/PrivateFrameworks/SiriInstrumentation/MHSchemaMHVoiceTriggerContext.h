//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHVoiceTriggerSecondPassCancelled, MHSchemaMHVoiceTriggerSecondPassRejected, MHSchemaMHVoiceTriggerSecondPassStarted, MHSchemaMHVoiceTriggerSecondPassTriggered, NSData;

@interface MHSchemaMHVoiceTriggerContext
{
    MHSchemaMHVoiceTriggerSecondPassStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHVoiceTriggerSecondPassTriggered *_ended;	// 16 = 0x10
    MHSchemaMHVoiceTriggerSecondPassRejected *_failed;	// 24 = 0x18
    MHSchemaMHVoiceTriggerSecondPassCancelled *_cancelled;	// 32 = 0x20
    _Bool _hasStartedOrChanged;	// 40 = 0x28
    _Bool _hasEnded;	// 41 = 0x29
    _Bool _hasFailed;	// 42 = 0x2a
    _Bool _hasCancelled;	// 43 = 0x2b
    unsigned long long _whichContextevent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002078c8
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002075a5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002074e7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000207152
- (unsigned long long)hash;	// IMP=0x00000000002070ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000206baa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000206a0f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000205ac6
- (void)deleteCancelled;	// IMP=0x0000000000205a93
@property(retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteFailed;	// IMP=0x0000000000205998
@property(retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassRejected *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002058a8
@property(retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassTriggered *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002057ae
@property(retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032e0ff
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032e0c7

@end

