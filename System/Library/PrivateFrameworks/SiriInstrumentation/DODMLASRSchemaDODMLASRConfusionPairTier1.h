//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRConfusionPairTier1
{
    NSArray *_recognizedTokens;	// 8 = 0x8
    NSArray *_correctedTokens;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f3ff6
@property(copy, nonatomic) NSArray *correctedTokens; // @synthesize correctedTokens=_correctedTokens;
@property(copy, nonatomic) NSArray *recognizedTokens; // @synthesize recognizedTokens=_recognizedTokens;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f3bac
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000f3aee
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f394b
- (unsigned long long)hash;	// IMP=0x00000000000f38fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f3641
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f3430
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f325c
- (id)correctedTokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f323f
- (unsigned long long)correctedTokensCount;	// IMP=0x00000000000f3222
- (void)addCorrectedTokens:(id)arg1;	// IMP=0x00000000000f31a8
- (void)deleteCorrectedTokens;	// IMP=0x00000000000f3196
- (void)clearCorrectedTokens;	// IMP=0x00000000000f3179
- (id)recognizedTokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f315c
- (unsigned long long)recognizedTokensCount;	// IMP=0x00000000000f313f
- (void)addRecognizedTokens:(id)arg1;	// IMP=0x00000000000f30c5
- (void)deleteRecognizedTokens;	// IMP=0x00000000000f30b3
- (void)clearRecognizedTokens;	// IMP=0x00000000000f3096
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031d0d2
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031d09a

@end
