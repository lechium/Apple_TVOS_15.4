//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GRRSchemaGRRSource, NSArray, NSData;

@interface GRRSchemaGRRFeatureExtracted
{
    GRRSchemaGRRSource *_source;	// 8 = 0x8
    NSArray *_featureNames;	// 16 = 0x10
    NSArray *_features;	// 24 = 0x18
    _Bool _hasSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017a660
@property(nonatomic) _Bool hasSource; // @synthesize hasSource=_hasSource;
@property(copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(copy, nonatomic) NSArray *featureNames; // @synthesize featureNames=_featureNames;
@property(retain, nonatomic) GRRSchemaGRRSource *source; // @synthesize source=_source;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017a134
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017a076
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000179c4e
- (unsigned long long)hash;	// IMP=0x0000000000179be1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001797f2
- (void)writeTo:(id)arg1;	// IMP=0x000000000017958b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001790be
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001790a1
- (unsigned long long)featuresCount;	// IMP=0x0000000000179084
- (void)addFeatures:(id)arg1;	// IMP=0x000000000017900a
- (void)deleteFeatures;	// IMP=0x0000000000178ff8
- (void)clearFeatures;	// IMP=0x0000000000178fdb
- (id)featureNamesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000178fbe
- (unsigned long long)featureNamesCount;	// IMP=0x0000000000178fa1
- (void)addFeatureNames:(id)arg1;	// IMP=0x0000000000178f27
- (void)deleteFeatureNames;	// IMP=0x0000000000178f15
- (void)clearFeatureNames;	// IMP=0x0000000000178ef8
- (void)deleteSource;	// IMP=0x0000000000178ee4
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000324b24
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324aec

@end

