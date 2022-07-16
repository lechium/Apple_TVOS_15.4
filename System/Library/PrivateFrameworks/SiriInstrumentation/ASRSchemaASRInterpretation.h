//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface ASRSchemaASRInterpretation
{
    NSArray *_tokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000028526
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000028298
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000281da
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000027ec3
- (unsigned long long)hash;	// IMP=0x0000000000027ea6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027d24
- (void)writeTo:(id)arg1;	// IMP=0x0000000000027bf4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002753e
- (id)tokensAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000027521
- (unsigned long long)tokensCount;	// IMP=0x0000000000027504
- (void)addTokens:(id)arg1;	// IMP=0x000000000002748a
- (void)deleteTokens;	// IMP=0x0000000000027478
- (void)clearTokens;	// IMP=0x000000000002745b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030ed91
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030ed59

@end

