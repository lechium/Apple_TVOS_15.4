//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GRRSchemaGRRClientEventMetadata, GRRSchemaGRRFeatureExtractionContext, GRRSchemaGRRHypothesisRankingContext, GRRSchemaGRRSystemErrorOccurred, NSData;

@interface GRRSchemaGRRClientEvent
{
    GRRSchemaGRRClientEventMetadata *_eventMetadata;	// 8 = 0x8
    GRRSchemaGRRFeatureExtractionContext *_featureExtractionContext;	// 16 = 0x10
    GRRSchemaGRRHypothesisRankingContext *_hypothesisRankingContext;	// 24 = 0x18
    GRRSchemaGRRSystemErrorOccurred *_systemErrorOccurred;	// 32 = 0x20
    _Bool _hasEventMetadata;	// 40 = 0x28
    _Bool _hasFeatureExtractionContext;	// 41 = 0x29
    _Bool _hasHypothesisRankingContext;	// 42 = 0x2a
    _Bool _hasSystemErrorOccurred;	// 43 = 0x2b
    unsigned long long _whichEvent_Type;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000016af5b
@property(nonatomic) _Bool hasSystemErrorOccurred; // @synthesize hasSystemErrorOccurred=_hasSystemErrorOccurred;
@property(nonatomic) _Bool hasHypothesisRankingContext; // @synthesize hasHypothesisRankingContext=_hasHypothesisRankingContext;
@property(nonatomic) _Bool hasFeatureExtractionContext; // @synthesize hasFeatureExtractionContext=_hasFeatureExtractionContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) GRRSchemaGRRClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000016ac23
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000016ab65
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000016a7d0
- (unsigned long long)hash;	// IMP=0x000000000016a74c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016a228
- (void)writeTo:(id)arg1;	// IMP=0x000000000016a08d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000169469
- (void)deleteSystemErrorOccurred;	// IMP=0x0000000000169436
@property(retain, nonatomic) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred; // @synthesize systemErrorOccurred=_systemErrorOccurred;
- (void)deleteHypothesisRankingContext;	// IMP=0x0000000000169358
@property(retain, nonatomic) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext; // @synthesize hypothesisRankingContext=_hypothesisRankingContext;
- (void)deleteFeatureExtractionContext;	// IMP=0x000000000016927a
@property(retain, nonatomic) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext; // @synthesize featureExtractionContext=_featureExtractionContext;
- (void)deleteEventMetadata;	// IMP=0x00000000001691bb
- (id)qualifiedMessageName;	// IMP=0x000000000016915f
- (int)getAnyEventType;	// IMP=0x0000000000169154
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000324601
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003245c9

@end

