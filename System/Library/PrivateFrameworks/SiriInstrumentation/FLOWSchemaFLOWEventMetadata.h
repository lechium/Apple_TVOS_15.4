//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID, SISchemaVersion;

@interface FLOWSchemaFLOWEventMetadata
{
    SISchemaUUID *_taskId;	// 8 = 0x8
    NSString *_resultCandidateId;	// 16 = 0x10
    SISchemaVersion *_version;	// 24 = 0x18
    SISchemaUUID *_flowId;	// 32 = 0x20
    _Bool _hasTaskId;	// 40 = 0x28
    _Bool _hasResultCandidateId;	// 41 = 0x29
    _Bool _hasVersion;	// 42 = 0x2a
    _Bool _hasFlowId;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x00000000001417f3
@property(nonatomic) _Bool hasFlowId; // @synthesize hasFlowId=_hasFlowId;
@property(nonatomic) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(nonatomic) _Bool hasResultCandidateId; // @synthesize hasResultCandidateId=_hasResultCandidateId;
@property(nonatomic) _Bool hasTaskId; // @synthesize hasTaskId=_hasTaskId;
@property(retain, nonatomic) SISchemaUUID *flowId; // @synthesize flowId=_flowId;
@property(retain, nonatomic) SISchemaVersion *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain, nonatomic) SISchemaUUID *taskId; // @synthesize taskId=_taskId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014149f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001413e1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000141095
- (unsigned long long)hash;	// IMP=0x0000000000141011
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000140b55
- (void)writeTo:(id)arg1;	// IMP=0x00000000001409d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001409c8
- (void)deleteFlowId;	// IMP=0x00000000001409b4
- (void)deleteVersion;	// IMP=0x000000000014098b
- (void)deleteResultCandidateId;	// IMP=0x0000000000140962
- (void)deleteTaskId;	// IMP=0x0000000000140939
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032202f
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000321ff7

@end
