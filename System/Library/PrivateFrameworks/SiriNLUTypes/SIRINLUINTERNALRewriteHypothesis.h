//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALRewriteHypothesis : PBCodable <NSCopying>
{
    double _confidence;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_asrId;	// 16 = 0x10
    int _rewriteType;	// 24 = 0x18
    NSString *_utterance;	// 32 = 0x20
    CDStruct_968924a9 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ce7cc
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // @synthesize asrId=_asrId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ce6b5
- (unsigned long long)hash;	// IMP=0x00000000000ce52e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce40d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ce32e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ce28a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ce1dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ce1d0
- (id)dictionaryRepresentation;	// IMP=0x00000000000cdd33
- (id)description;	// IMP=0x00000000000cdc84
- (int)StringAsRewriteType:(id)arg1;	// IMP=0x00000000000cdc22
- (id)rewriteTypeAsString:(int)arg1;	// IMP=0x00000000000cdbcd
@property(nonatomic) _Bool hasRewriteType;
@property(nonatomic) int rewriteType; // @synthesize rewriteType=_rewriteType;
@property(nonatomic) _Bool hasConfidence;
@property(readonly, nonatomic) _Bool hasUtterance;
@property(readonly, nonatomic) _Bool hasAsrId;

@end

