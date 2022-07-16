//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRDecodingMetrics
{
    float _wallRealTimeFactor;	// 8 = 0x8
    NSArray *_languageModelInterpolationWeights;	// 16 = 0x10
    float _averageActiveTokensPerFrame;	// 24 = 0x18
    unsigned long long _jitQueryDurationInMs;	// 32 = 0x20
    unsigned long long _jitLanguageModelEnrollmentDurationInMs;	// 40 = 0x28
    NSArray *_preprocessingEntityCategoryCounts;	// 48 = 0x30
    NSArray *_postprocessingEntityCategoryCounts;	// 56 = 0x38
    struct {
        unsigned int wallRealTimeFactor:1;
        unsigned int averageActiveTokensPerFrame:1;
        unsigned int jitQueryDurationInMs:1;
        unsigned int jitLanguageModelEnrollmentDurationInMs:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000f6810
@property(copy, nonatomic) NSArray *postprocessingEntityCategoryCounts; // @synthesize postprocessingEntityCategoryCounts=_postprocessingEntityCategoryCounts;
@property(copy, nonatomic) NSArray *preprocessingEntityCategoryCounts; // @synthesize preprocessingEntityCategoryCounts=_preprocessingEntityCategoryCounts;
@property(nonatomic) unsigned long long jitLanguageModelEnrollmentDurationInMs; // @synthesize jitLanguageModelEnrollmentDurationInMs=_jitLanguageModelEnrollmentDurationInMs;
@property(nonatomic) unsigned long long jitQueryDurationInMs; // @synthesize jitQueryDurationInMs=_jitQueryDurationInMs;
@property(nonatomic) float averageActiveTokensPerFrame; // @synthesize averageActiveTokensPerFrame=_averageActiveTokensPerFrame;
@property(copy, nonatomic) NSArray *languageModelInterpolationWeights; // @synthesize languageModelInterpolationWeights=_languageModelInterpolationWeights;
@property(nonatomic) float wallRealTimeFactor; // @synthesize wallRealTimeFactor=_wallRealTimeFactor;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f5fc5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000f5f07
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f5670
- (unsigned long long)hash;	// IMP=0x00000000000f53b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f4ebd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f4b46
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f44a4
- (id)postprocessingEntityCategoryCountsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f4487
- (unsigned long long)postprocessingEntityCategoryCountsCount;	// IMP=0x00000000000f446a
- (void)addPostprocessingEntityCategoryCounts:(id)arg1;	// IMP=0x00000000000f43f0
- (void)deletePostprocessingEntityCategoryCounts;	// IMP=0x00000000000f43de
- (void)clearPostprocessingEntityCategoryCounts;	// IMP=0x00000000000f43c1
- (id)preprocessingEntityCategoryCountsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f43a4
- (unsigned long long)preprocessingEntityCategoryCountsCount;	// IMP=0x00000000000f4387
- (void)addPreprocessingEntityCategoryCounts:(id)arg1;	// IMP=0x00000000000f430d
- (void)deletePreprocessingEntityCategoryCounts;	// IMP=0x00000000000f42fb
- (void)clearPreprocessingEntityCategoryCounts;	// IMP=0x00000000000f42de
- (void)deleteJitLanguageModelEnrollmentDurationInMs;	// IMP=0x00000000000f42b4
@property(nonatomic) _Bool hasJitLanguageModelEnrollmentDurationInMs;
- (void)deleteJitQueryDurationInMs;	// IMP=0x00000000000f423e
@property(nonatomic) _Bool hasJitQueryDurationInMs;
- (void)deleteAverageActiveTokensPerFrame;	// IMP=0x00000000000f41c7
@property(nonatomic) _Bool hasAverageActiveTokensPerFrame;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f415f
- (unsigned long long)languageModelInterpolationWeightsCount;	// IMP=0x00000000000f4142
- (void)addLanguageModelInterpolationWeights:(id)arg1;	// IMP=0x00000000000f40c8
- (void)deleteLanguageModelInterpolationWeights;	// IMP=0x00000000000f40b6
- (void)clearLanguageModelInterpolationWeights;	// IMP=0x00000000000f4099
- (void)deleteWallRealTimeFactor;	// IMP=0x00000000000f406e
@property(nonatomic) _Bool hasWallRealTimeFactor;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031d1b5
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031d17d

@end

