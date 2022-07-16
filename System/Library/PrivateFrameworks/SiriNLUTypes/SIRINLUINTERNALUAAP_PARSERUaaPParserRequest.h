//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALTurnInput, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserRequest : PBRequest <NSCopying>
{
    unsigned long long _maxNumParses;	// 8 = 0x8
    SIRINLUINTERNALNLv4EmbeddingTensor *_embeddings;	// 16 = 0x10
    NSMutableArray *_matchingSpans;	// 24 = 0x18
    SIRINLUEXTERNALUUID *_requestId;	// 32 = 0x20
    SIRINLUINTERNALTokenChain *_tokenChain;	// 40 = 0x28
    SIRINLUEXTERNALTurnInput *_turnInput;	// 48 = 0x30
    CDStruct_a4c5e30d _has;	// 56 = 0x38
}

+ (Class)matchingSpansType;	// IMP=0x0000000000044244
- (void).cxx_destruct;	// IMP=0x0000000000045668
@property(nonatomic) unsigned long long maxNumParses; // @synthesize maxNumParses=_maxNumParses;
@property(retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // @synthesize turnInput=_turnInput;
@property(retain, nonatomic) NSMutableArray *matchingSpans; // @synthesize matchingSpans=_matchingSpans;
@property(retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings; // @synthesize embeddings=_embeddings;
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004530f
- (unsigned long long)hash;	// IMP=0x0000000000045244
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000450b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044e1e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000044cb0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000044ad5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000044ac8
- (id)dictionaryRepresentation;	// IMP=0x000000000004435f
- (id)description;	// IMP=0x00000000000442b0
@property(nonatomic) _Bool hasMaxNumParses;
@property(readonly, nonatomic) _Bool hasTurnInput;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000044227
- (unsigned long long)matchingSpansCount;	// IMP=0x000000000004420a
- (void)addMatchingSpans:(id)arg1;	// IMP=0x00000000000441a0
- (void)clearMatchingSpans;	// IMP=0x0000000000044183
@property(readonly, nonatomic) _Bool hasEmbeddings;
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasRequestId;

@end

