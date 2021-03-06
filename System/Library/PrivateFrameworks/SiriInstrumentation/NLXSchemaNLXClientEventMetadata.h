//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface NLXSchemaNLXClientEventMetadata
{
    SISchemaUUID *_nlId;	// 8 = 0x8
    NSString *_resultCandidateId;	// 16 = 0x10
    int _componentInvocationSource;	// 24 = 0x18
    struct {
        unsigned int componentInvocationSource:1;
    } _has;	// 28 = 0x1c
    _Bool _hasNlId;	// 32 = 0x20
    _Bool _hasResultCandidateId;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000263474
@property(nonatomic) _Bool hasResultCandidateId; // @synthesize hasResultCandidateId=_hasResultCandidateId;
@property(nonatomic) _Bool hasNlId; // @synthesize hasNlId=_hasNlId;
@property(nonatomic) int componentInvocationSource; // @synthesize componentInvocationSource=_componentInvocationSource;
@property(copy, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain, nonatomic) SISchemaUUID *nlId; // @synthesize nlId=_nlId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000263226
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000263168
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000262f16
- (unsigned long long)hash;	// IMP=0x0000000000262ea1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000262ba4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000262ab6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000262aa9
- (void)deleteComponentInvocationSource;	// IMP=0x0000000000262a7f
@property(nonatomic) _Bool hasComponentInvocationSource;
- (void)deleteResultCandidateId;	// IMP=0x0000000000262a26
- (void)deleteNlId;	// IMP=0x00000000002629fd
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003326aa
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000332672

@end

