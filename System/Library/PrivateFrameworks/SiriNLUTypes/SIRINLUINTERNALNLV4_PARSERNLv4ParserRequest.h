//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALTurnInput, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLV4_PARSERTokenisation, SIRINLUINTERNALNLv4EmbeddingTensor;

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest : PBRequest <NSCopying>
{
    unsigned long long _maxNumParses;	// 8 = 0x8
    SIRINLUINTERNALNLv4EmbeddingTensor *_embeddings;	// 16 = 0x10
    NSMutableArray *_matchingSpans;	// 24 = 0x18
    SIRINLUEXTERNALRequestID *_nluRequestId;	// 32 = 0x20
    SIRINLUEXTERNALUUID *_requestId;	// 40 = 0x28
    SIRINLUINTERNALNLV4_PARSERTokenisation *_tokenisedUtterance;	// 48 = 0x30
    SIRINLUEXTERNALTurnInput *_turnInput;	// 56 = 0x38
    CDStruct_a4c5e30d _has;	// 64 = 0x40
}

+ (Class)matchingSpansType;	// IMP=0x00000000000bddb0
- (void).cxx_destruct;	// IMP=0x00000000000bf359
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId; // @synthesize nluRequestId=_nluRequestId;
@property(nonatomic) unsigned long long maxNumParses; // @synthesize maxNumParses=_maxNumParses;
@property(retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // @synthesize turnInput=_turnInput;
@property(retain, nonatomic) NSMutableArray *matchingSpans; // @synthesize matchingSpans=_matchingSpans;
@property(retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings; // @synthesize embeddings=_embeddings;
@property(retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance; // @synthesize tokenisedUtterance=_tokenisedUtterance;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000befdb
- (unsigned long long)hash;	// IMP=0x00000000000beefc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bed37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bea7f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000be8f1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000be6f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000be6ec
- (id)dictionaryRepresentation;	// IMP=0x00000000000bdee0
- (id)description;	// IMP=0x00000000000bde31
@property(readonly, nonatomic) _Bool hasNluRequestId;
@property(nonatomic) _Bool hasMaxNumParses;
@property(readonly, nonatomic) _Bool hasTurnInput;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bdd93
- (unsigned long long)matchingSpansCount;	// IMP=0x00000000000bdd76
- (void)addMatchingSpans:(id)arg1;	// IMP=0x00000000000bdd0c
- (void)clearMatchingSpans;	// IMP=0x00000000000bdcef
@property(readonly, nonatomic) _Bool hasEmbeddings;
@property(readonly, nonatomic) _Bool hasTokenisedUtterance;
@property(readonly, nonatomic) _Bool hasRequestId;

@end

