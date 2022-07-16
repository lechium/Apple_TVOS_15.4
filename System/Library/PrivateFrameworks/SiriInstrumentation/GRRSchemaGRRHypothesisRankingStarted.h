//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface GRRSchemaGRRHypothesisRankingStarted
{
    NSString *_assetVersion;	// 8 = 0x8
    NSArray *_featureFlags;	// 16 = 0x10
    _Bool _hasAssetVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017f130
@property(nonatomic) _Bool hasAssetVersion; // @synthesize hasAssetVersion=_hasAssetVersion;
@property(copy, nonatomic) NSArray *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017eded
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017ed2f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017e9bb
- (unsigned long long)hash;	// IMP=0x000000000017e96e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017e6b1
- (void)writeTo:(id)arg1;	// IMP=0x000000000017e541
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017e534
- (id)featureFlagsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017e517
- (unsigned long long)featureFlagsCount;	// IMP=0x000000000017e4fa
- (void)addFeatureFlags:(id)arg1;	// IMP=0x000000000017e480
- (void)deleteFeatureFlags;	// IMP=0x000000000017e46e
- (void)clearFeatureFlags;	// IMP=0x000000000017e451
- (void)deleteAssetVersion;	// IMP=0x000000000017e43d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000325304
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003252cc

@end

