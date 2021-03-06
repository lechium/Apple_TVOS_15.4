//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLPInstSchemaCLPNLv4TaskEvaluationEnded, CLPInstSchemaCLPNLv4TaskEvaluationStarted, NSData;

@interface CLPInstSchemaCLPNLv4TaskEvaluationContext
{
    CLPInstSchemaCLPNLv4TaskEvaluationStarted *_startedOrChanged;	// 8 = 0x8
    CLPInstSchemaCLPNLv4TaskEvaluationEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b181f
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b1644
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b1586
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b1351
- (unsigned long long)hash;	// IMP=0x00000000000b1304
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b1042
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b0f5f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b06b6
- (void)deleteEnded;	// IMP=0x00000000000b0683
@property(retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000000b05b5
@property(retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031937b
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000319343

@end

