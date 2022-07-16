//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLPInstSchemaCLPCDMReplaySampleContext, CLPInstSchemaCLPCDMReplayTaskContext, CLPInstSchemaCLPClientEventMetadata, CLPInstSchemaCLPCurareAppIntentSampleClassificationContext, CLPInstSchemaCLPCurareAppIntentTaskClassificationContext, CLPInstSchemaCLPNLv4SampleEvaluationContext, CLPInstSchemaCLPNLv4TaskEvaluationContext, NSData;

@interface CLPInstSchemaCLPClientEvent
{
    CLPInstSchemaCLPClientEventMetadata *_eventMetadata;	// 8 = 0x8
    CLPInstSchemaCLPNLv4SampleEvaluationContext *_nlv4SampleEvaluationContext;	// 16 = 0x10
    CLPInstSchemaCLPNLv4TaskEvaluationContext *_nlv4TaskEvaluationContext;	// 24 = 0x18
    CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *_curareAppIntentSampleClassificationContext;	// 32 = 0x20
    CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *_curareAppIntentTaskClassificationContext;	// 40 = 0x28
    CLPInstSchemaCLPCDMReplaySampleContext *_cdmReplaySampleContext;	// 48 = 0x30
    CLPInstSchemaCLPCDMReplayTaskContext *_cdmReplayTaskContext;	// 56 = 0x38
    _Bool _hasEventMetadata;	// 64 = 0x40
    _Bool _hasNlv4SampleEvaluationContext;	// 65 = 0x41
    _Bool _hasNlv4TaskEvaluationContext;	// 66 = 0x42
    _Bool _hasCurareAppIntentSampleClassificationContext;	// 67 = 0x43
    _Bool _hasCurareAppIntentTaskClassificationContext;	// 68 = 0x44
    _Bool _hasCdmReplaySampleContext;	// 69 = 0x45
    _Bool _hasCdmReplayTaskContext;	// 70 = 0x46
    unsigned long long _whichEvent_Type;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a74d4
@property(nonatomic) _Bool hasCdmReplayTaskContext; // @synthesize hasCdmReplayTaskContext=_hasCdmReplayTaskContext;
@property(nonatomic) _Bool hasCdmReplaySampleContext; // @synthesize hasCdmReplaySampleContext=_hasCdmReplaySampleContext;
@property(nonatomic) _Bool hasCurareAppIntentTaskClassificationContext; // @synthesize hasCurareAppIntentTaskClassificationContext=_hasCurareAppIntentTaskClassificationContext;
@property(nonatomic) _Bool hasCurareAppIntentSampleClassificationContext; // @synthesize hasCurareAppIntentSampleClassificationContext=_hasCurareAppIntentSampleClassificationContext;
@property(nonatomic) _Bool hasNlv4TaskEvaluationContext; // @synthesize hasNlv4TaskEvaluationContext=_hasNlv4TaskEvaluationContext;
@property(nonatomic) _Bool hasNlv4SampleEvaluationContext; // @synthesize hasNlv4SampleEvaluationContext=_hasNlv4SampleEvaluationContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) CLPInstSchemaCLPClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a6f98
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a6eda
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a6935
- (unsigned long long)hash;	// IMP=0x00000000000a6863
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6072
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a5dc3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a4da9
- (void)deleteCdmReplayTaskContext;	// IMP=0x00000000000a4d76
@property(retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskContext *cdmReplayTaskContext; // @synthesize cdmReplayTaskContext=_cdmReplayTaskContext;
- (void)deleteCdmReplaySampleContext;	// IMP=0x00000000000a4c62
@property(retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleContext *cdmReplaySampleContext; // @synthesize cdmReplaySampleContext=_cdmReplaySampleContext;
- (void)deleteCurareAppIntentTaskClassificationContext;	// IMP=0x00000000000a4b4e
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *curareAppIntentTaskClassificationContext; // @synthesize curareAppIntentTaskClassificationContext=_curareAppIntentTaskClassificationContext;
- (void)deleteCurareAppIntentSampleClassificationContext;	// IMP=0x00000000000a4a3a
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *curareAppIntentSampleClassificationContext; // @synthesize curareAppIntentSampleClassificationContext=_curareAppIntentSampleClassificationContext;
- (void)deleteNlv4TaskEvaluationContext;	// IMP=0x00000000000a4926
@property(retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationContext *nlv4TaskEvaluationContext; // @synthesize nlv4TaskEvaluationContext=_nlv4TaskEvaluationContext;
- (void)deleteNlv4SampleEvaluationContext;	// IMP=0x00000000000a4812
@property(retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationContext *nlv4SampleEvaluationContext; // @synthesize nlv4SampleEvaluationContext=_nlv4SampleEvaluationContext;
- (void)deleteEventMetadata;	// IMP=0x00000000000a471d
- (id)qualifiedMessageName;	// IMP=0x00000000000a4685
- (int)getAnyEventType;	// IMP=0x00000000000a467a
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003182c1
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000318289

@end

