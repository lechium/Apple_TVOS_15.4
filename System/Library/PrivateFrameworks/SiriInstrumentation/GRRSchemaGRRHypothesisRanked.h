//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface GRRSchemaGRRHypothesisRanked
{
    NSArray *_rankings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017d448
@property(copy, nonatomic) NSArray *rankings; // @synthesize rankings=_rankings;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017d1ba
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017d0fc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017cde5
- (unsigned long long)hash;	// IMP=0x000000000017cdc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017cc46
- (void)writeTo:(id)arg1;	// IMP=0x000000000017cb16
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017c687
- (id)rankingsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017c66a
- (unsigned long long)rankingsCount;	// IMP=0x000000000017c64d
- (void)addRankings:(id)arg1;	// IMP=0x000000000017c5d3
- (void)deleteRankings;	// IMP=0x000000000017c5c1
- (void)clearRankings;	// IMP=0x000000000017c5a4
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000324ff4
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324fbc

@end
