//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALNLContext, SIRINLUEXTERNALUUID, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALSPANMATCHSpanMatchRequest : PBRequest <NSCopying>
{
    SIRINLUEXTERNALUUID *_asrId;	// 8 = 0x8
    SIRINLUEXTERNALNLContext *_nlContext;	// 16 = 0x10
    SIRINLUINTERNALTokenChain *_tokenChain;	// 24 = 0x18
    NSString *_utterance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001b669
@property(retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // @synthesize asrId=_asrId;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext; // @synthesize nlContext=_nlContext;
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b4ed
- (unsigned long long)hash;	// IMP=0x000000000001b469
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b33d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b253
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b1b0
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b119
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b10c
- (id)dictionaryRepresentation;	// IMP=0x000000000001ad33
- (id)description;	// IMP=0x000000000001ac84
@property(readonly, nonatomic) _Bool hasAsrId;
@property(readonly, nonatomic) _Bool hasUtterance;
@property(readonly, nonatomic) _Bool hasNlContext;
@property(readonly, nonatomic) _Bool hasTokenChain;

@end

