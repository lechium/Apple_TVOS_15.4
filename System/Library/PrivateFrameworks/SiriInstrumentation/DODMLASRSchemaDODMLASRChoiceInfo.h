//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRChoiceInfo
{
    NSArray *_tokens;	// 8 = 0x8
    float _graphCost;	// 16 = 0x10
    float _acousticCost;	// 20 = 0x14
    struct {
        unsigned int graphCost:1;
        unsigned int acousticCost:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f2642
@property(nonatomic) float acousticCost; // @synthesize acousticCost=_acousticCost;
@property(nonatomic) float graphCost; // @synthesize graphCost=_graphCost;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f22c2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000f2204
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f1e3a
- (unsigned long long)hash;	// IMP=0x00000000000f1bfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f19c2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f1834
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f1246
- (void)deleteAcousticCost;	// IMP=0x00000000000f121b
@property(nonatomic) _Bool hasAcousticCost;
- (void)deleteGraphCost;	// IMP=0x00000000000f11a5
@property(nonatomic) _Bool hasGraphCost;
- (id)tokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f1141
- (unsigned long long)tokensCount;	// IMP=0x00000000000f1124
- (void)addTokens:(id)arg1;	// IMP=0x00000000000f10aa
- (void)deleteTokens;	// IMP=0x00000000000f1098
- (void)clearTokens;	// IMP=0x00000000000f107b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031ceac
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031ce74

@end

