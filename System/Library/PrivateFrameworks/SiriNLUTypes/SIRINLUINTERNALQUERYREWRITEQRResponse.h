//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALUUID;

@interface SIRINLUINTERNALQUERYREWRITEQRResponse : PBCodable <NSCopying>
{
    NSMutableArray *_qrHypotheses;	// 8 = 0x8
    int _repetitionType;	// 16 = 0x10
    SIRINLUEXTERNALUUID *_requestId;	// 24 = 0x18
    NSMutableArray *_rewriteHypotheses;	// 32 = 0x20
    struct {
        unsigned int repetitionType:1;
    } _has;	// 40 = 0x28
}

+ (Class)rewriteHypothesesType;	// IMP=0x0000000000045a04
+ (Class)qrHypothesesType;	// IMP=0x00000000000457a2
- (void).cxx_destruct;	// IMP=0x0000000000046ed1
@property(retain, nonatomic) NSMutableArray *rewriteHypotheses; // @synthesize rewriteHypotheses=_rewriteHypotheses;
@property(retain, nonatomic) NSMutableArray *qrHypotheses; // @synthesize qrHypotheses=_qrHypotheses;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000046bc7
- (unsigned long long)hash;	// IMP=0x0000000000046b39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046a10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000466df
- (void)copyTo:(id)arg1;	// IMP=0x0000000000046535
- (void)writeTo:(id)arg1;	// IMP=0x00000000000462dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000462d0
- (id)dictionaryRepresentation;	// IMP=0x0000000000045ac4
- (id)description;	// IMP=0x0000000000045a15
- (id)rewriteHypothesesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000459e7
- (unsigned long long)rewriteHypothesesCount;	// IMP=0x00000000000459ca
- (void)addRewriteHypotheses:(id)arg1;	// IMP=0x0000000000045960
- (void)clearRewriteHypotheses;	// IMP=0x0000000000045943
- (int)StringAsRepetitionType:(id)arg1;	// IMP=0x0000000000045894
- (id)repetitionTypeAsString:(int)arg1;	// IMP=0x0000000000045817
@property(nonatomic) _Bool hasRepetitionType;
@property(nonatomic) int repetitionType; // @synthesize repetitionType=_repetitionType;
- (id)qrHypothesesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000045785
- (unsigned long long)qrHypothesesCount;	// IMP=0x0000000000045768
- (void)addQrHypotheses:(id)arg1;	// IMP=0x00000000000456fe
- (void)clearQrHypotheses;	// IMP=0x00000000000456e1
@property(readonly, nonatomic) _Bool hasRequestId;

@end

