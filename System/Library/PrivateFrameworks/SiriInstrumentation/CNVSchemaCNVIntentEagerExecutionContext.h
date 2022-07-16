//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNVSchemaCNVIntentEagerExecutionCancelled, CNVSchemaCNVIntentEagerExecutionEnded, CNVSchemaCNVIntentEagerExecutionFailed, CNVSchemaCNVIntentEagerExecutionStarted, NSData;

@interface CNVSchemaCNVIntentEagerExecutionContext
{
    CNVSchemaCNVIntentEagerExecutionStarted *_startedOrChanged;	// 8 = 0x8
    CNVSchemaCNVIntentEagerExecutionEnded *_ended;	// 16 = 0x10
    CNVSchemaCNVIntentEagerExecutionFailed *_failed;	// 24 = 0x18
    CNVSchemaCNVIntentEagerExecutionCancelled *_cancelled;	// 32 = 0x20
    _Bool _hasStartedOrChanged;	// 40 = 0x28
    _Bool _hasEnded;	// 41 = 0x29
    _Bool _hasFailed;	// 42 = 0x2a
    _Bool _hasCancelled;	// 43 = 0x2b
    unsigned long long _whichContextevent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b86a5
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b8382
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b82c4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b7f2f
- (unsigned long long)hash;	// IMP=0x00000000000b7eab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b7987
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b77ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b7278
- (void)deleteCancelled;	// IMP=0x00000000000b7245
@property(retain, nonatomic) CNVSchemaCNVIntentEagerExecutionCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteFailed;	// IMP=0x00000000000b714a
@property(retain, nonatomic) CNVSchemaCNVIntentEagerExecutionFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000000b705a
@property(retain, nonatomic) CNVSchemaCNVIntentEagerExecutionEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000000b6f60
@property(retain, nonatomic) CNVSchemaCNVIntentEagerExecutionStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000319b95
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000319b5d

@end
