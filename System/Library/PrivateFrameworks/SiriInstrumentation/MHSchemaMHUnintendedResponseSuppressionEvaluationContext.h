//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHUnintendedResponseSuppressionEnded, MHSchemaMHUnintendedResponseSuppressionFailed, MHSchemaMHUnintendedResponseSuppressionStarted, NSData;

@interface MHSchemaMHUnintendedResponseSuppressionEvaluationContext
{
    MHSchemaMHUnintendedResponseSuppressionStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHUnintendedResponseSuppressionEnded *_ended;	// 16 = 0x10
    MHSchemaMHUnintendedResponseSuppressionFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000020350f
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000203293
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002031d5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000202ef0
- (unsigned long long)hash;	// IMP=0x0000000000202e83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000202aaa
- (void)writeTo:(id)arg1;	// IMP=0x000000000020296b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002023a8
- (void)deleteFailed;	// IMP=0x0000000000202375
@property(retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x0000000000202297
@property(retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002021af
@property(retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032db2c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032daf4

@end

