//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID, TTSSchemaTTSSpeechCancelled, TTSSchemaTTSSpeechEnded, TTSSchemaTTSSpeechFailed, TTSSchemaTTSSpeechStarted;

@interface TTSSchemaTTSClientSpeechContext
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    TTSSchemaTTSSpeechStarted *_startedOrChanged;	// 16 = 0x10
    TTSSchemaTTSSpeechEnded *_ended;	// 24 = 0x18
    TTSSchemaTTSSpeechFailed *_failed;	// 32 = 0x20
    TTSSchemaTTSSpeechCancelled *_cancelled;	// 40 = 0x28
    _Bool _hasContextId;	// 48 = 0x30
    _Bool _hasStartedOrChanged;	// 49 = 0x31
    _Bool _hasEnded;	// 50 = 0x32
    _Bool _hasFailed;	// 51 = 0x33
    _Bool _hasCancelled;	// 52 = 0x34
    unsigned long long _whichContextevent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002d1112
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d0d2a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d0c6c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d0827
- (unsigned long long)hash;	// IMP=0x00000000002d0784
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d017b
- (void)writeTo:(id)arg1;	// IMP=0x00000000002cff84
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002cf48a
- (void)deleteCancelled;	// IMP=0x00000000002cf457
@property(retain, nonatomic) TTSSchemaTTSSpeechCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteFailed;	// IMP=0x00000000002cf367
@property(retain, nonatomic) TTSSchemaTTSSpeechFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002cf277
@property(retain, nonatomic) TTSSchemaTTSSpeechEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002cf187
@property(retain, nonatomic) TTSSchemaTTSSpeechStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteContextId;	// IMP=0x00000000002cf0b6
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033a4bb
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033a483

@end

