//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PLUSSchemaPLUSContactSuggesterQueryFailed, PLUSSchemaPLUSContactSuggesterQueryResponseReceived, PLUSSchemaPLUSContactSuggesterQueryStarted;

@interface PLUSSchemaPLUSContactSuggesterQueryContext
{
    PLUSSchemaPLUSContactSuggesterQueryStarted *_startedOrChanged;	// 8 = 0x8
    PLUSSchemaPLUSContactSuggesterQueryResponseReceived *_ended;	// 16 = 0x10
    PLUSSchemaPLUSContactSuggesterQueryFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000296882
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000296606
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000296548
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000296263
- (unsigned long long)hash;	// IMP=0x00000000002961f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000295e1d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000295cde
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002956d4
- (void)deleteFailed;	// IMP=0x00000000002956a1
@property(retain, nonatomic) PLUSSchemaPLUSContactSuggesterQueryFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002955c3
@property(retain, nonatomic) PLUSSchemaPLUSContactSuggesterQueryResponseReceived *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002954db
@property(retain, nonatomic) PLUSSchemaPLUSContactSuggesterQueryStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000335f92
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000335f5a

@end

