//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying>
{
    SIRINLUEXTERNALRequestID *_cdmRequestId;	// 8 = 0x8
    NSMutableArray *_interactions;	// 16 = 0x10
    SIRINLUEXTERNALUUID *_nluRequestId;	// 24 = 0x18
    NSMutableArray *_originalInteractions;	// 32 = 0x20
    SIRINLUEXTERNALUUID *_requestId;	// 40 = 0x28
    NSString *_resultCandidateId;	// 48 = 0x30
}

+ (Class)originalInteractionsType;	// IMP=0x00000000000c2238
+ (Class)interactionsType;	// IMP=0x00000000000c2166
- (void).cxx_destruct;	// IMP=0x00000000000c39a2
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId; // @synthesize cdmRequestId=_cdmRequestId;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // @synthesize nluRequestId=_nluRequestId;
@property(retain, nonatomic) NSString *resultCandidateId; // @synthesize resultCandidateId=_resultCandidateId;
@property(retain, nonatomic) NSMutableArray *originalInteractions; // @synthesize originalInteractions=_originalInteractions;
@property(retain, nonatomic) NSMutableArray *interactions; // @synthesize interactions=_interactions;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c35b8
- (unsigned long long)hash;	// IMP=0x00000000000c34fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c3366
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2fce
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c2de8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c2b5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c2b50
- (id)dictionaryRepresentation;	// IMP=0x00000000000c2337
- (id)description;	// IMP=0x00000000000c2288
@property(readonly, nonatomic) _Bool hasCdmRequestId;
@property(readonly, nonatomic) _Bool hasNluRequestId;
@property(readonly, nonatomic) _Bool hasResultCandidateId;
- (id)originalInteractionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c221b
- (unsigned long long)originalInteractionsCount;	// IMP=0x00000000000c21fe
- (void)addOriginalInteractions:(id)arg1;	// IMP=0x00000000000c2194
- (void)clearOriginalInteractions;	// IMP=0x00000000000c2177
- (id)interactionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c2149
- (unsigned long long)interactionsCount;	// IMP=0x00000000000c212c
- (void)addInteractions:(id)arg1;	// IMP=0x00000000000c20c2
- (void)clearInteractions;	// IMP=0x00000000000c20a5
@property(readonly, nonatomic) _Bool hasRequestId;

@end

