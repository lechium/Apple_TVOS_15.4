//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMTurnContext, NSArray, NSData;

@interface NLXSchemaCDMTurnInput
{
    NSArray *_asrHypothesisIds;	// 8 = 0x8
    NLXSchemaCDMTurnContext *_turnContext;	// 16 = 0x10
    _Bool _isTapToEdit;	// 24 = 0x18
    struct {
        unsigned int isTapToEdit:1;
    } _has;	// 28 = 0x1c
    _Bool _hasTurnContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009565a
@property(nonatomic) _Bool hasTurnContext; // @synthesize hasTurnContext=_hasTurnContext;
@property(nonatomic) _Bool isTapToEdit; // @synthesize isTapToEdit=_isTapToEdit;
@property(retain, nonatomic) NLXSchemaCDMTurnContext *turnContext; // @synthesize turnContext=_turnContext;
@property(copy, nonatomic) NSArray *asrHypothesisIds; // @synthesize asrHypothesisIds=_asrHypothesisIds;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009528f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000951d1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000094dc0
- (unsigned long long)hash;	// IMP=0x0000000000094d4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094a4e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000094885
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000094878
- (void)deleteIsTapToEdit;	// IMP=0x000000000009484e
@property(nonatomic) _Bool hasIsTapToEdit;
- (void)deleteTurnContext;	// IMP=0x00000000000947f5
- (id)asrHypothesisIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000947c3
- (unsigned long long)asrHypothesisIdsCount;	// IMP=0x00000000000947a6
- (void)addAsrHypothesisIds:(id)arg1;	// IMP=0x000000000009472c
- (void)deleteAsrHypothesisIds;	// IMP=0x000000000009471a
- (void)clearAsrHypothesisIds;	// IMP=0x00000000000946fd
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031683b
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000316803

@end

