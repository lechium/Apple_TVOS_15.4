//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALResponseStatus;

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>
{
    NSMutableArray *_parses;	// 8 = 0x8
    NSMutableArray *_repetitionResults;	// 16 = 0x10
    SIRINLUEXTERNALRequestID *_requestId;	// 24 = 0x18
    SIRINLUEXTERNALResponseStatus *_responseStatus;	// 32 = 0x20
}

+ (Class)repetitionResultsType;	// IMP=0x00000000000b1901
+ (Class)parsesType;	// IMP=0x00000000000b181a
- (void).cxx_destruct;	// IMP=0x00000000000b2d4d
@property(retain, nonatomic) NSMutableArray *repetitionResults; // @synthesize repetitionResults=_repetitionResults;
@property(retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) NSMutableArray *parses; // @synthesize parses=_parses;
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b2a07
- (unsigned long long)hash;	// IMP=0x00000000000b2983
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2857
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2511
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b236a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b2119
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b210c
- (id)dictionaryRepresentation;	// IMP=0x00000000000b19c1
- (id)description;	// IMP=0x00000000000b1912
- (id)repetitionResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b18e4
- (unsigned long long)repetitionResultsCount;	// IMP=0x00000000000b18c7
- (void)addRepetitionResults:(id)arg1;	// IMP=0x00000000000b185d
- (void)clearRepetitionResults;	// IMP=0x00000000000b1840
@property(readonly, nonatomic) _Bool hasResponseStatus;
- (id)parsesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b17fd
- (unsigned long long)parsesCount;	// IMP=0x00000000000b17e0
- (void)addParses:(id)arg1;	// IMP=0x00000000000b1776
- (void)clearParses;	// IMP=0x00000000000b1759
@property(readonly, nonatomic) _Bool hasRequestId;

@end

