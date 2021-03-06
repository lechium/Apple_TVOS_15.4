//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    NSArray *_confusionPairs;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010de0e
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(copy, nonatomic) NSArray *confusionPairs; // @synthesize confusionPairs=_confusionPairs;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000010dab9
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000010d9fb
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000010d64b
- (unsigned long long)hash;	// IMP=0x000000000010d5fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010d341
- (void)writeTo:(id)arg1;	// IMP=0x000000000010d1b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010cf7d
- (id)confusionPairsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010cf60
- (unsigned long long)confusionPairsCount;	// IMP=0x000000000010cf43
- (void)addConfusionPairs:(id)arg1;	// IMP=0x000000000010cec9
- (void)deleteConfusionPairs;	// IMP=0x000000000010ceb7
- (void)clearConfusionPairs;	// IMP=0x000000000010ce9a
- (void)deleteLinkId;	// IMP=0x000000000010ce86
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031e631
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031e5f9

@end

