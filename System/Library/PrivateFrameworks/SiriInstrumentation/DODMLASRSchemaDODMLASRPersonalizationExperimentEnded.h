//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics, NSArray, NSData, NSString;

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentEnded
{
    NSString *_datapackVersion;	// 8 = 0x8
    unsigned int _numAudioFilesAvailable;	// 16 = 0x10
    unsigned int _numAudioFilesSelected;	// 20 = 0x14
    int _experimentStatusCode;	// 24 = 0x18
    NSArray *_audioFileResults;	// 32 = 0x20
    DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *_personalizedLanguageModelMetrics;	// 40 = 0x28
    unsigned long long _textFetchDurationInNs;	// 48 = 0x30
    unsigned long long _textProcessingDurationInNs;	// 56 = 0x38
    int _deviceThermalState;	// 64 = 0x40
    struct {
        unsigned int numAudioFilesAvailable:1;
        unsigned int numAudioFilesSelected:1;
        unsigned int experimentStatusCode:1;
        unsigned int textFetchDurationInNs:1;
        unsigned int textProcessingDurationInNs:1;
        unsigned int deviceThermalState:1;
    } _has;	// 68 = 0x44
    _Bool _hasDatapackVersion;	// 72 = 0x48
    _Bool _hasPersonalizedLanguageModelMetrics;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x00000000001033bf
@property(nonatomic) _Bool hasPersonalizedLanguageModelMetrics; // @synthesize hasPersonalizedLanguageModelMetrics=_hasPersonalizedLanguageModelMetrics;
@property(nonatomic) _Bool hasDatapackVersion; // @synthesize hasDatapackVersion=_hasDatapackVersion;
@property(nonatomic) int deviceThermalState; // @synthesize deviceThermalState=_deviceThermalState;
@property(nonatomic) unsigned long long textProcessingDurationInNs; // @synthesize textProcessingDurationInNs=_textProcessingDurationInNs;
@property(nonatomic) unsigned long long textFetchDurationInNs; // @synthesize textFetchDurationInNs=_textFetchDurationInNs;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *personalizedLanguageModelMetrics; // @synthesize personalizedLanguageModelMetrics=_personalizedLanguageModelMetrics;
@property(copy, nonatomic) NSArray *audioFileResults; // @synthesize audioFileResults=_audioFileResults;
@property(nonatomic) int experimentStatusCode; // @synthesize experimentStatusCode=_experimentStatusCode;
@property(nonatomic) unsigned int numAudioFilesSelected; // @synthesize numAudioFilesSelected=_numAudioFilesSelected;
@property(nonatomic) unsigned int numAudioFilesAvailable; // @synthesize numAudioFilesAvailable=_numAudioFilesAvailable;
@property(copy, nonatomic) NSString *datapackVersion; // @synthesize datapackVersion=_datapackVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000102cce
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000102c10
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000102594
- (unsigned long long)hash;	// IMP=0x000000000010244f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000101ed0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000101c1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001018de
- (void)deleteDeviceThermalState;	// IMP=0x00000000001018b4
@property(nonatomic) _Bool hasDeviceThermalState;
- (void)deleteTextProcessingDurationInNs;	// IMP=0x000000000010183f
@property(nonatomic) _Bool hasTextProcessingDurationInNs;
- (void)deleteTextFetchDurationInNs;	// IMP=0x00000000001017c9
@property(nonatomic) _Bool hasTextFetchDurationInNs;
- (void)deletePersonalizedLanguageModelMetrics;	// IMP=0x0000000000101769
- (id)audioFileResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000101737
- (unsigned long long)audioFileResultsCount;	// IMP=0x000000000010171a
- (void)addAudioFileResults:(id)arg1;	// IMP=0x00000000001016a0
- (void)deleteAudioFileResults;	// IMP=0x000000000010168e
- (void)clearAudioFileResults;	// IMP=0x0000000000101671
- (void)deleteExperimentStatusCode;	// IMP=0x0000000000101647
@property(nonatomic) _Bool hasExperimentStatusCode;
- (void)deleteNumAudioFilesSelected;	// IMP=0x00000000001015d2
@property(nonatomic) _Bool hasNumAudioFilesSelected;
- (void)deleteNumAudioFilesAvailable;	// IMP=0x000000000010155f
@property(nonatomic) _Bool hasNumAudioFilesAvailable;
- (void)deleteDatapackVersion;	// IMP=0x0000000000101506
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031daa6
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031da6e

@end

