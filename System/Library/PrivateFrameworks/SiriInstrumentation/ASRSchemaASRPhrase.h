//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface ASRSchemaASRPhrase
{
    NSArray *_interpretations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002cfcc
@property(copy, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002cd3e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002cc80
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002c969
- (unsigned long long)hash;	// IMP=0x000000000002c94c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c7ca
- (void)writeTo:(id)arg1;	// IMP=0x000000000002c69a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002c4c4
- (id)interpretationsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c4a7
- (unsigned long long)interpretationsCount;	// IMP=0x000000000002c48a
- (void)addInterpretations:(id)arg1;	// IMP=0x000000000002c410
- (void)deleteInterpretations;	// IMP=0x000000000002c3fe
- (void)clearInterpretations;	// IMP=0x000000000002c3e1
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030f5a8
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030f570

@end

