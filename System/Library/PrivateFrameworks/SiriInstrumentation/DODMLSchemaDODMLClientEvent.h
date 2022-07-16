//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRAudioFileResultTier1, DODMLASRSchemaDODMLASRPersonalizationExperimentContext, DODMLASRSchemaDODMLASRUserEditExperimentContext, DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1, DODMLSchemaDODMLClientEventMetadata, NSData;

@interface DODMLSchemaDODMLClientEvent
{
    DODMLSchemaDODMLClientEventMetadata *_eventMetadata;	// 8 = 0x8
    DODMLASRSchemaDODMLASRPersonalizationExperimentContext *_personalizationExperimentContext;	// 16 = 0x10
    DODMLASRSchemaDODMLASRUserEditExperimentContext *_userEditExperimentContext;	// 24 = 0x18
    DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *_userEditExperimentEndedTier1;	// 32 = 0x20
    DODMLASRSchemaDODMLASRAudioFileResultTier1 *_audioFileResultTier1;	// 40 = 0x28
    _Bool _hasEventMetadata;	// 48 = 0x30
    _Bool _hasPersonalizationExperimentContext;	// 49 = 0x31
    _Bool _hasUserEditExperimentContext;	// 50 = 0x32
    _Bool _hasUserEditExperimentEndedTier1;	// 51 = 0x33
    _Bool _hasAudioFileResultTier1;	// 52 = 0x34
    unsigned long long _whichEvent_Type;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000111942
@property(nonatomic) _Bool hasAudioFileResultTier1; // @synthesize hasAudioFileResultTier1=_hasAudioFileResultTier1;
@property(nonatomic) _Bool hasUserEditExperimentEndedTier1; // @synthesize hasUserEditExperimentEndedTier1=_hasUserEditExperimentEndedTier1;
@property(nonatomic) _Bool hasUserEditExperimentContext; // @synthesize hasUserEditExperimentContext=_hasUserEditExperimentContext;
@property(nonatomic) _Bool hasPersonalizationExperimentContext; // @synthesize hasPersonalizationExperimentContext=_hasPersonalizationExperimentContext;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000011155a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000011149c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000111057
- (unsigned long long)hash;	// IMP=0x0000000000110fb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001109ab
- (void)writeTo:(id)arg1;	// IMP=0x00000000001107b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000110252
- (void)deleteAudioFileResultTier1;	// IMP=0x000000000011021f
@property(retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1; // @synthesize audioFileResultTier1=_audioFileResultTier1;
- (void)deleteUserEditExperimentEndedTier1;	// IMP=0x000000000011012f
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1; // @synthesize userEditExperimentEndedTier1=_userEditExperimentEndedTier1;
- (void)deleteUserEditExperimentContext;	// IMP=0x0000000000110034
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext; // @synthesize userEditExperimentContext=_userEditExperimentContext;
- (void)deletePersonalizationExperimentContext;	// IMP=0x000000000010ff44
@property(retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext; // @synthesize personalizationExperimentContext=_personalizationExperimentContext;
- (void)deleteEventMetadata;	// IMP=0x000000000010fe69
- (id)qualifiedMessageName;	// IMP=0x000000000010fdea
- (int)getAnyEventType;	// IMP=0x000000000010fddf
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031e9f7
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031e9bf

@end
