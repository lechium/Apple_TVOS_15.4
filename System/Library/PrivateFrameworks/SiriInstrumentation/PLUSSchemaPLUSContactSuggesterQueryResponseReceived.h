//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface PLUSSchemaPLUSContactSuggesterQueryResponseReceived
{
    NSArray *_results;	// 8 = 0x8
    _Bool _hasMatchingResults;	// 16 = 0x10
    struct {
        unsigned int hasMatchingResults:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000297c67
@property(nonatomic) _Bool hasMatchingResults; // @synthesize hasMatchingResults=_hasMatchingResults;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000029795a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000029789c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000029752c
- (unsigned long long)hash;	// IMP=0x00000000002974d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000297308
- (void)writeTo:(id)arg1;	// IMP=0x00000000002971a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000296e5e
- (void)deleteHasMatchingResults;	// IMP=0x0000000000296e34
@property(nonatomic) _Bool hasHasMatchingResults;
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000296dd2
- (unsigned long long)resultsCount;	// IMP=0x0000000000296db5
- (void)addResults:(id)arg1;	// IMP=0x0000000000296d3b
- (void)deleteResults;	// IMP=0x0000000000296d29
- (void)clearResults;	// IMP=0x0000000000296d0c
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003361cf
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000336197

@end

