//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CLCKVO2MaxEstimate, CLCKVO2MaxSessionAttributes, NSMutableArray, NSString;

@interface CLCKVO2MaxSessionOutput : PBCodable
{
    CLCKVO2MaxEstimate *_estimate;	// 8 = 0x8
    CLCKVO2MaxSessionAttributes *_sessionAttributes;	// 16 = 0x10
    NSString *_sessionId;	// 24 = 0x18
    NSMutableArray *_summaries;	// 32 = 0x20
}

+ (Class)summariesType;	// IMP=0x00200000005e2ad0
@property(retain, nonatomic) NSMutableArray *summaries; // @synthesize summaries=_summaries;
@property(retain, nonatomic) CLCKVO2MaxEstimate *estimate; // @synthesize estimate=_estimate;
@property(retain, nonatomic) CLCKVO2MaxSessionAttributes *sessionAttributes; // @synthesize sessionAttributes=_sessionAttributes;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000005e3695
- (unsigned long long)hash;	// IMP=0x00100000005e3611
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005e3519
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005e3309
- (void)copyTo:(id)arg1;	// IMP=0x00100000005e3209
- (void)writeTo:(id)arg1;	// IMP=0x00100000005e30a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005e309c
- (id)dictionaryRepresentation;	// IMP=0x00100000005e2b58
- (id)description;	// IMP=0x00100000005e2ae1
- (id)summariesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000005e2ab3
- (unsigned long long)summariesCount;	// IMP=0x00100000005e2a96
- (void)addSummaries:(id)arg1;	// IMP=0x00100000005e2a49
- (void)clearSummaries;	// IMP=0x00100000005e2a2c
@property(readonly, nonatomic) _Bool hasEstimate;
@property(readonly, nonatomic) _Bool hasSessionAttributes;
@property(readonly, nonatomic) _Bool hasSessionId;
- (void)dealloc;	// IMP=0x00100000005e2978

@end

