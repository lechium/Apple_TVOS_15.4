//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PLUSSchemaPLUSInferencePluginCompleted, PLUSSchemaPLUSInferencePluginFailed, PLUSSchemaPLUSInferencePluginStartedOrChanged;

@interface PLUSSchemaPLUSInferencePluginInvocationContext
{
    PLUSSchemaPLUSInferencePluginStartedOrChanged *_startedOrChanged;	// 8 = 0x8
    PLUSSchemaPLUSInferencePluginCompleted *_ended;	// 16 = 0x10
    PLUSSchemaPLUSInferencePluginFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000029d897
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000029d61b
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000029d55d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000029d278
- (unsigned long long)hash;	// IMP=0x000000000029d20b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029ce32
- (void)writeTo:(id)arg1;	// IMP=0x000000000029ccf3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029cb1b
- (void)deleteFailed;	// IMP=0x000000000029cae8
@property(retain, nonatomic) PLUSSchemaPLUSInferencePluginFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x000000000029ca0a
@property(retain, nonatomic) PLUSSchemaPLUSInferencePluginCompleted *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000029c922
@property(retain, nonatomic) PLUSSchemaPLUSInferencePluginStartedOrChanged *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000336966
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033692e

@end
